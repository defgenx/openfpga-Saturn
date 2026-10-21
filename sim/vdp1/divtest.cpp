#include "Vdivtest.h"
#include "verilated.h"
#include <cstdio>
int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	Vdivtest* t = new Vdivtest;
	long bad = 0, n = 0;
	for (int a = 0; a < 32; a++)
		for (int s = 0; s < 4096; s++) {
			t->A = a; t->S = s; t->START = 1;
			t->CLK = 0; t->eval(); t->CLK = 1; t->eval();
			t->START = 0;
			for (int i = 0; i < 22; i++) { t->CLK = 0; t->eval(); t->CLK = 1; t->eval(); }
			t->CLK = 0; t->eval();
			n++;
			if (t->QREF != t->QNEW) { if (bad++ < 5) printf("MISMATCH A=%d S=%d ref=%05x new=%05x\n", a, s, t->QREF, t->QNEW); }
		}
	printf("divider: %ld cases, %ld mismatches\n", n, bad);
	return bad != 0;
}
