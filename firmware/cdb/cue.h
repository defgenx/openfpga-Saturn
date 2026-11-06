/* Cue sheet picked as the disc (docs/cd.md section 3a): the core reads it with 0x0180, opens each FILE into slots 17..
 * with 0x0192 and builds the TOC in the cd_stream TOC RAM the way tools/mktoc.py does (port of Main_MiSTer LoadCUE).
 * Runs once at start-up while no TOC is loaded; included by cdb.c. */

/* TOC RAM words: boot header / cue chunk, records, getfile+openfile struct (core_top's struct pointers), probe target */
enum { W_HDR = 4, W_REC = 72, W_PATH = 384, W_PROBE = 510, CUE_SLOT = 16, FILE_SLOT = 17, NFILES = 23 };

static u32 fwc(u32 kind, u32 id, u32 len, u32 dst, u32 off)
{
	MM(R_FW_OFF) = off;
	MM(R_FW_CMD) = dst << 17 | len << 8 | id << 2 | kind;
	u32 t0 = MM(R_TICKS);
	while (MM(R_EV) & EV_FWBUSY)
		if (MM(R_TICKS) - t0 > 2 * 176400) return 7;   /* unanswered for 2 s: give up so the CD block still boots */
	return (MM(R_EV) >> 15) & 7;
}
static u32 trd(u32 i) { MM(R_TOC_A) = i; return MM(R_LK_R0) << 24 | MM(R_LK_START); }
static void twr(u32 i, u32 v) { MM(R_TOC_A) = i; MM(R_TOC_D) = v; }

/* path bytes: the order of the host's struct is taken from the leading '/' */
static u32 pswap, dirlen;
static u32 psh(u32 k) { return 24 - (((k & 3) ^ pswap) << 3); }
static u32 pget(u32 k) { return trd(W_PATH + (k >> 2)) >> psh(k) & 0xFF; }
static void pput(u32 k, u32 c)
{
	u32 i = W_PATH + (k >> 2), sh = psh(k);
	twr(i, (trd(i) & ~(0xFFu << sh)) | c << sh);
}

/* cue bytes through a 256-byte window at W_HDR (file data: big-endian words) */
static u32 cue_n, cue_base;
static int cgetc(u32 p)
{
	u32 c = p & ~255u, l;
	if (p >= cue_n) return -1;
	if (c != cue_base) {
		l = cue_n - c; if (l > 256) l = 256;
		if (fwc(0, CUE_SLOT, l, W_HDR, c)) return -1;
		cue_base = c;
	}
	return trd(W_HDR + ((p & 255) >> 2)) >> (24 - ((p & 3) << 3)) & 0xFF;
}

/* file size in units, rounded up: a 1-byte read past the end fails with "out of range" */
static u32 probe(u32 slot, u32 unit, u32 b)
{
	u32 n = 0;
	if (fwc(0, slot, 1, W_PROBE, 0)) return 0;
	for (; b; b >>= 1) if (!fwc(0, slot, 1, W_PROBE, (n | b) * unit)) n |= b;
	return n + 1;
}

static int pre(const char *s, const char *k) { while (*k) if (*s++ != *k++) return 0; return 1; }
static const char *sp(const char *s) { while (*s == ' ' || *s == '\t') s++; return s; }
static u32 num(const char **ps)
{
	const char *s = sp(*ps); u32 v = 0;
	while (*s >= '0' && *s <= '9') v = v * 10 + (u32)(*s++ - '0');
	*ps = s; return v;
}
static u32 msf(const char **ps)
{
	u32 m = num(ps), s, f;
	(*ps)++; s = num(ps); (*ps)++; f = num(ps);
	return (m * 60 + s) * 75 + f;
}

typedef struct { u32 start, end, off, pregap, idx1, a; } trk_t;   /* a: TOC word A bits 24..30 */
static trk_t T[2];
static char ln[256];

static void tflush(u32 r)
{
	trk_t *t = &T[r & 1];
	twr(W_REC + 3 * r, (t->end + 150) | t->a);
	MM(R_TOC_D) = (t->start + 150) | t->idx1 << 24;
	MM(R_TOC_D) = t->off + 150;
}

