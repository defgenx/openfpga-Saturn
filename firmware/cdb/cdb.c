/*
 * HLE Sega Saturn CD block firmware (SERV, RV32IC).
 *
 * The command set, buffer/partition/filter model, data-transfer rules and drive behaviour follow
 * Mednafen/Beetle Saturn src/ss/cdb.cpp:
 *   Copyright (C) 2016-2017 Mednafen Team
 *   GPL-2.0-or-later (this repository is GPL-3.0; the licences are compatible)
 * This is a re-expression for a soft CPU with the data path in hardware, not a line-for-line port:
 * sectors are written to DRAM by the sink, the transfer engine moves words to and from the host data
 * port, the CPU only does bookkeeping. docs/cdb-hle.md lists every deviation.
 */
#include "hw.h"

#define NBUF   200
#define NFILT  24
#define SPARE  0x3E800u                 /* DRAM word address of the area after the 200 buffers */
#define A_TOC  (SPARE + 0)              /* 0xCC words */
#define A_SUBQ (SPARE + 256)            /* 5 words */
#define A_FINFO (SPARE + 512)           /* 256 x 6 words */
#define A_ROOT (SPARE + 2048)           /* 6 words */

/* HIRQ */
#define H_CMOK 0x0001
#define H_DRDY 0x0002
#define H_CSCT 0x0004
#define H_BFUL 0x0008
#define H_PEND 0x0010
#define H_DCHG 0x0020
#define H_ESEL 0x0040
#define H_EHST 0x0080
#define H_ECPY 0x0100
#define H_EFLS 0x0200
#define H_SCDQ 0x0400
#define H_MPED 0x0800

/* drive status */
#define S_BUSY 0x00
#define S_PAUSE 0x01
#define S_STANDBY 0x02
#define S_PLAY 0x03
#define S_SEEK 0x04
#define S_OPEN 0x06
#define S_NODISC 0x07
#define S_PERIODIC 0x20
#define S_DTREQ 0x40
#define S_WAIT 0x80

#define TICK_HZ 176400u
#define PERIOD_TICKS 2923u              /* 187065 / (44100*256) s */
#define BOOT_TICKS 76250u               /* 4880000 / (44100*256) s */

/* ------------------------------------------------------------------ helpers */
static inline u32 baddr(u32 n) { return (n << 10) + (n << 8); }   /* 1280 words per buffer */
static inline void dr_seek(u32 a) { MM(R_DR_A) = a; }
static inline u16 dr_rd(void) { return (u16)MM(R_DR_D); }
static inline void dr_wr(u16 v) { MM(R_DR_D) = v; }
static u16 dr_get(u32 a) { dr_seek(a); return dr_rd(); }

static inline u32 now(void) { return MM(R_TICKS); }
static inline int due(u32 t) { return (s32)(now() - t) >= 0; }
static void wait_ticks(u32 n) { u32 t = now() + n; while (!due(t)) ; }
static inline void irq(u16 b) { MM(R_HIRQ) = b; }

static u8 bcd(u32 v) { u8 t = 0; while (v >= 10) { v -= 10; t++; } return (u8)((t << 4) | v); }
static u32 unbcd(u8 v) { return (u32)((v >> 4) * 10 + (v & 15)); }

/* ------------------------------------------------------------------ state */
static u8 bprev[NBUF], bnext[NBUF];
static u8 first_free, free_cnt;
static struct { u8 first, last, count; } part[NFILT];
static struct { u8 mode, tconn, fconn, chan, file, sub, subm, ci, cim; u32 fad, range; } flt[NFILT];
static u8 get_len, put_len, cd_conn, last_dest;
static u32 calc_size;
static struct { u32 fad; u16 spos; u8 pnum; } fadsrch;

static struct {
	u8 active, writing, needfree, fnum, ehst;
	u16 n, cur;
	u8 list[NBUF];
} dt;

typedef struct { u8 status, ctrl, idx, tno, is_cdrom, repcount; u32 fad, rel; } posinfo;
static posinfo pos;
static u8 dphase, at_end;
static u32 ddue, cur_sector;
static u32 play_start, play_end, play_cmd_start, play_cmd_end;
static u8 play_cmd_rep, play_rep, play_rep_ctr;
static u16 play_end_irq;
static u8 play_end_cnt;
static u32 period_due;
static u8 ntr;
static u32 toc_end;

/* sector pipeline (drive -> sink): entry 0 is in the feed, entry 1 is armed */
static u8 inflight;
static u8 infl_buf[2], infl_audio[2], infl_stale[2];

/* file system */
static struct {
	u8 active, doauth, abort, pnum, have, st, cur_buf, rlen, rpos;
	u16 valid_cnt, finfo_offs;
	u32 info_offs, total_counter, total_max, record_counter, pay, spos;
	u8 rec[256];
} fls;
static u8 finfo_valid, root_valid, auth_type;
static u8 sw_reset_pending;
static u16 sw_hirq_deferred;
static u8 booted, inited;

/* ------------------------------------------------------------------ buffers */
static void reset_buffers(void)
{
	u16 i;
	for (i = 0; i < NBUF; i++) { bprev[i] = i ? i - 1 : 0xFF; bnext[i] = (i == NBUF - 1) ? 0xFF : i + 1; }
	first_free = 0; free_cnt = NBUF;
	for (i = 0; i < NFILT; i++) { part[i].first = part[i].last = 0xFF; part[i].count = 0; }
}

static u8 buf_alloc(void)
{
	u8 b = first_free;
	if (bprev[b] == 0xFF) first_free = bnext[b]; else bnext[bprev[b]] = bnext[b];
	if (bnext[b] != 0xFF) bprev[bnext[b]] = bprev[b];
	free_cnt--;
	bprev[b] = bnext[b] = 0xFF;
	return b;
}

static void buf_free(u8 b)
{
	bprev[b] = 0xFF; bnext[b] = first_free;
	if (first_free != 0xFF) bprev[first_free] = b;
	free_cnt++; first_free = b;
}

static void part_link(u8 p, u8 b)
{
	bnext[b] = 0xFF;
	if (part[p].first == 0xFF) { part[p].first = part[p].last = b; bprev[b] = 0xFF; }
	else { bnext[part[p].last] = b; bprev[b] = part[p].last; part[p].last = b; }
	part[p].count++;
}

static int part_get(u8 p, u16 i)
{
	u8 b;
	for (b = part[p].first; b != 0xFF; b = bnext[b]) { if (!i) return b; i--; }
	return -1;
}

static void part_unlink(u8 p, u8 b)
{
	part[p].count--;
	if (bprev[b] == 0xFF) part[p].first = bnext[b]; else bnext[bprev[b]] = bnext[b];
	if (bnext[b] == 0xFF) part[p].last = bprev[b]; else bprev[bnext[b]] = bprev[b];
	bprev[b] = bnext[b] = 0xFF;
}

