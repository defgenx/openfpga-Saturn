// Differential testbench: golden SCU (REF_SCU) vs the SCU under test, same inputs, every output
// compared every half clock. Stimulus: SH-2 side register/A-bus/B-bus accesses, DMA (all levels,
// direct and indirect), timers, interrupts, DSP programs. A/B/C bus memory models answer from the
// golden outputs. Usage: tb_scu <seed> <cycles> [ce_mode 0..2] [fast 0/1]
#include "Vtb_scu.h"
#include "verilated.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <string>
#include <unordered_map>
#include <vector>
#include "tb_scu_names.h"

#include "tb_common.h"

Rng rng(1);
static Vtb_scu* d;
static uint64_t cyc = 0;
static uint64_t mism = 0;
static bool quiet_fail = false;

static uint32_t hash32(uint32_t x) {
	x ^= x >> 16; x *= 0x7feb352dU; x ^= x >> 15; x *= 0x846ca68bU; x ^= x >> 16; return x;
}

struct Mem {
	std::unordered_map<uint32_t, uint32_t> m;
	uint32_t salt;
	uint32_t rd(uint32_t k) { auto it = m.find(k); return it != m.end() ? it->second : hash32(k ^ salt); }
	void wr(uint32_t k, uint32_t v) { m[k] = v; }
};
static Mem mem_a, mem_b, mem_c;

#ifdef DBGSTATE
#include "Vtb_scu___024root.h"
static void dump_state() {
	auto* r = d->rootp;
	printf("REF: st=%d wpos=%d rpos=%d size=%d rba=%d dsp=%d ind=%d buf=", r->tb_scu__DOT__ref_i__DOT__DMA_ST, r->tb_scu__DOT__ref_i__DOT__DMA_BUF_WPOS, r->tb_scu__DOT__ref_i__DOT__DMA_BUF_RPOS, r->tb_scu__DOT__ref_i__DOT__DMA_BUF_SIZE, r->tb_scu__DOT__ref_i__DOT__unnamedblk2__DOT__DMA_RBA, r->tb_scu__DOT__ref_i__DOT__unnamedblk2__DOT__DMA_DSP, r->tb_scu__DOT__ref_i__DOT__DMA_IND);
	for (int i = 0; i < 8; i++) printf("%02x ", r->tb_scu__DOT__ref_i__DOT__DMA_BUF[i]);
	printf("\nDUT: st=%d wpos=%d rpos=%d size=%d rba=%d dsp=%d ind=%d buf=", r->tb_scu__DOT__dut_i__DOT__DMA_ST, r->tb_scu__DOT__dut_i__DOT__DMA_BUF_WPOS, r->tb_scu__DOT__dut_i__DOT__DMA_BUF_RPOS, r->tb_scu__DOT__dut_i__DOT__DMA_BUF_SIZE, r->tb_scu__DOT__dut_i__DOT__DMA_RBA, r->tb_scu__DOT__dut_i__DOT__unnamedblk4__DOT__DMA_DSP, r->tb_scu__DOT__dut_i__DOT__DMA_IND);
	for (int i = 0; i < 8; i++) printf("%02x ", r->tb_scu__DOT__dut_i__DOT__DMA_BUF[i]);
	printf("\n");
}
#endif
static void fail(const char* what) {
#ifdef DBGSTATE
	dump_state();
#endif
	uint32_t mm = d->MM;
	printf("MISMATCH cycle %llu (%s):", (unsigned long long)cyc, what);
	for (int i = 0; i < 32; i++) if (mm >> i & 1) printf(" %s", OUT_NAMES[i]);
	printf("\n");
	printf("FAIL\n");
	exit(1);
}
static inline void check(const char* w) { if (d->MM) fail(w); }

// ---------------------------------------------------------------- CPU (SH-2 side) model
struct Op {
	enum Kind { WR, RD, IVEC, GAP } kind;
	uint32_t ca = 0;       // 25-bit bus address
	int cs = 2;            // 1: CCS1_N, 2: CCS2_N
	uint32_t data = 0;
	uint8_t dqm = 0;       // active-low byte enables for writes
	int hold = 3;          // minimum CE_R ticks before the wait is honoured
	int gap = 0;           // for GAP: ticks
};
static std::deque<Op> opq;
static std::vector<uint32_t> rdlog;
static int cpu_state = 0;       // 0 idle, 1 access, 2 gap
static Op cur;
static int cpu_ticks = 0;
static uint64_t ops_done = 0, ivec_done = 0, stall_resets = 0;
static int res_pending = 0;

