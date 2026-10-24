// System lockstep driver: golden SCSP + golden FX68K against golden SCSP + m68kp, running a generated program
// from sound RAM. Compares the 68K pins, the interrupt level, the sound RAM interface and the audio output.
#include "Vtb_sys.h"
#include "verilated.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <vector>

struct SoundRam {                       // 256K words; read data appears 4 clk after RD&CS and is held (as sim/scsp)
	static const int LAT = 4;
	std::vector<uint16_t> mem = std::vector<uint16_t>(1 << 18, 0);
	uint16_t q = 0; uint32_t pipe[LAT] = {0, 0, 0, 0};
	void step(uint32_t a, uint16_t d, int we, int rd, int cs) {
		if (cs && we) { uint16_t& w = mem[a & 0x3FFFF]; if (we & 1) w = (w & 0xFF00) | (d & 0x00FF); if (we & 2) w = (w & 0x00FF) | (d & 0xFF00); }
		uint32_t in = (cs && rd) ? (0x10000u | mem[a & 0x3FFFF]) : 0, out = pipe[LAT - 1];
		for (int i = LAT - 1; i > 0; i--) pipe[i] = pipe[i - 1];
		pipe[0] = in; if (out & 0x10000u) q = out & 0xFFFF;
	}
};

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	if (argc < 3) { fprintf(stderr, "usage: tb_sys <image.bin> <clk cycles> [pal]\n"); return 2; }
	uint64_t ncyc = strtoull(argv[2], 0, 0);
	SoundRam ra, rb;
	FILE* f = fopen(argv[1], "rb"); if (!f) { perror(argv[1]); return 2; }
	std::vector<uint8_t> img(1 << 16); size_t n = fread(img.data(), 1, img.size(), f); fclose(f);
	for (size_t i = 0; i + 1 < n; i += 2) ra.mem[i / 2] = rb.mem[i / 2] = img[i] << 8 | img[i + 1];
	Vtb_sys* t = new Vtb_sys;
	t->RST_N = 0; t->CE = 0; t->SCSP_RES_N = 0; t->SCPU_RES_N = 0; t->A_RAM_Q = t->B_RAM_Q = 0; t->CLK = 0;
	uint64_t acc = 0, mism = 0, nas = 0, nirq = 0, ntim = 0, nzero = 0, nwait = 0; bool lastas = true; int lastipl = 7;
	uint64_t waitclk = 0;
	for (uint64_t c = 0; c < ncyc; c++) {
		acc += 225792; bool ce = false; if (acc >= 572728) { acc -= 572728; ce = true; }
		t->CE = ce;
		if (c == 200) t->RST_N = 1;
		if (c == 1000) t->SCSP_RES_N = 1;
		if (c == 1000 + 12000) t->SCPU_RES_N = 1;        // > 3 sample periods after the SCSP leaves reset
		t->CLK = 0; t->eval(); t->CLK = 1; t->eval();
		ra.step(t->A_RAM_A, t->A_RAM_D, t->A_RAM_WE, t->A_RAM_RD, t->A_RAM_CS);
		rb.step(t->B_RAM_A, t->B_RAM_D, t->B_RAM_WE, t->B_RAM_RD, t->B_RAM_CS);
		t->A_RAM_Q = ra.q; t->B_RAM_Q = rb.q;
		t->eval();
		bool bad = t->A_O != t->B_O || t->A_EAB != t->B_EAB || t->A_IPL != t->B_IPL || t->A_RAM_A != t->B_RAM_A || t->A_RAM_D != t->B_RAM_D ||
			t->A_RAM_WE != t->B_RAM_WE || t->A_RAM_RD != t->B_RAM_RD || t->A_RAM_CS != t->B_RAM_CS || t->A_SL != t->B_SL || t->A_SR != t->B_SR ||
			(!(t->A_O & 1) && !(t->A_O & 2) && t->A_EDB != t->B_EDB);
		if (bad) { if (mism < 5) printf("MISMATCH clk %llu: A o=%llx eab=%x edb=%x | B o=%llx eab=%x edb=%x\n", (unsigned long long)c, (unsigned long long)t->A_O,
			t->A_EAB, t->A_EDB, (unsigned long long)t->B_O, t->B_EAB, t->B_EDB); mism++; }
		if (getenv("DBG") && c % 100000 == 0) printf("clk %llu: TIMA/CR8=%04x SCIPD/CR12=%04x SCIEB=%04x SCILV0=%04x ipl=%d\n", (unsigned long long)c, (unsigned)(t->dbg >> 48), (unsigned)((t->dbg >> 32) & 0xffff), (unsigned)((t->dbg >> 16) & 0xffff), (unsigned)(t->dbg & 0xffff), t->A_IPL);
		bool as = t->A_O & 2;
		if (lastas && !as) { nas++; if (getenv("TRACE") && nas < (uint64_t)atoi(getenv("TRACE"))) printf("%llu %06x %s fc%d\n", (unsigned long long)c, (unsigned)t->A_EAB << 1, (t->A_O & 1) ? "R" : "W", (int)((t->A_O >> 4) & 7)); }
		lastas = as;
		if (t->A_IPL != 7 && lastipl == 7) nirq++;
		lastipl = t->A_IPL;
		if (!(t->A_SL == 0) || !(t->A_SR == 0)) nzero++;
		
		if (!as && ((t->A_O >> 13) & 1)) waitclk++;      // AS low with DTACK high: wait states
	}
	printf("sys %s: %llu clk, %llu 68K bus cycles, %llu interrupt requests, %llu clk with wait states, audio non-zero %llu clk, %llu mismatches\n", argv[1],
		(unsigned long long)ncyc, (unsigned long long)nas, (unsigned long long)nirq, (unsigned long long)waitclk, (unsigned long long)nzero, (unsigned long long)mism);
	return mism != 0;
}