static void part_clear(u8 p)
{
	while (part[p].count) { u8 b = part[p].first; part_unlink(p, b); buf_free(b); }
}

/* ------------------------------------------------------------------ filters */
typedef struct { u8 m, s, f, mode, file, chan, sub, ci; } shdr;

static void hdr_dram(u8 b, shdr *h)
{
	u16 w;
	dr_seek(baddr(b) + 6);
	w = dr_rd(); h->m = w >> 8; h->s = (u8)w;
	w = dr_rd(); h->f = w >> 8; h->mode = (u8)w;
	w = dr_rd(); h->file = w >> 8; h->chan = (u8)w;
	w = dr_rd(); h->sub = w >> 8; h->ci = (u8)w;
}

static void hdr_latch(shdr *h)
{
	u32 a = MM(R_HDR_A), b = MM(R_HDR_B);
	h->m = a >> 24; h->s = a >> 16; h->f = a >> 8; h->mode = (u8)a;
	h->file = b >> 24; h->chan = b >> 16; h->sub = b >> 8; h->ci = (u8)b;
}

static u32 hdr_fad(const shdr *h) { return (unbcd(h->m) * 60 + unbcd(h->s)) * 75 + unbcd(h->f); }

static void filt_reset_cond(u8 i)
{
	flt[i].mode = 0; flt[i].fad = flt[i].range = 0; flt[i].chan = flt[i].file = 0;
	flt[i].sub = flt[i].subm = flt[i].ci = flt[i].cim = 0;
}

static int filt_test(u8 n, const shdr *h)
{
	u8 file = 0, chan = 0, sub = 0, ci = 0, shinv;
	if (flt[n].mode & 0x40) {
		u32 f = hdr_fad(h);
		if (f < flt[n].fad || f >= flt[n].fad + flt[n].range) return 0;
	}
	if (h->mode == 2) { file = h->file; chan = h->chan; sub = h->sub; ci = h->ci; }
	shinv = (flt[n].mode & 0x10) && (flt[n].mode & 0x0F);
	if ((flt[n].mode & 1) && file != flt[n].file) return shinv;
	if ((flt[n].mode & 2) && chan != flt[n].chan) return shinv;
	if ((flt[n].mode & 4) && (sub & flt[n].subm) != flt[n].sub) return shinv;
	if ((flt[n].mode & 8) && (ci & flt[n].cim) != flt[n].ci) return shinv;
	return !shinv;
}

/* returns the filter that accepted the buffer, 0xFF if it was discarded (and freed) */
static u8 filter_buf(u8 fn, u8 b, const shdr *h)
{
	u8 cur = fn, it = NFILT;
	while (cur != 0xFF && it--) {
		if (filt_test(cur, h)) {
			if (flt[cur].tconn != 0xFF) { part_link(flt[cur].tconn, b); return cur; }
			cur = 0xFF;
		} else cur = flt[cur].fconn;
	}
	buf_free(b);
	return 0xFF;
}

static void filter_buf_dram(u8 fn, u8 b)
{
	shdr h;
	hdr_dram(b, &h);
	filter_buf(fn, b, &h);
}

static void set_cd_conn(u8 f)
{
	u8 i;
	for (i = 0; i < NFILT; i++) if (flt[i].fconn == f) flt[i].fconn = 0xFF;
	cd_conn = f;
}

static void filt_disconnect_input(u8 f)
{
	u8 i;
	if (f == 0xFF) return;
	if (cd_conn == f) cd_conn = 0xFF;
	for (i = 0; i < NFILT; i++) if (flt[i].fconn == f) flt[i].fconn = 0xFF;
}

static void filt_set_fconn(u8 f, u8 c) { filt_disconnect_input(c); flt[f].fconn = c; }

/* ------------------------------------------------------------------ disc / TOC */
static u32 lk_r0, lk_start;
static void lk_run(u32 byidx, u32 x)
{
	MM(R_LK_CTL) = 2;
	while (MM(R_EV) & EV_ENGBUSY) ;
	MM(R_LK_X) = x; MM(R_LK_IDX) = x;
	MM(R_LK_CTL) = byidx | 2 | 4;
	while (MM(R_EV) & EV_LKBUSY) ;
	lk_r0 = MM(R_LK_R0); lk_start = MM(R_LK_START);
	MM(R_LK_CTL) = 0;
}
#define LK_TRACK() ((lk_r0 >> 16) & 0x7F)
#define LK_DATA()  ((lk_r0 >> 24) & 1)
#define LK_S2048() ((lk_r0 >> 23) & 1)
#define LK_IDX1()  (lk_r0 & 0xFF)

static void put32(u32 a, u32 v) { dr_seek(a); dr_wr(v >> 16); dr_wr(v); }

static void build_toc(void)
{
	u32 i, ctl0 = 0, ctl1 = 0, n = MM(R_NTR) & 0x7F;
	ntr = n; toc_end = MM(R_TOCEND);
	for (i = 0; i < 99; i++) {
		if (i < n) {
			u32 ctl;
			lk_run(1, i);
			ctl = LK_DATA() ? 0x41 : 0x01;
			if (!i) ctl0 = ctl;
			ctl1 = ctl;
			put32(A_TOC + i * 2, (ctl << 24) | (lk_start + LK_IDX1()));
		} else put32(A_TOC + i * 2, 0xFFFFFFFFu);
	}
	dr_seek(A_TOC + 198);
	dr_wr((ctl0 << 8) | 1); dr_wr(0x0000);
	dr_wr((ctl1 << 8) | n); dr_wr(0x0000);
	put32(A_TOC + 202, (0x01u << 24) | toc_end);
}

static void make_subq(void)
{
	dr_seek(A_SUBQ);
	dr_wr((pos.ctrl << 8) | pos.tno);
	dr_wr((pos.idx << 8) | (pos.rel >> 16));
	dr_wr(pos.rel);
	dr_wr(pos.fad >> 16);
	dr_wr(pos.fad);
}

/* Q-channel position of FAD f */
static void pos_of(u32 f, posinfo *p)
{
	lk_run(0, f);
	p->fad = f;
	if (LK_TRACK() >= ntr) { p->tno = 0xAA; p->ctrl = 0x01; p->idx = 1; p->rel = f - toc_end; }
	else {
		u32 base = lk_start + LK_IDX1();
		p->tno = LK_TRACK() + 1; p->ctrl = LK_DATA() ? 0x41 : 0x01;
		if (f >= base) { p->idx = 1; p->rel = f - base; } else { p->idx = 0; p->rel = base - f; }
	}
}

/* ------------------------------------------------------------------ results */
static u8 base_status(int rejected, u8 hb)
{
	u8 r;
	if (rejected) return 0xFF;
	r = (MM(R_EV) & EV_DISC) ? pos.status : S_NODISC;
	return r | hb;
}