static void cpu_release() {
	d->CCS1_N = 1; d->CCS2_N = 1; d->CRD_N = 1; d->CRD_WR_N = 1; d->CDQM_N = 0xF; d->CIVECF_N = 1;
}
static void cpu_tick(uint8_t cwait_n, uint32_t cdo) {
	switch (cpu_state) {
	case 0:
		if (opq.empty()) return;
		cur = opq.front(); opq.pop_front();
		cpu_ticks = 0;
		if (cur.kind == Op::GAP) { cpu_state = 2; cpu_ticks = cur.gap; return; }
		d->CA = cur.ca; d->CDI = cur.data;
		d->CCS1_N = 1; d->CCS2_N = 1; d->CIVECF_N = 1;
		if (cur.kind == Op::IVEC) { d->CIVECF_N = 0; d->CRD_N = 0; d->CRD_WR_N = 1; d->CDQM_N = 0xF; }
		else if (cur.kind == Op::RD) {
			if (cur.cs == 1) d->CCS1_N = 0; else d->CCS2_N = 0;
			d->CRD_N = 0; d->CRD_WR_N = 1; d->CDQM_N = 0xF;
		} else {
			if (cur.cs == 1) d->CCS1_N = 0; else d->CCS2_N = 0;
			d->CRD_N = 1; d->CRD_WR_N = 0; d->CDQM_N = cur.dqm;
		}
		cpu_state = 1;
		break;
	case 1:
		cpu_ticks++;
		if (cpu_ticks > 12000) {            // wait never released: system reset, drop the rest of the script
			stall_resets++; res_pending = 12; opq.clear(); cpu_release(); cpu_state = 2; cpu_ticks = 20;
		} else if (cpu_ticks >= cur.hold && cwait_n) {
			if (cur.kind != Op::WR) rdlog.push_back(cdo);
			if (cur.kind == Op::IVEC) ivec_done++;
			ops_done++;
			cpu_release();
			cpu_state = 2; cpu_ticks = rng.pct(40) ? 0 : rng.below(5);
		}
		break;
	case 2:
		if (cpu_ticks-- <= 0) cpu_state = 0;
		break;
	}
}

// ---------------------------------------------------------------- memory/bus models
struct BusModels {
	// A-bus
	int a_wait = 0; uint8_t aas_old = 1;
	// B-bus
	uint32_t b_hi = 0, b_lo = 0, b_addr = 0; int b_cs = 0; uint8_t b_rdy[3] = {1, 1, 1};
	int b_rdy_pct = 60;
	// C-bus
	int c_wait_pct = 20; uint8_t c_wait = 1;
	int a_wait_max = 4;
	// bus grant
	int ack_cnt = 0;
	// video / event generators
	int line_len = 150, hbl_len = 6, vbl_lines = 8, lines_per_frame = 20;
	int line_pos = 0, line_no = 0;
	int ev_rate = 400;
	int ev_cnt[5] = {0, 0, 0, 0, 0};
	int ev_len[5] = {0, 0, 0, 0, 0};
} bm;

static uint32_t a_key(uint32_t aa) { return (aa >> 1) & 0x1FFFFFF; }

