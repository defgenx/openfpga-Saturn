// Differential testbench: golden VDP1 (REF_VDP1) vs the shrunk VDP1 on identical stimulus.
// Every output of both sides is compared on every clock phase. Each side has its own VRAM/framebuffer model.
// See docs/vdp1.md for the stimulus description.
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include <deque>
#include <string>
#include <vector>
#include <algorithm>
#include "Vdiff_top.h"
#include "verilated.h"
#ifdef DBGST
#include "Vdiff_top___024root.h"
#endif

typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

struct Rng {
	u64 s;
	explicit Rng(u64 seed = 1) : s(seed * 0x9E3779B97F4A7C15ull + 0x1234567ull) { next(); next(); }
	u64 next() { s ^= s << 13; s ^= s >> 7; s ^= s << 17; return s; }
	u32 u(u32 n) { return n ? (u32)((next() >> 11) % n) : 0; }
	int range(int lo, int hi) { return lo + (int)u((u32)(hi - lo + 1)); }
	bool chance(int pct) { return (int)u(100) < pct; }
};

static const int VRAM_WORDS = 0x40000;
static const int FB_WORDS = 0x20000;

// ---------------------------------------------------------------- scenario description
struct Cfg {
	int id = 0;
	u64 seed = 1;
	int tvm = 0, fcm = 0, fct = 0, die = 0, dil = 0, eos = 0, vbe = 0, ptm = 1;
	u16 ewdr = 0, ewlr = 0, ewrr = 0;
	int fast = 0, blur = 0;
	int vlat = 1;          // 0: no latency, 1: 0..3, 2: 0..10 with rare long
	int fbrdy = 0;         // 1: FB_RDY randomly low
	int dce_p = 4;         // pixel enable period in clocks
	int bus_upload = 0;    // command table uploaded through the CPU bus
	int ncmd = 12;
	int big = 0;           // allow large shapes
	int mix = 0;           // 0 all, 1 sprites only, 2 polygons/lines only, 3 gouraud-heavy
	int bg = 1;            // background CPU traffic during drawing
	int frames_after = 2;
	int res_pulse = 0;
	int fbinit = 1;
	int noinit = 0;        // leave the clip/local-coordinate registers at their reset values
};

struct Cov {
	u64 comm[16] = {}, cm[8] = {}, ccb[8] = {}, mon = 0, mesh = 0, spd = 0, ecd = 0, clip = 0, cmod = 0, pclp = 0, hss = 0;
	u64 dirx = 0, diry = 0, jp[8] = {}, tvm[4] = {}, scenarios = 0, cmds = 0;
	u64 fbw = 0, vrw = 0, vrr = 0, busops = 0;
};
static Cov cov;

struct Op {
	bool wr = true;
	bool burst = false;
	u32 w = 0;  // 20-bit word address A[20:1]
	std::vector<u16> d;
	int dqm = 0;
	int gap = 0;
};

// ---------------------------------------------------------------- signal access
struct Sig {
	void* p = nullptr;
	int n = 0;
	u32 get() const { switch (n) { case 1: return *(uint8_t*)p; case 2: return *(uint16_t*)p; default: return *(uint32_t*)p; } }
	void set(u32 v) const { switch (n) { case 1: *(uint8_t*)p = (uint8_t)v; break; case 2: *(uint16_t*)p = (uint16_t)v; break; default: *(uint32_t*)p = v; } }
};
#define SG(x) Sig{(void*)&(x), (int)sizeof(x)}

struct Side {
	const char* name;
	Sig vram_q, vram_rdy, fb0_q, fb1_q, fb_rdy;
	Sig dout, rdy_n, irq_n, vouto, vram_a, vram_d, vram_we, vram_rd, vram_blen;
	Sig fb_a[2], fb_d[2], fb_we[2], fb_rd[2], fb_mode3;
	// model state
	std::vector<u16> vram, fb[2];
	Rng rng;
	int busy = 0;
	bool rd_old = false, we_old = false;
	u16 pend = 0, q = 0;
	u16 fbq[2] = {0, 0};
	int vlat = 1;
	int fbrdy_mode = 0;
	int fbrdy = 1;
	Side() : vram(VRAM_WORDS), rng(77) { fb[0].resize(FB_WORDS); fb[1].resize(FB_WORDS); }
	int latency() {
		switch (vlat) {
			case 0: return 0;
			case 1: return (int)rng.u(4);
			default: return rng.chance(5) ? 20 + (int)rng.u(12) : (int)rng.u(11);
		}
	}
	// called with outputs sampled just before the clock edge
	void edge() {
		u32 rd = vram_rd.get(), we = vram_we.get(), a = vram_a.get();
		bool newrd = rd && !rd_old, newwe = we && !we_old;
		rd_old = rd; we_old = we != 0;
		if (busy > 0) { busy--; if (busy == 0) q = pend; }
		if (newwe) {
			u16 d = (u16)vram_d.get();
			u16& m = vram[a & (VRAM_WORDS - 1)];
			if (we & 1) m = (m & 0xFF00) | (d & 0x00FF);
			if (we & 2) m = (m & 0x00FF) | (d & 0xFF00);
			busy = latency();
			cov.vrw++;
		}
		if (newrd) {
			pend = vram[a & (VRAM_WORDS - 1)];
			busy = latency();
			if (busy == 0) q = pend;
			cov.vrr++;
		}
		for (int k = 0; k < 2; k++) {
			u32 fa = fb_a[k].get() & (FB_WORDS - 1), fw = fb_we[k].get();
			fbq[k] = fb[k][fa];
			if (fw) {
				u16 d = (u16)fb_d[k].get();
				u16& m = fb[k][fa];
				if (fw & 1) m = (m & 0xFF00) | (d & 0x00FF);
				if (fw & 2) m = (m & 0x00FF) | (d & 0xFF00);
				cov.fbw++;
			}
		}
		fbrdy = fbrdy_mode ? (rng.chance(70) ? 1 : 0) : 1;
	}
	void drive_regs() {
		vram_q.set(q); fb0_q.set(fbq[0]); fb1_q.set(fbq[1]); fb_rdy.set(fbrdy);
	}
	void drive_comb() {
		bool r = busy == 0 && !(vram_rd.get() && !rd_old) && !(vram_we.get() && !we_old);
		vram_rdy.set(r ? 1 : 0);
	}
};

