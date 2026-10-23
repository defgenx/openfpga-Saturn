// Lockstep equivalence bench: golden REF_fx68k vs DUT m68kp, every output compared every clk.
//   tb_lock rand <seed> <cycles> <mode> <maxwait>    random programs, random bus waits and interrupts
//   tb_lock img  <image.bin> <cycles> <maxwait> <seed>  generated sound-driver-like program (gen_prog.py)
//   tb_lock sst  <tests.txt> [maxwait]               SingleStepTests cases run through a register loader
// The SST mode additionally checks the golden core against the suite (bus cycles, timing, final state).
#include "Vtb_lock.h"
#include "Vtb_lock___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <vector>
#include <map>
#include <string>
#include <random>
#include <functional>

struct Bench {
	Vtb_lock* t = new Vtb_lock;
	// clock enables: the 22.58 MHz SCSP strobe from 57.27 MHz, alternating Phi1/Phi2 (2 or 3 clk apart)
	uint64_t acc = 0; int phase = 0, ce = 0;
	uint64_t cyc = 0, mism = 0;
	int waitleft = -1, maxwait = 0; std::mt19937_64 rng{1};
	int irq_timer = 0; bool irq_random = false;
	bool lastas = true;
	// callbacks
	std::function<uint16_t(uint32_t)> rd16;
	std::function<void(uint32_t, uint16_t, bool, bool)> wr16;
	std::function<void(bool as, bool rw, bool uds, bool lds, uint16_t data)> on_sample;   // every clk
	std::function<void(bool phi1)> on_strobe;                 // 68K half clock
	std::function<void(uint32_t addr, bool rw, int fc, bool uds, bool lds, uint16_t data)> on_cycle_start;
	uint64_t nbus = 0, nwr = 0;
	uint64_t half = 0;                                      // strobe count
	int period = getenv("PERIOD") ? atoi(getenv("PERIOD")) : 0, pc = 0;   // PERIOD=n: fixed strobe spacing in clk (default: Saturn's 2.54)
	uint64_t freeze_half = 0;                               // no more 68K strobes from this count on
	bool wrote_this_cycle = false;
	std::vector<uint32_t> seen = std::vector<uint32_t>(65536 / 32); uint64_t nird = 0; uint16_t lastird = 0;