static void make_report(int rejected, u8 hb)
{
	if (rejected) { MM(R_RR0) = 0xFFFF; MM(R_RR0 + 1) = 0xFFFF; MM(R_RR0 + 2) = 0xFFFF; MM(R_RR3) = 0xFFFF; return; }
	MM(R_RR0 + 0) = (base_status(rejected, hb) << 8) | (pos.is_cdrom << 7) | (pos.repcount & 0x7F);
	MM(R_RR0 + 1) = (pos.ctrl << 8) | pos.tno;
	MM(R_RR0 + 2) = (pos.idx << 8) | (pos.fad >> 16);
	MM(R_RR3) = pos.fad & 0xFFFF;
}

static void done_cmd(void) { irq(H_CMOK | sw_hirq_deferred); sw_hirq_deferred = 0; }
static void cdstatus(int rejected, u8 hb) { make_report(rejected, hb); done_cmd(); }
static void results(u32 r0, u32 r1, u32 r2, u32 r3)
{
	MM(R_RR0 + 0) = r0; MM(R_RR0 + 1) = r1; MM(R_RR0 + 2) = r2; MM(R_RR3) = r3;
	done_cmd();
}

/* ------------------------------------------------------------------ drive */
enum { D_STOP, D_PLAY, D_SEEKSTART, D_SEEK, D_EJ0, D_EJ1, D_EJWAIT, D_STARTUP };

/* drop sectors that were issued but not yet delivered */
static void pipe_flush(void)
{
	u8 i;
	if (MM(R_EV) & EV_ARMED) {
		MM(R_SD_CTL) = 0x20;                       /* disarm */
		if (inflight) { inflight--; if (!infl_audio[inflight]) buf_free(infl_buf[inflight]); }
	}
	for (i = 0; i < inflight; i++) infl_stale[i] = 1;
	MM(R_PF_CTL) = 0;
}

static void clear_pending_sec(void) { pipe_flush(); play_end_irq = 0; play_end_cnt = 0; }

static void start_seek(u32 target, int no_pickup_change)
{
	posinfo p;
	play_start = target;
	if (no_pickup_change && dphase == D_PLAY) return;
	if (target & 0x800000) {
		u32 f = target & 0x7FFFFF;
		if (f < 150) f = 150; else if (f >= toc_end) f = toc_end;
		pos_of(f, &p);
		p.rel = p.rel;
	} else {
		u32 t = (target >> 8) & 0xFF, ix = target & 0xFF;
		if (t > ntr) t = ntr; else if (t < 1) t = 1;
		if (ix < 1) ix = 1;
		lk_run(1, t - 1);
		p.fad = lk_start + LK_IDX1();
		p.tno = t; p.idx = ix; p.rel = 0; p.ctrl = LK_DATA() ? 0x41 : 0x01;
	}
	pos.fad = p.fad; pos.rel = p.rel; pos.tno = p.tno; pos.idx = p.idx; pos.ctrl = p.ctrl;
	pos.status = S_BUSY; pos.is_cdrom = 0; pos.repcount = play_rep_ctr & 0xF;
	pipe_flush();
	dphase = D_SEEKSTART; at_end = 0;
	period_due = now() + PERIOD_TICKS;
	MM(R_PF_FAD) = pos.fad; MM(R_PF_CTL) = 1;
}

/* is the sector `cur_sector` (described by p) outside the play range? */
static int play_end_met(const posinfo *p)
{
	int end = (p->tno == 0xAA);
	if (play_end) {
		if (play_end & 0x800000) end |= (cur_sector >= (play_end & 0x7FFFFF));
		else {
			u32 et = (play_end >> 8) & 0xFF, ei = play_end & 0xFF;
			if (et > ntr) et = ntr; else if (et < 1) et = 1;
			if (ei < 1) ei = 1;
			end |= (p->tno > et) || (p->tno == et && p->idx > ei);
		}
	}
	if (play_start & 0x800000) end |= (cur_sector < (play_start & 0x7FFFFF));
	else {
		u32 st = (play_start >> 8) & 0xFF;
		if (st > ntr) st = ntr; else if (st < 1) st = 1;
		end |= (p->tno < st);
	}
	return end;
}

static void sector_complete(void)
{
	u32 ev = MM(R_EV);
	posinfo p;
	int data;
	if (ev & EV_SEC) {
		MM(R_EVCLR) = CLR_SEC;
		if (inflight) {
			u8 b = infl_buf[0];
			if (infl_stale[0]) { if (!infl_audio[0]) buf_free(b); }
			else if (!infl_audio[0]) {
				shdr h;
				hdr_latch(&h);
				pos.is_cdrom = 1;
				last_dest = filter_buf(cd_conn, b, &h);
				irq(H_CSCT);
				if (!free_cnt) irq(H_BFUL);
				pos.status = S_PLAY;
			} else { pos.is_cdrom = 0; pos.status = S_PLAY; }
			infl_buf[0] = infl_buf[1]; infl_audio[0] = infl_audio[1]; infl_stale[0] = infl_stale[1];
			inflight--;
		}
	}
	if (at_end || !(ev & EV_DISC)) return;
	if (inflight >= 2 || (inflight && (pos.ctrl & 0x40))) return;
	pos_of(cur_sector, &p);
	data = p.ctrl & 0x40;
	if (play_end_met(&p)) {
		if (inflight) return;
		if (play_rep_ctr >= play_rep) {
			pos.fad = cur_sector; pos.tno = p.tno; pos.idx = p.idx; pos.rel = p.rel; pos.ctrl = p.ctrl;
			pos.status = play_end_irq ? S_BUSY : S_PAUSE;
			at_end = 1;
			MM(R_PF_CTL) = 0;
		} else {
			if (play_rep_ctr < 0xE) play_rep_ctr++;
			play_rep_ctr |= 0x80;
			start_seek(play_cmd_start, 0);
		}
		return;
	}
	play_rep_ctr &= ~0x80;
	if (inflight && data) return;               /* header latch holds one data sector */
	if (data && !free_cnt) { pos.status = S_PAUSE; return; }
	{
		u32 f = cur_sector;
		u32 hdr = ((u32)bcd(f / 4500) << 16) | ((u32)bcd((f / 75) % 60) << 8) | bcd(f % 75);
		if (MM(R_EV) & EV_ARMED) return;
		MM(R_SD_HDR) = hdr;
		if (data) {
			u8 b = buf_alloc();
			MM(R_SK_BASE) = baddr(b);
			MM(R_SD_CTL) = 0x10 | (LK_S2048() ? 8 : 0);
			infl_buf[inflight] = b; infl_audio[inflight] = 0;
		} else {
			MM(R_SD_CTL) = 2;
			infl_audio[inflight] = 1;
		}
		infl_stale[inflight] = 0;
		inflight++;
		cur_sector++;
		pos.fad = f; pos.tno = p.tno; pos.idx = p.idx; pos.rel = p.rel; pos.ctrl = p.ctrl;
	}
}

