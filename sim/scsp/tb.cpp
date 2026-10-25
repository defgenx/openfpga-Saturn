// Lock-step differential test: REF_SCSP (golden) against the shrunk SCSP.
// Every output of both is compared on every clock. Stimulus goes through the
// 68K bus and the SCU B-bus; both DUTs get identical inputs and their own
// sound RAM model.
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <vector>
#include <cmath>
#include "Vtb_top.h"
#ifdef DBGINT
#include "Vtb_top___024root.h"
#endif
#include "verilated.h"

typedef Vtb_top T;

struct Rng {
	uint64_t s;
	explicit Rng(uint64_t seed) : s(seed * 0x9E3779B97F4A7C15ull + 0x1234567ull) {}
	uint32_t next() {
		s ^= s << 13; s ^= s >> 7; s ^= s << 17;
		return (uint32_t)(s >> 16);
	}
	uint32_t below(uint32_t n) { return n ? next() % n : 0; }
	bool chance(uint32_t pct) { return below(100) < pct; }
	uint32_t range(uint32_t lo, uint32_t hi) { return lo + below(hi - lo + 1); }
};

// Sound RAM: 256K words; read data appears LAT clocks after RD&CS and is held.
struct SoundRam {
	static const int LAT = 4;
	std::vector<uint16_t> mem;
	uint16_t q = 0;
	uint32_t pipe[LAT];
	SoundRam() : mem(1 << 18, 0) { memset(pipe, 0, sizeof pipe); }
	void step(uint32_t a, uint16_t d, int we, int rd, int cs) {
		if (cs && we) {
			uint16_t &w = mem[a & 0x3FFFF];
			if (we & 1) w = (w & 0xFF00) | (d & 0x00FF);
			if (we & 2) w = (w & 0x00FF) | (d & 0xFF00);
		}
		uint32_t in = (cs && rd) ? (0x10000u | mem[a & 0x3FFFF]) : 0;
		uint32_t out = pipe[LAT - 1];
		for (int i = LAT - 1; i > 0; i--) pipe[i] = pipe[i - 1];
		pipe[0] = in;
		if (out & 0x10000u) q = out & 0xFFFF;
	}
};

struct Op68 { uint32_t addr; uint16_t data; bool wr; uint8_t be; };
struct OpScu { bool wr; uint32_t a; std::vector<uint16_t> d; uint8_t dqm; };

static Rng *R;
// Register accesses are not started within this many sample periods after RES_N
// rises: the slot RAMs are still being cleared (docs/scsp.md).
static const int RESET_QUIET = 3;
static bool nomidi = false;  // MIDI buffer registers (0x404, 0x406) are not read back
static T *top;
static SoundRam ram_r, ram_n;
static uint64_t clk_count = 0, ce_count = 0, mismatches = 0;
static uint64_t st_irq = 0, st_ramw = 0, st_ramr = 0, st_nonzero = 0, st_dtack = 0, st_rdy = 0, st_avec = 0;

// ---- 68K bus agent ----
struct Bus68 {
	std::deque<Op68> q;
	int st = 0, wait = 0, ds_delay = 0;
	Op68 cur;
	uint64_t timeout = 0;
	uint64_t done = 0;
	bool idle() const { return q.empty() && st == 0; }
	void step() {
		bool dtack_n = top->R_SCDTACK_N;
		switch (st) {
		case 0:
			top->SCAS_N = 1; top->SCLDS_N = 1; top->SCUDS_N = 1;
			if (wait) { wait--; break; }
			if (!q.empty()) {
				cur = q.front(); q.pop_front();
				top->SCA = (cur.addr >> 1) & 0x7FFFFF;
				top->SCFC = R->chance(50) ? 5 : 6;
				top->SCRW_N = !cur.wr;
				top->SCDI = cur.data;
				top->SCAS_N = 0;
				ds_delay = R->chance(30) ? R->range(1, 3) : 0;
				if (ds_delay == 0) {
					uint8_t be = cur.wr ? cur.be : 3;
					top->SCUDS_N = !(be & 2); top->SCLDS_N = !(be & 1);
				}
				st = 1; timeout = 0;
			}
			break;
		case 1:
			if (ds_delay) {
				if (--ds_delay == 0) {
					uint8_t be = cur.wr ? cur.be : 3;
					top->SCUDS_N = !(be & 2); top->SCLDS_N = !(be & 1);
				}
			}
			if (!dtack_n) { wait = R->range(0, 3); st = 2; }
			else if (++timeout > 200000) { top->SCAS_N = 1; st = 3; }
			break;
		case 2:
			if (wait-- <= 0) {
				top->SCAS_N = 1; top->SCLDS_N = 1; top->SCUDS_N = 1;
				done++; st = 3;
			}
			break;
		case 3:
			if (dtack_n) { wait = R->chance(40) ? R->range(0, 40) : 0; st = 0; }
			break;
		}
	}
};