	void reset_cpu() { t->pwrUp = 1; t->extReset = 1; t->enPhi1 = t->enPhi2 = 0; t->DTACKn = 1; t->VPAn = 1; t->IPLn = 7; t->iEdb = 0; ce = 0; acc = 0; phase = 0; waitleft = -1; lastas = true; }
	bool step() {
		const uint64_t in_clk = 57272800, out = 22579200;
		acc += out; bool strobe = false;
		if (period) { if (++pc >= period) { pc = 0; strobe = true; } }
		else if (acc >= in_clk) { acc -= in_clk; strobe = true; }
		if (freeze_half && half >= freeze_half) strobe = false;
		t->enPhi1 = 0; t->enPhi2 = 0;
		bool phi1 = false;
		if (strobe) { phi1 = phase == 0; if (phi1) t->enPhi1 = 1; else t->enPhi2 = 1; phase ^= 1; ce++; half++; }
		if (ce > 40) t->pwrUp = 0;
		if (ce > 60) t->extReset = 0;
		uint32_t a = (uint32_t)t->ref_eab << 1;
		bool as = t->ref_o & 2;
		int fc = (t->ref_o >> 4) & 7;
		if (strobe) {
			if (as) { t->DTACKn = 1; waitleft = -1; }
			else {
				if (waitleft < 0) waitleft = maxwait ? (int)(rng() % (maxwait + 1)) : 0;
				if (waitleft == 0) t->DTACKn = 0; else waitleft--;
			}
			t->VPAn = (fc == 7 && !as) ? 0 : 1;
			if (irq_random && --irq_timer <= 0) { irq_timer = 50 + rng() % 2000; int r = rng() % 8; t->IPLn = (rng() % 3) ? 7 : (~r & 7); }
			if (on_strobe) on_strobe(phi1);
		}
		t->iEdb = rd16(a);
		t->eval(); t->clk = 1; t->eval();
		bool lds = !(t->ref_o & 4), uds = !(t->ref_o & 8);
		as = t->ref_o & 2; bool rw = t->ref_o & 1; fc = (t->ref_o >> 4) & 7;
		if (!as && !rw && fc != 7) wr16(((uint32_t)t->ref_eab << 1), t->ref_edb, uds, lds);
		t->clk = 0; t->eval();
		as = t->ref_o & 2; rw = t->ref_o & 1;
		if (lastas && !as) { nbus++; if (!rw) nwr++; if (on_cycle_start) on_cycle_start((uint32_t)t->ref_eab << 1, rw, (t->ref_o >> 4) & 7, !(t->ref_o & 8), !(t->ref_o & 4), t->ref_edb); }
		if (on_sample && !as) on_sample(as, rw, !(t->ref_o & 8), !(t->ref_o & 4), t->ref_edb);
		lastas = as;
		uint16_t ird = t->ref_ird; if (ird != lastird) { lastird = ird; if (!(seen[ird >> 5] >> (ird & 31) & 1)) { seen[ird >> 5] |= 1u << (ird & 31); nird++; } }
		bool bad = t->ref_o != t->dut_o || t->ref_eab != t->dut_eab || (!rw && !as && t->ref_edb != t->dut_edb);
		if (bad) {
			if (mism < 5) printf("MISMATCH cyc %llu: ref o=%llx eab=%x edb=%x | dut o=%llx eab=%x edb=%x\n", (unsigned long long)cyc,
				(unsigned long long)t->ref_o, t->ref_eab, t->ref_edb, (unsigned long long)t->dut_o, t->dut_eab, t->dut_edb);
			mism++;
		}
		cyc++;
		return !bad;
	}
};

// ------------------------------------------------------------------------------------------ random mode
static const uint32_t MEMSZ = 1 << 16;
static int run_rand(uint64_t seed, uint64_t ncyc, int mode, int maxwait) {
	Bench b; b.rng.seed(seed); b.maxwait = maxwait; b.irq_random = true;
	std::mt19937_64 rng(seed);
	std::vector<uint8_t> mem(MEMSZ);
	for (uint32_t i = 0; i < MEMSZ; i += 2) { uint16_t w = rng(); mem[i] = w >> 8; mem[i + 1] = w; }
	auto w32 = [&](uint32_t a, uint32_t v) { for (int i = 0; i < 4; i++) mem[a + i] = v >> (24 - 8 * i); };
	w32(0, 0x00009000); w32(4, 0x00000400);
	for (int v = 2; v < 256; v++) w32(v * 4, 0x400 + ((rng() % 0x1000) & ~1u));
	b.rd16 = [&](uint32_t a) { a &= (MEMSZ - 1) & ~1u; return (uint16_t)(mem[a] << 8 | mem[a + 1]); };
	b.wr16 = [&](uint32_t a, uint16_t d, bool u, bool l) { a &= MEMSZ - 1; if (u) mem[a & ~1u] = d >> 8; if (l) mem[a | 1] = d; };
	b.reset_cpu();
	while (b.cyc < ncyc) b.step();
	printf("rand seed %llu: %llu cycles, %llu bus cycles (%llu writes), %llu distinct opcodes, %llu mismatches\n", (unsigned long long)seed,
		(unsigned long long)b.cyc, (unsigned long long)b.nbus, (unsigned long long)b.nwr, (unsigned long long)b.nird, (unsigned long long)b.mism);
	return b.mism != 0;
}