static void drive_step(void)
{
	u32 ev = MM(R_EV);
	switch (dphase) {
	case D_EJ0:
		if (due(ddue)) {
			pos.status = S_OPEN; pos.fad = pos.rel = 0xFFFFFF; pos.ctrl = pos.idx = pos.tno = 0xFF;
			pos.is_cdrom = 1; pos.repcount = 0x7F;
			finfo_valid = root_valid = 0; auth_type = 0;
			irq(H_DCHG);
			dphase = D_EJ1; ddue = now() + 64;
		}
		break;
	case D_EJ1:
		if (due(ddue)) { irq(H_EFLS); dphase = D_EJWAIT; ddue = now() + 16; }
		break;
	case D_EJWAIT:
		if (due(ddue)) {
			if (ev & EV_DISC) { pos.status = S_BUSY; dphase = D_STARTUP; ddue = now() + TICK_HZ; }
			else ddue = now() + 16;
		}
		break;
	case D_STARTUP:
		if (due(ddue)) {
			build_toc();
			clear_pending_sec();
			play_end = 0x800000; play_rep = 0;
			start_seek(0x800096, 0);
		}
		break;
	case D_STOP:
		pos.status = S_STANDBY;
		break;
	case D_SEEKSTART: {
		s32 d = (s32)(pos.fad - cur_sector);
		u32 t = 7056u + (d < 0 ? ((u32)(-d) * 7) >> 4 : ((u32)d * 13) >> 5);
		if (d < 0 || d >= 150) t += 1176;
		pos.status = S_SEEK; dphase = D_SEEK; ddue = now() + t;
		cur_sector = pos.fad;
		break; }
	case D_SEEK:
		if (due(ddue)) { dphase = D_PLAY; pos.status = S_PLAY; }
		break;
	case D_PLAY:
		sector_complete();
		break;
	default: break;
	}
}

static void periodic(void)
{
	if (!due(period_due)) return;
	period_due = now() + PERIOD_TICKS;
	if (play_end_irq && at_end && pos.status == S_BUSY) {
		if (++play_end_cnt >= 3) {
			irq(play_end_irq); play_end_irq = 0; play_end_cnt = 0; pos.status = S_PAUSE;
		}
	}
	if (MM(R_EV) & EV_RRD) make_report(0, S_PERIODIC);
	make_subq();
	irq(H_SCDQ);
}

/* ------------------------------------------------------------------ data transfer */
static void xf_seg(u32 a, u32 b, u32 cnt) { MM(R_XF_A) = a; MM(R_XF_B) = b; MM(R_XF_CNT) = cnt; }

static void sec_range(u8 b, u32 *off, u32 *cnt)
{
	static const u8 wo[4] = { 12, 8, 6, 0 };
	static const u16 wc[4] = { 1024, 1168, 1170, 1176 };
	static const u8 ro[4] = { 8, 8, 6, 0 };
	if (dt.writing) { *off = wo[put_len]; *cnt = wc[put_len]; return; }
	if (get_len == 0) {
		shdr h;
		hdr_dram(b, &h);
		if (h.mode == 1) { *off = 8; *cnt = 1024; }
		else { *off = 12; *cnt = (h.sub & 0x20) ? 1162 : 1024; }
	} else { *off = ro[get_len]; *cnt = wc[get_len]; }
}

static void dt_feed(void)
{
	while (dt.active && dt.cur < dt.n && (MM(R_EV) & EV_SEG1FREE)) {
		u32 off, cnt, b = dt.list[dt.cur];
		sec_range((u8)b, &off, &cnt);
		xf_seg(baddr(b) + off, 0, cnt);
		dt.cur++;
	}
}

static void dt_start(int writing, int needfree, u16 n)
{
	dt.writing = writing; dt.needfree = needfree; dt.n = n; dt.cur = 0; dt.ehst = 0;
	MM(R_XF_MODE) = writing ? 2 : 1;
	dt.active = 1;
	dt_feed();
}

static void dt_start_pseudo(u32 a, u32 cnt, int ehst)
{
	dt.writing = 0; dt.needfree = 0; dt.n = 0; dt.cur = 0; dt.ehst = ehst;
	MM(R_XF_MODE) = 1;
	xf_seg(a, 0, cnt);
	dt.active = 1;
}

static void xf_wait_idle(void) { while (!(MM(R_EV) & EV_XFIDLE)) ; }

/* ------------------------------------------------------------------ file system */
static void rec_to_info(u32 dst, const u8 *r)
{
	u8 fi_len = r[32], rl = r[0], attr = r[25] & 2, fnum = 0;
	u32 so = 33 + (fi_len | 1), sl = rl - so, fad, size;
	fad = 150 + (((u32)r[6] << 24) | ((u32)r[7] << 16) | ((u32)r[8] << 8) | r[9]);
	size = ((u32)r[14] << 24) | ((u32)r[15] << 16) | ((u32)r[16] << 8) | r[17];
	if ((s32)sl >= 14 && so + sl <= 256 && r[so + 6] == 'X' && r[so + 7] == 'A') { attr |= r[so + 4] & 0xF8; fnum = r[so + 8]; }
	dr_seek(dst);
	dr_wr(fad >> 16); dr_wr(fad); dr_wr(size >> 16); dr_wr(size);
	dr_wr((r[26] << 8) | r[27]); dr_wr((fnum << 8) | attr);
}

static u32 fi_fad(u32 a) { return ((u32)dr_get(a) << 16) | dr_rd(); }
static u32 fi_size(u32 a) { return ((u32)dr_get(a + 2) << 16) | dr_rd(); }
static u8 fi_attr(u32 a) { return (u8)dr_get(a + 5); }
static u8 fi_fnum(u32 a) { return dr_get(a + 5) >> 8; }

static void fls_release(void) { if (fls.have) { buf_free(fls.cur_buf); fls.have = 0; } }

static void fls_finish(void)
{
	fls_release();
	part_clear(fls.pnum);
	fls.active = fls.doauth = fls.abort = 0;
	play_end_irq = 0; play_start = 0x800000; play_end = 0x800000; play_rep = 0;
	at_end = 0;
}

static u8 fls_byte(u32 i)
{
	u16 w = dr_get(fls.pay + (i >> 1));
	return (i & 1) ? (u8)w : (u8)(w >> 8);
}

static int fls_grab(void)
{
	shdr h;
	if (fls.have) return 1;
	if (!part[fls.pnum].count) return 0;
	fls.cur_buf = part[fls.pnum].first;
	hdr_dram(fls.cur_buf, &h);
	fls.pay = baddr(fls.cur_buf) + (h.mode == 2 ? 12 : 8);
	part_unlink(fls.pnum, fls.cur_buf);
	fls.have = 1; fls.spos = 0;
	return 1;
}