// ---------------------------------------------------------------- CPU bus master (B-bus protocol of the SCU)
struct Master {
	u32 cs_n = 1, ad_n = 1, dten_n = 1, req_n = 1, di = 0;
	enum { IDLE, ADDR_L, WR_DATA, WR_END0, WR_END1, WR_END2, RD_START, RD_WAIT, RD_END0, RD_END1 } st = IDLE;
	std::deque<Op> q;
	Op cur;
	size_t beat = 0;
	int delay = 0;
	u16 last_read = 0;
	void reset() { cs_n = ad_n = dten_n = req_n = 1; di = 0; st = IDLE; q.clear(); delay = 0; }
	bool idle() const { return st == IDLE && q.empty(); }
	void default_cycle() { req_n = 1; }
	void tick(bool rdy, u16 dout) {
		req_n = 1;
		switch (st) {
			case IDLE:
				if (delay > 0) { delay--; break; }
				if (q.empty()) break;
				cur = q.front(); q.pop_front();
				cov.busops++;
				cs_n = 0; ad_n = 1; dten_n = 1;
				di = ((cur.wr ? 0 : 1) << 14) | ((cur.burst ? 1 : 0) << 13) | ((cur.burst ? 1 : 0) << 12) | ((cur.w >> 8) & 0xFFF);
				st = ADDR_L;
				break;
			case ADDR_L:
				if (rdy) {
					di = 0x8000 | ((cur.wr ? cur.dqm & 3 : 0) << 12) | (cur.w & 0xFF);
					dten_n = 1; ad_n = 1;
					beat = 0;
					st = cur.wr ? WR_DATA : RD_START;
				}
				break;
			case WR_DATA:
				ad_n = 0;
				if (rdy) {
					di = cur.d[beat]; dten_n = 0; req_n = 0; beat++;
					if (beat >= cur.d.size()) st = WR_END0;
				}
				break;
			case WR_END0: dten_n = 1; cs_n = 1; st = WR_END1; break;
			case WR_END1: st = WR_END2; break;
			case WR_END2: dten_n = 1; cs_n = 1; ad_n = 1; st = IDLE; delay = cur.gap; break;
			case RD_START:
				if (rdy) { ad_n = 0; req_n = 0; st = RD_WAIT; }
				break;
			case RD_WAIT:
				if (rdy) { last_read = dout; cs_n = 1; st = RD_END0; }
				break;
			case RD_END0: ad_n = 1; dten_n = 1; st = RD_END1; break;
			case RD_END1: st = IDLE; delay = cur.gap; break;
		}
	}
};

// ---------------------------------------------------------------- stimulus generation
static const u32 W_CMD = 0x0000;        // command tables
static const u32 W_TEX = 0x8000;        // texture data   (words)
static const u32 W_TEX_END = 0x10000;
static const u32 W_GRD = 0x10000;       // gouraud tables
static const u32 W_CLT = 0x14000;       // color lookup tables
static const u32 W_SCRATCH = 0x3F000;   // CPU scratch

static u16 sx(int v) { return (u16)(v & 0x1FFF) | (u16)(0); }

struct Gen {
	Rng r;
	Cfg c;
	std::vector<u16> img;
	int ncmd_total = 0;
	explicit Gen(const Cfg& cfg) : r(cfg.seed), c(cfg), img(VRAM_WORDS, 0) {}

	u16 crd(int v) {
		u16 w = (u16)(v & 0x1FFF);
		if (r.chance(20)) w |= (u16)(r.u(8) << 13);
		return w;
	}
	int rpos(int lo, int hi) { return r.range(lo, hi); }
	int span() {
		if (c.big) return r.chance(30) ? r.range(60, 300) : r.range(1, 120);
		return r.chance(8) ? r.range(60, 200) : r.range(0, 48);
	}
	int extreme() { used_extreme = true; return r.range(-1500, 1500); }
	int cx() { return r.chance(6) ? extreme() : r.range(-24, 300); }
	int cy() { return r.chance(6) ? extreme() : r.range(-24, 170); }

	void tex() {
		for (u32 i = W_TEX; i < W_TEX_END; i++) {
			u32 m = r.u(8);
			img[i] = (u16)(m == 0 ? 0 : m == 1 ? 0xFFFF : m == 2 ? 0x7FFF : m == 3 ? 0x8000 : m < 7 ? (0x8000 | r.next()) : r.next());
		}
		for (u32 i = W_GRD; i < W_GRD + 0x4000; i++) img[i] = (u16)r.next();
		for (u32 i = W_CLT; i < W_CLT + 0x4000; i++) img[i] = (u16)r.next();
		for (u32 i = W_SCRATCH; i < W_SCRATCH + 0x1000; i++) img[i] = (u16)r.next();
	}

	void gouraud_table() {}

