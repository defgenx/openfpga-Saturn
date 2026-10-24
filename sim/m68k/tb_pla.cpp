#include "Vtb_pla.h"
#include <cstdio>
int main() {
	Vtb_pla* t = new Vtb_pla; unsigned bad = 0;
	for (unsigned op = 0; op < 65536; op++) {
		t->opcode = op;
		for (int c = 0; c < 4; c++) { t->clk = 0; t->eval(); t->clk = 1; t->eval(); }
		if (t->ref_o != t->dut_o) { if (bad < 5) printf("opcode %04x: ref %010llx dut %010llx\n", op, (unsigned long long)t->ref_o, (unsigned long long)t->dut_o); bad++; }
	}
	printf("PLA ROM vs original: %u of 65536 opcodes differ\n", bad);
	return bad != 0;
}
