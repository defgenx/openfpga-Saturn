"""Executable specification of the CDD: a port of Main_MiSTer support/saturn/saturncdd.cpp
(Process / Update / CommandExec) on the core's TOC format, with the deviations listed in
docs/cd.md. The testbench log is replayed through it."""
import struct

REC0 = 72


def bcd(v):
    return ((v // 10) << 4) | (v % 10)


def msf(lba):
    return lba // 4500, lba // 75 % 60, lba % 75


def edc(buf):
    tab = []
    for i in range(256):
        c = i
        for _ in range(8):
            c = (c >> 1) ^ (0xD8018001 if c & 1 else 0)
        tab.append(c)
    crc = 0
    for b in buf:
        crc ^= b
        crc = (crc >> 8) ^ tab[crc & 0xFF]
    return crc


def ring_bytes(m, s, f):
    b = bytearray(2352)
    b[0] = 0
    b[1:11] = b"\xff" * 10
    b[11] = 0
    lfsr = 1
    for i in range(12, 2348):
        a = 0x59 if i & 1 else 0xA8
        for _ in range(8):
            a ^= lfsr & 1
            a = ((a >> 1) | (a << 7)) & 0xFF
            x = ((lfsr >> 1) ^ lfsr) & 0xFFFF
            lfsr |= (x << 15) & 0xFFFF
            lfsr >>= 1
        b[i] = a
    b[12:24] = bytes([bcd(m), bcd(s), bcd(f), 2, 0, 0, 0x28, 0, 0, 0, 0x28, 0])
    b[2348:2352] = bytes(4)
    return bytes(b)


class Cdd:
    def __init__(self, toc_bytes, files):
        w = struct.unpack(">512I", toc_bytes)
        assert w[0] == 0x53434454 and w[1] >> 24 == 2
        self.ntbcd = w[1] >> 16 & 255
        self.last = w[1] & 0x7F
        self.wwf = bool(w[1] >> 8 & 1)
        self.rr = bool(w[1] >> 9 & 1)
        self.toc_end = w[2] - 150
        self.tr = []
        for r in range(self.last + 1):
            a, b, c = w[REC0 + 3 * r:REC0 + 3 * r + 3]
            self.tr.append(dict(end=(a & 0xFFFFFF) - 150 if r < self.last else 0xFFFFFF, data=a >> 24 & 1,
                                s2048=a >> 25 & 1, file=a >> 26 & 31,
                                start=(b & 0xFFFFFF) - 150, idx1=b >> 24, forg=(c & 0xFFFFFF) - 150 if r < self.last else 0))
        self.files = files
        self.reset_state()

    def reset_state(self):
        self.lid_open = False
        self.stop_pend = True
        self.seek_pend = self.read_pend = self.final_read = False
        self.seek_ring = self.seek_ring2 = self.pause_pend = self.read_toc = False
        self.ring_t = 1
        self.spd2 = True
        self.lba = 0
        self.seek_lba = 0
        self.track = 0
        self.seek_delay = 0
        self.toc_pos = 0
        self.state = "stop"
        self.go = False
        self.cmd = None
        self.sectors = []

    def get_track(self, x):
        i = 0
        while i < self.last and self.tr[i]["end"] <= x:
            i += 1
        return i

    def idx_off(self, tno, idx):
        t = tno - 1
        t = 0 if t < 0 else min(t, self.last)
        return self.tr[t]["idx1"] if idx >= 1 else 0

    def seek_delay_calc(self, old, new):
        t_old, t_new = self.get_track(old), self.get_track(new)
        d = new - old
        if abs(d) <= 4:
            n = 2
        elif d < 12000:
            n = 4
        else:
            n = min(d // 2000, 13)
        if t_old != t_new:
            n += 27
        elif abs(d) > 10000:
            n += 20
        if d < -4:
            n += 2
        return n

    def command_exec(self, c):
        cmd = c[0]
        fad = c[1] << 16 | c[2] << 8 | c[3]
        fad += self.idx_off(c[8], c[4])
        lba_cmd = fad - 150
        spd2 = c[10] != 1
        if cmd == 0x02:
            self.spd2 = spd2
            self.seek_lba = lba_cmd
            self.track = self.get_track(self.seek_lba)
            self.seek_ring = True
            self.read_pend = False
            self.pause_pend = False
        elif cmd == 0x03:
            self.spd2 = spd2
            self.toc_pos = 0
            self.read_toc = True
        elif cmd == 0x04:
            self.stop_pend = True
            self.read_pend = False
        elif cmd in (0x06, 0x09):
            self.spd2 = spd2
            old = self.lba - 4
            self.seek_lba = lba_cmd - 4 if cmd == 0x06 else lba_cmd
            self.lba = self.seek_lba
            self.track = self.get_track(self.seek_lba)
            delay = self.seek_delay_calc(old, lba_cmd)
            self.seek_delay = delay
            self.pause_pend = False
            if cmd == 0x06:
                self.read_pend = True
                self.seek_pend = not self.rr
            else:
                self.seek_pend = True
                self.final_read = self.read_pend
                self.read_pend = False
        elif cmd == 0x08:
            self.pause_pend = True
            self.seek_pend = False
            self.read_pend = False
        elif cmd == 0x00:
            pass
        else:
            self.seek_pend = self.read_pend = self.pause_pend = False

    def process(self, stall=False):
        """Returns the 12 status bytes. stall: the core had no sector ready for a read tick."""
        st = [0] * 12
        lba = self.lba
        tr = self.tr[self.track]
        q = 0x40 if (lba < self.toc_end and tr["data"]) else 0
        self.go = False
        if self.lid_open:
            self.state = "open"
            st[:11] = [0x80, 0x41, 1, 1, 0, 0, 0, 0, 0, 0, 0]
            self.tmode2 = False
        elif self.read_toc:
            self.state = "toc"
            p = self.toc_pos
            m = s = f = 0
            idx = 0
            if p < 0x100:
                t = self.tr[p]
                l = t["start"] + 150 + (t["idx1"] if self.wwf else 0)
                m, s, f = msf(l)
                idx = bcd(p + 1)
                q = 0x40 if t["data"] else 0
                p += 1
                if p >= self.last:
                    p = 0x100
            else:
                if p == 0x100:
                    m, s, f, idx = 1, 0, 0, 0xA0
                    q = 0x40 if self.tr[0]["data"] else 0
                elif p == 0x101:
                    m, s, f, idx = self.last, 0, 0, 0xA1
                    q = 0x40 if self.tr[self.last - 1]["data"] else 0
                else:
                    m, s, f = msf(self.toc_end + 150)
                    idx = 0xA2
                    q = 0
                    self.read_toc = False
                p += 1
            self.toc_pos = p
            st[:11] = [0x06, q | 1, 0, idx, 0, 0, 0, 0, bcd(m), bcd(s), bcd(f)]
            self.tmode2 = False
        elif self.seek_pend:
            self.state = "read" if self.final_read else "seek"
            self.fill_pos(st, 0x22, q, rel_read=True)
            self.seek_delay -= 1
            if self.seek_delay <= 0:
                self.seek_delay = 0
                self.seek_pend = False
            self.final_read = False
            self.tmode2 = False
        elif self.seek_ring:
            self.state = "ring"
            fad = lba + 150
            st[:11] = [0xB2, 0, 0, fad >> 16 & 255, fad >> 8 & 255, fad & 255, 0, 0, 0, 0, 0]
            if self.ring_t:
                self.ring_t = 0
            else:
                self.seek_ring = False
                self.seek_ring2 = True
                self.ring_t = 1
            self.tmode2 = False
        elif self.seek_ring2:
            self.state = "ring"
            fad = lba + 150
            st[:11] = [0xB6, 0x48, 0x5A, fad >> 16 & 255, fad >> 8 & 255, fad & 255, 0x0A, 0x0A, 9, 9, 0]
            if self.ring_t:
                self.ring_t = 0
            else:
                self.seek_ring2 = False
                self.ring_t = 1
            self.tmode2 = False
        elif self.read_pend:
            self.tmode2 = self.spd2
            if stall:
                self.state = "seek"
                self.fill_pos(st, 0x22, q, rel_read=True)
            else:
                self.state = "read"
                self.go = True
                self.fill_pos(st, 0x36, q, rel_read=True)
        elif self.pause_pend:
            self.state = "idle"
            self.fill_pos(st, 0x46, q, rel_read=False)
            self.pause_pend = False
            self.tmode2 = False
        elif self.stop_pend:
            self.state = "stop"
            st[:11] = [0x12, 0x41, 1, 1, 0, 0, 0, 0, 0, 0, 0]
            self.stop_pend = False
            self.tmode2 = False
        else:
            self.state = "idle"
            self.fill_pos(st, 0x46, q, rel_read=False)
            self.tmode2 = False
        st[11] = (~sum(st[:11])) & 0xFF
        return st

    def fill_pos(self, st, b0, q, rel_read):
        lba = self.lba
        tr = self.tr[self.track]
        am, as_, af = msf(max(lba + 150, 0))
        if rel_read:
            rel = abs(lba - tr["start"])
        else:
            rel = abs(lba - tr["start"]) + 150
        rm, rs, rf = msf(rel)
        st[0] = b0
        st[1] = q | 1
        st[2] = bcd(self.track + 1) if lba < self.toc_end + 150 else 0xAA
        st[3] = 0 if lba < tr["start"] else 1
        st[4:7] = [bcd(rm), bcd(rs), bcd(rf)]
        st[7] = 0
        st[8:11] = [bcd(am), bcd(as_), bcd(af)]

    def update(self):
        """Returns (audio_flag, 1176 words) for a sector sent this tick, else None."""
        out = None
        if self.state == "idle":
            self.lba += 1
            if self.lba > self.seek_lba + 4:
                self.lba -= 4
            self.track = self.get_track(self.lba)
        elif self.state == "read" and self.go:
            out = self.build_sector(self.lba)
            self.lba += 1
            self.seek_lba = self.lba
            self.track = self.get_track(self.lba)
        elif self.state == "ring":
            self.lba = self.seek_lba
            self.track = self.get_track(self.lba)
        return out

    def raw_sector(self, t, lba):
        fsec = max(max(lba, 0) - t["forg"], 0)
        ss = 2048 if t["s2048"] else 2352
        d = self.files[t["file"]][fsec * ss:(fsec + 1) * ss]
        return d.ljust(ss, b"\0")

    def build_sector(self, lba):
        m, s, f = msf(lba + 150)
        if lba >= self.toc_end:
            return (False, words(ring_bytes(m, s, f)))
        t = self.tr[self.track]
        if not t["data"]:
            return (True, words(self.raw_sector(t, lba)))
        d = self.raw_sector(t, lba)
        b = bytearray(2352)
        if t["s2048"]:
            b[16:2064] = d
        else:
            b[:] = d
        if t["s2048"] or lba - t["start"] < 0:
            b[0:16] = bytes([0] + [0xFF] * 10 + [0, bcd(m), bcd(s), bcd(f), 1])
        if b[15] != 2:
            c = edc(b[:2064])
            b[2064:2068] = struct.pack("<I", c)
            b[2068:] = bytes(2352 - 2068)
        return (False, words(bytes(b)))


def words(b):
    return list(struct.unpack("<1176H", b))