	// returns one command table entry
	bool used_extreme = false;
	void cmd(int idx, bool last, int force = -1) {
		u16 w[16] = {};
		int kind;
		used_extreme = false;
		int m = c.mix;
		int p = r.u(100);
		if (m == 1) kind = p < 40 ? 0 : p < 75 ? 1 : 2;
		else if (m == 2) kind = p < 40 ? 4 : p < 65 ? 5 : p < 90 ? 6 : 2;
		else if (m == 3) kind = p < 25 ? 4 : p < 45 ? 2 : p < 60 ? 1 : p < 75 ? 0 : p < 85 ? 6 : 5;
		else {
			if (p < 16) kind = 0; else if (p < 32) kind = 1; else if (p < 44) kind = 2; else if (p < 50) kind = 3;
			else if (p < 64) kind = 4; else if (p < 72) kind = 5; else if (p < 78) kind = 7; else if (p < 86) kind = 6;
			else if (p < 89) kind = 8; else if (p < 92) kind = 0xB; else if (p < 95) kind = 9; else if (p < 98) kind = 0xA;
			else kind = r.u(8);   // COMM 0xC-0xF is never generated: the golden core loops on it
		}
		if (force >= 0) kind = force;
		int comm = kind;
		int jp = 0;
		int jp_choice = r.u(100);
		bool skip = jp_choice < 4;
		int jpm = 0;
		if (!last && jp_choice >= 4 && jp_choice < 8) jpm = 1;   // jump to idx+1 (same as next, via link)
		if (!last && jp_choice >= 8 && jp_choice < 11) jpm = 2;  // call next+1
		if (!last && jp_choice >= 11 && jp_choice < 14) jpm = 3; // return
		jp = jpm | (skip ? 4 : 0);
		int zp = r.u(16);
		int dir = r.u(4);
		w[0] = (u16)(((last ? 1 : 0) << 15) | (jp << 12) | (zp << 8) | (dir << 4) | comm);
		w[1] = 0;  // link filled by caller
		int cm = r.chance(60) ? r.u(6) : r.u(8);
		int ccb = r.u(8);
		int pm = (ccb) | (cm << 3);
		if (r.chance(15)) pm |= 1 << 6;            // SPD
		if (r.chance(20)) pm |= 1 << 7;            // ECD
		if (r.chance(20)) pm |= 1 << 8;            // MESH
		if (r.chance(18)) pm |= 1 << 9;            // CMOD
		if (r.chance(35)) pm |= 1 << 10;           // CLIP
		if (r.chance(15)) pm |= 1 << 11;           // PCLP
		if (r.chance(15)) pm |= 1 << 12;           // HSS
		if (r.chance(10)) pm |= 1 << 15;           // MON
		pm |= (int)(r.u(4) << 13) & 0x6000 ? 0 : 0;
		w[2] = (u16)pm;
		w[3] = r.chance(70) ? (u16)(0x8000 | r.next()) : (u16)r.next();
		if (cm == 1) w[3] = (u16)((W_CLT / 4 + r.u(0x400)) << 2 | (r.next() & 3));
		w[4] = (u16)(W_TEX / 4 + r.u((W_TEX_END - W_TEX) / 4 - 0x400));
		int wd = 8 * (r.chance(4) ? r.range(0, 16) : r.range(1, c.big ? 12 : 6));
		int ht = r.chance(4) ? r.range(0, 120) : r.range(1, c.big ? 90 : 40);
		w[5] = (u16)(((wd / 8) << 8) | ht);
		w[14] = (u16)(W_GRD / 4 + r.u(0x1000 - 8));
		int x0 = cx(), y0 = cy();
		switch (kind) {
			case 0:  // normal sprite
				w[6] = crd(x0); w[7] = crd(y0); break;
			case 1:  // scaled sprite
				w[6] = crd(x0); w[7] = crd(y0);
				w[8] = crd(r.chance(50) ? span() : x0 + span()); w[9] = crd(r.chance(50) ? span() : y0 + span());
				w[10] = crd(x0 + span()); w[11] = crd(y0 + span());
				break;
			case 2: case 3: case 4: case 5: case 6: case 7: {
				int sp = span();
				w[6] = crd(x0); w[7] = crd(y0);
				w[8] = crd(x0 + (r.chance(70) ? sp : -sp / 2)); w[9] = crd(y0 + r.range(-8, 20));
				w[10] = crd(x0 + (r.chance(70) ? sp : -sp / 2) + r.range(-12, 12)); w[11] = crd(y0 + span());
				w[12] = crd(x0 + r.range(-12, 12)); w[13] = crd(y0 + span());
				if (kind == 6) { w[10] = crd(x0 + r.range(-sp, sp)); w[11] = crd(y0 + r.range(-sp, sp)); }
				if (kind != 6 && r.chance(25)) {   // one edge entirely outside the window: exercises the horizontal clip cases
					int far = r.chance(50);
					int inside = r.range(0, 120), outside = far ? r.range(330, 480) : -r.range(20, 120);
					int sidea = r.chance(50);
					int ax = sidea ? outside : inside, bx = sidea ? inside : outside;
					w[6] = crd(ax); w[12] = crd(ax + r.range(-3, 3)); w[8] = crd(bx); w[10] = crd(bx + r.range(-3, 3));
				}
				break;
			}
			case 8: case 0xB:  // user clip
				{
					int a = r.range(0, 120), b = r.range(0, 80);
					w[6] = (u16)a; w[7] = (u16)b;
					w[10] = (u16)(a + r.range(1, 300)); w[11] = (u16)(b + r.range(1, 200));
					if (r.chance(10)) { w[10] = (u16)r.next(); w[11] = (u16)r.next(); }
				}
				break;
			case 9:  // system clip
				w[10] = (u16)(r.chance(75) ? r.range(319, 511) : r.range(0, 511));
				w[11] = (u16)(r.chance(75) ? r.range(200, 255) : r.range(0, 255));
				break;
			case 0xA:  // local coordinate
				w[6] = (u16)r.range(-24, 40); w[7] = (u16)r.range(-24, 30);
				if (r.chance(10)) { w[6] = (u16)r.next(); w[7] = (u16)r.next(); }
				break;
			default: break;
		}
		if (used_extreme) w[2] &= ~(1 << 11);   // keep the run time bounded: no pre-clipping skip for huge shapes
		if (force >= 0) w[0] &= 0x80FF;        // setup commands: no jump/skip
		for (int i = 0; i < 16; i++) img[W_CMD + idx * 16 + i] = w[i];
		// coverage
		cov.cmds++;
		cov.comm[comm & 15]++;
		if (comm <= 7) {
			cov.cm[cm]++; cov.ccb[ccb]++;
			if (pm & (1 << 15)) cov.mon++;
			if (pm & (1 << 8)) cov.mesh++;
			if (pm & (1 << 6)) cov.spd++;
			if (pm & (1 << 7)) cov.ecd++;
			if (pm & (1 << 10)) cov.clip++;
			if (pm & (1 << 9)) cov.cmod++;
			if (pm & (1 << 11)) cov.pclp++;
			if (pm & (1 << 12)) cov.hss++;
			if (dir & 1) cov.dirx++;
			if (dir & 2) cov.diry++;
		}
		cov.jp[jp]++;
	}

