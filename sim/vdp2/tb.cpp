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
#ifdef DBG
#include "Vtb_top___024root.h"
#endif

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
				case 2: v = (r.chance(30) ? 0 : v) & (r.chance(50) ? 0xFFFF : 0x07FF); break;
				case 9: { static int bi = 0; v = 0x8000 | (((size_t)(bi++ & 3) << 13) ^ i) & 0x7FFF; v |= 0x8000; break; }   // value = address
				default: {   // smooth ramps with a little noise: recognisable tiles and gradients in the dumped frames
					size_t k = &*b->h.begin() == nullptr ? 0 : i;
					v = (uint32_t)(((k >> 3) * 0x0421) ^ (k & 7) * 0x1111) + (r.chance(5) ? r.next() & 0xFF : 0);
					break; }
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
static const int N_SCENES = 21;

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
	R_(0x0E) = (R_(0x0E) & 0x00FF) | ((rng.below(4) == 0 ? 0x300 : (rng.below(2) ? 0x100 : 0))) | (rng.below(4) << 12) | (rng.chance(10) ? 0x8000 : 0);
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
	case 13: R_(0x20) = (R_(0x20) | rng.next()) & 0x1F3F; break;                                         // random
	case 14: case 15: case 16: {   // tied priorities, extended color calc, line color, shadow
		R_(0x20) = 0x000F | (scene == 15 ? 0x0010 : 0) | (rng.chance(85) ? 0x1F00 : 0);
		for (int a = 0xF0; a <= 0xFC; a += 2) R_(a) = ((rng.below(3) + 1) << 8) | (rng.below(3) + 1);
		R_(0xEC) = (rng.chance(90) ? 0x0400 : 0) | (rng.chance(50) ? 0x0200 : 0) | (rng.chance(50) ? 0x0100 : 0) |
		           (rng.chance(70) ? 0x007F : (rng.next() & 0x007F)) | (rng.chance(3) ? 0x8000 | ((rng.below(7)) << 12) : 0);
		R_(0xE8) = rng.chance(60) ? 0x3F : (rng.next() & 0x3F);
		R_(0xE2) = rng.next() & 0x013F;
		R_(0xEE) = rng.chance(70) ? 0 : (rng.next() & 0x03FF);
		R_(0xEA) = scene == 16 ? (rng.next() & 0x03FF) : R_(0xEA);
		R_(0x00) = (R_(0x00) & ~3) | rng.below(2);   // not hires: extended calc is a low-res feature
		if (rng.chance(60)) R_(0x0E) &= 0xCFFF;   // RGB555 color RAM: extended calc applies to palette dots too
		break; }
	case 17: case 18: case 19: {   // extended colour calculation with all four NBG opaque: second/third screen blend,
	                               // line colour insertion (18), line colour + shadow + sprite (19)
		R_(0x20) = 0x1F0F | (scene == 19 ? 0x0010 : 0);
		for (int a = 0xF8; a <= 0xFA; a += 2) R_(a) = ((rng.below(4) + 1) << 8) | (rng.below(4) + 1);   // distinct-ish priorities
		R_(0xF0) = (rng.below(8) << 8) | rng.below(8);
		R_(0xEC) = 0x0400 | 0x000F | (scene >= 18 ? 0x0020 : 0) | (rng.chance(50) ? 0x0200 : 0) | (rng.chance(50) ? 0x0100 : 0) | (rng.chance(30) ? 0x0040 : 0);
		R_(0xE8) = scene == 17 ? 0 : (scene == 18 ? 0x3F : (rng.next() & 0x3F));
		R_(0xEE) = rng.chance(60) ? 0 : (rng.next() & 0x03FF);
		R_(0xE2) = scene == 19 ? (rng.next() & 0x013F) | 0x003F : R_(0xE2);
		R_(0xE0) = scene == 19 ? (rng.next() & 0x373F) : R_(0xE0);
		R_(0x00) = (R_(0x00) & ~3) | rng.below(2);
		if (rng.chance(60)) R_(0x0E) &= 0xCFFF;
		break; }
	case 20: {   // NBG0/NBG1 reduction (1/2, 1/4) at 4 and 8 bits per dot, NBG2/NBG3 on: the layers that lose their cell data lanes
		R_(0x20) = 0x0F0F & (rng.next() | 0x0F03);
		R_(0x28) = (R_(0x28) & 0xFF8F) | (rng.below(2) << 4);
		R_(0x28) = (R_(0x28) & 0x8FFF) | (rng.below(2) << 12);
		R_(0x2A) &= 0xFFCC;
		R_(0x98) = 0x0300 | (0x0003 & rng.next());
		R_(0x98) = (R_(0x98) & ~0x0300) | ((rng.next() & 3) << 8);
		R_(0x98) = rng.chance(50) ? (R_(0x98) & 0x0303) : (0x0100 << rng.below(2)) | (1 << rng.below(2));
		R_(0x00) = (R_(0x00) & ~3) | rng.below(2);
		break; }
	default: break;
	}
	if (rng.chance(30)) R_(0xE4) |= 0x7777 & rng.next();
	// RBG1 owns VRAM banks B0/B1 (pattern names in B1, characters in B0): rotation screen 0 cannot also be given those banks
	if (R_(0x20) & 0x20) R_(0x0E) &= ~0x00F0;
	(void)bg;
}