static void models_tick(bool ce_r) {
	// ---- A-bus
	bool acs = !d->ACS0_N || !d->ACS1_N || !d->ACS2_N;
	uint32_t aa = d->AA;
	if (acs && bm.aas_old && !d->AAS_N) { /* never */ }
	if (acs && !d->AAS_N && ce_r) bm.a_wait = rng.below(bm.a_wait_max);
	if (acs && ce_r && bm.a_wait > 0) bm.a_wait--;
	d->AWAIT_N = !(acs && bm.a_wait > 0);
	d->ADI = mem_a.rd(a_key(aa)) & 0xFFFF;
	if (acs && ce_r && (!d->AWRL_N || !d->AWRU_N)) {
		uint32_t k = a_key(aa), v = mem_a.rd(k);
		if (!d->AWRU_N) v = (v & 0x00FF) | (d->ADO & 0xFF00);
		if (!d->AWRL_N) v = (v & 0xFF00) | (d->ADO & 0x00FF);
		mem_a.wr(k, v & 0xFFFF);
	}
	d->AIRQ_N = rng.pct(98);
	// ---- B-bus
	bool bcs = !d->BCS1_N || !d->BCS2_N || !d->BCSS_N;
	int cs = !d->BCSS_N ? 1 : !d->BCS1_N ? 2 : !d->BCS2_N ? 3 : 0;
	if (ce_r) {
		for (int i = 0; i < 3; i++) if (rng.pct(30)) bm.b_rdy[i] = rng.pct(bm.b_rdy_pct);
		if (bcs && d->BADDT_N) {
			if (!(d->BDO & 0x8000)) bm.b_hi = d->BDO & 0xFFF;
			else { bm.b_lo = d->BDO & 0xFF; bm.b_addr = (bm.b_hi << 8) | bm.b_lo; bm.b_cs = cs; }
		}
	}
	uint32_t bkey = (bm.b_cs << 21) | (bm.b_addr & 0x1FFFFF);
	d->BDI = mem_b.rd(bkey) & 0xFFFF;
	// consume on a ready tick of a data phase
	if (ce_r && bcs && !d->BADDT_N) {
		bool rdy = (cs == 1 && !d->BRDYS_N) || (cs == 2 && !d->BRDY1_N) || (cs == 3 && !d->BRDY2_N);
		if (rdy) {
			if (!d->BDTEN_N) mem_b.wr(bkey, d->BDO);
			bm.b_addr = (bm.b_addr + 1) & 0x1FFFFF;
		}
	}
	d->BRDY1_N = bm.b_rdy[0] ? 0 : 1;
	d->BRDY2_N = bm.b_rdy[1] ? 0 : 1;
	d->BRDYS_N = bm.b_rdy[2] ? 0 : 1;
	// ---- C-bus (ECDI follows the registered address)
	if (ce_r && rng.pct(30)) bm.c_wait = !rng.pct(bm.c_wait_pct);
	d->ECWAIT_N = bm.c_wait;
	uint32_t ck = (d->ECA >> 2);
	d->ECDI = mem_c.rd(ck);
	if (ce_r && !d->ECCS3_N && d->ECDQM_N != 0xF && bm.c_wait) {
		uint32_t v = mem_c.rd(ck), q = d->ECDQM_N, o = d->ECDO;
		for (int b = 0; b < 4; b++) if (!((q >> (3 - b)) & 1)) {
			uint32_t m = 0xFFu << (8 * (3 - b)); v = (v & ~m) | (o & m);
		}
		mem_c.wr(ck, v);
	}
	// ---- C-bus grant
	if (!d->CBREQ_N) { if (bm.ack_cnt++ > (int)(rng.below(8) + 2)) d->CBACK_N = 0; }
	else { bm.ack_cnt = 0; d->CBACK_N = 1; }
	// ---- video timing: HBL pulse per line, VBL for some lines
	bm.line_pos++;
	if (bm.line_pos >= bm.line_len) { bm.line_pos = 0; bm.line_no = (bm.line_no + 1) % bm.lines_per_frame; }
	d->IRQH_N = !(bm.line_pos < bm.hbl_len);
	d->IRQV_N = !(bm.line_no < bm.vbl_lines);
	// ---- random event pulses: VDP1 end, SCSP, pad, SMPC
	uint8_t* evp[4] = {&d->IRQ1_N, &d->IRQS_N, &d->IRQL_N, &d->MIREQ_N};
	for (int i = 0; i < 4; i++) {
		if (bm.ev_len[i] > 0) { bm.ev_len[i]--; *evp[i] = 0; }
		else {
			*evp[i] = 1;
			if (bm.ev_rate && rng.below(bm.ev_rate) == 0) bm.ev_len[i] = rng.range(1, 12);
		}
	}
}