	void build() {
		tex();
		// initial system clip and clip/local coordinate commands first, so later commands have a sane window
		int n = c.ncmd;
		for (int i = 0; i < n; i++) {
			bool last = (i == n - 1);
			int force = -1;
			if (!c.noinit) { if (i == 0) force = 9; else if (i == 1) force = 0xA; else if (i == 2 && r.chance(50)) force = 8; }
			cmd(i, last, force);
			u16 link = (u16)((i + 1) * 4);
			int jpv = (img[W_CMD + i * 16] >> 12) & 3;
			if (jpv == 2) link = (u16)((i + 2 < n ? i + 2 : i + 1) * 4);
			img[W_CMD + i * 16 + 1] = link;
		}
		// make sure return/call targets stay in range: entry n is a plain END
		img[W_CMD + n * 16] = 0x8000;
		img[W_CMD + (n + 1) * 16] = 0x8000;
		ncmd_total = n;
	}
};

// ---------------------------------------------------------------- top level
struct Top {
	Vdiff_top* t;
	Side r, n;
	Master m;
	Rng rng{5};
	u64 cyc = 0;
	u64 total_cyc = 0;
	int dce_p = 4;
	int h = 0, v = 0;
	int H_ACT = 40, H_BLK = 10, V_ACT = 10, V_BLK = 6;
	int dce_cnt = 0;
	bool failed = false;
	bool tainted = false;
	u64 taint_cyc = 0;
	int n_tainted = 0;
	int scen = -1;
	u64 cmp_count = 0;
	u32 ce_phase = 0;
	u32 prev_irq = 1;

	Top() {
		t = new Vdiff_top;
		r.name = "golden"; n.name = "new";
	}
};

