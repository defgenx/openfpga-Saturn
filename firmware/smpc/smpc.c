/* SMPC behaviour as firmware for SERV (RV32IC). Follows src/fpga/saturn/Saturn/SMPC_HLE.sv, whose command, INTBACK,
 * pad and RTC timing was compared with the HMCS400 firmware (sim/smpc). Time unit: 1 tick = 0.25 us (4 MHz).
 * Standard digital pads only. SERV runs about one instruction per 5 ticks: the command path is kept short. */
#include "hw.h"

enum { MSHRES = 1, MSHNMI = 2, SSHRES = 4, SSHNMI = 8, SYSRES = 16, SNDRES = 32, CDRES = 64, DOTSEL = 128, MIRQ = 256 };
#define TS0 45                       /* INTBACK status: ticks from the COMREG write to the start of the 996-tick sequence (calibrated) */

static u8  rtc[7], smem[4], sbuf[7], ir[7];   /* year hi/lo, day|month, days, hour, min, sec (BCD, month binary) */
static u8  sr, ste, pmd[2], oc, vbcnt, st, contv, brk, cont_prev;
static u8  clean, settime_pend, ib_exec, ib_peri, ib_imm, ib_optim, vbpend, optim_t, notopt_t;
static u32 t_rtc, t_optim, t_imm, t_vbin, t_pl, t_vbtime;

static inline u32 now(void) { return MM(R_TICKS); }
static inline int due(u32 t) { return (int)((now() - t) << 8) >= 0; }
static void wait_until(u32 t) { while (!due(t)) ; }
static void dly(u32 n) { wait_until(now() + n); }
static void act(u32 set, u32 clr) { MM(R_PINS) = set; MM(R_PCLR) = clr; }
static void oreg(u32 i, u32 v) { oregs[i] = v; }
static void put(u32 v) { oreg(oc++, v); }
static void sf0(void) { MM(R_SF) = 0; }
static void mirq(void) { act(0, MIRQ); act(MIRQ, 0); }
static void setsr(u32 v) { sr = (u8)v; MM(R_SR) = v; }
static u32 sres(void) { return (MM(R_IN) & 0x10) ? 0 : 1; }

/* RTC */
static u8 inc_bcd(u8 v) { return (v & 15) == 9 ? (u8)((v & 0xF0) + 16) : (u8)(v + 1); }
static void apply_settime(void) { settime_pend = 0; for (int i = 0; i < 7; i++) rtc[i] = sbuf[i]; }
static void rtc_tick(void) {
	if (settime_pend) { apply_settime(); return; }
	if ((rtc[6] = inc_bcd(rtc[6])) != 0x60) return;
	rtc[6] = 0;
	if ((rtc[5] = inc_bcd(rtc[5])) != 0x60) return;
	rtc[5] = 0;
	if ((rtc[4] = inc_bcd(rtc[4])) != 0x24) return;
	rtc[4] = 0;
	u8 d = rtc[3], m = rtc[2] & 15;
	if ((d == 0x28 && m == 2) || (d == 0x30 && (m == 4 || m == 6 || m == 9 || m == 11)) || d == 0x31) {
		rtc[3] = 1;
		rtc[2] = (u8)((rtc[2] & 0xF0) | (m == 12 ? 1 : m + 1));
		if (m == 12 && (rtc[1] = inc_bcd(rtc[1])) == 0x00) rtc[0] = inc_bcd(rtc[0]);
	} else rtc[3] = inc_bcd(d);
}
static void rtc_load(void) {                     /* EXT_RTC toggled */
	u32 a = MM(R_RTC), b = MM(R_RTC + 1);
	rtc[6] = (u8)a; rtc[5] = (u8)(a >> 8); rtc[4] = (u8)(a >> 16); rtc[3] = (u8)(a >> 24);
	rtc[2] = (u8)((rtc[2] & 0xF0) | ((b & 15) + (b & 16 ? 10 : 0)));
	rtc[1] = (u8)(b >> 8); rtc[0] = 0x20;
}

