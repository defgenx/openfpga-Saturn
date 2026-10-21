#!/usr/bin/env python3
"""Throwaway ablation variants of the golden VDP1 used only to read how much area each feature costs.
They are not functional designs. Writes sizing/vdp1/abl/<name>/{VDP1.sv,VDP1_pkg.sv}."""
import os, re, shutil, sys
ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "../.."))
REF = os.path.join(ROOT, "ref/Saturn_MiSTer/rtl/Saturn/VDP1")
src = open(os.path.join(REF, "VDP1.sv")).read()

def rep(s, a, b, count=1):
    assert a in s, "anchor missing: " + a[:60]
    return s.replace(a, b, count)


def find(s, a, start=0):
    """Index of anchor text a in s, ignoring differences in whitespace."""
    rx = r"\s+".join(re.escape(p) for p in a.split())
    m = re.compile(rx).search(s, start)
    assert m, "anchor missing: " + a[:70]
    return m.start()

def between(s, start, end, new, incl_end=False):
    i = find(s, start); j = find(s, end, i)
    if incl_end: j += len(end)
    return s[:i] + new + s[j:]

V = {}

# gouraud: dividers and step accumulation removed
g = src
g = re.sub(r"\tVDP1_DIV_24_12 GRD_DIV_[RGB]\([^\n]*\n", "", g)
g = rep(g, "bit  [16: 0] DIV_R_Q,DIV_G_Q,DIV_B_Q;//5.12", "wire [16: 0] DIV_R_Q=0,DIV_G_Q=0,DIV_B_Q=0;")
g = rep(g, "GRD_CALC_DIR_R <= DIV_A_R[5];", "GRD_CALC_DIR_R <= 0;")
g = rep(g, "GRD_CALC_DIR_G <= DIV_A_G[5];", "GRD_CALC_DIR_G <= 0;")
g = rep(g, "GRD_CALC_DIR_B <= DIV_A_B[5];", "GRD_CALC_DIR_B <= 0;")
V["no_grd"] = g

# left/right edge steppers
e = src
e = between(e, "\t\t\tCMDS_LINE_NEXT: begin\n\t\t\t\t\tLEFT_D_ERROR_ICREMENTED", "\t\t\tdefault:;\n\t\tendcase\n\tend\n\t\n\n\tbit  [16: 0] DIV_R_Q", "", False) if False else e
i = find(e, "\t\t\t\tCMDS_LINE_NEXT: begin\n\t\t\t\t\tLEFT_D_ERROR_ICREMENTED")
j = find(e, "\t\t\t\tdefault:;", i)
e = e[:i] + e[j:]
V["no_edge"] = e

# texture / line error steppers (TEXT_ERROR, TEXT_Y_ERROR, LINE_ERROR)
t = src
i = find(t, "\t\t\t\tCMDS_PRE_DRAW,\n\t\t\t\tCMDS_SSPR_DRAW,\n\t\t\t\tCMDS_LINE_DRAW: begin")
j = find(t, "\t\t\t\tCMDS_AA_DRAW,\n\t\t\t\tCMDS_LINE_END: begin")
t = t[:i] + "\t\t\t\tCMDS_PRE_DRAW,\n\t\t\t\tCMDS_SSPR_DRAW,\n\t\t\t\tCMDS_LINE_DRAW: begin LINE_DRAW_STEP = 1; TEXT_X_READ_STEP = 1; end\n\t\t\t\t\n" + t[j:]
i = find(t, "\t\t\t\tCMDS_ROW_DRAW: begin\n\t\t\t\t\tif (CMD.CMDCTRL.COMM >= 4'h4) begin\n\t\t\t\t\t\tCOL_DRAW_STEP = 1;")
j = find(t, "\t\t\t\tCMDS_LINE_NEXT: begin", i)
t = t[:i] + "\t\t\t\tCMDS_ROW_DRAW: begin COL_DRAW_STEP = 1; TEXT_Y_READ_STEP = 1; end\n\t\t\t\t\n" + t[j:]
V["no_texstep"] = t