// program image mode (gen_prog.py)
static int run_img(const char* file, uint64_t ncyc, int maxwait, uint64_t seed) {
	Bench b; b.rng.seed(seed); b.maxwait = maxwait; b.irq_random = true;
	std::vector<uint8_t> mem(MEMSZ, 0);
	FILE* f = fopen(file, "rb"); if (!f || fread(mem.data(), 1, MEMSZ, f) != MEMSZ) { perror(file); return 2; } fclose(f);
	b.rd16 = [&](uint32_t a) { a &= (MEMSZ - 1) & ~1u; return (uint16_t)(mem[a] << 8 | mem[a + 1]); };
	b.wr16 = [&](uint32_t a, uint16_t d, bool u, bool l) { a &= MEMSZ - 1; if (u) mem[a & ~1u] = d >> 8; if (l) mem[a | 1] = d; };
	int tr = getenv("TRACE") ? atoi(getenv("TRACE")) : 0;
	if (tr) b.on_cycle_start = [&](uint32_t a, bool rw, int fc, bool u, bool l, uint16_t d) { if (b.nbus < (uint64_t)tr) printf("%06x %s fc%d %04x\n", a, rw ? "R" : "W", fc, rw ? b.rd16(a) : d); };
	b.reset_cpu();
	while (b.cyc < ncyc) b.step();
	printf("img %s: %llu cycles, %llu bus cycles (%llu writes), %llu distinct opcodes, %llu mismatches\n", file,
		(unsigned long long)b.cyc, (unsigned long long)b.nbus, (unsigned long long)b.nwr, (unsigned long long)b.nird, (unsigned long long)b.mism);
	return b.mism != 0;
}

// ------------------------------------------------------------------------------------------ SST mode
struct Tx { char kind; int cyc; int fc; uint32_t addr; char size; uint32_t val; };
struct Test {
	std::string name; uint32_t r[19]; uint16_t pf[2]; std::vector<std::pair<uint32_t, uint8_t>> ram, fram;
	int length; std::vector<Tx> tx; uint32_t f[18];
};

static bool read_test(FILE* f, Test& t) {
	char tag[8], buf[256];
	if (fscanf(f, "%7s %255s", tag, buf) != 2) return false;
	t.name = buf;
	fscanf(f, "%7s", tag); for (int i = 0; i < 19; i++) fscanf(f, "%x", &t.r[i]);
	{ unsigned a, b; fscanf(f, "%x %x", &a, &b); t.pf[0] = a; t.pf[1] = b; }
	int n; fscanf(f, "%7s %d", tag, &n); t.ram.clear();
	for (int i = 0; i < n; i++) { unsigned a, v; fscanf(f, "%x:%x", &a, &v); t.ram.push_back({a, (uint8_t)v}); }
	fscanf(f, "%7s %d", tag, &t.length);
	fscanf(f, "%7s %d", tag, &n); t.tx.clear();
	for (int i = 0; i < n; i++) {
		Tx x{}; char k[4], s[4]; fscanf(f, "%3s", k); x.kind = k[0];
		if (x.kind == 'n') fscanf(f, "%d", &x.cyc);
		else { fscanf(f, "%d %d %x %3s %x", &x.cyc, &x.fc, &x.addr, s, &x.val); x.size = s[0]; }
		t.tx.push_back(x);
	}
	fscanf(f, "%7s", tag); for (int i = 0; i < 18; i++) fscanf(f, "%x", &t.f[i]);
	fscanf(f, "%7s %d", tag, &n); t.fram.clear();
	for (int i = 0; i < n; i++) { unsigned a, v; fscanf(f, "%x:%x", &a, &v); t.fram.push_back({a, (uint8_t)v}); }
	return true;
}

static int g_nfail = 0;
static bool is_exc(const Test& t) { for (auto& x : t.tx) if (x.kind == 'r' && x.fc == 5 && x.addr < 0x400) return true; return false; }
static size_t nbus_tx(const Test& t) { size_t n = 0; for (auto& x : t.tx) if (x.kind != 'n') n++; return n; }
static bool lastbus_known(const Test& t, size_t nrecs) { return nrecs >= nbus_tx(t); }
static int trail_idle(const Test& t) { int n = 0; for (size_t i = t.tx.size(); i-- > 0 && t.tx[i].kind == 'n';) n += t.tx[i].cyc; return n; }
struct Rec { bool rw; uint32_t addr; int fc; bool uds, lds; uint64_t half; uint16_t wdata; };