#define BINDSIDE(S, sfx) \
	S.vram_q = SG(t->VRAM_Q_##sfx); S.vram_rdy = SG(t->VRAM_RDY_##sfx); S.fb0_q = SG(t->FB0_Q_##sfx); S.fb1_q = SG(t->FB1_Q_##sfx); \
	S.fb_rdy = SG(t->FB_RDY_##sfx); S.dout = SG(t->DO_##sfx); S.rdy_n = SG(t->RDY_N_##sfx); S.irq_n = SG(t->IRQ_N_##sfx); \
	S.vouto = SG(t->VOUTO_##sfx); S.vram_a = SG(t->VRAM_A_##sfx); S.vram_d = SG(t->VRAM_D_##sfx); S.vram_we = SG(t->VRAM_WE_##sfx); \
	S.vram_rd = SG(t->VRAM_RD_##sfx); S.vram_blen = SG(t->VRAM_BLEN_##sfx); \
	S.fb_a[0] = SG(t->FB0_A_##sfx); S.fb_d[0] = SG(t->FB0_D_##sfx); S.fb_we[0] = SG(t->FB0_WE_##sfx); S.fb_rd[0] = SG(t->FB0_RD_##sfx); \
	S.fb_a[1] = SG(t->FB1_A_##sfx); S.fb_d[1] = SG(t->FB1_D_##sfx); S.fb_we[1] = SG(t->FB1_WE_##sfx); S.fb_rd[1] = SG(t->FB1_RD_##sfx); \
	S.fb_mode3 = SG(t->FB_MODE3_##sfx);

static Top* T;
static int g_nz = 0, g_show = 0;
static int g_dbg = 0, g_dbg_cnt = 0, g_dbgfb = 0, g_dbgfb_cnt = 0;

static bool compare_outputs(const char* phase) {
	if (T->tainted) return true;
	Side &a = T->r, &b = T->n;
	struct E { const char* nm; u32 x, y; };
	E es[] = {
		{"DO", a.dout.get(), b.dout.get()}, {"RDY_N", a.rdy_n.get(), b.rdy_n.get()}, {"IRQ_N", a.irq_n.get(), b.irq_n.get()},
		{"VOUTO", a.vouto.get(), b.vouto.get()}, {"VRAM_A", a.vram_a.get(), b.vram_a.get()}, {"VRAM_D", a.vram_d.get(), b.vram_d.get()},
		{"VRAM_WE", a.vram_we.get(), b.vram_we.get()}, {"VRAM_RD", a.vram_rd.get(), b.vram_rd.get()},
		{"VRAM_BLEN", a.vram_blen.get(), b.vram_blen.get()},
		{"FB0_A", a.fb_a[0].get(), b.fb_a[0].get()}, {"FB0_D", a.fb_d[0].get(), b.fb_d[0].get()}, {"FB0_WE", a.fb_we[0].get(), b.fb_we[0].get()},
		{"FB0_RD", a.fb_rd[0].get(), b.fb_rd[0].get()}, {"FB1_A", a.fb_a[1].get(), b.fb_a[1].get()}, {"FB1_D", a.fb_d[1].get(), b.fb_d[1].get()},
		{"FB1_WE", a.fb_we[1].get(), b.fb_we[1].get()}, {"FB1_RD", a.fb_rd[1].get(), b.fb_rd[1].get()},
		{"FB_MODE3", a.fb_mode3.get(), b.fb_mode3.get()},
	};
	T->cmp_count++;
	for (auto& e : es) {
		if (e.x != e.y) {
			printf("MISMATCH scenario %d cycle %llu (%s): %s golden=0x%x new=0x%x\n", T->scen, (unsigned long long)T->cyc, phase, e.nm, e.x, e.y);
			T->failed = true;
			return false;
		}
	}
	return true;
}

// advance one clock cycle: returns false on mismatch
static bool cycle(bool rst_n, bool res_n) {
	Vdiff_top* t = T->t;
	Side &a = T->r, &b = T->n;
	// ---- registered models see the outputs from before the edge
	a.edge(); b.edge();
	bool ce_r_now = t->CE_R;
	if (g_dbg && g_dbg_cnt < g_dbg && (b.vram_rd.get() || b.vram_we.get())) printf("  [%llu] NEW VRAM %s A=%05x\n", (unsigned long long)T->cyc, b.vram_rd.get() ? "RD" : "WR", b.vram_a.get());
	if (g_dbg && g_dbg_cnt < g_dbg && (a.vram_rd.get() || a.vram_we.get())) { g_dbg_cnt++; printf("  [%llu] VRAM %s A=%05x D=%04x WE=%x BLEN=%x\n", (unsigned long long)T->cyc, a.vram_rd.get() ? "RD" : "WR", a.vram_a.get(), a.vram_d.get(), a.vram_we.get(), a.vram_blen.get()); }
	if (g_dbgfb && g_dbgfb_cnt < g_dbgfb) for (int k = 0; k < 2; k++) if (a.fb_we[k].get()) { g_dbgfb_cnt++; printf("  [%llu] FB%d WE=%x A=%05x D=%04x\n", (unsigned long long)T->cyc, k, a.fb_we[k].get(), a.fb_a[k].get(), a.fb_d[k].get()); }
#ifdef DBGST
	{ static int last = -1, lastn = -1, nprint = 0; int st = t->rootp->diff_top__DOT__u_r__DOT__CMD_ST; int stn = t->rootp->diff_top__DOT__u_n__DOT__CMD_ST;
	  { auto* r = t->rootp; static unsigned long long pg=0,pn=0; unsigned long long LL = r->diff_top__DOT__u_r__DOT__LINE_GHCOLOR, NL = r->diff_top__DOT__u_n__DOT__LINE_GHCOLOR;
	    { static int lg=-1; int g=(int)r->diff_top__DOT__u_n__DOT__GSEQ; if (T->scen==10 && T->cyc>900 && T->cyc<950 && (g!=lg || stn==9 || stn==29)) printf("  [%llu] GSEQ=%d GP2=%d stn=%d K=%d\n",(unsigned long long)T->cyc,g,(int)r->diff_top__DOT__u_n__DOT__GP2,stn,(int)r->diff_top__DOT__u_n__DOT__GK); lg=g; }
	    if ((LL != NL) && T->scen == 10 && T->cyc > 880 && T->cyc < 1000) printf("  [%llu] LINEDIFF st=%d g=%014llx n=%014llx GSEQ=%d GP2=%d STATE=%d\n", (unsigned long long)T->cyc, stn, LL, NL, (int)r->diff_top__DOT__u_n__DOT__GSEQ, (int)r->diff_top__DOT__u_n__DOT__GP2, (int)r->diff_top__DOT__u_n__DOT__GRD_CALC_STATE); }
	  { auto* r = t->rootp; if (stn == 10 && r->diff_top__DOT__u_n__DOT__GRD_CALC_STATE == 5 && r->diff_top__DOT__u_n__DOT__GRD_ON) {
	      unsigned long long L = r->diff_top__DOT__u_r__DOT__LEFT_GHCOLOR, R = r->diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR;
	      auto I = [](unsigned long long v, int c) { return (unsigned)((v >> (18 * c + 12)) & 31); };
	      unsigned g[6] = {I(L,0), I(L,1), I(L,2), I(R,0), I(R,1), I(R,2)};
	      unsigned n[6]; for (int k = 0; k < 6; k++) n[k] = r->diff_top__DOT__u_n__DOT__GI[k];
	      int bad = 0; for (int k = 0; k < 6; k++) if (g[k] != n[k]) bad = 1;
	      unsigned long long LL = r->diff_top__DOT__u_r__DOT__LINE_GHCOLOR, NL = r->diff_top__DOT__u_n__DOT__LINE_GHCOLOR;
	      printf("  [%llu] %s GOLD int %x %x %x %x %x %x  NEW %x %x %x %x %x %x GK=%d dir0=%d LINE g=%014llx n=%014llx\n", (unsigned long long)T->cyc, bad ? "BAD" : "ok ", g[0],g[1],g[2],g[3],g[4],g[5], n[0],n[1],n[2],n[3],n[4],n[5], (int)r->diff_top__DOT__u_n__DOT__GK, (int)r->diff_top__DOT__u_n__DOT__DIR, LL, NL);
	  } }
	  if ((st != last || stn != lastn) && nprint < DBGST) { nprint++; printf("  [%llu] CMD_ST gold=%d new=%d\n", (unsigned long long)T->cyc, st, stn); last = st; lastn = stn; } }
#endif
	bool rdy = !a.rdy_n.get();
	u16 dout = (u16)a.dout.get();
	if (ce_r_now) T->m.tick(rdy, dout); else T->m.default_cycle();
	// ---- posedge with old inputs
	t->CLK = 1; t->eval();
	// ---- next inputs
	T->cyc++; T->total_cyc++;
	u64 c = T->cyc;
	t->RST_N = rst_n; t->RES_N = res_n;
	t->CE_R = (c % 2) == 0; t->CE_F = (c % 2) == 1;
	int P = T->dce_p;
	t->DCE_R = (c % P) == 0; t->DCE_F = (c % P) == (u64)(P / 2);
	if ((c % P) == 0) {
		T->h++;
		if (T->h >= T->H_ACT + T->H_BLK) { T->h = 0; T->v++; if (T->v >= T->V_ACT + T->V_BLK) T->v = 0; }
	}
	t->HTIM_N = T->h < T->H_ACT;
	t->VTIM_N = T->v < T->V_ACT;
	t->VOUTI = (u16)T->rng.next();
	t->CS_N = T->m.cs_n; t->AD_N = T->m.ad_n; t->DTEN_N = T->m.dten_n; t->REQ_N = T->m.req_n; t->DI = T->m.di;
	a.drive_regs(); b.drive_regs();
	t->CLK = 0; t->eval();
	a.drive_comb(); b.drive_comb();
	t->eval();
	if (t->TAINT && !T->tainted) { T->tainted = true; T->taint_cyc = T->cyc; }
	return compare_outputs("clk0");
}

static void write_ppm(const char* path, const std::vector<u16>& fb) {
	FILE* f = fopen(path, "wb");
	if (!f) return;
	fprintf(f, "P6\n512 256\n255\n");
	for (int y = 0; y < 256; y++)
		for (int x = 0; x < 512; x++) {
			u16 p = fb[y * 512 + x];
			unsigned rr = (p & 31) << 3, gg = ((p >> 5) & 31) << 3, bb = ((p >> 10) & 31) << 3;
			if (!(p & 0x8000) && p) { u32 h = p * 2654435761u; rr = 64 + ((h >> 8) & 127); gg = 64 + ((h >> 15) & 127); bb = 64 + ((h >> 22) & 127); }
			fputc(rr | (rr >> 5), f); fputc(gg | (gg >> 5), f); fputc(bb | (bb >> 5), f);
		}
	fclose(f);
}

static bool compare_memories(const char* tag) {
	if (T->tainted) return true;
	Side &a = T->r, &b = T->n;
	if (a.vram != b.vram) {
		for (int i = 0; i < VRAM_WORDS; i++) if (a.vram[i] != b.vram[i]) { printf("MISMATCH %s: VRAM[%x] %04x vs %04x\n", tag, i, a.vram[i], b.vram[i]); break; }
		return false;
	}
	for (int k = 0; k < 2; k++)
		if (a.fb[k] != b.fb[k]) {
			for (int i = 0; i < FB_WORDS; i++) if (a.fb[k][i] != b.fb[k][i]) { printf("MISMATCH %s: FB%d[%x] %04x vs %04x\n", tag, k, i, a.fb[k][i], b.fb[k][i]); break; }
			return false;
		}
	return true;
}

static Op wr16(u32 byteaddr, u16 d, int gap = 0) {
	Op o; o.wr = true; o.w = byteaddr >> 1; o.d = {d}; o.dqm = 0; o.gap = gap; return o;
}
static Op rd16(u32 byteaddr, int gap = 0) {
	Op o; o.wr = false; o.w = byteaddr >> 1; o.gap = gap; return o;
}

static const u32 REG = 0x100000;

static bool run_cycles(u64 n, bool res_n = true) {
	for (u64 i = 0; i < n; i++) if (!cycle(true, res_n)) return false;
	return true;
}

static bool run_scenario(const Cfg& c, int ppm_n, const std::string& outdir) {
	T->scen = c.id;
	Gen g(c);
	g.build();
	if (g_show) for (int i = 0; i < c.ncmd; i++) {
		printf("  cmd%2d:", i);
		for (int k = 0; k < 16; k++) printf(" %04x", g.img[W_CMD + i * 16 + k]);
		printf("\n");
	}
	Rng sr(c.seed ^ 0xABCDEF);
	Side &a = T->r, &b = T->n;
	T->dce_p = c.dce_p;
	T->h = 0; T->v = 0; T->cyc = 0;
	for (Side* s : {&a, &b}) {
		Rng fbr(c.seed + 4242);
		s->vram = g.img;
		if (c.bus_upload) std::fill(s->vram.begin() + W_CMD, s->vram.begin() + W_CMD + (c.ncmd + 2) * 16, 0);
		for (int k = 0; k < 2; k++) for (int i = 0; i < FB_WORDS; i++) { int x = i & 511, y = i >> 9; s->fb[k][i] = c.fbinit ? (u16)(0x8000 | (((x >> 4) & 31) << 0) | (((y >> 3) & 31) << 5) | ((((x + y) >> 5) & 31) << 10) | (fbr.next() & 0x0421)) : 0; }
		s->rng = Rng(c.seed + 99); s->vlat = c.vlat; s->fbrdy_mode = c.fbrdy; s->busy = 0; s->rd_old = s->we_old = false; s->q = 0; s->pend = 0; s->fbq[0] = s->fbq[1] = 0;
		s->fbrdy = 1;
	}
	if (c.bus_upload) {  // random initial FB content is not used; command words go through the bus
		for (int i = 0; i < (c.ncmd + 2); i++) {
			Op o; o.wr = true; o.burst = (i & 1); o.w = (W_CMD + i * 16);
			for (int k = 0; k < 16; k++) o.d.push_back(g.img[W_CMD + i * 16 + k]);
			o.gap = sr.u(4);
			if (!o.burst) {  // single-word writes (several ops)
				for (int k = 0; k < 16; k++) { Op s1 = wr16((W_CMD + i * 16 + k) * 2, o.d[k], sr.u(3)); T->m.q.push_back(s1); }
			} else T->m.q.push_back(o);
		}
	}
	T->m.reset();
	// reset sequence
	T->t->FAST = c.fast; T->t->BLUR_MESH = c.blur; T->t->DBG_EXT = 0; T->t->EN = 1;
	T->t->RST_N = 0; T->t->RES_N = 1;
	T->t->CE_R = 1; T->t->CE_F = 0; T->t->DCE_R = 0; T->t->DCE_F = 0; T->t->HTIM_N = 1; T->t->VTIM_N = 0; T->t->VOUTI = 0;
	T->t->CS_N = 1; T->t->AD_N = 1; T->t->DTEN_N = 1; T->t->REQ_N = 1; T->t->DI = 0;
	for (Side* s : {&a, &b}) { s->drive_regs(); }
	T->t->CLK = 0; T->t->eval(); a.drive_comb(); b.drive_comb(); T->t->eval();
	for (int i = 0; i < 8; i++) if (!cycle(false, true)) return false;
	if (!run_cycles(10)) return false;

	// program registers (queue goes after the optional command upload)
	auto& q = T->m.q;
	q.push_back(wr16(REG + 0x00, (u16)((c.vbe << 3) | c.tvm), sr.u(3)));
	q.push_back(wr16(REG + 0x02, (u16)((c.eos << 4) | (c.die << 3) | (c.dil << 2) | (c.fcm << 1) | c.fct), sr.u(3)));
	q.push_back(wr16(REG + 0x06, c.ewdr, sr.u(3)));
	q.push_back(wr16(REG + 0x08, c.ewlr, sr.u(3)));
	q.push_back(wr16(REG + 0x0A, c.ewrr, sr.u(3)));
	if (c.ptm == 2) q.push_back(wr16(REG + 0x04, 2, 2));
	else q.push_back(wr16(REG + 0x04, 1, 2));  // PTMR=1: start drawing now
	if (c.res_pulse) {}
	cov.tvm[c.tvm]++;

	// run until draw end (IRQ_N low) with background traffic
	u64 frame0 = (u64)(T->H_ACT + T->H_BLK) * (T->V_ACT + T->V_BLK) * c.dce_p;
	u64 limit = c.ptm == 2 ? frame0 * 5 : (c.big ? 3000000 : 1500000);
	u64 ran = 0;
	bool done = false;
	bool term = (c.id % 7 == 3);
	u64 bg_next = 200;
	while (ran < limit) {
		if (!cycle(true, !(c.id % 11 == 5 && ran >= 6000 && ran < 6004))) return false;   // soft reset pulse
		ran++;
		if (c.bg && T->m.q.empty() && T->m.st == Master::IDLE && ran > bg_next) {
			bg_next = ran + 50 + sr.u(500);
			int k = sr.u(10);
			if (k < 3) T->m.q.push_back(wr16((W_SCRATCH + sr.u(0x800)) * 2, (u16)sr.next(), sr.u(4)));
			else if (k < 5) T->m.q.push_back(rd16((W_SCRATCH + sr.u(0x800)) * 2, sr.u(4)));
			else if (k < 6) T->m.q.push_back(wr16(0x80000 + sr.u(0x40000) * 2 % 0x40000, (u16)sr.next(), sr.u(4)));
			else if (k < 8) T->m.q.push_back(rd16(0x80000 + (sr.u(0x20000) * 2), sr.u(4)));
			else T->m.q.push_back(rd16(REG + 0x10 + 2 * sr.u(4), sr.u(3)));
			if (sr.chance(10)) {  // burst write into scratch
				Op o; o.wr = true; o.burst = true; o.w = sr.chance(50) ? (u32)(W_SCRATCH + 0x900 + sr.u(0x100)) : (u32)(0x40000 + sr.u(0x1F000));
				int nb = sr.range(2, 8);
				for (int j = 0; j < nb; j++) o.d.push_back((u16)sr.next());
				o.gap = sr.u(4);
				T->m.q.push_back(o);
			}
		}
		if (term && ran == 3000) T->m.q.push_back(wr16(REG + 0x0C, 2, 0));
		if (term && ran > 20000) { done = true; break; }
		if (!a.irq_n.get() && T->m.idle() && ran > 400) { done = true; break; }
	}
#ifdef DBGST
	printf("  end: master st=%d cs_n=%d q=%zu rdy_n=%d VRAM_ST=%d CPU_VRAM_BUSY=%d VRAM_SEL=%d\n", (int)T->m.st, T->m.cs_n, T->m.q.size(), a.rdy_n.get(), (int)T->t->rootp->diff_top__DOT__u_r__DOT__VRAM_ST, (int)T->t->rootp->diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY, (int)T->t->rootp->diff_top__DOT__u_r__DOT__VRAM_SEL);
#endif
	g_nz = 0;
	for (int k = 0; k < 2; k++) for (u16 w : a.fb[k]) if (w) g_nz++;
	if (!compare_memories("draw end")) { T->failed = true; return false; }
	if (c.id < ppm_n) {
		char p[512];
		for (int k = 0; k < 2; k++) {
			snprintf(p, sizeof p, "%s/s%03d_fb%d_golden.ppm", outdir.c_str(), c.id, k); write_ppm(p, a.fb[k]);
			snprintf(p, sizeof p, "%s/s%03d_fb%d_new.ppm", outdir.c_str(), c.id, k); write_ppm(p, b.fb[k]);
		}
	}
	if (!done && c.ptm != 2) printf("note: scenario %d: no draw end within limit\n", c.id);
	// post-draw: read status registers and a few words; request frame change/erase; run display for a few frames
	for (int i = 0; i < 4; i++) T->m.q.push_back(rd16(REG + 0x10 + 2 * i, 1));
	if (c.fcm) {
		T->m.q.push_back(wr16(REG + 0x02, (u16)((c.eos << 4) | (c.die << 3) | (c.dil << 2) | (c.fcm << 1) | (c.fct ? 0 : 1)), 2));
		T->m.q.push_back(wr16(REG + 0x02, (u16)((c.eos << 4) | (c.die << 3) | (c.dil << 2) | (c.fcm << 1) | 1), 2));
	}
	for (int i = 0; i < 6; i++) T->m.q.push_back(rd16(0x80000 + sr.u(0x20000) * 2, 1));
	u64 frame = (u64)(T->H_ACT + T->H_BLK) * (T->V_ACT + T->V_BLK) * c.dce_p;
	if (!run_cycles(frame * c.frames_after + 2000)) return false;
	for (int i = 0; i < 4; i++) T->m.q.push_back(rd16(REG + 0x10 + 2 * i, 1));
	if (!run_cycles(frame + 500)) return false;
	if (!compare_memories("end of scenario")) { T->failed = true; return false; }
	cov.scenarios++;
	return true;
}

static Cfg make_cfg(int id, u64 seed_base) {
	Cfg c;
	c.id = id;
	c.seed = seed_base + (u64)id * 7919;
	Rng r(c.seed);
	// directed first scenarios: plain, gouraud-heavy, sprites only, polygons only
	switch (id % 8) {
		case 0: c.mix = 0; break;
		case 1: c.mix = 1; break;
		case 2: c.mix = 2; break;
		case 3: c.mix = 3; break;
		default: c.mix = r.chance(50) ? 0 : (int)r.u(4); break;
	}
	c.tvm = (id < 4) ? 0 : (int)r.u(4);
	if (id % 5 == 0) c.tvm = 0;
	c.fcm = r.chance(50); c.fct = r.chance(50);
	c.die = r.chance(25); c.dil = r.chance(50); c.eos = r.chance(30); c.vbe = r.chance(40);
	c.ptm = r.chance(25) ? 2 : 1;
	if (c.ptm == 2) c.fcm = 0;
	c.ewdr = r.chance(50) ? 0 : (u16)r.next();
	{
		int x1 = r.range(0, 24), y1 = r.range(0, 40), x3 = r.range(x1, 63) , y3 = r.range(y1, 120);
		c.ewlr = (u16)((x1 << 9) | y1); c.ewrr = (u16)((x3 << 9) | y3);
	}
	c.fast = r.chance(30); c.blur = r.chance(30);
	c.vlat = id % 3;
	c.fbrdy = (id % 7 == 6);
	c.dce_p = (id % 4 == 3) ? 6 : 4;
	c.bus_upload = r.chance(40);
	c.ncmd = r.range(6, 22);
	c.big = (id % 9 == 8);
	if (c.big) c.ncmd = r.range(4, 10);
	c.bg = !(id % 6 == 5);
	c.frames_after = 2;
	c.noinit = (id % 16 == 15);
	c.fbinit = (id % 5 != 4);
	return c;
}

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	int nscen = 40, ppm_n = 6, first = 0;
	u64 seed = 1;
	std::string outdir = "out";
	for (int i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--n") && i + 1 < argc) nscen = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--ppm") && i + 1 < argc) ppm_n = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--seed") && i + 1 < argc) seed = strtoull(argv[++i], 0, 0);
		else if (!strcmp(argv[i], "--first") && i + 1 < argc) first = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--show")) g_show = 1;
		else if (!strcmp(argv[i], "--dbg") && i + 1 < argc) g_dbg = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--dbgfb") && i + 1 < argc) g_dbgfb = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--out") && i + 1 < argc) outdir = argv[++i];
	}
	T = new Top();
	Vdiff_top* t = T->t;
	BINDSIDE(T->r, r); BINDSIDE(T->n, n);
	t->eval();
	bool ok = true;
	for (int i = first; i < first + nscen && ok; i++) {
		Cfg c = make_cfg(i, seed);
		T->tainted = false;
		ok = run_scenario(c, ppm_n, outdir);
		printf("scenario %3d  tvm=%d mix=%d ptm=%d cmds=%2d upload=%d vlat=%d  nz=%d  %s  (%llu clocks)\n", i, c.tvm, c.mix, c.ptm, c.ncmd, c.bus_upload,
		       c.vlat, g_nz, ok ? (T->tainted ? "match(tainted)" : "match") : "FAIL", (unsigned long long)T->cyc);
		if (T->tainted) T->n_tainted++;
		fflush(stdout);
	}
	printf("scenarios compared only up to an aborted gouraud window: %d\n", T->n_tainted);
	printf("compared %llu clock phases over %llu clocks, %llu scenarios\n", (unsigned long long)T->cmp_count, (unsigned long long)T->total_cyc,
	       (unsigned long long)cov.scenarios);
	printf("stimulus coverage: commands=%llu  by COMM:", (unsigned long long)cov.cmds);
	for (int i = 0; i < 16; i++) printf(" %x:%llu", i, (unsigned long long)cov.comm[i]);
	printf("\n  CM:"); for (int i = 0; i < 8; i++) printf(" %d:%llu", i, (unsigned long long)cov.cm[i]);
	printf("\n  CCB:"); for (int i = 0; i < 8; i++) printf(" %d:%llu", i, (unsigned long long)cov.ccb[i]);
	printf("\n  MON=%llu MESH=%llu SPD=%llu ECD=%llu CLIP=%llu CMOD=%llu PCLP=%llu HSS=%llu DIRX=%llu DIRY=%llu\n", (unsigned long long)cov.mon,
	       (unsigned long long)cov.mesh, (unsigned long long)cov.spd, (unsigned long long)cov.ecd, (unsigned long long)cov.clip, (unsigned long long)cov.cmod,
	       (unsigned long long)cov.pclp, (unsigned long long)cov.hss, (unsigned long long)cov.dirx, (unsigned long long)cov.diry);
	printf("  JP codes:"); for (int i = 0; i < 8; i++) printf(" %d:%llu", i, (unsigned long long)cov.jp[i]);
	printf("  TVM:"); for (int i = 0; i < 4; i++) printf(" %d:%llu", i, (unsigned long long)cov.tvm[i]);
	printf("\n  FB word writes=%llu VRAM writes=%llu reads=%llu bus ops=%llu\n", (unsigned long long)cov.fbw, (unsigned long long)cov.vrw,
	       (unsigned long long)cov.vrr, (unsigned long long)cov.busops);
	printf(ok ? "RESULT: PASS\n" : "RESULT: FAIL\n");
#if VM_COVERAGE
	Verilated::threadContextp()->coveragep()->write("coverage.dat");
#endif
	delete t;
	return ok ? 0 : 1;
}