static int cue_parse(void)
{
	u32 p = 0, nt = 0, toc_end = 0, pregap = 0, nf = 0, newf = 0, fpend = 0, fsec = 0, ss, k, hdr = 0;
	int ch;
	for (;;) {
		u32 n = 0;
		const char *s;
		trk_t *c = &T[(nt - 1) & 1], *pv = &T[nt & 1];   /* track nt-1 and nt-2 */
		while ((ch = cgetc(p++)) >= 0 && ch != '\n') if (ch != '\r' && n < 255) ln[n++] = (char)ch;
		ln[n] = 0;
		s = ln; while (*s == ' ') s++;
		if (pre(s, "FILE")) {
			if (nt == 99) break;
			if (nf == NFILES) return 0;
			s = sp(s + 4); k = dirlen;
			if (*s == '"') { s++; while (*s && *s != '"' && k < 255) pput(k++, *s == '\\' ? '/' : (u8)*s), s++; }
			else while (*s && *s != ' ' && k < 255) pput(k++, *s == '\\' ? '/' : (u8)*s), s++;
			pput(k, 0);
			twr(W_PATH + 64, 0); MM(R_TOC_D) = 0;           /* flags, size */
			if (fwc(2, FILE_SLOT + nf, 0, 0, 0) > 1) return 0;
			fpend = 1; nf++; pregap = 0;
		} else if (pre(s, "TRACK")) {
			if (nt == 99) break;
			s += 5;
			if (num(&s) != nt + 1 || !nf) return 0;
			nt++;
			if (nt >= 3) tflush(nt - 3);
			c = &T[(nt - 1) & 1]; pv = &T[nt & 1];
			c->start = c->end = c->off = c->pregap = c->idx1 = 0;
			s = sp(s); ss = 2352; c->a = nf << 26;          /* file f = nf - 1 is TOC file index f + 1: slot 17 + f */
			if (pre(s, "MODE1/2048")) { ss = 2048; c->a |= 3u << 24; }
			else if (pre(s, "MODE1/2352") || pre(s, "MODE2/2352")) c->a |= 1u << 24;
			if (nt == 1) hdr = (FILE_SLOT + nf - 1) | (ss == 2048 ? 0 : 16u << 8);
			if (nt > 1 && !fpend) pv->end = 0;
			newf = fpend; fpend = 0;
			if (newf) fsec = probe(FILE_SLOT + nf - 1, ss, 1u << 18);
		} else if (nt && pre(s, "PREGAP")) {
			s += 6; k = msf(&s); c->pregap = k; pregap += k;
		} else if (nt && pre(s, "INDEX")) {
			u32 idx, pos;
			s += 5; idx = num(&s); pos = msf(&s);
			if (idx == 0) { if (nt > 1 && !pv->end) pv->end = pregap; }
			else if (idx == 1) {
				c->off += pregap;
				if (!newf) {
					c->start = pos + pregap;
					if (nt > 1 && !pv->end) pv->end = c->start - c->pregap;
					c->idx1 = pos - c->start;
				} else {
					c->start = toc_end + pregap; c->off += toc_end;
					c->end = c->start + fsec; toc_end = c->end;
					c->idx1 = pos;
				}
				if (c->idx1 > 255) return 0;
			}
		}
		if (ch < 0) break;
	}
	if (!nt) return 0;
	if (!T[(nt - 1) & 1].end) { toc_end += pregap; T[(nt - 1) & 1].end = toc_end; }
	if (nt >= 2) tflush(nt - 2);
	tflush(nt - 1);
	twr(W_REC + 3 * nt, 0xFFFFFF); MM(R_TOC_D) = toc_end + 150; MM(R_TOC_D) = 0;
	for (k = 0, ss = nt; ss >= 10; ss -= 10) k++;
	twr(0, 0x53434454); MM(R_TOC_D) = 2u << 24 | (k << 4 | ss) << 16 | nt; MM(R_TOC_D) = toc_end + 150;
	/* boot header: disc bytes 16..271 of track 1's file, no RAM cart request, 0xA1 */
	if (fwc(0, hdr & 0xFF, 256, W_HDR, hdr >> 8)) return 0;
	twr(68, 0x00A10000);
	return 1;
}

static void disc_init(void)
{
	u32 k, c, w;
	if (MM(R_EV) & EV_DISC) return;
	MM(R_LK_CTL) = 2;                                   /* hold the prefetcher out of the TOC engine */
	while (MM(R_EV) & EV_ENGBUSY) ;
	if (fwc(1, CUE_SLOT, 0, 0, 0)) goto out;             /* path of the file picked as the disc */
	w = trd(W_PATH);
	pswap = (w >> 24) == '/' ? 0 : 3;
	for (k = dirlen = 0; k < 256 && (c = pget(k)); k++) if (c == '/') dirlen = k + 1;
	if (k < 5 || pget(k - 4) != '.' || (pget(k - 3) | 0x20) != 'c' || (pget(k - 2) | 0x20) != 'u' || (pget(k - 1) | 0x20) != 'e')
		goto out;
	cue_base = ~0u;
	cue_n = probe(CUE_SLOT, 1, 1u << 15);
	if (cue_n && cue_parse()) {
		MM(R_LK_CTL) = 0;
		MM(R_FW_CMD) = 3 | 4;                           /* commit: boot header replay, Saturn reset, this CPU too */
		for (;;) ;
	}
out:
	MM(R_LK_CTL) = 0;
}