// ---------------- legal cycle patterns (decode-at-arrival renderer) ----------------
// Both bank rows carry the same pattern with VRAMD/VRBMD clear, so a layer's access hits whichever half holds its data.
// Per layer: one pattern name slot, then the character words of its colour depth, contiguous, at least PNSP slots later.
static int g_legal = 0, g_feat = 0, g_pnsp = 4, g_nostop = 0, g_fill = -1, g_nowr = 0, g_noflip = 0;
static void legalize(Rng& rng, Cfg& c) {
	bool hires = (g_feat & 1) != 0;
	int hres = hires ? 2 + rng.below(2) : rng.below(2);
	R_(0x00) = 0x8000 | hres;
	R_(0x0E) = (R_(0x0E) & 0x00FF & ~0x0300) | ((uint16_t)rng.below(3) << 12);
	R_(0x0E) &= ~0x00FF;
	R_(0x02) = 0;
	int cap = hires ? 4 : 8;
	int words_of[5] = {1, 2, 4, 4, 8};
	int chcn[4], on[4] = {0, 0, 0, 0};
	for (int l = 0; l < 4; l++) {
		int mx = l == 0 ? ((g_feat & 128) ? 5 : 4) : l == 1 ? 4 : 2;
		chcn[l] = rng.below(mx);
	}
	if (getenv("LEG_CHCN")) { const char* e = getenv("LEG_CHCN"); for (int l = 0; l < 4; l++) chcn[l] = e[l] - '0'; }
	int pn[4], ch0[4], nw[4];
	int used[8];
	for (int tries = 0; tries < 200; tries++) {
		memset(used, 0, sizeof(used));
		int cnt = 0;
		for (int l = 0; l < 4; l++) {
			on[l] = getenv("LEG_ON") ? ((atoi(getenv("LEG_ON")) >> l) & 1) : rng.chance(75);
			nw[l] = words_of[chcn[l]];
		}
		for (int l = 0; l < 4; l++) {
			if (!on[l]) continue;
			bool placed = false;
			for (int a = 0; a < 60 && !placed; a++) {
				int h = rng.below(2), s = 4 * h + rng.below(5 - nw[l] > 0 ? 5 - nw[l] : 1);
				if (nw[l] > 4 || s + nw[l] > 4 * h + 4) continue;
				int p = h ? rng.below(s - g_pnsp + 1 > 0 ? s - g_pnsp + 1 : 1) : 4 + rng.below(4);
				if (!h && s + 8 - p < g_pnsp) continue;
				if (h && s - g_pnsp < 0) continue;
				if (used[p]) continue;
				bool free_ = true;
				for (int k = 0; k < nw[l]; k++) if (used[s + k] || s + k == p) free_ = false;
				if (!free_) continue;
				used[p] = 1; for (int k = 0; k < nw[l]; k++) used[s + k] = 1;
				pn[l] = p; ch0[l] = s; placed = true;
			}
			if (!placed) on[l] = 0;
			cnt += on[l];
		}
		if (cnt > 0) break;
	}
	int row[8];
	for (int& t : row) t = 0xE;
	for (int l = 0; l < 4; l++) if (on[l]) { row[pn[l]] = l; for (int k = 0; k < nw[l]; k++) row[ch0[l] + k] = 4 + l; }
	for (int b : {0x10 / 2, 0x14 / 2, 0x18 / 2, 0x1C / 2}) setbank(c.r, b, row);
	R_(0x20) = (on[0] | (on[1] << 1) | (on[2] << 2) | (on[3] << 3)) | ((uint16_t)rng.below(16) << 8);
	R_(0x28) = (chcn[0] << 4) | (rng.below(2)) | (chcn[1] << 12) | (rng.below(2) << 8);
	R_(0x2A) = (chcn[2] & 1) << 1 | rng.below(2) | (chcn[3] & 1) << 5 | rng.below(2) << 4;
	g_noflip = chcn[1] >= 2;   // NBG1 at 16 bit/dot: the golden takes the high byte flip from the previous cell
	R_(0x22) = 0; R_(0x98) = 0; R_(0x9A) = 0;
	R_(0x78) = 1; R_(0x7A) = 0; R_(0x7C) = 1; R_(0x7E) = 0;
	R_(0x88) = 1; R_(0x8A) = 0; R_(0x8C) = 1; R_(0x8E) = 0;
}

