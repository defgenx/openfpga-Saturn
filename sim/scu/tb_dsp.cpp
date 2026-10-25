// Differential testbench for SCU_DSP alone: golden REF_SCU_DSP vs SCU_DSP, all outputs including
// the debug taps compared every half clock. Random DSP programs go through the control port, the
// DMA handshake is answered by a small SCU stand-in.  Usage: tb_dsp <seed> <cycles> [ce_mode]
#include "Vtb_dsp.h"
#include "verilated.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <vector>
#include "tb_dsp_names.h"
#include "tb_common.h"
static const int DMA_DO_BIT = 5;   // index of DMA_DO in tb_dsp_names.h

Rng rng(1);
static Vtb_dsp* d;
static uint64_t cyc = 0;

static void check(const char* w) {
	uint32_t mm = d->MM;
	if (!d->CE_F) mm &= ~(1u << DMA_DO_BIT);   // DMA_DO is only sampled in CE_F cycles
	if (!mm) return;
	printf("MISMATCH cycle %llu (%s):", (unsigned long long)cyc, w);
	for (int i = 0; i < 32; i++) if (mm >> i & 1) printf(" %s", OUT_NAMES[i]);
	printf("\nFAIL\n");
	exit(1);
}

struct PortOp { bool wr; int a; uint32_t data; int gap; };
static std::deque<PortOp> q;
static void pw(int a, uint32_t v) { q.push_back({true, a, v, (int)rng.below(3)}); }
static void pr(int a) { q.push_back({false, a, 0, (int)rng.below(3)}); }
static void pgap(int n) { q.push_back({false, -1, 0, n}); }
static uint32_t region_addr(int r) { return 0x2000000 + (r << 24) + rng.below(0x1000); }

static void scenario() {
	std::vector<uint32_t> prog = dsp_gen_program(region_addr);
	int len = prog.size() - 2;
	pw(0, 0x8000);
	for (uint32_t w : prog) pw(1, w);
	pw(2, rng.below(256));
	int nd = rng.range(2, 40);
	for (int i = 0; i < nd; i++) pw(3, rng.next());
	pw(0, 0x18000 | (rng.pct(70) ? 0 : rng.below(len)));
	int polls = rng.range(3, 12);
	for (int i = 0; i < polls; i++) {
		pgap(rng.range(2, 150));
		pr(0);
		if (rng.pct(15)) pw(0, rng.pct(50) ? 0x02000000 : 0x04000000);
		if (rng.pct(10)) pw(0, 0x20000);
		if (rng.pct(5)) pw(rng.below(4), rng.next());          // stray port write
	}
	pw(2, 0);
	for (int i = 0; i < 64; i++) pr(3);
	pr(0);
	if (rng.pct(30)) pw(0, 0x10000);
	for (int i = 0; i < 3; i++) { pgap(rng.range(20, 300)); pr(0); }
}

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	uint64_t seed = argc > 1 ? strtoull(argv[1], 0, 0) : 1;
	uint64_t ncyc = argc > 2 ? strtoull(argv[2], 0, 0) : 200000;
	int ce_mode = argc > 3 ? atoi(argv[3]) : (int)(seed % 3);
	rng = Rng(seed);
	d = new Vtb_dsp;
	d->RST_N = 0; d->RES_N = 1; d->CE = 0; d->CE_R = 0; d->CE_F = 0; d->A = 0; d->DI = 0; d->WE = 0; d->RE = 0;
	d->DMA_DI = 0; d->DMA_ACK = 0; d->DMA_END = 0;
	uint32_t pend_di = 0; bool have_di = false, last_ce_r = false;
	d->CLK = 0; d->eval(); check("init");
	d->CLK = 1; d->eval(); d->CLK = 0; d->eval(); check("reset");
	d->RST_N = 1;

	bool dsp_ce = false, clear_ack = false;
	int gap = 0, res_pending = 0;
	// DMA stand-in state
	int dma_delay = 0, end_cnt = 0; bool ack_pending = false, end_arm = false;
	uint64_t nlast = 0, nreq = 0, ndone = 0, nread = 0, resets = 0;
	int dma_lat = rng.range(0, 12), dma_end_len = rng.range(2, 14);
	for (cyc = 0; cyc < ncyc; cyc++) {
		bool ce_r, ce_f;
		switch (ce_mode) {
		case 0: ce_r = !(cyc & 1); ce_f = (cyc & 1); break;
		case 1: ce_r = (cyc & 3) == 0; ce_f = (cyc & 3) == 2; break;
		default: { uint32_t r = rng.below(4); ce_r = (r == 0) && !last_ce_r; ce_f = (r == 1); break; }   // as in the system, CE_R is never in two consecutive clks
		}
		d->CE_R = ce_r; d->CE_F = ce_f; last_ce_r = ce_r;
		d->CE = dsp_ce && ce_r;
		if (ce_r) dsp_ce = !dsp_ce;
		d->WE = 0; d->RE = 0;
		if (have_di) { d->DMA_DI = pend_di; have_di = false; }
		// DMA stand-in: ACK is set at CE_F and cleared at the next CE_R
		if (clear_ack) { d->DMA_ACK = 0; clear_ack = false; }
		if (ce_f && d->DMA_REQ && !d->DMA_ACK && d->DMA_RUN) {
			if (dma_delay-- <= 0) {
				d->DMA_ACK = 1; pend_di = rng.next(); have_di = true; dma_delay = dma_lat; nreq++;   // data follows the ACK by one clk, as the SCU's buffer push does
				if (rng.pct(15)) pend_di &= 0x0000FFFF;
				if (d->DMA_LAST) { end_arm = true; nlast++; }
			}
		}
		if (end_arm && !d->DMA_ACK && !d->DMA_REQ) { d->DMA_END = 1; end_cnt = dma_end_len; end_arm = false; }
		if (d->DMA_END && ce_r && end_cnt-- <= 0) { d->DMA_END = 0; ndone++; }
		if (!d->DMA_RUN && !d->DMA_END) end_arm = false;
		// port accesses
		if (res_pending > 0) { d->RES_N = 0; res_pending--; resets++; } else d->RES_N = 1;
		if (gap > 0) { if (ce_r) gap--; }
		else if (q.empty()) { if (ce_r) scenario(); }
		else {
			PortOp& p = q.front();
			if (p.a < 0) { gap = p.gap; q.pop_front(); }
			else if (p.wr && ce_r) { d->A = p.a; d->DI = p.data; d->WE = 1; gap = p.gap; q.pop_front(); }
			else if (!p.wr && ce_f) { d->A = p.a; d->RE = 1; gap = p.gap; q.pop_front(); nread++; }
		}
		if (ce_r && rng.below(40000) == 0) res_pending = rng.range(2, 20);
		d->CLK = 0; d->eval(); check("clk0");
		d->CLK = 1; d->eval(); check("clk1");
		if (ce_r && d->DMA_ACK) clear_ack = true;
	}
	printf("PASS dsp seed=%llu cycles=%llu ce_mode=%d dma_last=%llu dma_ack=%llu dma_end=%llu reads=%llu resets=%llu\n",
	       (unsigned long long)seed, (unsigned long long)ncyc, ce_mode, (unsigned long long)nlast, (unsigned long long)nreq,
	       (unsigned long long)ndone, (unsigned long long)nread, (unsigned long long)resets);
	d->final();
	delete d;
	return 0;
}