// returns 0 ok, 1 lockstep mismatch, 2 SST mismatch
static int run_one(const Test& t, int maxwait, bool verbose, uint64_t& refcyc) {
	Bench b; b.maxwait = maxwait; b.rng.seed(7);
	std::vector<uint8_t> lm(0x4000);
	std::map<uint32_t, uint8_t> tm;
	bool testmode = false;
	auto w32 = [&](uint32_t a, uint32_t v) { for (int i = 0; i < 4; i++) lm[a + i] = v >> (24 - 8 * i); };
	auto w16 = [&](uint32_t a, uint32_t v) { lm[a] = v >> 8; lm[a + 1] = v; };
	// loader: vector table, code at 0x2000, RTE frame at ssp-6
	uint32_t ssp = t.r[16], pc = t.r[18];
	w32(0, 0x1000); w32(4, 0x2000);
	for (int v = 2; v < 256; v++) w32(v * 4, 0x2f00);        // stray exceptions park on a STOP
	w16(0x2f00, 0x4e72); w16(0x2f02, 0x2700);
	uint32_t p = 0x2000;
	auto ins = [&](uint16_t op, int imm = -1, uint32_t v = 0) { w16(p, op); p += 2; if (imm >= 0) { w32(p, v); p += 4; } };
	ins(0x207c, 1, t.r[15]); ins(0x4e60);                        // MOVEA.L #usp,A0 ; MOVE A0,USP
	for (int i = 0; i < 8; i++) ins(0x203c | (i << 9), 1, t.r[i]);               // MOVE.L #dn,Dn
	for (int i = 0; i < 7; i++) ins(0x207c | (i << 9), 1, t.r[8 + i]);           // MOVEA.L #an,An
	ins(0x2e7c, 1, ssp - 6); ins(0x4e73);                        // MOVEA.L #ssp-6,A7 ; RTE
	w16(ssp - 6, t.r[17]); w32(ssp - 4, pc);
	for (auto& m : t.ram) tm[m.first] = m.second;
	for (int i = 0; i < 2; i++) { tm[pc + 2 * i] = t.pf[i] >> 8; tm[pc + 2 * i + 1] = t.pf[i] & 255; }
	auto tget = [&](uint32_t a) -> uint8_t { auto it = tm.find(a & 0xffffff); if (it != tm.end()) return it->second; return (a & 1) ? 0x71 : 0x4e; };
	std::vector<Rec> recs; uint64_t trig_half = 0; int post = 0;
	b.rd16 = [&](uint32_t a) -> uint16_t {
		a &= 0xfffffe;
		if (!testmode) { if (a == pc && b.t->ref_o >= 0 && ((b.t->ref_o >> 4) & 7) == 6 && p > 0x2000 && (b.nbus > 20)) testmode = true; }
		if (testmode) return tget(a) << 8 | tget(a + 1);
		return a < lm.size() ? (lm[a] << 8 | lm[a + 1]) : 0x4e71;
	};
	b.wr16 = [&](uint32_t a, uint16_t d, bool u, bool l) {
		a &= 0xffffff;
		if (testmode) { if (u) tm[a & ~1u] = d >> 8; if (l) tm[a | 1] = d; }
		else if (a + 1 < lm.size()) { if (u) lm[a & ~1u] = d >> 8; if (l) lm[a | 1] = d; }
	};
	b.on_cycle_start = [&](uint32_t a, bool rw, int fc, bool uds, bool lds, uint16_t d) {
		if (!testmode) return;
		recs.push_back({rw, a, fc, false, false, b.half, 0});
	};
	b.on_sample = [&](bool as, bool rw, bool uds, bool lds, uint16_t d) {
		if (!testmode || recs.empty()) return;
		Rec& r = recs.back(); r.uds |= uds; r.lds |= lds; if (!rw && (uds || lds)) r.wdata = d;
	};
	b.reset_cpu();
	// run until: test mode + enough bus cycles recorded, then settle
	uint64_t limit = 40000, stop_half = 0;
	// expected transactions that touch the bus
	size_t nbustx = 0; int lead = 0; bool seen_bus = false; int total = 0;
	for (auto& x : t.tx) { if (x.kind == 'n') { if (!seen_bus) lead += x.cyc; } else { seen_bus = true; nbustx++; } total += x.cyc; }
	uint64_t origin_half = 0; size_t need = nbustx + 2;
	int sstbad = 0, settle = 0; std::string why;
	while (b.cyc < limit) {
		if (!b.step()) return 1;
		if (testmode && recs.size() >= 3 && !b.freeze_half && lastbus_known(t, recs.size() - 2)) {
			// all expected bus cycles issued: end of the last one plus any trailing idle clocks
			b.freeze_half = recs.back().half + 2 * (3 + trail_idle(t));
			origin_half = 1;
		}
		if (b.freeze_half && b.half >= b.freeze_half && ++settle > 8) break;
	}
	refcyc = b.cyc;
	if (!origin_half) { printf("%s: loader never reached the test (cycle %llu)\n", t.name.c_str(), (unsigned long long)b.cyc); return 2; }
	if (getenv("TRACE")) for (size_t i = 0; i < recs.size() && i < 16; i++) printf("  rec %zu: %s %06x fc%d half %llu uds%d lds%d d=%04x\n", i, recs[i].rw ? "R" : "W", recs[i].addr, recs[i].fc, (unsigned long long)recs[i].half, recs[i].uds, recs[i].lds, recs[i].wdata);
	for (int i = 0; i < 17; i++) if (b.t->ref_regs[i] != b.t->dut_regs[i]) { printf("%s: LOCKSTEP reg %d ref %08x dut %08x\n", t.name.c_str(), i, b.t->ref_regs[i], b.t->dut_regs[i]); return 1; }
	if ((b.t->ref_psw & 0xa71f) != (b.t->dut_psw & 0xa71f)) { printf("%s: LOCKSTEP psw\n", t.name.c_str()); return 1; }
	// compare bus transactions
	size_t k = 2; uint64_t expect = 0; bool first = true; int idle = 0;
	size_t ntx = 0;
	for (auto& x : t.tx) {
		if (x.kind == 'n') { idle += x.cyc; continue; }
		if (x.kind == 't') { ntx++; if (first) { expect = recs[k].half; first = false; } k += 1; expect += 2 * (idle + x.cyc); idle = 0; continue; }       // TAS: timing only
		if (k >= recs.size()) { why = "missing bus cycle"; sstbad = 1; break; }
		Rec& r = recs[k++]; ntx++;
		// AS falls one clock after S0
		if (first) { expect = recs[k - 1].half; first = false; idle = 0; }
		uint64_t want = expect + 2 * idle;
		if (r.half != want) { char m[160]; snprintf(m, sizeof m, "bus cycle %zu timing: got half %lld want %lld (delta %lld clk)", ntx, (long long)r.half, (long long)want, ((long long)r.half - (long long)want) / 2); why = m; sstbad = 1; break; }
		bool isw = x.kind == 'w';
		if (r.rw == isw || r.addr != (x.addr & ~(x.size == 'w' ? 1u : 0u)) && !(x.size == 'b') || r.fc != x.fc) {
			char m[200]; snprintf(m, sizeof m, "bus cycle %zu: got %s %06x fc%d want %c %06x fc%d", ntx, r.rw ? "R" : "W", r.addr, r.fc, x.kind, x.addr, x.fc); why = m; sstbad = 1; break; }
		if (x.size == 'b' && (r.addr | (r.lds ? 1 : 0)) != x.addr) { char m[120]; snprintf(m, sizeof m, "bus cycle %zu byte lane/address", ntx); why = m; sstbad = 1; break; }
		if (isw) { uint16_t v = r.wdata; if (x.size == 'b') v = r.lds ? (v & 255) : (v >> 8); if (v != (uint16_t)x.val) { char m[120]; snprintf(m, sizeof m, "bus cycle %zu write data %x want %x", ntx, v, x.val); why = m; sstbad = 1; break; } }
		expect = want + 2 * 4; idle = 0;
	}
	if (getenv("TRACE")) { for (int i = 0; i < 17; i++) printf("  reg %d = %08x want %08x\n", i, b.t->ref_regs[i], t.f[i]); }
	// final registers and memory (golden core probes; the lockstep compare covers the DUT)
	if (!sstbad) {
		char m[160];
		for (int i = 0; i < 17 && !sstbad; i++) {
			uint32_t v = b.t->ref_regs[i];
			if (v != t.f[i]) { snprintf(m, sizeof m, "final reg %d = %08x want %08x", i, v, t.f[i]); why = m; sstbad = 1; }
		}
		uint16_t sr = b.t->ref_psw & 0xa71f;
		if (!sstbad && sr != (t.f[17] & 0xa71f)) { snprintf(m, sizeof m, "final sr %04x want %04x", sr, t.f[17] & 0xa71f); why = m; sstbad = 1; }
		for (auto& x : t.fram) { if (sstbad) break;
			auto it = tm.find(x.first); uint8_t have = it != tm.end() ? it->second : 0xff;
			if (it == tm.end() || have != x.second) { snprintf(m, sizeof m, "final ram[%x] = %02x want %02x", x.first, have, x.second); why = m; sstbad = 1; } }
	}
	if (sstbad) { if (verbose) printf("%s: SST FAIL: %s\n", t.name.c_str(), why.c_str()); else if (g_nfail++ < 100000) printf("%s%s: SST FAIL: %s\n", is_exc(t) ? "EXC " : "", t.name.c_str(), why.c_str()); return is_exc(t) ? 3 : 2; }
	return 0;
}

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	if (!fopen("microrom.mem", "r") || !fopen("nanorom.mem", "r")) { fprintf(stderr, "run from obj_lock/ (microrom.mem, nanorom.mem)\n"); return 2; }
	if (argc > 1 && !strcmp(argv[1], "rand"))
		return run_rand(argc > 2 ? strtoull(argv[2], 0, 0) : 1, argc > 3 ? strtoull(argv[3], 0, 0) : 200000, argc > 4 ? atoi(argv[4]) : 0, argc > 5 ? atoi(argv[5]) : 3);
	if (argc > 2 && !strcmp(argv[1], "img"))
		return run_img(argv[2], argc > 3 ? strtoull(argv[3], 0, 0) : 2000000, argc > 4 ? atoi(argv[4]) : 1, argc > 5 ? strtoull(argv[5], 0, 0) : 1);
	if (argc > 2 && !strcmp(argv[1], "sst")) {
		FILE* f = fopen(argv[2], "r"); if (!f) { perror("tests"); return 2; }
		int maxwait = argc > 3 ? atoi(argv[3]) : 0;
		Test t; int n = 0, lock = 0, sst = 0, sste = 0, nexc = 0; uint64_t c;
		while (read_test(f, t)) { if (getenv("TRACE")) printf("test %s f0=%x r0=%x tx=%zu ram=%zu fram=%zu\n", t.name.c_str(), t.f[0], t.r[0], t.tx.size(), t.ram.size(), t.fram.size()); int r = run_one(t, maxwait, false, c); n++; if (is_exc(t)) nexc++; if (r == 1) lock++; if (r == 2) sst++; if (r == 3) sste++; }
		printf("sst: %d tests (%d exception-path), %d lockstep failures, %d suite failures on normal tests, %d on exception tests\n", n, nexc, lock, sst, sste);
		return lock != 0;
	}
	fprintf(stderr, "usage: tb_lock rand <seed> <cycles> <mode> <maxwait> | sst <tests.txt> [maxwait]\n");
	return 2;
}