/* pads: TH = bit1, TR = bit0 of the 2-bit values */
static u32 pdr(u32 p) { return (MM(R_PDR) >> (8 * p)) & 15; }
static void thtr(u32 p, u32 ddr, u32 pd) { MM(R_PDR) = p | ddr << 1 | pd << 3; }
static u32 sample(u32 p, u32 pd, u32 *t) { thtr(p, 3, pd); *t += 44; wait_until(*t); return pdr(p); }
static void poll_port(u32 p, u32 *t) {
	u32 a, b, c, d;
	if (pmd[p] == 3) return;
	if (MM(R_IN) & (0x100 << p)) { put(0xA0); return; }
	*t += p ? 245 : 222; wait_until(*t);
	thtr(p, 2, 3); *t += 44; wait_until(*t); a = pdr(p);
	thtr(p, 2, 1); *t += 44; wait_until(*t); b = pdr(p);
	c = ((a & 12) ? 8 : 0) | ((a & 3) ? 4 : 0) | ((b & 12) ? 2 : 0) | ((b & 3) ? 1 : 0);
	if (c == 15 || c == 10) put(c << 4);
	else if (c == 11) {
		c = sample(p, 2, t); d = sample(p, 0, t);
		put(0xF1); *t += 44; put(0x02); *t += 44;
		put((b << 4) | c); *t += 41;
		put((d << 4) | ((a & 8) ? 8 : 0) | 7); *t += 212;
	}
	thtr(p, 3, 3);
}

/* INTBACK */
static void ib_end(void) { ib_exec = ib_peri = ib_imm = st = 0; sf0(); }
static void ib_status(u32 t) {
	u32 i0, opt = ib_optim ? 30 : 0, nop = (ir[1] & 8) ? 0 : 24, p = MM(R_PINS), i;
	oreg(0, (ste << 7) | ((MM(R_IN) >> 4) & 0x40));
	for (i = 0; i < 7; i++) oreg(1 + i, rtc[i]);
	oreg(8, 1);
	oreg(9, MM(R_IN) & 15);
	oreg(10, ((p & DOTSEL) ? 0x40 : 0) | 0x24 | ((p & SSHRES) ? 0x10 : 0) | ((p & MSHNMI) ? 8 : 0) | ((p & SYSRES) ? 2 : 0) | ((p & SNDRES) ? 1 : 0));
	oreg(11, ((p & CDRES) ? 0x40 : 0) | 2);
	for (i = 0; i < 4; i++) oreg(12 + i, smem[i]);
	wait_until(t + 933 - opt - nop);
	if (ir[1] & 8) { ib_exec = 1; ib_optim = !(ir[1] & 2); cont_prev = 0; }
	setsr(0x4F | sres() | ((ir[1] & 8) ? 0x20 : 0));
	wait_until(t + 962 - opt - nop);
	mirq();
	if (ir[1] & 8) { st = 2; MM(R_SF) = 3; i0 = MM(R_IREG); contv = (i0 >> 7) & 1; brk = (i0 >> 6) & 1; return; }          /* SF stays set */
	wait_until(t + 996 - opt - nop);
	sf0();
}
static void do_poll(u32 t) {
	u32 k;
	t += 20;
	ib_imm = oc = 0;
	for (k = 0; k < 2; k++) poll_port(k, &t);
	setsr(0xC0 | sres() | (ir[1] >> 4));
	dly(26); mirq(); dly(70); ib_end();
}

/* per command 0x00-0x1F: pin set mask [8:0] | pin clear mask [17:9] | ticks until SF clears / 2 [29:18] | PULSE [30] | SLOW [31].
 * The set mask is written as is and the table word >> 9 as the clear mask: the hardware ignores the upper bits. */