// ---------------------------------------------------------------- stimulus helpers
static const uint32_t REGB = 0x1FE0000;
static void wreg(uint32_t off, uint32_t v, uint8_t dqm = 0, int hold = -1) {
	Op o; o.kind = Op::WR; o.ca = REGB + off; o.cs = 2; o.data = v; o.dqm = dqm; o.hold = hold < 0 ? (int)rng.range(2, 5) : hold;
	opq.push_back(o);
}
static void rreg(uint32_t off, int hold = -1) {
	Op o; o.kind = Op::RD; o.ca = REGB + off; o.cs = 2; o.hold = hold < 0 ? (int)rng.range(2, 5) : hold;
	opq.push_back(o);
}
static void gap(int n) { Op o; o.kind = Op::GAP; o.gap = n; opq.push_back(o); }
static void ivec(uint32_t lvl) { Op o; o.kind = Op::IVEC; o.ca = lvl & 15; o.hold = rng.range(3, 6); opq.push_back(o); }
static void cpu_bus(bool wr, uint32_t addr) {
	// addr: 27-bit physical offset of 0x02000000.. region (A-bus 0x2000000-0x58FFFFF, B-bus 0x5A00000-0x5FDFFFF)
	Op o; o.kind = wr ? Op::WR : Op::RD; o.ca = addr & 0x1FFFFFF; o.cs = (addr >> 24) >= 4 ? 2 : (((addr >> 24) & 2) ? 1 : 1);
	// physical A-bus CS0 (0x2000000..0x3FFFFFF) -> CCS1_N, CS1/2 (0x4000000..) -> CCS2_N; B-bus -> CCS2_N
	uint32_t top = addr >> 24;
	o.cs = (top == 2 || top == 3) ? 1 : 2;
	o.ca = addr & 0x1FFFFFF;
	o.data = rng.next();
	static const uint8_t dq[] = {0x0, 0x0, 0x0, 0x3, 0xC, 0x7, 0xE, 0xB, 0xD, 0x1, 0x2, 0x4, 0x8};
	o.dqm = dq[rng.below(sizeof dq)];
	o.hold = rng.range(2, 6);
	opq.push_back(o);
}

static uint32_t rnd_region_addr(int region) {  // physical address in region: 0 A, 1 B, 2 C
	switch (region) {
	case 0: { uint32_t base[] = {0x2000000, 0x2100000, 0x2400000, 0x4000000, 0x5000000, 0x5800000};
	          return base[rng.below(6)] + rng.below(0x200); }
	case 1: { uint32_t base[] = {0x5A00000, 0x5A80000, 0x5C00000, 0x5E00000, 0x5C80000, 0x5F00000};
	          return base[rng.below(6)] + (rng.below(0x400) & ~0u) + (rng.pct(10) ? 0x7F0 : 0); }
	default: { return 0x6000000 + (rng.pct(30) ? 0x3F0 : rng.below(0x100000) & 0xFFFFC0) + rng.below(0x40); }
	}
}

static const uint32_t ADD_MASK = 0x107;

struct DmaCfg {
	int level; uint32_t r, w, c; int dra, dwa; bool ind, rup, wup; int ft;
};

static uint32_t tbl_poke_b(uint32_t addr, uint32_t v) {
	// B-bus table word (long) at physical addr -> two halfwords
	uint32_t cs = (addr >> 21) & 3, h = (addr >> 1) & 0xFFFFF;
	uint32_t key = (cs << 21) | h;
	mem_b.wr(key, v >> 16); mem_b.wr(key + 1, v & 0xFFFF);
	return 0;
}
static void tbl_poke(uint32_t addr, uint32_t v) {
	if ((addr >> 24) == 6) mem_c.wr((addr & 0x1FFFFFF) >> 2, v);
	else tbl_poke_b(addr, v);
}

static void dma_program(const DmaCfg& c, bool start = true) {
	uint32_t o = 0x20 * c.level;
	wreg(o + 0x00, c.r); wreg(o + 0x04, c.w); wreg(o + 0x08, c.c);
	wreg(o + 0x0C, (c.dra << 8) | c.dwa);
	wreg(o + 0x14, ((c.ind ? 1 : 0) << 24) | ((c.rup ? 1 : 0) << 16) | ((c.wup ? 1 : 0) << 8) | c.ft);
	if (start) wreg(o + 0x10, c.ft == 7 ? 0x101 : 0x100);
}

