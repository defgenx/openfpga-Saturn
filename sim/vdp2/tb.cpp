// Differential testbench: REF_VDP2 (golden) vs VDP2 (rewritten), identical stimulus,
// every output compared on every clock.
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include <deque>
#include <string>
#include <vector>
#include "Vtb_top.h"
#include "verilated.h"

struct Rng {
	uint64_t s;
	explicit Rng(uint64_t seed) : s(seed * 0x9E3779B97F4A7C15ull + 0x1234567ull) { for (int i = 0; i < 8; i++) next(); }
	uint32_t next() { s ^= s << 13; s ^= s >> 7; s ^= s << 17; return (uint32_t)(s >> 16); }
	uint32_t below(uint32_t n) { return next() % n; }
	bool chance(int pct) { return (int)below(100) < pct; }
};

static uint64_t bits(const VlWide<3>& w, int lo, int n) {
	uint64_t v = 0;
	for (int i = 0; i < n; i++) { int b = lo + i; v |= (uint64_t)((w[b >> 5] >> (b & 31)) & 1) << i; }
	return v;
}

// ---------------- memory model (halfword array per bank, 1-clock read latency) ----------------
struct Bank {
	std::vector<uint16_t> h;
	uint32_t q = 0;
	explicit Bank(size_t n) : h(n, 0) {}
	uint16_t at(uint32_t a) const { return h[a & (h.size() - 1)]; }
	void latch(uint32_t a) { q = ((uint32_t)at(a) << 16) | at(a + 1); }
};
struct Mem {
	Bank a0{1 << 17}, a1{1 << 16}, b0{1 << 17}, b1{1 << 16};
	void tick(uint32_t ra0, uint32_t ra1, uint64_t rad, uint32_t rawe, uint32_t rb0, uint32_t rb1, uint64_t rbd, uint32_t rbwe) {
		// writes: 64-bit word = 4 halfwords at the (even) address on bank 0; same on bank 1
		wr(a0, ra0, rad, rawe); wr(a1, ra1, rad, rawe);
		wr(b0, rb0, rbd, rbwe); wr(b1, rb1, rbd, rbwe);
		a0.latch(ra0); a1.latch(ra1); b0.latch(rb0); b1.latch(rb1);
	}
	static void wr(Bank& b, uint32_t a, uint64_t d, uint32_t we) {
		if (!we) return;
		for (int i = 0; i < 4; i++) {
			uint16_t& w = b.h[(a + i) & (b.h.size() - 1)];
			uint16_t v = (d >> (48 - 16 * i)) & 0xFFFF;
			if (we & (0x80 >> (2 * i))) w = (w & 0x00FF) | (v & 0xFF00);
			if (we & (0x40 >> (2 * i))) w = (w & 0xFF00) | (v & 0x00FF);
		}
	}
	void fill(Rng& r, int style) {
		for (Bank* b : {&a0, &a1, &b0, &b1})
			for (size_t i = 0; i < b->h.size(); i++) {
				uint32_t v = r.next();
				switch (style) {
				case 0: break;                                          // noise
				case 1: v = r.chance(50) ? 0 : (v & 0x0FFF); break;     // small values, many zeros
				default: v = (r.chance(30) ? 0 : v) & (r.chance(50) ? 0xFFFF : 0x07FF); break;
				}
				b->h[i] = (uint16_t)v;
			}
	}
};

// ---------------- CPU bus driver ----------------
struct Op { int kind; uint32_t addr; std::vector<uint16_t> data; int dqm; int gap; };
struct BusIn { bool cs_n = 1, ad_n = 1, dten_n = 1, req_n = 1; uint16_t di = 0; };

struct BusDrv {
	std::deque<Op> q;
	int st = 0, hold = 0, gap = 0;
	size_t beat = 0;
	int wait = 0;
	Op cur;
	BusIn out;
	Rng* rng;
	int timeouts = 0, done = 0;