static void fls_step(void)
{
	u32 budget = 48;
	if (!fls.active) return;
	if (fls.abort) { fls_finish(); return; }
	if (fls.doauth) {
		for (;;) {
			u8 t, i, id[5];
			if (!fls_grab()) return;
			t = fls_byte(0);
			for (i = 0; i < 5; i++) id[i] = fls_byte(1 + i);
			if (id[0] != 'C' || id[1] != 'D' || id[2] != '0' || id[3] != '0' || id[4] != '1' || t == 0xFF) { fls_release(); break; }
			if (t == 1) {
				for (i = 0; i < 34; i++) fls.rec[i] = fls_byte(156 + i);
				rec_to_info(A_ROOT, fls.rec);
				root_valid = 1;
				fls_release();
				break;
			}
			fls_release();
		}
		set_cd_conn(0xFF);
		fls_finish();
		wait_ticks(2);
		irq(H_EFLS);
		return;
	}
	while (budget-- && fls.total_counter < fls.total_max) {
		if (!fls_grab()) return;
		if (fls.st == 0) {
			fls.rlen = fls_byte(fls.spos);
			fls.spos++; fls.total_counter++;
			if (!fls.rlen) { fls.total_counter += 2048 - fls.spos; fls.spos = 2048; }
			else { fls.rec[0] = fls.rlen; fls.rpos = 1; fls.st = 1; }
		} else {
			fls.rec[fls.rpos++] = fls_byte(fls.spos);
			fls.spos++; fls.total_counter++;
			if (fls.rpos >= fls.rlen) {
				fls.st = 0;
				if (fls.finfo_offs < 256) {
					if (fls.record_counter < 2 || fls.record_counter >= fls.info_offs) {
						rec_to_info(A_FINFO + fls.finfo_offs * 6u, fls.rec);
						fls.finfo_offs++;
						if (fls.record_counter >= 2) fls.valid_cnt++;
					}
					fls.record_counter++;
				}
			}
		}
		if (fls.spos >= 2048) fls_release();
	}
	if (fls.total_counter >= fls.total_max) {
		finfo_valid = 1;
		fls_finish();
		wait_ticks(2);
		irq(H_EFLS);
	}
}

/* connect filter f as CD device input and its output to partition f, accepting only FADs in range */
static void fls_filter(u8 f, u32 fad, u32 range, u8 mode)
{
	set_cd_conn(f);
	flt[f].tconn = f; flt[f].fconn = 0xFF;
	flt[f].fad = fad; flt[f].range = range; flt[f].mode = mode;
	flt[f].chan = flt[f].sub = flt[f].subm = flt[f].ci = flt[f].cim = 0;
}

static void fls_begin_play(u32 fad)
{
	clear_pending_sec();
	play_end = 0; play_rep = 0; play_rep_ctr = 0;
	start_seek(0x800000 | fad, 0);
}

/* ------------------------------------------------------------------ commands */
static u16 CD[4];

static void cmd_reset_state(void)
{
	u8 i;
	get_len = put_len = 0; cd_conn = 0xFF; last_dest = 0xFF;
	dt.active = 0; MM(R_XF_MODE) = 0;
	for (i = 0; i < NFILT; i++) { flt[i].tconn = i; flt[i].fconn = 0xFF; filt_reset_cond(i); }
	reset_buffers();
	fadsrch.fad = 0; fadsrch.spos = 0; fadsrch.pnum = 0;
	calc_size = 0;
	play_end = 0x800000; play_rep = 0;
	pipe_flush();
	play_end_irq = 0;
	fls.active = fls.doauth = fls.abort = fls.have = 0; fls.st = 0;
	finfo_valid = 0;
}

static u32 cd_fad(void) { return ((u32)(CD[0] & 0xFF) << 16) | CD[1]; }

static void sec_size_sum(u8 b, u32 *acc)
{
	shdr h;
	switch (get_len) {
	case 1: *acc += 1168; break;
	case 2: *acc += 1170; break;
	case 3: *acc += 1176; break;
	default:
		hdr_dram(b, &h);
		*acc += (h.mode == 2 && (h.sub & 0x20)) ? 1162 : 1024;
	}
}

/* Get/Delete/GetDelete sector data and calc size share the (offset, count) argument form */
static int sec_args(u8 p, int *offs, int *num)
{
	*offs = CD[1]; *num = CD[3];
	if (*offs == 0xFFFF) *offs = part[p].count - 1;
	if (*num == 0xFFFF) *num = part[p].count - *offs;
	return *num <= 0 || *offs < 0 || (*offs + *num) > (int)part[p].count;
}

