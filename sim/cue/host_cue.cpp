// Host bench of the firmware's cue-sheet path (firmware/cdb/cue.h): the MMIO of cd_stream's firmware port and the APF
// target commands 0x0180 / 0x0190 / 0x0192 are modelled in C++, the TOC the firmware leaves in the TOC RAM is written
// as one hex word per line (the format of tb_sys's toc_ram.hex), for sim/sys/gen_cue.py check.
//   host_cue <card dir (= /Assets/saturn/common/)> <cue path below it> <out.hex> [le]
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32; typedef int32_t s32;
enum {
	R_EV = 0x0A, R_TICKS = 0x0C, R_LK_CTL = 0x22, R_LK_R0 = 0x23, R_LK_START = 0x24, R_FW_OFF = 0x30, R_FW_CMD = 0x31, R_TOC_A = 0x32, R_TOC_D = 0x33
};
enum { EV_DISC = 1u << 8, EV_ENGBUSY = 1u << 11, EV_FWBUSY = 1u << 18 };

static u32 toc[512], ra, fx_off, res, rlat, committed, ncmd;
static std::string card, spath[48];
static FILE *sfd[48];
static long ssize[48];
static int le;
static const std::string PFX = "/Assets/saturn/common/";

static void bind(int id, const std::string &p)
{
	if (p.compare(0, PFX.size(), PFX)) return;
	FILE *f = fopen((card + "/" + p.substr(PFX.size())).c_str(), "rb");
	if (!f) return;
	if (sfd[id]) fclose(sfd[id]);
	sfd[id] = f; spath[id] = p; fseek(f, 0, SEEK_END); ssize[id] = ftell(f);
}
static u32 pbyte(u32 k) { u32 w = toc[384 + k / 4]; return le ? w >> (8 * (k & 3)) & 255 : w >> (24 - 8 * (k & 3)) & 255; }

static void command(u32 d)
{
	u32 kind = d & 3, id = d >> 2 & 63, len = d >> 8 & 511, dst = d >> 17 & 511;
	ncmd++;
	if (kind == 3) { if (d & 4) committed = 1; return; }
	if (kind == 0) {                                   // 0x0180
		if (!sfd[id] || fx_off + len > (u32)ssize[id]) { res = 2; return; }
		u8 b[512] = {0};
		fseek(sfd[id], fx_off, SEEK_SET);
		if (fread(b, 1, len, sfd[id]) != len) { res = 2; return; }
		for (u32 i = 0; i < len; i += 4) toc[dst + i / 4] = b[i] << 24 | b[i + 1] << 16 | b[i + 2] << 8 | b[i + 3];
		res = 0;
	} else if (kind == 1) {                            // 0x0190 into word 384
		for (u32 k = 0; k < 256; k += 4) {
			u32 w = 0;
			for (u32 j = 0; j < 4; j++) {
				u32 c = k + j < spath[id].size() ? (u8)spath[id][k + j] : 0;
				w |= le ? c << (8 * j) : c << (24 - 8 * j);
			}
			toc[384 + k / 4] = w;
		}
		res = 0;
	} else {                                           // 0x0192 from word 384
		std::string p;
		for (u32 k = 0; k < 256 && pbyte(k); k++) p += (char)pbyte(k);
		if (toc[448] || toc[449]) { res = 5; return; }
		bind(id, p);
		res = spath[id] == p ? 0 : 3;
		printf("openfile %u \"%s\" -> %u size %ld\n", id, p.c_str(), res, res ? 0 : ssize[id]);
	}
}

struct Reg {
	u32 i;
	Reg &operator=(u32 v)
	{
		switch (i) {
		case R_FW_OFF: fx_off = v; break;
		case R_FW_CMD: command(v); break;
		case R_TOC_A: ra = v & 511; rlat = toc[ra]; break;
		case R_TOC_D: toc[ra] = v; ra = (ra + 1) & 511; break;
		default: break;
		}
		return *this;
	}
	operator u32() const
	{
		switch (i) {
		case R_EV: return res << 15;
		case R_LK_R0: return rlat >> 24;
		case R_LK_START: return rlat & 0xFFFFFF;
		default: return 0;
		}
	}
};
#define MM(i) (Reg{(u32)(i)})
#include "../../firmware/cdb/cue.h"

int main(int argc, char **argv)
{
	if (argc < 4) { fprintf(stderr, "usage: host_cue card cue out.hex [le]\n"); return 2; }
	card = argv[1]; le = argc > 4;
	bind(16, PFX + argv[2]);
	if (!sfd[16]) { fprintf(stderr, "no %s\n", argv[2]); return 2; }
	int ok = 0;
	{
		// disc_init ends in an endless loop after the commit: run its parts here
		if (fwc(1, CUE_SLOT, 0, 0, 0)) return 1;
		u32 w = trd(W_PATH), k, c;
		pswap = (w >> 24) == '/' ? 0 : 3;
		for (k = dirlen = 0; k < 256 && (c = pget(k)); k++) if (c == '/') dirlen = k + 1;
		cue_base = ~0u;
		cue_n = probe(CUE_SLOT, 1, 1u << 15);
		ok = cue_n && cue_parse();
	}
	printf("cue %u bytes, parse %s, %u target commands\n", cue_n, ok ? "ok" : "FAILED", ncmd);
	FILE *o = fopen(argv[3], "w");
	for (int i = 0; i < 512; i++) fprintf(o, "%08x\n", toc[i]);
	fclose(o);
	return ok ? 0 : 1;
}