// ---- SCU B-bus agent ----
struct BusScu {
	std::deque<OpScu> q;
	int st = 0, wait = 0, idx = 0;
	OpScu cur;
	uint64_t timeout = 0, done = 0;
	bool idle() const { return q.empty() && st == 0; }
	void step() {
		bool rdy_n = top->R_RDY_N;
		if (wait > 0) { wait--; return; }
		switch (st) {
		case 0:
			top->CS_N = 1; top->AD_N = 1; top->DTEN_N = 1; top->REQ_N = 1;
			if (!q.empty()) {
				cur = q.front(); q.pop_front();
				top->CS_N = 0;
				top->DI = ((cur.wr ? 0 : 1) << 14) | ((cur.a >> 9) & 0xFFF);
				wait = 2; st = 1;
			}
			break;
		case 1:
			top->DI = 0x8000 | (cur.dqm << 12) | ((cur.a >> 1) & 0xFF);
			wait = 2; st = 2; idx = 0;
			break;
		case 2:  // request phase 1: AD_N low
			top->AD_N = 0;
			top->DTEN_N = 1; top->REQ_N = 1;
			wait = R->range(0, 2); st = 3;
			break;
		case 3:  // request pulse
			if (cur.wr) { top->DTEN_N = 0; top->DI = cur.d[idx]; }
			top->REQ_N = 0;
			st = 4;
			break;
		case 4:
			top->REQ_N = 1; top->DTEN_N = 1;
			wait = 2; st = 5; timeout = 0;
			break;
		case 5:
			if (!rdy_n) {
				idx++;
				if (idx < (int)cur.d.size()) { st = 2; wait = R->range(0, 3); }
				else { top->AD_N = 1; wait = R->range(1, 4); st = 6; done++; }
			} else if (++timeout > 200000) { st = 6; }
			break;
		case 6:
			top->CS_N = 1; top->AD_N = 1;
			wait = R->chance(40) ? R->range(0, 60) : 0; st = 0;
			break;
		}
	}
};

static Bus68 b68;
static BusScu bscu;

// ---- WAV capture ----
struct Wav {
	std::vector<int16_t> s;
	void save(const char *fn) {
		FILE *f = fopen(fn, "wb");
		uint32_t n = s.size() * 2, sr = 44100, br = sr * 4, riff = 36 + n, f16 = 16;
		uint16_t pcm = 1, ch = 2, ba = 4, bits = 16;
		fwrite("RIFF", 1, 4, f); fwrite(&riff, 4, 1, f); fwrite("WAVEfmt ", 1, 8, f);
		fwrite(&f16, 4, 1, f); fwrite(&pcm, 2, 1, f); fwrite(&ch, 2, 1, f);
		fwrite(&sr, 4, 1, f); fwrite(&br, 4, 1, f); fwrite(&ba, 2, 1, f); fwrite(&bits, 2, 1, f);
		fwrite("data", 1, 4, f); fwrite(&n, 4, 1, f);
		fwrite(s.data(), 2, s.size(), f);
		fclose(f);
	}
};
static Wav wav_r, wav_n;