	// called once per clock; `odd` = CE_F clock, the clock after a CE_R edge. Outputs change only there.
	void step(bool odd, bool rdy_n) {
		if (!odd) { out.req_n = 1; if (out.cs_n) out.di = rng->next(); return; }
		out.req_n = 1;
		switch (st) {
		case 0:
			out.cs_n = 1; out.ad_n = 1; out.dten_n = 1; out.di = rng->next();
			if (gap > 0) { gap--; break; }
			if (q.empty()) break;
			cur = q.front(); q.pop_front(); beat = 0;
			out.cs_n = 0; out.ad_n = 1; out.dten_n = 1;
			out.di = (0 << 15) | ((cur.kind == 1 ? 1 : 0) << 14) | ((cur.kind == 2 ? 1 : 0) << 13) | ((cur.addr >> 9) & 0xFFF);
			st = 1; break;
		case 1:
			out.di = (1 << 15) | ((cur.dqm & 3) << 12) | ((cur.addr >> 1) & 0xFF);
			st = 2; wait = 0; break;
		case 2:   // wait ready, then data slot
			if (rdy_n && wait++ < 4000) break;
			if (rdy_n) timeouts++;
			out.ad_n = 0; out.req_n = 0;
			out.dten_n = cur.kind == 1 ? 1 : 0;
			if (cur.kind != 1) out.di = cur.data[beat];
			st = 3; wait = 0; break;
		case 3:   // after the request: reads wait for ready, bursts continue, else release
			if (cur.kind == 1) { if (rdy_n && wait++ < 4000) break; st = 4; break; }
			if (cur.kind == 2 && ++beat < cur.data.size()) { st = 2; wait = 0; break; }
			st = 4; break;
		case 4:
			out.cs_n = 1; out.ad_n = 1; out.dten_n = 1;
			gap = cur.gap; st = 0; done++; break;
		}
	}
	bool idle() const { return st == 0 && q.empty(); }
};

// ---------------- configuration generation ----------------
struct Cfg { uint16_t r[0x90]; };   // register halfwords, index = byte address / 2

static void setbank(uint16_t* r, int idx, const int p[8]) {
	r[idx]     = (p[0] << 12) | (p[1] << 8) | (p[2] << 4) | p[3];
	r[idx + 1] = (p[4] << 12) | (p[5] << 8) | (p[6] << 4) | p[7];
}

static void gen_cycles(Rng& rng, Cfg& c, int mode) {
	int bank[4][8];
	for (auto& b : bank) for (int& t : b) t = 0xF;
	if (mode == 0) {   // pure random, biased to access codes
		for (auto& b : bank) for (int& t : b) {
			uint32_t v = rng.below(16);
			t = v < 8 ? v : (v < 10 ? 0xC + (v & 1) : (v < 12 ? 0xE : 0xF));
		}
	} else {           // layered: PN then CH slots for each layer
		for (int n = 0; n < 4; n++) {
			int pn = rng.below(4), t0 = rng.below(4);
			bank[pn][t0] = n;
			int nch = 1 << rng.below(4);
			for (int k = 0; k < nch; k++) {
				int b = rng.below(4), t = (t0 + 1 + k) & 7;
				bank[b][t] = 4 + n;
			}
			if (n < 2 && rng.chance(50)) bank[rng.below(4)][rng.below(8)] = 0xC + n;
		}
		for (auto& b : bank) for (int& t : b) if (rng.chance(10)) t = 0xE;
	}
	setbank(c.r, 0x10 / 2, bank[0]);   // A0
	setbank(c.r, 0x14 / 2, bank[1]);   // A1
	setbank(c.r, 0x18 / 2, bank[2]);   // B0
	setbank(c.r, 0x1C / 2, bank[3]);   // B1
}

#define R_(a) c.r[(a) / 2]
static const int N_SCENES = 14;