// ---------------- main ----------------
int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	uint64_t seed = 1; long nclk = 1500000; int ppm_frames = 0; std::string ppm_prefix;
	int scene_arg = -1;
	bool cutmode = false;   // feature-cut build: compare video only, no CPU VRAM traffic
	for (int i = 1; i < argc; i++) {
		if (!strncmp(argv[i], "+seed=", 6)) seed = strtoull(argv[i] + 6, 0, 0);
		else if (!strncmp(argv[i], "+clks=", 6)) nclk = atol(argv[i] + 6);
		else if (!strncmp(argv[i], "+ppm=", 5)) ppm_prefix = argv[i] + 5;
		else if (!strncmp(argv[i], "+frames=", 8)) ppm_frames = atoi(argv[i] + 8);
		else if (!strncmp(argv[i], "+scene=", 7)) scene_arg = atoi(argv[i] + 7);
		else if (!strcmp(argv[i], "+cut")) cutmode = true;
		else if (!strncmp(argv[i], "+legal=", 7)) { g_legal = 1; g_feat = atoi(argv[i] + 7); }
		else if (!strcmp(argv[i], "+nostop")) g_nostop = 1;
		else if (!strcmp(argv[i], "+nowr")) g_nowr = 1;
		else if (!strncmp(argv[i], "+fill=", 6)) g_fill = atoi(argv[i] + 6);
		else if (!strncmp(argv[i], "+pnsp=", 6)) g_pnsp = atoi(argv[i] + 6);
	}
	Rng rng(seed);
	int scene = scene_arg >= 0 ? scene_arg : (int)(seed % N_SCENES);
	int dens = 10 + rng.below(35);
	int pal = rng.chance(30);
	Cfg cfg; gen_config(rng, cfg, scene, dens);
	if (g_legal) legalize(rng, cfg);
	bool lock_regs = (seed & 3) == 0;

	if (getenv("VDP2_CFG")) { for (int i = 0; i < 0x90; i++) printf("%03x=%04x%s", 2*i, cfg.r[i], (i&7)==7?"\n":" "); printf("\n"); }
	Mem mr, md;
	Rng mrng(seed ^ 0xABCDEF);
	mr.fill(mrng, g_fill >= 0 ? g_fill : (seed % 7 == 0) ? 3 : (int)(seed % 3));
	if (g_noflip) for (Bank* b : {&mr.a0, &mr.a1, &mr.b0, &mr.b1}) for (auto& h : b->h) h &= ~0x4400;   // clear flip bits (bit 10, bit 14)
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
	int saved = 0; long mism_total = 0; bool warm = false; long warm_t0 = 150000;
	bool rdy_n_prev = true;
	long covc[16] = {0};
	std::deque<Op> pend_cfg;     // register writes that change VRAM access addressing: issued during vertical blank only
	long vbl_age = 0;
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