static void cmd_exec(void)
{
	u8 cmd = CD[0] >> 8;
	u8 f = CD[2] >> 8;
	switch (cmd) {
	case 0x00: cdstatus(0, 0); break;
	case 0x01: results(base_status(0, 0) << 8, 0x0001, 0x0000, inited ? 0x0600 : 0xFF00); break;
	case 0x02:
		if (dphase == D_STARTUP || dt.active) cdstatus(0, S_WAIT);
		else {
			results(base_status(0, S_DTREQ) << 8, 0xCC, 0, 0);
			dt_start_pseudo(A_TOC, 0xCC, 1);
			wait_ticks(2); irq(H_DRDY);
		}
		break;
	case 0x03: {
		u32 s = CD[0] & 0xFF, fad, rsw;
		if (dphase == D_STARTUP) { cdstatus(0, S_WAIT); break; }
		if (!s) { fad = toc_end; rsw = 1; } else if (s <= 1) { fad = 0; rsw = s; } else { fad = 0xFFFFFF; rsw = 0xFF; }
		results(base_status(0, 0) << 8, 0, (rsw << 8) | (fad >> 16), fad & 0xFFFF);
		break; }
	case 0x04:
		inited = 1;
		clear_pending_sec(); play_end = 0x800000; play_rep = 0; pos.status = S_BUSY; at_end = 0;
		cdstatus(0, 0);
		if (CD[0] & 1) { wait_ticks(3); sw_reset_pending = 1; }
		break;
	case 0x06:
		if (dt.active) {
			u32 total = MM(R_XF_HCNT);
			u16 i;
			dt.active = 0; MM(R_XF_MODE) = 0;
			results((base_status(0, 0) << 8) | (total >> 16), total & 0xFFFF, 0, 0);
			if (dt.writing) {
				filt_disconnect_input(dt.fnum);
				for (i = 0; i < dt.n; i++) filter_buf_dram(dt.fnum, dt.list[i]);
				wait_ticks(5);
				if (!free_cnt) irq(H_BFUL);
				irq(H_EHST);
			} else {
				if (dt.needfree) for (i = 0; i < dt.n; i++) buf_free(dt.list[i]);
				if (dt.n || dt.ehst) { wait_ticks(2); irq(H_EHST); }
			}
		} else results((base_status(0, 0) << 8) | 0xFF, 0xFFFF, 0, 0);
		break;
	case 0x10: {
		u32 psp = cd_fad(), pep = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		u8 pm = CD[2] >> 8;
		if (psp == 0xFFFFFF) psp = play_cmd_start;
		if (pep == 0xFFFFFF) pep = play_cmd_end;
		else if ((psp & 0x800000) && (pep & 0x800000)) pep = 0x800000 | ((psp + pep) & 0x7FFFFF);
		if (((psp ^ pep) & 0x800000) && pep != 0) { cdstatus(1, 0); break; }
		play_cmd_start = psp; play_cmd_end = pep;
		pos.status = S_BUSY;
		cdstatus(0, 0);
		if (!(pm & 0x80)) clear_pending_sec();
		play_end_irq = H_PEND; play_end_cnt = 0;
		play_end = play_cmd_end;
		if (!(pm & 0x70)) play_cmd_rep = pm & 0xF;
		play_rep = play_cmd_rep; play_rep_ctr = 0;
		at_end = 0;
		start_seek(play_cmd_start, pm & 0x80);
		break; }
	case 0x11: {
		u32 sp = cd_fad();
		pos.status = S_BUSY;
		cdstatus(0, 0);
		if (!sp) {
			clear_pending_sec();
			pos.is_cdrom = 1; pos.repcount = 0x7F; pos.fad = pos.rel = 0xFFFFFF; pos.ctrl = pos.idx = pos.tno = 0xFF;
			dphase = D_STOP;
		} else if (sp == 0xFFFFFF) {
			if (dphase == D_STOP) { clear_pending_sec(); start_seek(0x800096, 0); }
			play_end_irq = 0; play_end = 0x800000; play_rep = 0; at_end = 0;
		} else {
			clear_pending_sec();
			play_end = 0x800000; play_rep = 0; at_end = 0;
			start_seek(sp, 0);
		}
		break; }
	case 0x20: {
		u8 t = CD[0] & 0xFF;
		if (dt.active) { cdstatus(0, S_WAIT); break; }
		if (t >= 2) { cdstatus(1, 0); break; }
		if (!t) { results(base_status(0, S_DTREQ) << 8, 5, 0, 0); dt_start_pseudo(A_SUBQ, 5, 0); }
		else {
			u8 i;
			results(base_status(0, S_DTREQ) << 8, 0x0C, 0, 0);
			dr_seek(A_SUBQ + 16);
			for (i = 0; i < 12; i++) dr_wr(0xFFFF);
			dt_start_pseudo(A_SUBQ + 16, 12, 0);
		}
		wait_ticks(2); irq(H_DRDY);
		break; }
	case 0xE0:
		if (f >= NFILT) cdstatus(1, 0);
		else if (fls.active) cdstatus(0, S_WAIT);
		else {
			u32 dfad = 0;
			u8 t, audio = 1;
			cdstatus(0, 0);
			for (t = 0; t < ntr; t++) {
				lk_run(1, t);
				if (LK_DATA()) { dfad = lk_start + LK_IDX1(); audio = 0; break; }
			}
			if (audio) { auth_type = 0x01; wait_ticks(3); irq(H_EFLS); }
			else {
				auth_type = 0x04;
				root_valid = 0;
				fls_filter(f, 0, 0, 0);
				fls.pnum = f; fls.doauth = 1; fls.active = 1; fls.have = 0;
				/* the PVD is 16 sectors into the data track */
				clear_pending_sec();
				play_end = 0; play_rep = 0; play_rep_ctr = 0;
				start_seek(0x800000 | (dfad + 16), 0);
			}
		}
		break;
	case 0xE1:
		if (fls.active && fls.doauth) cdstatus(1, 0);
		else results(base_status(0, 0) << 8, auth_type, 0, 0);
		break;
	case 0x30:
		if (f >= NFILT && f != 0xFF) cdstatus(1, 0);
		else { set_cd_conn(f); cdstatus(0, 0); wait_ticks(2); irq(H_ESEL); }
		break;
	case 0x31: results(base_status(0, 0) << 8, 0, (u32)cd_conn << 8, 0); break;
	case 0x32: results(base_status(0, 0) << 8, 0, (u32)last_dest << 8, 0); break;
	case 0x40:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		flt[f].fad = cd_fad(); flt[f].range = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		cdstatus(0, 0); wait_ticks(2); irq(H_ESEL);
		break;
	case 0x41:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		results((base_status(0, 0) << 8) | (flt[f].fad >> 16), flt[f].fad & 0xFFFF,
		        ((u32)f << 8) | (flt[f].range >> 16), flt[f].range & 0xFFFF);
		break;
	case 0x42:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		flt[f].chan = CD[0]; flt[f].subm = CD[1] >> 8; flt[f].cim = CD[1];
		flt[f].file = CD[2]; flt[f].sub = CD[3] >> 8; flt[f].ci = CD[3];
		cdstatus(0, 0); wait_ticks(2); irq(H_ESEL);
		break;
	case 0x43:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		results((base_status(0, 0) << 8) | flt[f].chan, ((u32)flt[f].subm << 8) | flt[f].cim,
		        ((u32)f << 8) | flt[f].file, ((u32)flt[f].sub << 8) | flt[f].ci);
		break;
	case 0x44:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		flt[f].mode = CD[0];
		if (CD[0] & 0x80) filt_reset_cond(f);
		cdstatus(0, 0); wait_ticks(2); irq(H_ESEL);
		break;
	case 0x45:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		results((base_status(0, 0) << 8) | flt[f].mode, 0, (u32)f << 8, 0);
		break;
	case 0x46: {
		u8 fl = CD[0], tc = CD[1] >> 8, fc = CD[1];
		if (f >= NFILT || ((fl & 1) && tc >= NFILT && tc != 0xFF) || ((fl & 2) && fc >= NFILT && fc != 0xFF)) { cdstatus(1, 0); break; }
		if (fl & 1) flt[f].tconn = tc;
		if (fl & 2) filt_set_fconn(f, fc);
		cdstatus(0, 0); wait_ticks(2); irq(H_ESEL);
		break; }
	case 0x47:
		if (f >= NFILT) { cdstatus(1, 0); break; }
		results(base_status(0, 0) << 8, ((u32)flt[f].tconn << 8) | flt[f].fconn, (u32)f << 8, 0);
		break;
	case 0x48: {
		u8 rf = CD[0], i;
		if (!rf) {
			if (f >= NFILT) { cdstatus(1, 0); break; }
			part_clear(f);
			cdstatus(0, 0); wait_ticks(3); irq(H_ESEL);
			break;
		}
		for (i = 0; i < NFILT; i++) {
			if (rf & 0x04) part_clear(i);
			if (rf & 0x10) filt_reset_cond(i);
			if (rf & 0x20) { if (i == cd_conn) cd_conn = 0xFF; if (flt[i].fconn < NFILT) flt[i].fconn = 0xFF; }
			if (rf & 0x40) flt[i].tconn = i;
			if (rf & 0x80) flt[i].fconn = 0xFF;
		}
		cdstatus(0, 0); wait_ticks(6); irq(H_ESEL);
		break; }
	case 0x50: results(base_status(0, 0) << 8, free_cnt, 0x18 << 8, NBUF); break;
	case 0x51:
		if (f >= NFILT) cdstatus(1, 0);
		else results(base_status(0, 0) << 8, 0, 0, part[f].count);
		break;
	case 0x52: {
		int offs, num;
		if (f >= NFILT) { cdstatus(1, 0); break; }
		if ((dt.active && dt.writing) || sec_args(f, &offs, &num)) { cdstatus(0, S_WAIT); break; }
		cdstatus(0, 0);
		{
			u32 acc = 0; int i, b = part_get(f, offs);
			for (i = 0; i < num; i++, b = bnext[b]) sec_size_sum(b, &acc);
			calc_size = acc;
		}
		wait_ticks(4); irq(H_ESEL);
		break; }
	case 0x53: results((base_status(0, 0) << 8) | (calc_size >> 16), calc_size & 0xFFFF, 0, 0); break;
	case 0x54: {
		u32 offs = CD[1];
		int b;
		shdr h;
		u32 fad, fl = 0, ch = 0, sm = 0, ci = 0;
		if (f >= NFILT) { cdstatus(1, 0); break; }
		if ((offs != 0xFFFF && offs >= part[f].count) || !part[f].count) { cdstatus(0, S_WAIT); break; }
		b = (offs == 0xFFFF) ? part[f].last : part_get(f, offs);
		hdr_dram(b, &h);
		fad = hdr_fad(&h);
		if (h.mode == 2) { fl = h.file; ch = h.chan; sm = h.sub; ci = h.ci; }
		results((base_status(0, 0) << 8) | (fad >> 16), fad & 0xFFFF, (fl << 8) | ch, (sm << 8) | ci);
		break; }
	case 0x55: {
		u32 offs = CD[1], sfad = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		int b, counter = 0, eff, made = 0;
		if (f >= NFILT) { cdstatus(1, 0); break; }
		if ((offs != 0xFFFF && offs >= part[f].count) || !part[f].count) { cdstatus(0, S_WAIT); break; }
		fadsrch.spos = 0xFFFF; fadsrch.pnum = f; fadsrch.fad = 0;
		eff = (offs == 0xFFFF) ? part[f].count - 1 : (int)offs;
		for (b = part[f].first; b != 0xFF; b = bnext[b], counter++) {
			if (counter >= eff) {
				shdr h;
				u32 fd;
				hdr_dram(b, &h);
				fd = hdr_fad(&h);
				if (fd <= sfad && fd >= fadsrch.fad + made) { fadsrch.spos = counter; fadsrch.fad = fd; made = 1; }
			}
		}
		cdstatus(0, 0); wait_ticks(5); irq(H_ESEL);
		break; }
	case 0x56: results(base_status(0, 0) << 8, fadsrch.spos, ((u32)fadsrch.pnum << 8) | (fadsrch.fad >> 16), fadsrch.fad & 0xFFFF); break;
	case 0x60: {
		u8 ng = CD[0], np = CD[1] >> 8;
		if ((ng != 0xFF && ng > 3) || (np != 0xFF && np > 3)) { cdstatus(1, 0); break; }
		if (ng != 0xFF) get_len = ng;
		if (np != 0xFF) put_len = np;
		cdstatus(0, 0); irq(H_ESEL);
		break; }
	case 0x61: case 0x62: case 0x63: {
		int offs, num, i, b;
		if (f >= NFILT) { cdstatus(1, 0); break; }
		if ((dt.active && cmd != 0x62) || sec_args(f, &offs, &num)) { cdstatus(0, S_WAIT); break; }
		b = part_get(f, offs);
		if (cmd != 0x62) {
			for (i = 0; i < num; i++) {
				u8 nb = bnext[b];
				dt.list[i] = b;
				if (cmd == 0x63) part_unlink(f, b);
				b = nb;
			}
			cdstatus(0, S_DTREQ);
			dt_start(0, cmd == 0x63, num);
			wait_ticks(10); irq(H_DRDY);
		} else {
			cdstatus(0, 0);
			for (i = 0; i < num; i++) { u8 nb = bnext[b]; part_unlink(f, b); buf_free(b); b = nb; }
			wait_ticks(10); irq(H_EHST);
		}
		break; }
	case 0x64: {
		u32 num = CD[3];
		u32 i;
		if (f >= NFILT) { cdstatus(1, 0); break; }
		if (!num || num > free_cnt || dt.active) { cdstatus(0, S_WAIT); break; }
		filt_disconnect_input(f);
		cdstatus(0, S_DTREQ);
		dt.fnum = f;
		MM(R_XF_MODE) = 4;
		for (i = 0; i < num; i++) { dt.list[i] = buf_alloc(); xf_seg(baddr(dt.list[i]), 0, 1176); xf_wait_idle(); }
		dt_start(1, 0, num);
		wait_ticks(6); irq(H_DRDY);
		break; }
	case 0x65: case 0x66: {
		u8 dst = CD[0], sp = f;
		int offs, num, i, b;
		if (sp >= NFILT || dst >= NFILT) { cdstatus(1, 0); break; }
		offs = CD[1]; num = CD[3];
		if (offs == 0xFFFF) offs = part[sp].count - 1;
		if (num == 0xFFFF) num = part[sp].count - offs;
		if (dt.active || num <= 0 || (num > free_cnt && cmd != 0x66) || offs < 0 || offs + num > (int)part[sp].count) { cdstatus(0, S_WAIT); break; }
		filt_disconnect_input(dst);
		b = part_get(sp, offs);
		for (i = 0; i < num; i++) {
			u8 nb = bnext[b];
			if (cmd == 0x66) { part_unlink(sp, b); filter_buf_dram(dst, b); }
			else {
				u8 a = buf_alloc();
				MM(R_XF_MODE) = 3;
				xf_seg(baddr(b), baddr(a), 1176);
				xf_wait_idle();
				filter_buf_dram(dst, a);
			}
			b = nb;
		}
		MM(R_XF_MODE) = 0;
		cdstatus(0, 0);
		wait_ticks(10);
		if (!free_cnt) irq(H_BFUL);
		irq(H_ECPY);
		break; }
	case 0x67: results(base_status(0, 0) << 8, 0, 0, 0); break;
	case 0x70: {
		u32 fid = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		u32 fi = (fid < 2) ? fid : (2 + fid - fls.info_offs);
		int reject = f >= NFILT;
		u32 a;
		if (fid == 0xFFFFFF) { if (!root_valid) reject = 1; }
		else if (!finfo_valid) reject = 1;
		else if (fid >= 2 && (fid < fls.info_offs || fid >= fls.info_offs + fls.valid_cnt)) reject = 1;
		else if (!(fi_attr(A_FINFO + fi * 6u) & 2)) reject = 1;
		if (fls.active) { cdstatus(0, S_WAIT); break; }
		if (reject) { cdstatus(1, 0); break; }
		if (!fid) { cdstatus(0, 0); wait_ticks(10); irq(H_EFLS); break; }
		cdstatus(0, 0);
		a = (fid == 0xFFFFFF) ? A_ROOT : A_FINFO + fi * 6u;
		part_clear(f);
		{
			u32 fad = fi_fad(a), size = fi_size(a);
			fls_filter(f, fad, (size + 2047) >> 11, 0x40);
			flt[f].file = fi_fnum(a);
			fls.pnum = f; fls.total_max = size; fls.info_offs = 2; fls.doauth = 0; fls.active = 1;
			fls.total_counter = 0; fls.record_counter = 0; fls.finfo_offs = 0; fls.valid_cnt = 0; fls.st = 0; fls.have = 0;
			finfo_valid = 0;
			fls_begin_play(fad);
		}
		break; }
	case 0x71: {
		u32 sid = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		u32 fad, size;
		if (fls.active) { cdstatus(0, S_WAIT); break; }
		if (f >= NFILT || !finfo_valid) { cdstatus(1, 0); break; }
		cdstatus(0, 0);
		if (sid < fls.info_offs || sid >= fls.info_offs + fls.valid_cnt) sid = 2;
		fad = fi_fad(A_FINFO); size = fi_size(A_FINFO);
		fls_filter(f, fad, (size + 2047) >> 11, 0x40);
		fls.pnum = f; fls.total_max = size; fls.info_offs = sid; fls.doauth = 0; fls.active = 1;
		fls.total_counter = 0; fls.record_counter = 0; fls.finfo_offs = 0; fls.valid_cnt = 0; fls.st = 0; fls.have = 0;
		finfo_valid = 0;
		fls_begin_play(fad);
		break; }
	case 0x72:
		if (fls.active) cdstatus(0, S_WAIT);
		else if (!finfo_valid) cdstatus(1, 0);
		else results(base_status(0, 0) << 8, fls.valid_cnt, ((u32)(fi_fad(A_FINFO) == fi_fad(A_FINFO + 6)) << 8) | (fls.info_offs >> 16), fls.info_offs & 0xFFFF);
		break;
	case 0x73: {
		u32 fid = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		if (fls.active || dt.active) { cdstatus(0, S_WAIT); break; }
		if (!finfo_valid) { cdstatus(1, 0); break; }
		if (fid != 0xFFFFFF && fid >= 2 && (fid < fls.info_offs || fid >= fls.info_offs + fls.valid_cnt)) { cdstatus(1, 0); break; }
		{
			u32 fi = (fid < 2) ? fid : (2 + fid - fls.info_offs);
			u32 a, cnt;
			if (fid == 0xFFFFFF) { a = A_FINFO + 12; cnt = 6u * fls.valid_cnt; } else { a = A_FINFO + 6 * fi; cnt = 6; }
			results(base_status(0, S_DTREQ) << 8, cnt, 0, 0);
			dt_start_pseudo(a, cnt, 1);
			wait_ticks(2); irq(H_DRDY);
		}
		break; }
	case 0x74: {
		u32 off = ((u32)(CD[0] & 0xFF) << 16) | CD[1];
		u32 fid = ((u32)(CD[2] & 0xFF) << 16) | CD[3];
		if (fls.active) { cdstatus(0, S_WAIT); break; }
		if (f >= NFILT || !finfo_valid || (fid >= 2 && (fid < fls.info_offs || fid >= fls.info_offs + fls.valid_cnt))) { cdstatus(1, 0); break; }
		cdstatus(0, 0);
		part_clear(f);
		{
			u32 a = A_FINFO + ((fid < 2) ? fid : (2 + fid - fls.info_offs)) * 6u;
			u32 sfad = (fi_fad(a) + off) & 0xFFFFFF, cnt = ((fi_size(a) + 2047) >> 11) - off;
			clear_pending_sec();
			fls_filter(f, sfad, cnt, 0x41);
			flt[f].file = fi_fnum(a);
			play_end_irq = H_EFLS; play_end_cnt = 0;
			play_end = 0x800000 | ((sfad + cnt) & 0x7FFFFF);
			play_rep = 0; play_rep_ctr = 0; at_end = 0;
			start_seek(sfad | 0x800000, 0);
		}
		break; }
	case 0x75: cdstatus(0, 0); if (fls.active) fls.abort = 1; irq(H_EFLS); break;   /* a stale abort flag would kill the next file operation */
	case 0x05: case 0x12: cdstatus(0, 0); break;      /* open tray, scan: status only */
	default: cdstatus(1, 0); break;      /* includes the MPEG commands: no card */
	}
}