static void gen_config(Rng& rng, Cfg& c, int scene, int dens) {
	for (int i = 0; i < 0x90; i++) {
		uint32_t v = rng.next() & 0xFFFF;
		uint32_t m = 0;
		for (int b = 0; b < 16; b++) if ((int)rng.below(100) < dens) m |= 1u << b;
		c.r[i] = (uint16_t)(v & m);
	}
	gen_cycles(rng, c, rng.below(2));
	// sane control registers
	uint16_t hres = rng.chance(60) ? rng.below(2) : (rng.chance(50) ? 2 + rng.below(2) : rng.below(2));
	R_(0x00) = (rng.chance(92) ? 0x8000 : 0) | ((rng.chance(25) ? 1 + rng.below(3) : 0) << 6) | ((rng.below(3)) << 4) | hres | (rng.chance(20) ? 0x100 : 0);
	R_(0x0E) = (R_(0x0E) & 0x30FF) | ((rng.below(4) == 0 ? 0x300 : (rng.below(2) ? 0x100 : 0)));
	R_(0x02) = rng.chance(20) ? 0x0100 : 0;
	uint16_t bg = 0x3F & ~0;
	switch (scene) {
	case 0: R_(0x20) = 0x0001; R_(0x28) = (R_(0x28) & 0xFF8F) | (0 << 4) | (R_(0x28) & ~0x2); break;   // NBG0 4bpp
	case 1: R_(0x20) = 0x0001; R_(0x28) = (R_(0x28) & 0xFF8D) | (1 << 4); break;                        // 8bpp
	case 2: R_(0x20) = 0x0001; R_(0x28) = (R_(0x28) & 0xFF8D) | (2 << 4); break;                        // 16bpp
	case 3: R_(0x20) = 0x0003; R_(0x28) = (R_(0x28) & 0x8D8D) | (3 << 4) | (3 << 12); break;            // 15bpp
	case 4: R_(0x20) = 0x0001; R_(0x28) = (R_(0x28) & 0xFF8D) | (4 << 4); break;                        // 32bpp
	case 5: R_(0x20) = 0x0003; R_(0x28) = R_(0x28) | 0x0202; break;                                      // bitmaps
	case 6: R_(0x20) = 0x000F | (rng.chance(50) ? 0x0F00 : 0); break;                                    // four NBG
	case 7: R_(0x20) = 0x0010 | (rng.chance(50) ? 0x1000 : 0); R_(0xB0) = rng.below(4); break;           // RBG0
	case 8: R_(0x20) = 0x0030 | (rng.chance(50) ? 1 : 0); R_(0xB0) = rng.below(4); break;                // RBG0+RBG1
	case 9: R_(0x20) = 0x000F; for (int a = 0xC0; a <= 0xDE; a += 2) R_(a) = rng.next() & 0xFFFF;
	        R_(0x9A) = 0x3F3F & rng.next(); break;                                                       // windows, line scroll
	case 10: R_(0x20) = 0x003F; R_(0xE0) = rng.next() & 0x373F; R_(0xEC) = rng.next() & 0xF77F; break;  // sprite, color calc
	case 11: R_(0x20) = 0x000F; R_(0x22) = rng.next() & 0xFF1F; R_(0x98) = rng.next() & 0x0303; break;  // mosaic, zoom
	case 12: R_(0x00) |= 0x00C0; R_(0x00) = (R_(0x00) & ~3) | rng.below(4); R_(0x20) = 0x000F; break;   // interlace/hires
	default: R_(0x20) = (R_(0x20) | rng.next()) & 0x1F3F; break;                                         // random
	}
	if (rng.chance(30)) R_(0xE4) |= 0x7777 & rng.next();
	(void)bg;
}