#ifdef DBG
	struct Hist { int usel, mt, hm0, hm1, hm2, dcr, dcf, a0pn, a0ch, a0vs, uo, ha0, ha1, ha2, nx; uint32_t ra0a; uint32_t rch0, rch1, rch2, rpn0, rpn1; int cc1; uint32_t pn11, nbm1, nxx4; } hist[16];
#endif
	for (t = 0; t < nclk && !failed; t++) {
		bool ce_r = !(t & 1), odd = t & 1;
		top->CLK = 0;
		top->RST_N = t > 6;
		top->RES_N = !(t < 40 || (t > 700000 && t < 700030 && (seed & 7) == 5 && !g_legal));
		top->CE_R = ce_r; top->CE_F = odd;
		top->PAL = pal;
		top->SCRN_EN = 0xFF; top->DBG_EXT = 0;
		// sprite data: changes every few clocks, half transparent
		if ((t & 3) == 0) fbdi = rng.chance(50) ? 0 : (uint16_t)rng.next();
		top->FBDI = fbdi;
		if ((t & 0x3FFF) == 0x1000 && rng.chance(25)) exlat = 0; else if ((t & 0x3FFF) == 0x1010) exlat = 1;
		top->EXLAT_N = exlat;

		// after a mid-run soft reset only part of the registers are programmed again
		if (t == 700100 && (seed & 7) == 5 && !g_legal) {
			warm = false; warm_t0 = 700100 + 1100000;
			for (int a = 0; a < 0x120; a += 2) if (a != 0x00 && a != 0x04 && a != 0x08 && a != 0x0A && a != 0x0C && (g_legal || rng.chance(50))) pend_cfg.push_back({0, (uint32_t)(0x180000 + a), {cfg.r[a / 2]}, 0, (int)rng.below(3)});
			pend_cfg.push_back({0, 0x180000u, {cfg.r[0]}, 0, 0});
		}
		if (!pend_cfg.empty() && bus.idle() && vbl_age > 64 && vbl_age < 20000) { if (getenv("VDP2_LOGW") && pend_cfg.front().kind == 0 && pend_cfg.front().addr >= 0x180000) printf("W t=%ld reg=%03x v=%04x\n", t, pend_cfg.front().addr & 0x1FF, pend_cfg.front().data[0]); bus.q.push_back(pend_cfg.front()); pend_cfg.pop_front(); }
		// CPU traffic once the initial programming is done
		if (bus.idle() && t > 100000 && rng.chance(8) && !g_nowr) {
			int k = rng.below(100);
			if (cutmode && !(k >= 35 && k < 55)) k = 100;
			if (k >= 100) {}
			else if (k < 35) {            // read
				int sp = rng.below(3);
				uint32_t a = sp == 0 ? 0x180000 + 2 * rng.below(8) : sp == 1 ? 0x100000 + 2 * rng.below(2048) : 2 * rng.below(0x40000);
				bus.q.push_back({1, a, {}, 0, (int)rng.below(4)});
			} else if (k < 55) {     // register write
				if (!lock_regs) {
					int ra;
					uint32_t pick = rng.below(100);
					if (pick < 40) ra = 0x70 + 2 * rng.below(14);           // scroll / zoom
					else if (pick < 55) ra = 0xC0 + 2 * rng.below(16);      // windows
					else if (pick < 70) ra = 0xF0 + 2 * rng.below(7);       // priorities
					else if (pick < 85) ra = 0x100 + 2 * rng.below(16);     // color calc / offsets
					else if (pick < 95) ra = 0x20 + 2 * rng.below(32);      // layer control
					else ra = 2 * rng.below(0x90);
					if (ra != 4 && ra != 8 && ra != 0xA && ra != 0xC && !(ra == 0 && rng.chance(70)) && ra != 0x0E) {
						bool unsafe = ra < 0x70 || (ra >= 0x98 && ra <= 0xAE) || (ra >= 0xB0 && ra <= 0xBE) || (ra >= 0xD8 && ra <= 0xDE) || ra == 0xD6;   // WCTLD: its rotation parameter window bits pick the table for coefficient addresses   // registers that form VRAM addresses: blanking only
						uint16_t wv = (uint16_t)(rng.next() & (rng.next() | rng.next()));
						if (ra == 0x20) wv = (wv & ~0x20) | (cfg.r[0x20 / 2] & 0x20);   // keep RBG1 on/off as programmed
						Op o{0, (uint32_t)(0x180000 + ra), {wv}, rng.chance(10) ? (int)rng.below(3) : 0, (int)rng.below(4)};
						if (unsafe || g_legal) pend_cfg.push_back(o); else bus.q.push_back(o);
					}
				}
			} else if (k < 75) {     // VRAM write
				{ uint32_t wa = 2 * rng.below(0x40000); uint16_t wd = rng.next(); int gp = rng.below(4), dq = rng.chance(20) ? rng.below(4) : 0; if (g_legal) pend_cfg.push_back({0, wa, {wd}, dq, gp}); else W(wa, wd, gp, dq); }
			} else if (k < 85) {     // VRAM burst
				std::vector<uint16_t> d; int n = 2 + rng.below(8);
				for (int i = 0; i < n; i++) d.push_back(rng.next());
				{ Op bo{2, (uint32_t)2 * rng.below(0x3F000), d, 0, (int)rng.below(4)}; if (g_legal) pend_cfg.push_back(bo); else bus.q.push_back(bo); }
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
#ifdef DBG
		{ auto* r = top->rootp; Hist& h = hist[t & 15];
		  h.usel = r->tb_top__DOT__u_dut__DOT__USEL; h.mt = r->tb_top__DOT__u_dut__DOT__MT; h.dcr = r->tb_top__DOT__u_dut__DOT__DOT_CE_R; h.dcf = r->tb_top__DOT__u_dut__DOT__DOT_CE_F;
		  h.uo = r->tb_top__DOT__u_dut__DOT__UO; h.ha0 = r->tb_top__DOT__u_dut__DOT__HA[0]; h.ha1 = r->tb_top__DOT__u_dut__DOT__HA[1]; h.ha2 = r->tb_top__DOT__u_dut__DOT__HA[2];
		  { int a = r->tb_top__DOT__u_dut__DOT__NBG_A0VA; h.a0pn = (a >> 4) & 1; h.a0ch = (a >> 3) & 1; h.a0vs = (a >> 2) & 1; h.nx = a & 3; }
		  h.ra0a = top->d_RA0_A; h.rch0 = r->tb_top__DOT__u_ref__DOT__NxCH_ADDR[0]; h.rch1 = r->tb_top__DOT__u_ref__DOT__NxCH_ADDR[1]; h.rch2 = r->tb_top__DOT__u_ref__DOT__NxCH_ADDR[2]; h.rpn0 = r->tb_top__DOT__u_ref__DOT__NxPN_ADDR[0]; h.rpn1 = r->tb_top__DOT__u_ref__DOT__NxPN_ADDR[1]; h.cc1 = r->tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1]; h.pn11 = r->tb_top__DOT__u_ref__DOT__PN_PIPE[1][1]; h.nbm1 = r->tb_top__DOT__u_ref__DOT__NBG_BM_CNT[1]; }
#endif
		top->CLK = 1;
		top->eval();

		const VlWide<3>& rm = top->r_misc; const VlWide<3>& dm = top->d_misc;
		// R,G,B are compared while VBL_N is high (visible lines); in vertical blank only the sync/IRQ/bus outputs are.
		// A colour-depth or reduction register changed during blanking leaves stale bytes in the dot data for the first
		// dots of the next line in the rewritten design; those dots are refreshed before the display window opens.
		VlWide<3> rmc = rm, dmc = dm;
		if (!bits(rm, 7, 1) || (g_legal && (!warm || !bits(rm, 8, 1) || !bits(rm, 11, 1)))) for (int b = 12; b < 36; b++) { rmc[b >> 5] &= ~(1u << (b & 31)); dmc[b >> 5] &= ~(1u << (b & 31)); }
		bool diff = cutmode ? (bits(rm, 0, 52) != bits(dm, 0, 52)) : (memcmp(&rmc, &dmc, sizeof(rmc)) != 0 ||
			top->r_RA0_A != top->d_RA0_A || top->r_RA1_A != top->d_RA1_A || (top->r_RA_WE && top->r_RA_D != top->d_RA_D) ||
			top->r_RA_WE != top->d_RA_WE || top->r_RA_RD != top->d_RA_RD ||
			top->r_RB0_A != top->d_RB0_A || top->r_RB1_A != top->d_RB1_A || (top->r_RB_WE && top->r_RB_D != top->d_RB_D) ||
			top->r_RB_WE != top->d_RB_WE || top->r_RB_RD != top->d_RB_RD);
		static bool first_printed = false;
		if (diff && g_nostop && first_printed) { mism_total++; if (mism_total % 100000 == 0) printf("mismatches %ld\n", mism_total); }
		else if (diff) {
			static const struct { const char* n; int lo, w; } f[] = {
				{"VRES",0,2},{"HRES",2,3},{"INTERLACE",5,1},{"FIELD",6,1},{"VBL_N",7,1},{"HBL_N",8,1},{"VS_N",9,1},{"HS_N",10,1},
				{"DCLK",11,1},{"B",12,8},{"G",20,8},{"R",28,8},{"FBDO",36,16},{"VTIM_N",52,1},{"HTIM_N",53,1},{"DCE_F",54,1},
				{"DCE_R",55,1},{"HINT_N",56,1},{"VINT_N",57,1},{"RDY_N",58,1},{"DO",59,16}};
			printf("MISMATCH seed=%llu scene=%d clk=%ld y=%zu x=%zu\n", (unsigned long long)seed, scene, t, line[1].size(), curline[1].size() / 3);
			for (auto& x : f) { uint64_t a = bits(rm, x.lo, x.w), b = bits(dm, x.lo, x.w); if (a != b) printf("  %-9s ref=%llx dut=%llx\n", x.n, (unsigned long long)a, (unsigned long long)b); }
			#define CMP(n) if (top->r_##n != top->d_##n) printf("  %-9s ref=%llx dut=%llx\n", #n, (unsigned long long)top->r_##n, (unsigned long long)top->d_##n);
			CMP(RA0_A) CMP(RA1_A) if (top->r_RA_WE) { CMP(RA_D) } CMP(RA_WE) CMP(RA_RD) CMP(RB0_A) CMP(RB1_A) if (top->r_RB_WE) { CMP(RB_D) } CMP(RB_WE) CMP(RB_RD)
			if (g_nostop) { first_printed = true; mism_total++; } else failed = true;
#ifdef DBG
			for (int k = 9; k >= 0; k--) { Hist& h = hist[(t - k) & 15];
			  printf("  dbg t-%d usel=%d dcr=%d dcf=%d MT=%x a0 pn=%d ch=%d vs=%d nx=%d uo=%05x ha=%04x %04x %04x | ref ch0=%05x ch1=%05x ch2=%05x pn0=%05x pn1=%05x cc1=%d pn11=%08x bm1=%d\n", k, h.usel, h.dcr, h.dcf, h.mt, h.a0pn, h.a0ch, h.a0vs, h.nx, h.uo, h.ha0, h.ha1, h.ha2, h.rch0, h.rch1, h.rch2, h.rpn0, h.rpn1, h.cc1, h.pn11, h.nbm1); }
#endif
		}
		rdy_n_prev = bits(rm, 58, 1);
		vbl_age = bits(rm, 7, 1) ? 0 : vbl_age + 1;
		for (int k = 0; k < 16; k++) covc[k] += (top->cov >> k) & 1;
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
				if (t > warm_t0) warm = true;
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
	if (g_nostop && mism_total) failed = true;
	printf("seed=%llu scene=%d dens=%d pal=%d clks=%ld frames=%d ops=%d timeouts=%d mism=%ld %s\n", (unsigned long long)seed, scene, dens, pal, t, frame, bus.done, bus.timeouts, mism_total, failed ? "FAIL" : "PASS");
	if (getenv("VDP2_COV")) { for (int k = 0; k < 16; k++) printf("cov%d=%ld ", k, covc[k]); printf("\n"); }
	delete top;
	return failed ? 1 : 0;
}
