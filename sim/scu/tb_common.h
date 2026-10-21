// Shared stimulus helpers for the SCU and DSP differential testbenches.
#pragma once
#include <cstdint>
#include <vector>

struct Rng {
	uint64_t s;
	explicit Rng(uint64_t seed) : s(seed * 0x9E3779B97F4A7C15ull + 0x1234567ull) { next(); next(); }
	uint32_t next() { s ^= s >> 12; s ^= s << 25; s ^= s >> 27; return (uint32_t)((s * 0x2545F4914F6CDD1Dull) >> 32); }
	uint32_t below(uint32_t n) { return n ? next() % n : 0; }
	bool pct(uint32_t p) { return below(100) < p; }
	uint32_t range(uint32_t a, uint32_t b) { return a + below(b - a + 1); }
};

extern Rng rng;

static uint32_t dsp_rand_inst(int len, int pc) {
	uint32_t w = rng.next();
	switch (rng.below(20)) {
	case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:     // ALU + bus moves
		return (w & 0x0FFFFFFF) | ((rng.below(4)) << 28);
	case 8: case 9: case 10: case 11: {                                   // MVI
		uint32_t dst = rng.below(16); if (dst == 8 || dst == 9) dst = 0;
		if (dst == 6 || dst == 7) dst = 0;                              // keep RA0/WA0 valid from preamble
		w = 0x80000000u | (dst << 26) | (w & 0x03FFFFFF);
		if (rng.pct(50)) w &= ~(1u << 25);                              // unconditional
		return w;
	}
	case 12: case 13: {                                                   // DMA
		uint32_t x = 0xC0000000u | (w & 0x0FFFFFFF);
		x &= ~0x00000FFFu; x |= (rng.below(2) << 12) | (rng.below(8) << 8) | rng.range(1, 12);
		if (rng.pct(30)) x |= (1u << 13) | rng.below(8);                // count from RAM
		return x;
	}
	case 14: return 0xD0000000u | (rng.pct(50) ? (w & 0x03F80000u) : 0) | (rng.below(len + 1));   // JMP
	case 15: return (rng.pct(50) ? 0xE8000000u : 0xE0000000u);        // LPS / BTM
	case 16: return rng.pct(50) ? 0xF0000000u : 0xF8000000u;           // END / ENDI
	default: return (w & 0x3FFFFFFF) | (rng.pct(50) ? 0 : 0x80000000u);
	}
}


// Random DSP program: preamble of MVIs (RA0/WA0 from region_addr, LOP, CT0..3), random body, END.
template <class F>
static std::vector<uint32_t> dsp_gen_program(F region_addr) {
	int len = rng.range(6, 40);
	std::vector<uint32_t> prog;
	auto mvi = [&](uint32_t dst, uint32_t imm25) { prog.push_back(0x80000000u | (dst << 26) | (imm25 & 0x1FFFFFF)); };
	int sr = rng.below(3), dr = (sr + 1 + rng.below(2)) % 3;
	mvi(6, region_addr(rng.pct(70) ? sr : 1) >> 2);
	mvi(7, region_addr(rng.pct(70) ? dr : 2) >> 2);
	if (rng.pct(50)) mvi(0xA, rng.below(8));
	for (int i = 0; i < 4; i++) if (rng.pct(40)) mvi(0xC + i, rng.below(64));
	while ((int)prog.size() < len) prog.push_back(dsp_rand_inst(len, prog.size()));
	prog.push_back(rng.pct(50) ? 0xF0000000u : 0xF8000000u);
	prog.push_back(0xF0000000u);
	return prog;
}