// ---------------- main ----------------
int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	uint64_t seed = 1; long nclk = 1500000; int ppm_frames = 0; std::string ppm_prefix;
	int scene_arg = -1;
	for (int i = 1; i < argc; i++) {
		if (!strncmp(argv[i], "+seed=", 6)) seed = strtoull(argv[i] + 6, 0, 0);
		else if (!strncmp(argv[i], "+clks=", 6)) nclk = atol(argv[i] + 6);
		else if (!strncmp(argv[i], "+ppm=", 5)) ppm_prefix = argv[i] + 5;
		else if (!strncmp(argv[i], "+frames=", 8)) ppm_frames = atoi(argv[i] + 8);
		else if (!strncmp(argv[i], "+scene=", 7)) scene_arg = atoi(argv[i] + 7);
	}
	Rng rng(seed);
	int scene = scene_arg >= 0 ? scene_arg : (int)(seed % N_SCENES);
	int dens = 10 + rng.below(35);
	int pal = rng.chance(30);
	Cfg cfg; gen_config(rng, cfg, scene, dens);

	Mem mr, md;
	Rng mrng(seed ^ 0xABCDEF);
	mr.fill(mrng, (int)(seed % 3));
	md = mr;

	auto* top = new Vtb_top;
	BusDrv bus; bus.rng = &rng;

	// initial programming: all registers, color RAM, a few VRAM words
	auto W = [&](uint32_t a, uint16_t d, int gap = 0, int dqm = 0) { bus.q.push_back({0, a, {d}, dqm, gap}); };
	for (int a = 0; a < 0x120; a += 2) if (a != 0x04 && a != 0x08 && a != 0x0A && a != 0x0C) W(0x180000 + a, cfg.r[a / 2], rng.below(3));
	for (int i = 0; i < 2048; i += (rng.chance(10) ? 1 : 1)) W(0x100000 + 2 * i, (rng.chance(30) ? 0 : rng.next()), 0);
	W(0x180000, cfg.r[0]);   // TVMD last

	long t = 0;
	bool failed = false;
	int frame = 0, lastvbl = 1, lasthbl = 1;
	std::vector<uint8_t> img[2]; int wline[2] = {0, 0}, wmax[2] = {0, 0};
	std::vector<std::vector<uint8_t>> line[2];
	std::vector<uint8_t> curline[2];
	int saved = 0;
	bool rdy_n_prev = true;
	uint16_t fbdi = 0;
	int exlat = 1;

	auto save_ppm = [&](int which, const char* tag, int idx) {
		if (line[which].empty()) return;
		size_t w = 0; for (auto& l : line[which]) w = std::max(w, l.size() / 3);
		std::string fn = ppm_prefix + "_" + tag + "_" + std::to_string(idx) + ".ppm";
		FILE* f = fopen(fn.c_str(), "wb");
		if (!f) return;
		fprintf(f, "P6\n%zu %zu\n255\n", w, line[which].size());
		for (auto& l : line[which]) { l.resize(w * 3, 0); fwrite(l.data(), 1, l.size(), f); }
		fclose(f);
	};

	for (t = 0; t < nclk && !failed; t++) {
		bool ce_r = !(t & 1), odd = t & 1;
		top->CLK = 0;
		top->RST_N = t > 6;
		top->RES_N = !(t < 40 || (t > 700000 && t < 700030 && (seed & 7) == 5));
		top->CE_R = ce_r; top->CE_F = odd;
		top->PAL = pal;
		top->SCRN_EN = 0xFF; top->DBG_EXT = 0;
		// sprite data: changes every few clocks, half transparent
		if ((t & 3) == 0) fbdi = rng.chance(50) ? 0 : (uint16_t)rng.next();
		top->FBDI = fbdi;
		if ((t & 0x3FFF) == 0x1000 && rng.chance(25)) exlat = 0; else if ((t & 0x3FFF) == 0x1010) exlat = 1;
		top->EXLAT_N = exlat;

		// CPU traffic once the initial programming is done
		if (bus.idle() && t > 100000 && rng.chance(8)) {
			int k = rng.below(100);
			if (k < 35) {            // read
				int sp = rng.below(3);
				uint32_t a = sp == 0 ? 0x180000 + 2 * rng.below(8) : sp == 1 ? 0x100000 + 2 * rng.below(2048) : 2 * rng.below(0x40000);
				bus.q.push_back({1, a, {}, 0, (int)rng.below(4)});
			} else if (k < 55) {     // register write
				int ra = 2 * rng.below(0x90);
				if (ra != 4 && ra != 8 && ra != 0xA && ra != 0xC && !(ra == 0 && rng.chance(80)) && ra != 0x0E)
					W(0x180000 + ra, (uint16_t)rng.next() & (rng.next() | rng.next()), rng.below(4), rng.chance(10) ? rng.below(3) : 0);
			} else if (k < 75) {     // VRAM write
				W(2 * rng.below(0x40000), rng.next(), rng.below(4), rng.chance(20) ? rng.below(4) : 0);
			} else if (k < 85) {     // VRAM burst
				std::vector<uint16_t> d; int n = 2 + rng.below(8);
				for (int i = 0; i < n; i++) d.push_back(rng.next());
				bus.q.push_back({2, (uint32_t)2 * rng.below(0x3F000), d, 0, (int)rng.below(4)});
			} else {                 // CRAM write
				W(0x100000 + 2 * rng.below(2048), rng.next(), rng.below(4), rng.chance(20) ? rng.below(4) : 0);
			}
		}
		bus.step(odd, rdy_n_prev);

		// memory read data from the previous clock's addresses
		top->r_RA0_Q = mr.a0.q; top->r_RA1_Q = mr.a1.q; top->r_RB0_Q = mr.b0.q; top->r_RB1_Q = mr.b1.q;
		top->d_RA0_Q = md.a0.q; top->d_RA1_Q = md.a1.q; top->d_RB0_Q = md.b0.q; top->d_RB1_Q = md.b1.q;
		top->CS_N = bus.out.cs_n; top->AD_N = bus.out.ad_n; top->DTEN_N = bus.out.dten_n; top->REQ_N = bus.out.req_n; top->DI = bus.out.di;
		top->eval();
		top->CLK = 1;
		top->eval();

		const VlWide<3>& rm = top->r_misc; const VlWide<3>& dm = top->d_misc;
		bool diff = memcmp(&rm, &dm, sizeof(rm)) != 0 ||
			top->r_RA0_A != top->d_RA0_A || top->r_RA1_A != top->d_RA1_A || top->r_RA_D != top->d_RA_D ||
			top->r_RA_WE != top->d_RA_WE || top->r_RA_RD != top->d_RA_RD ||
			top->r_RB0_A != top->d_RB0_A || top->r_RB1_A != top->d_RB1_A || top->r_RB_D != top->d_RB_D ||
			top->r_RB_WE != top->d_RB_WE || top->r_RB_RD != top->d_RB_RD;
		if (diff) {
			static const struct { const char* n; int lo, w; } f[] = {
				{"VRES",0,2},{"HRES",2,3},{"INTERLACE",5,1},{"FIELD",6,1},{"VBL_N",7,1},{"HBL_N",8,1},{"VS_N",9,1},{"HS_N",10,1},
				{"DCLK",11,1},{"B",12,8},{"G",20,8},{"R",28,8},{"FBDO",36,16},{"VTIM_N",52,1},{"HTIM_N",53,1},{"DCE_F",54,1},
				{"DCE_R",55,1},{"HINT_N",56,1},{"VINT_N",57,1},{"RDY_N",58,1},{"DO",59,16}};
			printf("MISMATCH seed=%llu scene=%d clk=%ld\n", (unsigned long long)seed, scene, t);
			for (auto& x : f) { uint64_t a = bits(rm, x.lo, x.w), b = bits(dm, x.lo, x.w); if (a != b) printf("  %-9s ref=%llx dut=%llx\n", x.n, (unsigned long long)a, (unsigned long long)b); }
			#define CMP(n) if (top->r_##n != top->d_##n) printf("  %-9s ref=%llx dut=%llx\n", #n, (unsigned long long)top->r_##n, (unsigned long long)top->d_##n);
			CMP(RA0_A) CMP(RA1_A) CMP(RA_D) CMP(RA_WE) CMP(RA_RD) CMP(RB0_A) CMP(RB1_A) CMP(RB_D) CMP(RB_WE) CMP(RB_RD)
			failed = true;
		}
		rdy_n_prev = bits(rm, 58, 1);
		mr.tick(top->r_RA0_A, top->r_RA1_A, top->r_RA_D, top->r_RA_WE, top->r_RB0_A, top->r_RB1_A, top->r_RB_D, top->r_RB_WE);
		md.tick(top->d_RA0_A, top->d_RA1_A, top->d_RA_D, top->d_RA_WE, top->d_RB0_A, top->d_RB1_A, top->d_RB_D, top->d_RB_WE);

		// video capture for both
		for (int w = 0; w < 2; w++) {
			const VlWide<3>& m = w ? dm : rm;
			int dclk = bits(m, 11, 1), hbl = bits(m, 8, 1), vbl = bits(m, 7, 1);
			if (dclk && hbl && vbl) {
				curline[w].push_back(bits(m, 28, 8)); curline[w].push_back(bits(m, 20, 8)); curline[w].push_back(bits(m, 12, 8));
			}
		}
		{
			int hbl = bits(rm, 8, 1), vbl = bits(rm, 7, 1);
			if (hbl == 0 && lasthbl == 1) {   // end of active line
				for (int w = 0; w < 2; w++) { if (!curline[w].empty()) line[w].push_back(curline[w]); curline[w].clear(); }
			}
			if (vbl == 1 && lastvbl == 0) {   // active area starts
				for (int w = 0; w < 2; w++) { line[w].clear(); curline[w].clear(); }
			}
			if (vbl == 0 && lastvbl == 1) {   // active area ends
				frame++;
				if (!ppm_prefix.empty() && saved < ppm_frames && frame >= 2) {
					save_ppm(0, "ref", saved); save_ppm(1, "dut", saved); saved++;
				}
				for (int w = 0; w < 2; w++) line[w].clear();
			}
			lasthbl = hbl; lastvbl = vbl;
		}
	}
	// bus driver: run the slot logic with the golden RDY_N is handled in the loop below
	printf("seed=%llu scene=%d dens=%d pal=%d clks=%ld frames=%d ops=%d timeouts=%d %s\n", (unsigned long long)seed, scene, dens, pal, t, frame, bus.done, bus.timeouts, failed ? "FAIL" : "PASS");
	delete top;
	return failed ? 1 : 0;
}