# vertex setup arithmetic from the command words: keep only plain copies
c = src
i = find(c, "\t\t\t\t4'h8: begin\n\t\t\t\t\tcase (CMD.CMDCTRL.COMM)\n\t\t\t\t\t\t4'h1: begin\n\t\t\t\t\t\t\tcase (CMD.CMDCTRL.ZP[1:0])")
j = find(c, "\t\t\t\t4'hC: begin", i)
c = c[:i] + "\t\t\t\t4'h8: VERTB.X <= CMD_DAT[12:0];\n\t\t\t\t4'h9: VERTB.Y <= CMD_DAT[12:0];\n\t\t\t\t4'hA: VERTC.X <= CMD_DAT[12:0];\n\t\t\t\t4'hB: VERTC.Y <= CMD_DAT[12:0];\n" + c[j:]
c = rep(c, "TEMP = CMD_DAT[12:0] + ORIG_WIDTH - 13'd1;", "TEMP = CMD_DAT[12:0];")
c = rep(c, "TEMP = CMD_DAT[12:0] + ORIG_HEIGHT - 13'd1;", "TEMP = CMD_DAT[12:0];")
V["no_vsetup"] = c

# clipping comparisons
k = src
for nm in ("LEFT_CLIPX1", "LEFT_CLIPX2", "RIGHT_CLIPX1", "RIGHT_CLIPX2"):
    pass
i = find(k, "\t\t\tLINE_DIFF_LEFT_CLIPX1 = ")
j = find(k, "`ifdef DEBUG\n\t\t\tDBG_EXT_OLD <= DBG_EXT;")
k = k[:i] + "\t\t\t{LINE_DIFF_LEFT_CLIPX1,LINE_DIFF_LEFT_CLIPX2,LINE_DIFF_RIGHT_CLIPX1,LINE_DIFF_RIGHT_CLIPX2} = '0;\n\t\t\t{LINE_EQ_LEFT_CLIPX1,LINE_EQ_LEFT_CLIPX2,LINE_EQ_RIGHT_CLIPX1,LINE_EQ_RIGHT_CLIPX2} = '0;\n\t\t\t{LINE_GT_LEFT_CLIPX1,LINE_GT_LEFT_CLIPX2,LINE_GT_RIGHT_CLIPX1,LINE_GT_RIGHT_CLIPX2} = '0;\n\t\t\t{LINE_LT_LEFT_CLIPX1,LINE_LT_LEFT_CLIPX2,LINE_LT_RIGHT_CLIPX1,LINE_LT_RIGHT_CLIPX2} = '0;\n\t\t\t{LINE_LEFT_OVER,LINE_RIGHT_OVER,LINE_TOP_OVER,LINE_BOTTOM_OVER} <= '0;\n\t\t\t\n" + k[j:]
V["no_clip"] = k

# colour calculation modes (ColorCalc replaced by pass-through)
q = src
q = rep(q, "CALC_C = CMD.CMDPMOD.MON ? DRAW_BACK_C : !TVMR.TVM[0] ? ColorCalc(ORIG_C, DRAW_BACK_C, DRAW_GHCOLOR, CMD.CMDPMOD.CCB) : ORIG_C;", "CALC_C = CMD.CMDPMOD.MON ? DRAW_BACK_C : ORIG_C;")
V["no_colcalc"] = q

# display output / rotation: constant output
d = src
i = find(d, "\tbit DCLK;")
j = find(d, "\t//VRAM\n")
d = d[:i] + "\tinitial VOUTO = 0;\n\n" + d[j:]
V["no_out"] = d

out = os.path.join(os.path.dirname(__file__), "abl")
names = sys.argv[1:] or list(V)
for n in names:
    p = os.path.join(out, n); os.makedirs(p, exist_ok=True)
    open(os.path.join(p, "VDP1.sv"), "w").write(V[n])
    shutil.copy(os.path.join(REF, "VDP1_pkg.sv"), os.path.join(p, "VDP1_pkg.sv"))
    print(n)