static void do_boot(void)
{
	inited = 0;
	cmd_reset_state();
	pos.status = S_BUSY; pos.is_cdrom = 0; pos.repcount = 0; pos.fad = pos.rel = 0xFFFFFF; pos.ctrl = pos.idx = pos.tno = 0xFF;
	play_cmd_start = play_cmd_end = 0; play_cmd_rep = 0; play_rep_ctr = 0;
	auth_type = 0; root_valid = 0;
	cur_sector = 0;
	period_due = now() + PERIOD_TICKS;
	MM(R_RR0 + 0) = 0x0043; MM(R_RR0 + 1) = 0x4442; MM(R_RR0 + 2) = 0x4c4f; MM(R_RR3) = 0x434b;
	irq(H_CMOK | H_DCHG | H_ESEL | H_EHST | H_MPED | H_ECPY | H_EFLS);
}

int main(void)
{
	u32 t0 = now() + BOOT_TICKS;
	while (!due(t0)) ;
	MM(R_EVCLR) = CLR_DCHG;
	pos.status = S_OPEN;
	do_boot();
	dphase = D_EJWAIT; ddue = now() + 16;
	booted = 1;
	for (;;) {
		u32 ev = MM(R_EV);
		if (ev & EV_DCHG) {
			MM(R_EVCLR) = CLR_DCHG;
			clear_pending_sec(); dt.active = 0; MM(R_XF_MODE) = 0;
			dphase = D_EJ0; ddue = now() + 4; at_end = 0;
		}
		if (ev & EV_CMD) {
			u8 i;
			for (i = 0; i < 4; i++) CD[i] = MM(R_CR0 + i);
			MM(R_EVCLR) = CLR_CMD;
			cmd_exec();
			if (sw_reset_pending) {
				sw_reset_pending = 0;
				cmd_reset_state();
				wait_ticks(128);
				sw_hirq_deferred = H_MPED | H_EFLS | H_ECPY | H_EHST | H_ESEL | H_CMOK;
				if (!(MM(R_EV) & EV_CMD)) { irq(sw_hirq_deferred); sw_hirq_deferred = 0; }
			}
		}
		drive_step();
		fls_step();
		dt_feed();
		periodic();
	}
}
