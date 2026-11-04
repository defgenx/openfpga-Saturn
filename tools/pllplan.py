#!/usr/bin/env python3
"""System PLL plan: MiSTer's Saturn PLL (rtl/pll/pll_0002.v + the Saturn.sv reconfig writer), adapted to 74.25 MHz.

  python3 tools/pllplan.py                    the plan: M, K, VCO per mode, counters, the MiSTer comparison
  python3 tools/pllplan.py --template         ip-generate --component-parameter list that yields the template
  python3 tools/pllplan.py --patch FILE       turn the template pll_sys.v into ours (in place, checked)
  python3 tools/pllplan.py --patch FILE --mode "NTSC 320"
                                              the same for another compiled mode (pll_sys_320.v, POCKET_PLL_COMPILE_320)
  python3 tools/pllplan.py --verilog          the M / K constants for pll_lite.sv, saturn_pocket.sv and sim/pll

MiSTer: 50 MHz reference, VCO post-divider 2, clk_sys counter 8, clk_ram 4, M 8 (320) / 9 (352), charge pump 20 uA,
loop resistor 4000. The counters see VCO / 2 = 8 x clk_sys, so the VCO is 16 x clk_sys whatever the reference: with
74.25 MHz the VCO is MiSTer's in every mode and only M + K = 8 x clk_sys / 74.25 differs (M 5 / 6).

ip-generate (altera_pll 21.1) never picks the post-divider 2 at 74.25 MHz (it picks VCO 687 MHz, M 9, divider 1) and its
physical-parameter mode has no post-divider entry, so it rejects M 6 ("VCO beyond the limit"). The template is therefore
ip-generate's own output for our five clocks at MiSTer's 50 MHz reference, which lands on exactly MiSTer's physical
plan (post-divider 2, C0 8, C1 4, cp 20, bwctrl 4000); --patch replaces the reference, M and K and nothing else.
Owning doc: docs/integration.md section 2.
"""
import re
import sys

REF = 74.25                                 # clk_74a, MHz; N bypassed
MISTER_REF = 50.0                           # Saturn_MiSTer CLK_50M
FRAC_BITS = 32                              # pll_fractional_cout
VCO_DIV = 2                                 # pll_vco_div: counters (and M) run on VCO / 2
C0 = 8                                      # clk_sys counter, as MiSTer
VCO_MIN, VCO_MAX = 600.0, 1300.0            # Cyclone V -C8 fPLL VCO range
K_MIN, K_MAX = 0.05, 0.95                   # ip-generate: "fractional multiplication factor ... legal range (0.05 to 0.95)"

# (name, PAL, SMPC_DOTSEL, clk_sys MHz) - Saturn.sv in_clk
MODES = [("NTSC 320", 0, 0, 53.7482), ("NTSC 352", 0, 1, 57.2728), ("PAL 320", 1, 0, 53.375), ("PAL 352", 1, 1, 56.875)]
COMPILED = "NTSC 352"                       # fastest mode: the one STA analyses