static void scen_dma(bool force_ind = false) {
	DmaCfg c;
	c.level = rng.below(3);
	int sr = rng.below(3), dr = rng.below(3);
	if (rng.pct(90)) while (sr == dr) dr = rng.below(3);
	c.r = rnd_region_addr(sr); c.w = rnd_region_addr(dr);
	if (rng.pct(10)) { c.r &= ~3u; c.w &= ~3u; }
	if (rng.pct(5)) c.r = 0x2000000 + 0x58FFFF0 - 0x2000000 + rng.below(0x10);  // near A-bus top
	c.c = rng.pct(10) ? rng.range(1, 6) : rng.pct(80) ? rng.range(1, 80) : rng.range(80, 600);
	c.dra = rng.pct(75) ? 1 : 0;
	c.dwa = rng.pct(60) ? 1 : (rng.pct(30) ? rng.below(8) : 0);
	c.rup = rng.pct(50); c.wup = rng.pct(50);
	c.ind = force_ind || rng.pct(20);
	c.ft = rng.pct(70) ? 7 : rng.below(7);
	if (c.level == 0 && rng.pct(5)) c.c |= (rng.below(16) << 16);
	if (c.ind) {
		// descriptor table in B-bus (VDP2/SCSP RAM) or C-bus work RAM
		bool in_b = rng.pct(35);
		uint32_t tb = in_b ? (0x5A00000 + (rng.below(0x100) << 4)) : (0x6000000 + (rng.below(0x1000) << 4));
		int n = rng.range(1, 4);
		for (int i = 0; i < n; i++) {
			uint32_t cnt = rng.pct(20) ? rng.range(1, 6) : rng.range(1, 90);
			uint32_t ra = rnd_region_addr(rng.below(3)), wa = rnd_region_addr(rng.below(3));
			if (rng.pct(85)) { // keep read/write on different buses
				int a = rng.below(3), b = rng.below(3); while (b == a) b = rng.below(3);
				ra = rnd_region_addr(a); wa = rnd_region_addr(b);
			}
			if (c.level) cnt &= 0xFFF;
			tbl_poke(tb + 12 * i + 0, cnt); tbl_poke(tb + 12 * i + 4, wa);
			tbl_poke(tb + 12 * i + 8, ra | (i == n - 1 ? 0x80000000u : 0));
		}
		c.w = tb;
	}
	dma_program(c);
	int polls = rng.range(2, 8);
	for (int i = 0; i < polls; i++) {
		gap(rng.range(5, 120));
		if (rng.pct(60)) rreg(0x7C);
		if (rng.pct(30)) rreg(0x20 * c.level + 0x00 + 4 * rng.below(3));
		if (rng.pct(20)) cpu_bus(rng.pct(40), rnd_region_addr(rng.below(2)));
	}
	if (rng.pct(10)) wreg(0x60, 1);   // DSTP
	if (rng.pct(30)) { gap(rng.range(100, 800)); rreg(0x7C); }
	gap(rng.range(50, 400));
	rreg(0xA4);
	if (rng.pct(60)) wreg(0xA4, rng.pct(50) ? 0 : (rng.next() | 0xFFFF0000u));
}

static void scen_multi() {
	// 2-3 levels started back to back; levels use different regions
	int n = rng.range(2, 3);
	DmaCfg cs[3];
	for (int i = 0; i < n; i++) {
		DmaCfg& c = cs[i];
		c.level = i;
		int sr = rng.below(3), dr = (sr + 1 + rng.below(2)) % 3;
		c.r = rnd_region_addr(sr); c.w = rnd_region_addr(dr);
		c.c = rng.range(1, 60); c.dra = 1; c.dwa = rng.pct(70) ? 1 : rng.below(8);
		c.rup = rng.pct(50); c.wup = rng.pct(50); c.ind = false; c.ft = 7;
		dma_program(c, false);
	}
	std::vector<int> order = {0, 1, 2};
	for (int i = 2; i > 0; i--) std::swap(order[i], order[rng.below(i + 1)]);
	for (int i : order) if (i < n) wreg(0x20 * i + 0x10, 0x101, 0, 2);
	for (int i = 0; i < 6; i++) { gap(rng.range(10, 150)); rreg(0x7C); }
}

static void scen_timers() {
	wreg(0x90, rng.below(4) ? rng.below(24) : rng.below(1024));       // T0C
	wreg(0x94, rng.pct(70) ? rng.below(40) : rng.below(512));        // T1S
	wreg(0x98, (rng.below(2) << 8) | (rng.pct(85) ? 1 : 0));         // T1MD
	for (int i = 0; i < 4; i++) { gap(rng.range(50, 600)); rreg(0xA4); }
}

static void scen_irq() {
	// masks, status clear, vector fetch
	wreg(0xA0, rng.pct(50) ? 0 : rng.next() & 0xBFFF, rng.pct(70) ? 0 : rng.below(16));
	int n = rng.range(3, 10);
	for (int i = 0; i < n; i++) {
		gap(rng.range(10, 300));
		int k = rng.below(5);
		if (k == 0) wreg(0xA4, rng.next(), rng.pct(70) ? 0 : rng.below(16));
		else if (k == 1) wreg(0xA4, ~(1u << rng.below(14)));
		else if (k == 2) rreg(0xA4);
		else if (k == 3) { rreg(0xA4); }
		else ivec(rng.below(16));
		if (rng.pct(40)) ivec(0x2 + rng.below(14));
	}
}

