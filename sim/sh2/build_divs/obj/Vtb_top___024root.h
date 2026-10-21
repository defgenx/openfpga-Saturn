// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_top_REF_SH2_PKG;
class Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1;
class Vtb_top_SH2_PKG;
class Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:
    // CELLS
    Vtb_top_REF_SH2_PKG* __PVT__REF_SH2_PKG;
    Vtb_top_SH2_PKG* __PVT__SH2_PKG;
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* __PVT__tb_top__DOT__dut__DOT__MSH;
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* __PVT__tb_top__DOT__dut__DOT__SSH;
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* __PVT__tb_top__DOT__ref0__DOT__MSH;
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* __PVT__tb_top__DOT__ref0__DOT__SSH;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top__DOT__CLK;
        CData/*0:0*/ tb_top__DOT__RST_N;
        CData/*0:0*/ tb_top__DOT__watch_hit;
        CData/*0:0*/ tb_top__DOT__watch_hit_s;
        CData/*0:0*/ tb_top__DOT__ack_prev;
        CData/*0:0*/ tb_top__DOT__dut__DOT__MCLK_DIV;
        CData/*0:0*/ tb_top__DOT__dut__DOT__FAST_R;
        CData/*0:0*/ tb_top__DOT__dut__DOT__MSHRES_N;
        CData/*0:0*/ tb_top__DOT__dut__DOT__SSHRES_N;
        CData/*2:0*/ tb_top__DOT__dut__DOT__wait_mode_r;
        CData/*0:0*/ tb_top__DOT__dut__DOT__tbr;
        CData/*0:0*/ tb_top__DOT__dut__DOT__is_rom;
        CData/*0:0*/ tb_top__DOT__dut__DOT__is_wraml;
        CData/*3:0*/ tb_top__DOT__dut__DOT__lvlM;
        CData/*3:0*/ tb_top__DOT__dut__DOT__lvlS;
        CData/*3:0*/ tb_top__DOT__dut__DOT__nmi_cnt;
        CData/*3:0*/ tb_top__DOT__dut__DOT__snmi_cnt;
        CData/*3:0*/ tb_top__DOT__dut__DOT__mfti_cnt;
        CData/*3:0*/ tb_top__DOT__dut__DOT__sfti_cnt;
        CData/*0:0*/ tb_top__DOT__dut__DOT__ssh_rel;
        CData/*7:0*/ tb_top__DOT__dut__DOT__ssh_rel_dly;
        CData/*5:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__STEP;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__OWNER;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__DIV64;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__R_SIGN;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__D_SIGN;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__T64;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__NEG;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__OVF;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__PEND0;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__PEND1;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__P64_0;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__P64_1;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__ACT0;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__ACT1;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__SEL0;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__SEL1;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__QB;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF0;
        CData/*0:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF64_33;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__MCLK_DIV;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__FAST_R;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__MSHRES_N;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__SSHRES_N;
        CData/*2:0*/ tb_top__DOT__ref0__DOT__wait_mode_r;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__tbr;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__is_rom;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__is_wraml;
        CData/*3:0*/ tb_top__DOT__ref0__DOT__lvlM;
        CData/*3:0*/ tb_top__DOT__ref0__DOT__lvlS;
        CData/*3:0*/ tb_top__DOT__ref0__DOT__nmi_cnt;
        CData/*3:0*/ tb_top__DOT__ref0__DOT__snmi_cnt;
        CData/*3:0*/ tb_top__DOT__ref0__DOT__mfti_cnt;
        CData/*3:0*/ tb_top__DOT__ref0__DOT__sfti_cnt;
        CData/*0:0*/ tb_top__DOT__ref0__DOT__ssh_rel;
        CData/*7:0*/ tb_top__DOT__ref0__DOT__ssh_rel_dly;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_23;
        CData/*3:0*/ __Vdly__tb_top__DOT__dut__DOT__mfti_cnt;
        CData/*3:0*/ __Vdly__tb_top__DOT__dut__DOT__nmi_cnt;
        CData/*3:0*/ __Vdly__tb_top__DOT__dut__DOT__snmi_cnt;
        CData/*3:0*/ __Vdly__tb_top__DOT__dut__DOT__sfti_cnt;
        CData/*3:0*/ __Vdly__tb_top__DOT__ref0__DOT__mfti_cnt;
        CData/*3:0*/ __Vdly__tb_top__DOT__ref0__DOT__nmi_cnt;
        CData/*3:0*/ __Vdly__tb_top__DOT__ref0__DOT__snmi_cnt;
    };
    struct {
        CData/*3:0*/ __Vdly__tb_top__DOT__ref0__DOT__sfti_cnt;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__MCLK_DIV;
        CData/*5:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__STEP;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF0;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__R_SIGN;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__D_SIGN;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__T64;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF64_33;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__PEND0;
        CData/*0:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__PEND1;
        CData/*0:0*/ __Vdly__tb_top__DOT__ref0__DOT__MCLK_DIV;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__RST_N__0;
        SData/*15:0*/ tb_top__DOT__seen_m;
        SData/*15:0*/ tb_top__DOT__seen_s;
        SData/*9:0*/ tb_top__DOT__dut__DOT__ageM;
        SData/*9:0*/ tb_top__DOT__dut__DOT__ageS;
        SData/*9:0*/ tb_top__DOT__ref0__DOT__ageM;
        SData/*9:0*/ tb_top__DOT__ref0__DOT__ageS;
        IData/*31:0*/ tb_top__DOT____VlemExpr_6;
        IData/*31:0*/ tb_top__DOT____VlemExpr_5;
        IData/*31:0*/ tb_top__DOT__ncycles;
        IData/*31:0*/ tb_top__DOT__cyc;
        IData/*31:0*/ tb_top__DOT__nvec;
        IData/*31:0*/ tb_top__DOT__nown_s;
        IData/*31:0*/ tb_top__DOT__nwrite;
        IData/*31:0*/ tb_top__DOT__verbose;
        IData/*31:0*/ tb_top__DOT__chk_r;
        IData/*31:0*/ tb_top__DOT__chk_d;
        IData/*31:0*/ tb_top__DOT__nz;
        IData/*31:0*/ tb_top__DOT__watch_lo;
        IData/*31:0*/ tb_top__DOT__watch_hi;
        IData/*31:0*/ tb_top__DOT__n_ack;
        IData/*31:0*/ tb_top__DOT__peek;
        IData/*31:0*/ tb_top__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_top__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_top__DOT__dut__DOT____VlemCall_9__merge;
        IData/*31:0*/ tb_top__DOT__dut__DOT____VlemCall_8__merge;
        IData/*31:0*/ tb_top__DOT__dut__DOT____VlemCall_7__merge;
        IData/*31:0*/ tb_top__DOT__dut__DOT____VlemCall_6__merge;
        IData/*31:0*/ tb_top__DOT__dut__DOT____VlemCall_5__merge;
        IData/*31:0*/ tb_top__DOT__dut__DOT__lfsr;
        IData/*31:0*/ tb_top__DOT__dut__DOT__cyc;
        IData/*31:0*/ tb_top__DOT__dut__DOT__SSHDI;
        IData/*31:0*/ tb_top__DOT__dut__DOT__wait_mode;
        IData/*31:0*/ tb_top__DOT__dut__DOT__irq_mode;
        IData/*31:0*/ tb_top__DOT__dut__DOT__cs0w;
        VlWide<3>/*64:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__R;
        VlWide<3>/*64:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__D;
        IData/*31:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__Q;
        VlWide<3>/*64:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__VAL;
        VlWide<3>/*64:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__SUM;
        VlWide<3>/*64:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__SUM64;
        VlWide<3>/*64:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__NRES;
        IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemCall_9__merge;
        IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemCall_8__merge;
        IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemCall_7__merge;
        IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemCall_6__merge;
        IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemCall_5__merge;
        IData/*31:0*/ tb_top__DOT__ref0__DOT__lfsr;
        IData/*31:0*/ tb_top__DOT__ref0__DOT__cyc;
        IData/*31:0*/ tb_top__DOT__ref0__DOT__SSHDI;
        IData/*31:0*/ tb_top__DOT__ref0__DOT__wait_mode;
        IData/*31:0*/ tb_top__DOT__ref0__DOT__irq_mode;
    };
    struct {
        IData/*31:0*/ tb_top__DOT__ref0__DOT__cs0w;
        IData/*31:0*/ __Vdly__tb_top__DOT__dut__DOT__cyc;
        IData/*31:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__Q;
        VlWide<3>/*64:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__R;
        VlWide<3>/*64:0*/ __Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__D;
        IData/*31:0*/ __Vdly__tb_top__DOT__ref0__DOT__cyc;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__R64;
        QData/*63:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__D64;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__dut__DOT__rom;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__dut__DOT__wraml;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__dut__DOT__abus;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__dut__DOT__scr;
        VlUnpacked<IData/*31:0*/, 65536> tb_top__DOT__dut__DOT__wramh;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__ref0__DOT__rom;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__ref0__DOT__wraml;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__ref0__DOT__abus;
        VlUnpacked<IData/*31:0*/, 16384> tb_top__DOT__ref0__DOT__scr;
        VlUnpacked<IData/*31:0*/, 65536> tb_top__DOT__ref0__DOT__wramh;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string tb_top__DOT__name;
    std::string tb_top__DOT__dut__DOT__prog;
    std::string tb_top__DOT__ref0__DOT__prog;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