#define SLOWF (1u << 31)      /* data work or a long sequence follows */
#define PULSE (1u << 30)      /* NMIREQ: release MSHNMI again at once */
#define CT(set, clr, d, f) ((u32)(set) | (u32)(clr) << 9 | (u32)((d) / 2) << 18 | (f))
static const u32 ctab[32] = {
	CT(MSHRES | MSHNMI, 0, 86, 0), CT(0, 0, 85, 0), CT(SSHRES | SSHNMI, 0, 86, 0), CT(SSHNMI, SSHRES, 86, 0),
	CT(0, 0, 85, 0), CT(0, 0, 85, 0), CT(SNDRES, 0, 82, 0), CT(0, SNDRES, 82, 0),
	CT(CDRES, 0, 94, 0), CT(0, CDRES, 98, 0), CT(0, 0, 93, 0), CT(0, 0, 105, 0),
	CT(0, 0, 85, 0), CT(MSHNMI, MSHRES | SSHRES | SNDRES | CDRES | SYSRES, 110, SLOWF), CT(DOTSEL, SSHRES | SNDRES | SYSRES, 100, SLOWF), CT(0, SSHRES | SNDRES | SYSRES | DOTSEL, 100, SLOWF),
	CT(0, 0, 0, SLOWF), CT(0, 0, 85, 0), CT(0, 0, 85, 0), CT(0, 0, 85, 0),
	CT(0, 0, 85, 0), CT(0, 0, 85, 0), CT(0, 0, 470, SLOWF), CT(0, 0, 319, SLOWF),
	CT(0, MSHNMI, 93, PULSE), CT(0, 0, 85, 0), CT(0, 0, 85, 0), CT(0, 0, 85, 0),
	CT(0, 0, 85, 0), CT(0, 0, 85, 0), CT(0, 0, 170, SLOWF), CT(0, 0, 7470, SLOWF)
};
#define AGE() ((MM(R_TICKS) - MM(R_TS)) << 16)           /* ticks since the COMREG write, in the top 16 bits */
#define DUE(e) ((e) >> 1 & 0x1FFE0000u)                  /* the table's delay in the same scale */

static inline __attribute__((always_inline)) void do_command(void) {
	u32 c = MM(R_COM), e, t0;
	if (c >= 32) { while (AGE() < 82u << 16) ; sf0(); MM(R_EV) = EV_CMD; return; }
	e = ctab[c];
	if (!(e & SLOWF)) {                  /* pins at the LLE time, SF clears right after */
		while (AGE() < DUE(e)) ;
		MM(R_PINS) = e; MM(R_PCLR) = e >> 9;
		if (e & PULSE) MM(R_PINS) = MSHNMI;
		MM(R_SF) = 0;
		MM(R_EV) = EV_CMD; vbcnt = 0;
		return;
	}
	if (c == 0x0D || c == 0x0E || c == 0x0F) while (AGE() < DUE(e)) ;
	MM(R_PINS) = e; MM(R_PCLR) = e >> 9;
	MM(R_EV) = EV_CMD;
	clean = 0;
	t0 = now() - (AGE() >> 16);
	vbcnt = 0;
	switch (c) {
	case 0x0D: case 0x0E: case 0x0F:
		wait_until(t0 + 406509);
		if (c == 0x0D) act(CDRES | SYSRES, 0); else act(SYSRES, MSHNMI);
		if (c == 0x0D) act(MSHRES | MSHNMI, 0);
		sf0();
		return;
	case 0x10:
		ir[0] = (u8)MM(R_IREG); ir[1] = (u8)MM(R_IREG + 1); ir[2] = (u8)MM(R_IREG + 2);
		vbpend = 0; pmd[0] = (ir[1] >> 4) & 3; pmd[1] = ir[1] >> 6;
		if ((ir[0] & 15)) {
			ib_optim = !(ir[1] & 2) && (ir[1] & 8);
			if (settime_pend) apply_settime();
			ib_status(t0 + TS0);
			return;
		}
		if (ir[1] & 8) {
			ib_optim = !(ir[1] & 2);
			ib_exec = ib_peri = ib_imm = 1; t_imm = t0 + 87 + ((ir[1] & 2) ? 413 : 964); cont_prev = 0;
			if (ir[2] & 15) st = 1;
			return;
		}
		sf0();
		return;
	case 0x16:
		sbuf[0] = (u8)MM(R_IREG); sbuf[1] = (u8)MM(R_IREG + 1); sbuf[2] = (u8)MM(R_IREG + 2); sbuf[3] = (u8)MM(R_IREG + 3);
		sbuf[4] = (u8)MM(R_IREG + 4); sbuf[5] = (u8)MM(R_IREG + 5); sbuf[6] = (u8)MM(R_IREG + 6);
		ste = 1; settime_pend = 1; t_rtc = now() + 4000000;
		break;
	case 0x17:
		smem[0] = (u8)MM(R_IREG); smem[1] = (u8)MM(R_IREG + 1); smem[2] = (u8)MM(R_IREG + 2); smem[3] = (u8)MM(R_IREG + 3);
		break;
	}
	while (AGE() < DUE(e)) ;
	sf0();
}