// DSP programs --------------------------------------------------------------------------
static void scen_dsp() {
	// reset DSP / DMA state first
	std::vector<uint32_t> prog = dsp_gen_program(rnd_region_addr);
	int len = prog.size() - 2;
	// load: PC = 0 via LE, then PPD writes
	wreg(0x80, 0x00008000 | 0, 0, 2);
	for (uint32_t w : prog) wreg(0x84, w, 0, 2);
	// data RAM init: a few words
	wreg(0x88, rng.below(256), 0, 2);
	int nd = rng.range(2, 16);
	for (int i = 0; i < nd; i++) wreg(0x8C, rng.next(), 0, 2);
	// set PC, run
	wreg(0x80, 0x00018000 | (rng.pct(70) ? 0 : rng.below(len)), 0, 2);
	int polls = rng.range(3, 10);
	for (int i = 0; i < polls; i++) {
		gap(rng.range(5, 200));
		rreg(0x80);
		if (rng.pct(15)) wreg(0x80, rng.pct(50) ? 0x02000000 : 0x04000000, 0, 2);   // pause / resume
		if (rng.pct(10)) wreg(0x80, 0x00020000, 0, 2);                               // step
		if (rng.pct(10)) cpu_bus(rng.pct(50), rnd_region_addr(rng.below(2)));
	}
	// read back data RAM
	wreg(0x88, 0, 0, 2);
	for (int i = 0; i < 8; i++) rreg(0x8C);
	wreg(0x88, 0x40 + rng.below(32), 0, 2);
	for (int i = 0; i < 4; i++) rreg(0x8C);
	rreg(0x80); rreg(0x7C);
	if (rng.pct(30)) wreg(0x80, 0x00010000, 0, 2);   // toggle EX
	for (int i = 0; i < 3; i++) { gap(rng.range(20, 300)); rreg(0x80); }
}

static void scen_abus() {
	// wait-state / refresh configuration followed by CPU A-bus and B-bus traffic
	wreg(0xB0, rng.pct(50) ? (rng.next() & 0x00FF00FF) : rng.next());   // ASR0
	wreg(0xB4, rng.next());                                              // ASR1
	wreg(0xB8, rng.pct(40) ? 0 : (rng.below(2) << 4) | rng.below(16));   // AREF
	int n = rng.range(6, 30);
	for (int i = 0; i < n; i++) {
		cpu_bus(rng.pct(50), rnd_region_addr(rng.pct(70) ? 0 : 1));
		if (rng.pct(30)) gap(rng.range(1, 30));
	}
	wreg(0xB8, rng.below(32));
	for (int i = 0; i < 10; i++) cpu_bus(rng.pct(50), rnd_region_addr(0));
	rreg(0xB0); rreg(0xB4);
}

static void scen_misc() {
	int n = rng.range(4, 14);
	for (int i = 0; i < n; i++) {
		int k = rng.below(10);
		if (k < 3) cpu_bus(rng.pct(50), rnd_region_addr(0));
		else if (k < 6) cpu_bus(rng.pct(50), rnd_region_addr(1));
		else if (k < 8) { uint32_t off = (rng.below(0x34) << 2); if (rng.pct(50)) wreg(off < 0x60 ? off : 0xB0, rng.next(), rng.pct(70) ? 0 : rng.below(16)); else rreg(off); }
		else if (k == 8) { uint32_t o[] = {0xB0, 0xB4, 0xB8, 0xC4, 0xC8, 0x7C, 0xA4, 0x00, 0x04, 0x08, 0x20, 0x28, 0x48, 0x90, 0x9C, 0xD0}; if (rng.pct(50)) wreg(o[rng.below(16)], rng.next() & 0x3FFFF, rng.pct(70) ? 0 : rng.below(16)); else rreg(o[rng.below(16)]); }
		else gap(rng.range(1, 40));
	}
}

static void gen_scenario(uint64_t cycles_left) {
	(void)cycles_left;
	int k = rng.below(100);
	if (k < 28) scen_dma();
	else if (k < 36) scen_dma(true);
	else if (k < 44) scen_multi();
	else if (k < 54) scen_timers();
	else if (k < 64) scen_irq();
	else if (k < 80) scen_dsp();
	else if (k < 90) scen_abus();
	else scen_misc();
	if (rng.pct(4)) res_pending = rng.range(3, 40);   // system reset pulse
}