# Our outputs as counters on VCO / 2, phase in eighths of a counter-input period (ip-generate's encoding:
# prst = phase // 8 + 1, ph_mux_prst = phase % 8)
COUNTERS = [("clk_sys", C0, 0), ("clk_ram", C0 // 2, 0), ("clk_vid", 4 * C0, 0),
            ("clk_vid_90", 4 * C0, 4 * C0 * 8 // 4), ("clk_ram_cap", C0 // 2, C0 // 2 * 8 // 4)]
CP_CURRENT, BWCTRL = 20, 4000               # MiSTer's, and ip-generate's for the template


def hilo(c):
    return (c + 1) // 2, c // 2, c % 2 == 1


def plan(ref):
    rows = []
    for name, pal, dot, f in MODES:
        fc = C0 * f                         # counter input = VCO / 2
        mk = fc / ref
        m = int(mk)
        k = round((mk - m) * 2 ** FRAC_BITS)
        real = ref * (m + k / 2 ** FRAC_BITS) / C0
        rows.append(dict(name=name, pal=pal, dot=dot, f=f, mk=mk, m=m, k=k, vco=VCO_DIV * fc, real=real))
    return rows


def mreg(m):
    """altera_pll_reconfig M register (mgmt address 4): {odd [17], bypass [16], hi [15:8], lo [7:0]}."""
    hi, lo, odd = hilo(m)
    return (odd << 17) | (hi << 8) | lo


def check(rows):
    for r in rows:
        kf = r["mk"] - r["m"]
        assert K_MIN <= kf <= K_MAX, f"{r['name']}: K {kf:.3f} outside {K_MIN}..{K_MAX}"
        assert VCO_MIN <= r["vco"] <= VCO_MAX, f"{r['name']}: VCO {r['vco']:.1f} outside range"


def show():
    ours, mister = plan(REF), plan(MISTER_REF)
    check(ours)
    print(f"Plan: reference {REF} MHz, N bypassed, VCO post-divider {VCO_DIV}, charge pump {CP_CURRENT} uA, "
          f"loop resistor {BWCTRL}")
    print("  mode      clk_sys MHz  VCO MHz   M+K       M  M reg     K (32 bit)             K margin  error    "
          "| MiSTer M+K  M")
    for r, q in zip(ours, mister):
        kf = r["mk"] - r["m"]
        print(f"  {r['name']:8s}  {r['f']:10.4f}  {r['vco']:8.3f}  {r['mk']:8.5f}  {r['m']}  0x{mreg(r['m']):05X}  "
              f"{r['k']:10d} 0x{r['k']:08X}  {min(kf - K_MIN, K_MAX - kf):.3f}     "
              f"{1e6 * (r['real'] - r['f']) / r['f']:+.3f} ppm | {q['mk']:8.5f}  {q['m']}")
    print("  M counter: " + ", ".join(f"M {m} = hi {hilo(m)[0]} + lo {hilo(m)[1]}{' odd' if hilo(m)[2] else ''}"
                                      for m in sorted({r['m'] for r in ours})))
    print("  counters (on VCO / 2; phase in eighths of a VCO / 2 period):")
    for name, c, ph in COUNTERS:
        hi, lo, odd = hilo(c)
        print(f"    {name:11s} C = {c:2d} (hi {hi}, lo {lo}{', odd' if odd else ''})  phase {ph:3d}/8 = "
              f"{360.0 * ph / 8 / c:4.1f} deg  (prst {ph // 8 + 1}, ph_mux_prst {ph % 8})")


def template_args():
    """ip-generate frequency-mode parameters: our five clocks of the compiled mode at MiSTer's 50 MHz reference."""
    f0 = [r for r in plan(REF) if r["name"] == COMPILED][0]["f"]
    a = [f"gui_reference_clock_frequency={MISTER_REF}", f"gui_number_of_clocks={len(COUNTERS)}"]
    for i, (name, c, ph) in enumerate(COUNTERS):
        a.append(f"gui_output_clock_frequency{i}={f0 * C0 / c:.6f}")
        if ph:
            a += [f"gui_ps_units{i}=degrees", f"gui_phase_shift_deg{i}={360.0 * ph / 8 / c:g}"]
    print(" ".join("--component-parameter=" + x for x in a))


def phase_ps(ph, f):
    """phase_shift string value: ph eighths of a counter-input period (1 / (C0 x clk_sys)), in ps."""
    return round(ph / 8 * 1e6 / (C0 * f))


def patch(fn, mode=COMPILED):
    s = open(fn).read()
    r = [r for r in plan(REF) if r["name"] == mode][0]
    t = [r for r in plan(REF) if r["name"] == COMPILED][0]   # the template's frequencies are the compiled mode's

    def get(p):
        mm = re.search(r"\.%s\(\"?([^\")]*)\"?\)" % re.escape(p), s)
        assert mm, p
        return mm.group(1)

    def put(p, v, quoted):
        nonlocal s
        val = f'"{v}"' if quoted else str(v)
        s, n = re.subn(r"\.%s\([^)]*\)" % re.escape(p), f".{p}({val})", s)
        assert n == 1, p

    # the template must be MiSTer's physical plan with our counters, as ip-generate gave it at 50 MHz
    want = {"pll_vco_div": str(VCO_DIV), "pll_cp_current": str(CP_CURRENT), "pll_bwctrl": str(BWCTRL),
            "n_cnt_bypass_en": "true", "operation_mode": "normal", "reference_clock_frequency": f"{MISTER_REF} MHz"}
    for i, (name, c, ph) in enumerate(COUNTERS):
        hi, lo, odd = hilo(c)
        want.update({f"c_cnt_hi_div{i}": str(hi), f"c_cnt_lo_div{i}": str(lo),
                     f"c_cnt_odd_div_duty_en{i}": "true" if odd else "false",
                     f"c_cnt_prst{i}": str(ph // 8 + 1), f"c_cnt_ph_mux_prst{i}": str(ph % 8)})
        want[f"phase_shift{i}"] = f"{phase_ps(ph, t['f'])} ps"
    for p, v in want.items():
        assert get(p) == v, f"template {p} = {get(p)}, expected {v}"

    hi, lo, odd = hilo(r["m"])
    put("reference_clock_frequency", f"{REF} MHz", True)
    put("m_cnt_hi_div", hi, False)
    put("m_cnt_lo_div", lo, False)
    put("m_cnt_odd_div_duty_en", "true" if odd else "false", True)
    put("pll_fractional_division", str(r["k"]), True)
    put("pll_output_clk_frequency", f"{r['vco'] / VCO_DIV:.6f} MHz", True)
    for i, (name, c, ph) in enumerate(COUNTERS):
        put(f"output_clock_frequency{i}", f"{r['real'] * C0 / c:.6f} MHz", True)
        put(f"phase_shift{i}", f"{phase_ps(ph, r['real'])} ps", True)
    how = "" if mode == COMPILED else f' --mode "{mode}"'
    s = s.replace("module  pll_sys(", f"// tools/gen_pll_sys.sh: ip-generate at 50 MHz, then tools/pllplan.py --patch{how} "
                  "(reference 74.25 MHz, M, K)\nmodule  pll_sys(", 1)
    open(fn, "w").write(s)
    print(f"patched {fn} ({mode}): reference {REF} MHz, M {r['m']} (hi {hi}, lo {lo}{', odd' if odd else ''}), K {r['k']}")


def verilog():
    for r in plan(REF):
        print(f"// {r['name']}: PAL {r['pal']} DOTSEL {r['dot']}  M {r['m']} (mgmt 32'h{mreg(r['m']):08X})  "
              f"K 32'h{r['k']:08X}  VCO {r['vco']:.3f} MHz")


def main():
    if "--template" in sys.argv:
        return template_args()
    if "--patch" in sys.argv:
        mode = sys.argv[sys.argv.index("--mode") + 1] if "--mode" in sys.argv else COMPILED
        assert mode in [m[0] for m in MODES], f"unknown mode {mode}"
        return patch(sys.argv[sys.argv.index("--patch") + 1], mode)
    if "--verilog" in sys.argv:
        return verilog()
    show()


if __name__ == "__main__":
    main()