/* earliest pending deadline (RTC second, poll time) into the hardware compare */
static void rearm(void) {
	u32 t = now(), d = t_rtc, e;
	if (ib_peri && (ib_imm || (ib_optim && t_optim && !optim_t))) {
		e = ib_imm ? t_imm : t_optim;
		if ((int)((e - d) << 8) < 0) d = e;
	}
	if ((int)((d - t - 4) << 8) < 0) d = t + 4;
	MM(R_RTC) = (d & 0xFFFFFF) | 1u << 24;
}

void main(void) {
	u32 ev, t;
	rtc[2] = 0x10;
	t_rtc = now() + 4000000;
	ste = (MM(R_IN) >> 7) & 1;
	for (;;) {
		ev = MM(R_EV);
		if (!ev || (st && ev == EV_CMD)) {
			if (!clean) { rearm(); clean = 1; }
			if (!st) while (!(ev = MM(R_EV))) ;
			else do ev = MM(R_EV) & ~(u32)EV_CMD; while (!ev);
		}
		if (!st && (ev & EV_CMD)) { do_command(); continue; }       /* first: the command latency counts */
		if (ev & EV_I0) {                                            /* IREG0 written: CONTINUE/BREAK only matter in state 2 */
			MM(R_EV) = EV_I0;
			if (st != 2) continue;
			t = MM(R_IREG); contv = (t >> 7) & 1; brk = (t >> 6) & 1;
		}
		clean = 0;
		if (ev & EV_RTC) { MM(R_EV) = EV_RTC; rtc_load(); }
		if (ev & EV_VBIN) {
			MM(R_EV) = EV_VBIN; t_vbin = now(); optim_t = notopt_t = 0; t_optim = 0;
			if (vbcnt == (ir[2] & 15)) vbpend = 1; else if (ib_exec) vbcnt++;
		}
		if (ev & EV_VBOUT) {
			MM(R_EV) = EV_VBOUT; t_vbtime = now() - t_vbin; if (t_vbtime > 10240) t_vbtime = 10240;
			t = now(); t_optim = (t + 66860 - t_vbtime - 6070) | 1 << 24; t_pl = t; notopt_t = 1;
		}
		if (ev & EV_TMR) {
			MM(R_EV) = EV_TMR;
			if (t_optim && due(t_optim & 0xFFFFFF) && (MM(R_IN) & 0x20)) { optim_t = 1; t_pl = t_optim & 0xFFFFFF; t_optim = 0; }
		}
		if (ib_exec && vbpend) { vbpend = 0; dly(125); ib_end(); continue; }
		if (st == 2) {
			if (brk) { brk = 0; dly(155); ib_end(); continue; }
			if (contv != cont_prev) { cont_prev = contv; dly(381); ib_peri = 1; st = 0; }
		}
		if (st == 1 && vbcnt == (ir[2] & 15)) st = 0;
		if (ib_peri && (ib_imm ? due(t_imm) : (ib_optim ? optim_t : notopt_t)) && (MM(R_IN) & 0x20)) { do_poll(ib_imm ? t_imm : t_pl); continue; }
		if (!st && due(t_rtc)) { t_rtc += 4000000; rtc_tick(); }
	}
}