#define CMP(sig) if (top->R_##sig != top->N_##sig) { \
	fprintf(stderr, "MISMATCH clk=%llu ce=%llu %s ref=%x new=%x\n", (unsigned long long)clk_count, \
	(unsigned long long)ce_count, #sig, (unsigned)top->R_##sig, (unsigned)top->N_##sig); bad = true; }

static int ce_acc = 0, ce_phase = 0;
static bool force_ce = true;
static uint32_t samp_ctr = 0;
// SND_EN[1:0] gate each slot's contribution as it is added (the reference gates the sums), so they may only change
// between the sum latch and the first slot's direct contribution.
static bool snd_want = false; static uint32_t snd_pend = 0;

static void tick() {
	// inputs for this clock
	ce_acc += 225792;
	bool ce = false;
	if (ce_acc >= 572728) { ce_acc -= 572728; ce = true; }
	top->CE = ce;
	ce_phase ^= 1;
	top->CE_R = ce_phase; top->CE_F = !ce_phase;
	if (snd_want && top->N_OP7SLOT == 0 && top->N_CYC >= 2 && top->N_CYC <= 5) { top->SND_EN = (top->SND_EN & 4) | snd_pend; snd_want = false; }
	b68.step();
	bscu.step();
	top->CLK = 0; top->eval();
	top->CLK = 1; top->eval();
	clk_count++;
	if (ce) {
		ce_count++;
		if (++samp_ctr == 512) {
			samp_ctr = 0;
			wav_r.s.push_back((int16_t)top->R_SOUND_L); wav_r.s.push_back((int16_t)top->R_SOUND_R);
			wav_n.s.push_back((int16_t)top->N_SOUND_L); wav_n.s.push_back((int16_t)top->N_SOUND_R);
		}
	}
	ram_r.step(top->R_RAM_A, top->R_RAM_D, top->R_RAM_WE, top->R_RAM_RD, top->R_RAM_CS);
	ram_n.step(top->N_RAM_A, top->N_RAM_D, top->N_RAM_WE, top->N_RAM_RD, top->N_RAM_CS);
	top->R_RAM_Q = ram_r.q; top->N_RAM_Q = ram_n.q;
	top->eval();
	bool bad = false;
#ifdef DBGINT
	{ auto r = top->rootp; static std::vector<std::string> seen;
#define RAMCHK(n,arr,N) { bool d=false; for(int k=0;k<N;k++) if(r->tb_top__DOT__ref_i__DOT__##n##__DOT__##arr[k]!=r->tb_top__DOT__new_i__DOT__##n##__DOT__##arr[k]) d=true; if(d){ bool f=false; for(auto&x:seen) if(x==#n) f=true; if(!f){ seen.push_back(#n); fprintf(stderr,"RAM %s first differs clk=%llu\n",#n,(unsigned long long)clk_count); for(int k=0;k<N;k++) if(r->tb_top__DOT__ref_i__DOT__##n##__DOT__##arr[k]!=r->tb_top__DOT__new_i__DOT__##n##__DOT__##arr[k]) fprintf(stderr,"   [%d] ref=%x new=%x\n",k,(unsigned)r->tb_top__DOT__ref_i__DOT__##n##__DOT__##arr[k],(unsigned)r->tb_top__DOT__new_i__DOT__##n##__DOT__##arr[k]); fprintf(stderr,"   OP7 ref=%llx new=%llx OP6 ref=%llx new=%llx\n",(unsigned long long)r->tb_top__DOT__ref_i__DOT__OP7,(unsigned long long)r->tb_top__DOT__new_i__DOT__OP7,(unsigned long long)r->tb_top__DOT__ref_i__DOT__OP6,(unsigned long long)r->tb_top__DOT__new_i__DOT__OP6);} } }
	  RAMCHK(STACK0,altdpram_component__DOT__mem,32) RAMCHK(STACK1,altdpram_component__DOT__mem,32)
	  RAMCHK(MIXSA_RAM,altsyncram_component__DOT__mem,16) RAMCHK(MIXSB_RAM,altsyncram_component__DOT__mem,16)
	  RAMCHK(EFREG_RAM,altsyncram_component__DOT__mem,16) RAMCHK(TEMP_RAM,altsyncram_component__DOT__mem,128) RAMCHK(MEMS_RAM,altsyncram_component__DOT__mem,32)
	  RAMCHK(SO_RAM,altsyncram_component__DOT__mem,32) RAMCHK(PHASE_FRAC_RAM,altsyncram_component__DOT__mem,32) }
#endif
	CMP(DO) CMP(RDY_N) CMP(INT_N) CMP(SCCE_R) CMP(SCCE_F) CMP(SCDO) CMP(SCDTACK_N)
	CMP(SCAVEC_N) CMP(SCIPL_N) CMP(RAM_A) CMP(RAM_D) CMP(RAM_WE) CMP(RAM_RD) CMP(RAM_CS)
	CMP(RAM_RFS)
	// SOUND lags SUM/CR0 by up to two clocks: compared once the reference output has been steady for 4 clocks
	{ static uint16_t pl = 0, pr = 0; static int steady = 0;
	  if (top->R_SOUND_L == pl && top->R_SOUND_R == pr) steady++; else steady = 0;
	  pl = top->R_SOUND_L; pr = top->R_SOUND_R;
	  if (steady >= 4) { CMP(SOUND_L) CMP(SOUND_R) } }
	if (bad) {
#ifdef DBGINT
		auto r = top->rootp;
		fprintf(stderr, "  ref: DEVL=%u A=%x D=%x DMA_EXEC=%u DMA_DIR=%u DMA_WR=%u DMA_DAT=%x DMA_MA=%x DMA_RA=%x REGQ=%x\n", r->tb_top__DOT__ref_i__DOT__MEM_DEV_LATCH, r->tb_top__DOT__ref_i__DOT__MEM_A, r->tb_top__DOT__ref_i__DOT__MEM_D, r->tb_top__DOT__ref_i__DOT__DMA_EXEC, r->tb_top__DOT__ref_i__DOT__DMA_DIR, r->tb_top__DOT__ref_i__DOT__DMA_WR, r->tb_top__DOT__ref_i__DOT__DMA_DAT, r->tb_top__DOT__ref_i__DOT__DMA_MA, r->tb_top__DOT__ref_i__DOT__DMA_RA, r->tb_top__DOT__ref_i__DOT__REG_Q);
		fprintf(stderr, "  new: DEVL=%u A=%x D=%x DMA_EXEC=%u DMA_DIR=%u DMA_WR=%u DMA_DAT=%x DMA_MA=%x DMA_RA=%x REGQ=%x\n", r->tb_top__DOT__new_i__DOT__MEM_DEV_LATCH, r->tb_top__DOT__new_i__DOT__MEM_A, r->tb_top__DOT__new_i__DOT__MEM_D, r->tb_top__DOT__new_i__DOT__DMA_EXEC, r->tb_top__DOT__new_i__DOT__DMA_DIR, r->tb_top__DOT__new_i__DOT__DMA_WR, r->tb_top__DOT__new_i__DOT__DMA_DAT, r->tb_top__DOT__new_i__DOT__DMA_MA, r->tb_top__DOT__new_i__DOT__DMA_RA, r->tb_top__DOT__new_i__DOT__REG_Q);
		static bool once=false; if(!once){once=true;
#define CMPRAM(n) for(int k=0;k<32;k++){ if(r->tb_top__DOT__ref_i__DOT__SCR_##n##__DOT__altsyncram_component__DOT__mem[k]!=r->tb_top__DOT__new_i__DOT__SCR_##n##__DOT__altsyncram_component__DOT__mem[k]) fprintf(stderr,"  %s[%d] ref=%x new=%x\n",#n,k,r->tb_top__DOT__ref_i__DOT__SCR_##n##__DOT__altsyncram_component__DOT__mem[k],r->tb_top__DOT__new_i__DOT__SCR_##n##__DOT__altsyncram_component__DOT__mem[k]); }
		CMPRAM(SCR0) CMPRAM(SA) CMPRAM(LSA) CMPRAM(LEA) CMPRAM(SCR1) CMPRAM(SCR2) CMPRAM(SCR3) CMPRAM(SCR4) CMPRAM(SCR5) CMPRAM(SCR6) CMPRAM(SCR7) CMPRAM(SCR8) }
#endif
		if (++mismatches > 5) { fprintf(stderr, "FAIL\n"); exit(1); }
	}
	if (top->R_SCIPL_N != 7) st_irq++;
	if (top->R_RAM_WE && top->R_RAM_CS) st_ramw++;
	if (top->R_RAM_RD && top->R_RAM_CS) st_ramr++;
	if (top->R_SOUND_L || top->R_SOUND_R) st_nonzero++;
	if (!top->R_SCAVEC_N) st_avec++;
}

static void run_clks(uint64_t n) { while (n--) tick(); }
static void run_samples(uint32_t n) { run_clks((uint64_t)n * 1300); }
static void drain() {
	uint64_t guard = 0;
	while (!(b68.idle() && bscu.idle()) && guard++ < 4000000) tick();
}

// ---- register access helpers ----
static void put68(uint32_t byte_addr, uint16_t v, bool wr = true, uint8_t be = 3) {
	b68.q.push_back({byte_addr, v, wr, be});
}
static void putscu_reg(uint32_t off, uint16_t v) {
	bscu.q.push_back({true, (1u << 20) | off, {v}, 0});
}
static void wr_reg(uint32_t off, uint16_t v, int pct68 = 50) {
	if (R->chance(pct68)) put68(0x100000 + off, v);
	else putscu_reg(off, v);
}
static void wr_reg_bytes(uint32_t off, uint16_t v) {  // via 68K byte writes
	put68(0x100000 + off, v & 0xFF00, true, 2);
	put68(0x100000 + off, v & 0x00FF, true, 1);
}
static uint32_t drga(uint32_t len) {
	uint32_t w = R->below(0x400);
	if (nomidi && w + len >= 0x1F0 && w <= 0x2FF) w = 0x300;
	return w;
}
static void rd_reg(uint32_t off) {
	if (nomidi && off >= 0x400 && off < 0x600 && ((off & 0x3E) == 0x04 || (off & 0x3E) == 0x06)) return;  // CR2, CR3 and their mirrors
	if (R->chance(50)) put68(0x100000 + off, 0, false);
	else bscu.q.push_back({false, (1u << 20) | off, {0}, 0});
}
static void wr_ram(uint32_t word, uint16_t v) {
	if (R->chance(50)) put68((word & 0x3FFFF) << 1, v);
	else bscu.q.push_back({true, (word & 0x3FFFF) << 1, {v}, 0});
}

// SCR offsets within a slot
enum { SCR0 = 0, SA = 2, LSA = 4, LEA = 6, SCR1 = 8, SCR2 = 10, SCR3 = 12, SCR4 = 14, SCR5 = 16, SCR6 = 18, SCR7 = 20, SCR8 = 22 };

struct Voice {
	int pcm8 = 0, lpctl = 1, sah = 0;
	uint16_t sa = 0, lsa = 0, lea = 0x1000;
	int ar = 31, d1r = 0, d2r = 0, rr = 31, dl = 0, krs = 15, egbp = 0, lpslnk = 0, eghold = 0;
	int tl = 0, sdir = 0, stwinh = 0;
	int mdl = 0, mdxsl = 0, mdysl = 0;
	int oct = 0, fns = 0, msk = 0;
	int lfore = 0, lfof = 0, plfows = 0, plfos = 0, alfows = 0, alfos = 0;
	int isel = 0, imxl = 0;
	int disdl = 7, dipan = 0, efsdl = 0, efpan = 0;
	int ssctl = 0, sbctl = 0;
};

static void voice_random(Voice &v, int kind) {
	v.pcm8 = R->chance(40);
	v.lpctl = kind == 1 ? 0 : kind == 2 ? 2 : kind == 3 ? 3 : (R->chance(60) ? 1 : R->below(4));
	v.sah = R->chance(80) ? 0 : R->below(2);
	v.sa = R->below(0x8000) * 2;
	v.lsa = R->below(0x100);
	v.lea = R->range(0x40, 0x1800);
	v.ar = R->chance(50) ? R->range(20, 31) : R->below(32);
	v.d1r = R->below(32); v.d2r = R->below(32); v.rr = R->below(32);
	v.dl = R->below(32); v.krs = R->chance(60) ? 15 : R->below(16);
	v.egbp = R->chance(8); v.lpslnk = R->chance(15); v.eghold = R->chance(15);
	v.tl = R->chance(50) ? R->below(16) : R->below(256);
	v.sdir = R->chance(10); v.stwinh = R->chance(10);
	v.mdl = R->chance(40) ? R->range(5, 15) : 0; v.mdxsl = R->below(64); v.mdysl = R->below(64);
	v.oct = R->below(16); v.fns = R->below(2048); v.msk = R->chance(5);
	v.lfore = R->chance(5); v.lfof = R->below(32); v.plfows = R->below(4); v.plfos = R->below(8);
	v.alfows = R->below(4); v.alfos = R->below(8);
	v.isel = R->below(16); v.imxl = R->below(8);
	v.disdl = R->chance(70) ? R->range(3, 7) : R->below(8); v.dipan = R->below(32);
	v.efsdl = R->below(8); v.efpan = R->below(32);
	v.ssctl = R->chance(85) ? 0 : R->below(4); v.sbctl = R->chance(85) ? 0 : R->below(4);
}

static void voice_write(int slot, const Voice &v, bool keyon, bool kx) {
	uint32_t b = slot * 0x20;
	wr_reg(b + SA, v.sa);
	wr_reg(b + LSA, v.lsa);
	wr_reg(b + LEA, v.lea);
	wr_reg(b + SCR1, (v.d2r << 11) | (v.d1r << 6) | (v.eghold << 5) | v.ar);
	wr_reg(b + SCR2, (v.egbp << 15) | (v.lpslnk << 14) | (v.krs << 10) | (v.dl << 5) | v.rr);
	wr_reg(b + SCR3, (v.stwinh << 9) | (v.sdir << 8) | v.tl);
	wr_reg(b + SCR4, (v.mdl << 12) | (v.mdxsl << 6) | v.mdysl);
	wr_reg(b + SCR5, (v.msk << 15) | (v.oct << 11) | v.fns);
	wr_reg(b + SCR6, (v.lfore << 15) | (v.lfof << 10) | (v.plfows << 8) | (v.plfos << 5) | (v.alfows << 3) | v.alfos);
	wr_reg(b + SCR7, (v.isel << 3) | v.imxl);
	wr_reg(b + SCR8, (v.disdl << 13) | (v.dipan << 8) | (v.efsdl << 5) | v.efpan);
	wr_reg(b + SCR0, (kx << 12) | (keyon << 11) | (v.sbctl << 9) | (v.ssctl << 7) | (v.lpctl << 5) | (v.pcm8 << 4) | v.sah);
}

static void dsp_program(int density) {
	for (int step = 0; step < 128; step++) {
		uint64_t w = 0;
		// fields per MPRO_t (63..0)
		auto set = [&](int hi, int lo, uint64_t val) { w |= (val & ((1ull << (hi - lo + 1)) - 1)) << lo; };
		bool active = R->chance(density);
		if (active) {
			set(62, 56, R->below(128));      // TRA
			set(55, 55, R->chance(50));      // TWT
			set(54, 48, R->below(128));      // TWA
			set(47, 47, R->chance(50));      // XSEL
			set(46, 45, R->below(4));        // YSEL
			set(43, 38, R->below(64));       // IRA
			set(37, 37, R->chance(40));      // IWT
			set(36, 32, R->below(32));       // IWA
			set(31, 31, R->chance(10));      // TABLE
			set(30, 30, R->chance(15));      // MWT
			set(29, 29, R->chance(20));      // MRD
			set(28, 28, R->chance(25));      // EWT
			set(27, 24, R->below(16));       // EWA
			set(23, 23, R->chance(15));      // ADRL
			set(22, 22, R->chance(20));      // FRCL
			set(21, 20, R->below(4));        // SHFT
			set(19, 19, R->chance(25));      // YRL
			set(18, 18, R->chance(10));      // NEGB
			set(17, 17, R->chance(15));      // ZERO
			set(16, 16, R->chance(40));      // BSEL
			// bit 15 unused3
			set(14, 9, R->below(64));        // COEF
			set(8, 8, R->chance(20));        // NOFL
			set(6, 2, R->below(32));         // MASA
			set(1, 1, R->chance(20));        // ADREB
			set(0, 0, R->chance(20));        // NXADR
		}
		for (int k = 0; k < 4; k++) {
			uint16_t part = (w >> (48 - 16 * k)) & 0xFFFF;
			wr_reg(0x800 + step * 8 + k * 2, part);
		}
	}
	for (int i = 0; i < 64; i++) wr_reg(0x700 + i * 2, R->next() & 0xFFF8);
	for (int i = 0; i < 32; i++) wr_reg(0x780 + i * 2, R->next());
}

static void dsp_init_regs() {
	wr_reg(0x402, (R->below(4) << 7) | R->below(128));  // RBL, RBP
}

static void common_cr() {
	wr_reg(0x400, (R->below(2) << 8) | R->range(8, 15));  // MVOL, DB
}

static void rand_reg_write() {
	// anywhere in the register space, mostly meaningful areas
	uint32_t off;
	switch (R->below(10)) {
	case 0: case 1: case 2: off = R->below(32) * 0x20 + R->below(12) * 2; break;
	case 3: off = 0x400 + R->below(24) * 2; break;
	case 4: off = 0x600 + R->below(64) * 2; break;
	case 5: off = 0x700 + R->below(96) * 2; break;
	case 6: off = 0x800 + R->below(512) * 2; break;
	case 7: off = 0xC00 + R->below(256) * 2; break;
	case 8: off = 0xE00 + R->below(112) * 2; break;
	default: off = R->below(0x7F0) & ~1; break;
	}
	if (off >= 0x400 && off < 0x430) {
		if (off >= 0x400 && off < 0x600 && (off & 0x3E) >= 0x12 && (off & 0x3E) <= 0x16) return;  // DMA registers (and mirrors) stay under directed control
	}
	if (R->chance(10)) wr_reg_bytes(off, R->next());
	else wr_reg(off, R->next());
}

static void rand_read() {
	uint32_t off;
	switch (R->below(8)) {
	case 0: off = R->below(32) * 0x20 + R->below(12) * 2; break;
	case 1: off = 0x400 + R->below(24) * 2; break;
	case 2: off = 0x600 + R->below(64) * 2; break;
	case 3: off = 0x700 + R->below(96) * 2; break;
	case 4: off = 0x800 + R->below(512) * 2; break;
	case 5: off = 0xC00 + R->below(256) * 2; break;
	case 6: off = 0xE00 + R->below(120) * 2; break;
	default: off = R->below(0xF00) & ~1; break;
	}
	rd_reg(off);
}

static void setup_ram() {
	// waveform material: sines, saws, noise bursts, with 8-bit packed pairs
	for (uint32_t i = 0; i < (1u << 18); i++) {
		uint32_t blk = i >> 10;
		uint16_t v;
		switch (blk & 3) {
		case 0: v = (uint16_t)(int16_t)(sin(i * 0.05 * (1 + (blk & 15))) * 28000); break;
		case 1: v = (uint16_t)(((i * (blk % 17 + 1) * 37) & 0xFFFF) - 32768); break;
		case 2: v = R->next(); break;
		default: v = (uint16_t)(int16_t)((((i >> 3) & 1) ? 20000 : -20000) + (int)R->below(2000)); break;
		}
		ram_r.mem[i] = v; ram_n.mem[i] = v;
	}
}

static void wait_reset_done() { run_samples(40); }

int main(int argc, char **argv) {
	setvbuf(stdout, NULL, _IONBF, 0);
	Verilated::commandArgs(argc, argv);
	uint32_t seed = 1, nrand = 300;
	const char *wavp = "scsp";
	for (int i = 1; i < argc; i++) {
		if (!strncmp(argv[i], "+seed=", 6)) seed = atoi(argv[i] + 6);
		if (!strncmp(argv[i], "+rounds=", 8)) nrand = atoi(argv[i] + 8);
		if (!strcmp(argv[i], "+nomidi")) nomidi = true;
		if (!strncmp(argv[i], "+wav=", 5)) wavp = argv[i] + 5;
	}
	Rng rng(seed); R = &rng;
	top = new T;
	setup_ram();
	top->CLK = 0; top->RST_N = 0; top->RES_N = 0; top->CE = 0; top->CE_R = 0; top->CE_F = 0;
	top->DI = 0; top->CS_N = 1; top->AD_N = 1; top->DTEN_N = 1; top->REQ_N = 1;
	top->SCA = 0; top->SCDI = 0; top->SCRW_N = 1; top->SCAS_N = 1; top->SCLDS_N = 1; top->SCUDS_N = 1;
	top->SCFC = 5; top->ESL = 0; top->ESR = 0; top->SND_EN = 7;
	top->R_RAM_Q = 0; top->N_RAM_Q = 0;
	run_clks(20); top->RST_N = 1; run_clks(20); top->RES_N = 1;
	wait_reset_done();

	// ---- directed phase ----
	common_cr();
	dsp_init_regs();
	for (int scen = 0; scen < 6; scen++) {
		// scenario 0: PCM16 loop; 1: PCM8 / no loop / interrupts; 2: reverse loop + FM; 3: alt loop + noise + LFO; 4: DSP heavy; 5: everything
		for (int s = 0; s < 32; s++) {
			Voice v; voice_random(v, scen < 4 ? scen : 0);
			if (scen == 0) { v.pcm8 = 0; v.ssctl = 0; v.mdl = 0; }
			if (scen == 1) { v.pcm8 = 1; }
			if (scen == 2) { v.mdl = R->range(5, 15); }
			if (scen == 3) { v.ssctl = (s & 3) == 0 ? 1 : 0; v.lfore = 0; v.alfos = 7; v.plfos = 7; }
			voice_write(s, v, false, false);
		}
		drain();
		if (scen >= 4) { dsp_program(scen == 4 ? 90 : 60); dsp_init_regs(); }
		drain();
		for (int s = 0; s < 32; s++) {
			uint32_t b = s * 0x20;
			// key on all slots, KX on the last write
			uint16_t r0 = (R->below(2) << 4) | (R->below(4) << 5) | R->below(2);
			wr_reg(b + SCR0, (s == 31 ? (1 << 12) : 0) | (1 << 11) | r0);
		}
		drain();
		// timers and interrupts
		wr_reg(0x418, (R->below(8) << 8) | R->below(256));
		wr_reg(0x41A, (R->below(8) << 8) | R->below(256));
		wr_reg(0x41C, (R->below(8) << 8) | R->below(256));
		wr_reg(0x41E, 0x7FF); wr_reg(0x42A, 0x7FF);
		wr_reg(0x424, R->below(256)); wr_reg(0x426, R->below(256)); wr_reg(0x428, R->below(256));
		wr_reg(0x404, R->below(0x2000)); wr_reg(0x406, R->below(256));
		// ESL/ESR + master volume
		top->ESL = R->next(); top->ESR = R->next();
		for (int i = 0; i < 12; i++) { run_samples(R->range(4, 30)); rd_reg(0x420); rd_reg(0x42C); rd_reg(0x408); rd_reg(0x418);
			if (R->chance(70)) wr_reg(0x422, R->below(0x800)); if (R->chance(70)) wr_reg(0x42E, R->below(0x800));
			top->SCFC = 7; run_clks(R->range(2, 20)); top->SCFC = 5; }
		// DMA: RAM -> regs and regs -> RAM
		wr_reg(0x412, R->next() & 0xFFFE); wr_reg(0x414, (R->below(16) << 12) | (drga(41) << 1));
		wr_reg(0x416, (R->below(2) << 14) | (R->below(2) << 13) | (1 << 12) | (R->range(1, 40) << 1)); // DGATE, DDIR, DEXE, DTLG
		run_samples(8);
		wr_reg(0x416, (R->below(2) << 14) | (R->below(2) << 13) | (1 << 12) | (R->range(1, 40) << 1));
		run_samples(20);
		// key off half, observe release
		for (int s = 0; s < 32; s += 2) wr_reg(s * 0x20, (s == 30 ? (1 << 12) : 0) | (0 << 11));
		run_samples(R->range(30, 120));
		// byte-write exercise and read-backs of all regions
		for (int i = 0; i < 40; i++) rand_read();
		drain();
	}

	// ---- random phase ----
	for (uint32_t r = 0; r < nrand; r++) {
		uint32_t act = R->below(100);
		if (act < 30) { for (int i = 0, n = R->range(1, 20); i < n; i++) rand_reg_write(); }
		else if (act < 45) {
			int s = R->below(32); Voice v; voice_random(v, R->below(5));
			bool kon = R->chance(70);
			voice_write(s, v, kon, R->chance(80));
		}
		else if (act < 52) { dsp_program(R->range(20, 100)); dsp_init_regs(); }
		else if (act < 60) {
			for (int i = 0, n = R->range(1, 10); i < n; i++) { int s = R->below(32); wr_reg(s * 0x20, ((R->below(2)) << 11) | (R->below(2) << 12) | (R->below(2) << 4) | (R->below(4) << 5)); }
		}
		else if (act < 70) { for (int i = 0, n = R->range(1, 24); i < n; i++) rand_read(); }
		else if (act < 74) { for (int i = 0, n = R->range(1, 8); i < n; i++) wr_ram(R->below(1 << 18), R->next()); }
		else if (act < 77) { top->ESL = R->next(); top->ESR = R->next(); { uint32_t e = R->below(8); top->SND_EN = (top->SND_EN & 3) | (e & 4); snd_pend = e & 3; snd_want = true; } }
		else if (act < 80) { common_cr(); }
		else if (act < 83) {
			wr_reg(0x418 + 2 * R->below(3), (R->below(8) << 8) | R->below(256));
			wr_reg(0x41E, R->next() & 0x7FF); wr_reg(0x42A, R->next() & 0x7FF);
			wr_reg(0x422, R->next() & 0x7FF); wr_reg(0x42E, R->next() & 0x7FF);
		}
		else if (act < 86) {
			wr_reg(0x412, R->next() & 0xFFFE); wr_reg(0x414, (R->below(16) << 12) | (drga(41) << 1));
			wr_reg(0x416, (R->below(2) << 14) | (R->below(2) << 13) | (R->below(2) << 12) | (R->range(1, 30) << 1));
		}
		else if (act < 88) {
			// SCU block write into sound RAM
			OpScu o; o.wr = true; o.a = (R->below(1 << 18) & ~0x7Fu) << 1; o.dqm = 0;
			int n = R->range(2, 16); for (int i = 0; i < n; i++) o.d.push_back(R->next());
			bscu.q.push_back(o);
		}
		else if (act < 90) {
			OpScu o; o.wr = false; o.a = (R->below(1 << 18) & ~0x7Fu) << 1; o.dqm = 0; o.d.assign(R->range(2, 8), 0);
			bscu.q.push_back(o);
		}
		else if (act < 91 && R->chance(30)) {
			// reset pulse mid-run
			drain();
			fprintf(stderr,"[reset pulse at clk %llu]\n",(unsigned long long)clk_count); top->RES_N = 0; run_clks(R->range(1, 40)); top->RES_N = 1;
			run_samples(RESET_QUIET);
		}
		else if (act < 92 && R->chance(15)) {
			fprintf(stderr,"[hard reset at clk %llu]\n",(unsigned long long)clk_count); drain(); top->RES_N = 0; run_clks(2); top->RST_N = 0; run_clks(R->range(2, 20)); top->RST_N = 1; run_clks(R->range(2, 20)); top->RES_N = 1;
			run_samples(RESET_QUIET);
		}
		if (R->chance(30)) { top->SCFC = 7; run_clks(R->range(2, 10)); top->SCFC = 5; }
		run_samples(R->range(0, 6));
		if (R->chance(60)) drain();
	}
	drain();
	run_samples(50);

	char fn[256];
	snprintf(fn, sizeof fn, "%s_ref.wav", wavp); wav_r.save(fn);
	snprintf(fn, sizeof fn, "%s_new.wav", wavp); wav_n.save(fn);
	bool same = wav_r.s == wav_n.s;
	size_t nz = 0; for (auto x : wav_r.s) if (x) nz++;
	printf("seed=%u clks=%llu samples=%zu nonzero_samples=%zu wav_equal=%d\n", seed,
	       (unsigned long long)clk_count, wav_r.s.size() / 2, nz, same);
	printf("coverage: irq_clks=%llu ram_wr_clks=%llu ram_rd_clks=%llu avec_clks=%llu 68k_ops=%llu scu_ops=%llu\n",
	       (unsigned long long)st_irq, (unsigned long long)st_ramw, (unsigned long long)st_ramr,
	       (unsigned long long)st_avec, (unsigned long long)b68.done, (unsigned long long)bscu.done);
	if (mismatches || !same) { printf("FAIL\n"); return 1; }
	printf("PASS\n");
	return 0;
}