// ---------------------------------------------------------------- main loop
int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	uint64_t seed = argc > 1 ? strtoull(argv[1], 0, 0) : 1;
	uint64_t ncyc = argc > 2 ? strtoull(argv[2], 0, 0) : 200000;
	int ce_mode = argc > 3 ? atoi(argv[3]) : (int)(seed % 3);
	int fast = argc > 4 ? atoi(argv[4]) : (int)((seed >> 2) & 1);
	rng = Rng(seed);
	mem_a.salt = rng.next(); mem_b.salt = rng.next(); mem_c.salt = rng.next();
	bm.line_len = rng.range(60, 400); bm.hbl_len = rng.range(2, 12); bm.vbl_lines = rng.range(2, 8);
	bm.lines_per_frame = bm.vbl_lines + rng.range(4, 24);
	bm.ev_rate = rng.pct(20) ? 0 : rng.range(150, 3000);
	bm.b_rdy_pct = rng.range(30, 100); bm.c_wait_pct = rng.range(0, 50); bm.a_wait_max = rng.range(1, 6);

	d = new Vtb_scu;
	// initial inputs
	d->RST_N = 0; d->RES_N = 1; d->CE_R = 0; d->CE_F = 0; d->CA = 0; d->CDI = 0;
	cpu_release(); d->CCS3_N = 1; d->CBACK_N = 1; d->ECDI = 0; d->ECWAIT_N = 1; d->ADI = 0; d->AWAIT_N = 1;
	d->AIRQ_N = 1; d->BDI = 0; d->BRDY1_N = 1; d->IRQ1_N = 1; d->BRDY2_N = 1; d->IRQV_N = 1; d->IRQH_N = 1;
	d->IRQL_N = 1; d->BRDYS_N = 1; d->IRQS_N = 1; d->MIREQ_N = 1; d->FAST = fast;
	d->CLK = 0; d->eval(); check("init");
	d->CLK = 1; d->eval(); d->CLK = 0; d->eval(); check("reset");
	d->RST_N = 1;

	int res_cnt = 0;
	if (rng.pct(70)) wreg(0xA0, 0);                          // unmask all interrupts
	if (rng.pct(50)) { wreg(0x94, rng.below(30)); wreg(0x98, rng.pct(50) ? 0x101 : 1); wreg(0x90, rng.below(30)); }
	uint64_t idle_cycles = 0;
	for (cyc = 0; cyc < ncyc; cyc++) {
		// clock enables
		bool ce_r, ce_f;
		switch (ce_mode) {
		case 0: ce_r = !(cyc & 1); ce_f = (cyc & 1); break;
		case 1: ce_r = (cyc & 3) == 0; ce_f = (cyc & 3) == 2; break;
		default: { uint32_t r = rng.below(4); ce_r = (r == 0); ce_f = (r == 1); break; }
		}
		d->CE_R = ce_r; d->CE_F = ce_f;
		models_tick(ce_r);
		if (ce_r) {
			cpu_tick(d->CWAIT_N, d->CDO);
			if (cpu_state == 0 && opq.empty()) {
				uint32_t lvl = (~d->CIRL_N) & 15;
				if (lvl && rng.pct(60)) ivec(lvl);
				else gen_scenario(ncyc - cyc);
			}
		}
		// resets
		if (res_pending > 0) { d->RES_N = 0; res_pending--; res_cnt++; }
		else d->RES_N = 1;
		d->CLK = 0; d->eval(); check("clk0");
		d->CLK = 1; d->eval(); check("clk1");
		if (rng.below(1000) == 0 && 0) idle_cycles++;
	}
	printf("PASS seed=%llu cycles=%llu ce_mode=%d fast=%d cpu_ops=%llu ivec=%llu resets=%d stalls=%llu rdlog=%zu\n",
	       (unsigned long long)seed, (unsigned long long)ncyc, ce_mode, fast,
	       (unsigned long long)ops_done, (unsigned long long)ivec_done, res_cnt, (unsigned long long)stall_resets, rdlog.size());
	d->final();
#if VM_COVERAGE
	Verilated::threadContextp()->coveragep()->write("coverage.dat");
#endif
	delete d;
	return 0;
}
