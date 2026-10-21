// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_REF_VDP2_PKG___eval_static__TOP__REF_VDP2_PKG(Vtb_top_REF_VDP2_PKG* vlSelf);
VL_ATTR_COLD void Vtb_top_VDP2_PKG___eval_static__TOP__VDP2_PKG(Vtb_top_VDP2_PKG* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_REF_VDP2_PKG___eval_static__TOP__REF_VDP2_PKG((&vlSymsp->TOP__REF_VDP2_PKG));
    Vtb_top_VDP2_PKG___eval_static__TOP__VDP2_PKG((&vlSymsp->TOP__VDP2_PKG));
    Vtb_top___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0 = vlSelfRef.RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__CE_R__0 = vlSelfRef.CE_R;
    vlSelfRef.__Vtrigprevexpr___TOP__CE_F__0 = vlSelfRef.CE_F;
    vlSelfRef.__Vtrigprevexpr___TOP__RES_N__0 = vlSelfRef.RES_N;
    vlSelfRef.__Vtrigprevexpr___TOP__DI__0 = vlSelfRef.DI;
    vlSelfRef.__Vtrigprevexpr___TOP__CS_N__0 = vlSelfRef.CS_N;
    vlSelfRef.__Vtrigprevexpr___TOP__AD_N__0 = vlSelfRef.AD_N;
    vlSelfRef.__Vtrigprevexpr___TOP__DTEN_N__0 = vlSelfRef.DTEN_N;
    vlSelfRef.__Vtrigprevexpr___TOP__REQ_N__0 = vlSelfRef.REQ_N;
    vlSelfRef.__Vtrigprevexpr___TOP__FBDI__0 = vlSelfRef.FBDI;
    vlSelfRef.__Vtrigprevexpr___TOP__PAL__0 = vlSelfRef.PAL;
    vlSelfRef.__Vtrigprevexpr___TOP__EXLAT_N__0 = vlSelfRef.EXLAT_N;
    vlSelfRef.__Vtrigprevexpr___TOP__SCRN_EN__0 = vlSelfRef.SCRN_EN;
    vlSelfRef.__Vtrigprevexpr___TOP__DBG_EXT__0 = vlSelfRef.DBG_EXT;
    vlSelfRef.__Vtrigprevexpr___TOP__r_RA0_Q__0 = vlSelfRef.r_RA0_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__r_RA1_Q__0 = vlSelfRef.r_RA1_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__r_RB0_Q__0 = vlSelfRef.r_RB0_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__r_RB1_Q__0 = vlSelfRef.r_RB1_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__d_RA0_Q__0 = vlSelfRef.d_RA0_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__d_RA1_Q__0 = vlSelfRef.d_RA1_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__d_RB0_Q__0 = vlSelfRef.d_RB0_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__d_RB1_Q__0 = vlSelfRef.d_RB1_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__1 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__RST_N__1 = vlSelfRef.RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__RES_N__1 = vlSelfRef.RES_N;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i;
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i = 0;
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i;
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i = 0;
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i;
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i = 0;
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i;
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i = 0;
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i)) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__i);
        }
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i)) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__i);
        }
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[0U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[1U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[2U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[3U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[4U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[5U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[6U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[7U] = 0ULL;
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i)) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__i);
        }
        __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i)) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__i);
        }
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[0U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[1U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[2U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[3U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[4U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[5U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[6U] = 0ULL;
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[7U] = 0ULL;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__1(Vtb_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
                Vtb_top___024root___stl_sequent__TOP__1(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__obs(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__obs\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__react(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__react\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

extern const VlWide<8>/*255:0*/ Vtb_top__ConstPool__CONST_h3de9eaa4_0;

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk18__DOT__CH_RPc;
    tb_top__DOT__u_dut__DOT__unnamedblk18__DOT__CH_RPc = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP = 0;
    // Body
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__VRES_LATCH0 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__VRES_LATCH1 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__F = 0U;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP = 0U;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk4__DOT__DTEN_N_OLD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk4__DOT__CS_N_OLD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk4__DOT__VRAMA_ALLOW = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk4__DOT__VRAMB_ALLOW = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_WD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_RD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2 = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RP_WD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RCT_WD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_RP = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_USE = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_SEL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_D = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__ADD1 = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT2 = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__LW_WD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk11__DOT__WD = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NBG_CH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__VS_WD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NCNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NHF[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NPR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NCC[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NPALN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NCH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NCHCN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NCHEN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__NEN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RHF[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RCC[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPALN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RCH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RTP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RCELLX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RBG_CH[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_RP = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__CH_RP = 0U;
    tb_top__DOT__u_dut__DOT__unnamedblk18__DOT__CH_RPc = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__R0DOT_FETCH = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SON = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0ON = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0ON = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1ON = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2ON = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3ON = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SCAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0SFC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0SFC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1SFC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2SFC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3SFC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SPRIN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SCCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__LCCCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SCCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SCCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__BKCCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__LCCCRT = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SCOEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0COEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0COEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1COEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2COEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3COEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__BKCOEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SCOSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0COSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0COSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1COSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2COSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3COSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__BKCOSL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SSDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__BKSDEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SBOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SLCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__R0LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N0LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N1LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N2LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__N3LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__FST = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__SEC = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__THD = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__BACKD = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__LAY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__LPRI[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__LON[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk29__DOT__RK = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__PAL = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__DC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CC = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__DC_FST_LATCH = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__DC_SEC_LATCH = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__DC_THD_LATCH = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CC_FST = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__BOKEN_PREV1 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__BOKEN_PREV2 = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CSEC_PREV1 = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CSEC_PREV2 = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CSEC_DC = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CTHD_DC = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CFTH_DC = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk33__DOT__CSEC_ECC = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__C = 0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__EXLAT_N_OLD = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wp = 0U;
    VL_ASSIGN_W(239, vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q, Vtb_top__ConstPool__CONST_h3de9eaa4_0);
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wp = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q = 0ULL;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wp = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld = 0U;
    vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__VRES_LATCH0 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__VRES_LATCH1 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__F = 0U;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP = 0U;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP = 0U;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__DTEN_N_OLD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__CS_N_OLD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_WD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_RD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2 = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RCT_WD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_RP = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_D = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMX = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMY = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ADD1 = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT2 = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__LW_WD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk11__DOT__WD = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_RP = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__CH_RP = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__R0DOT_FETCH = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SON = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0ON = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0ON = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1ON = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2ON = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3ON = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SFC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SFC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SFC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SFC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SFC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__LCCCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCM3 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__LCCCRT = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCOEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCOSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOSL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SSDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKSDEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SBOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3BOKEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SLCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3LCEN = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC_FST = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV1 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV2 = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV1 = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV2 = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_DC = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CTHD_DC = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CFTH_DC = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_ECC = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk24__DOT__C = 0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__EXLAT_N_OLD = 0U;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_hb568d580_0;
extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_h1f995f22_0;
extern const VlUnpacked<SData/*9:0*/, 64> Vtb_top__ConstPool__TABLE_h33db5abf_0;

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_top__DOT__u_dut__DOT____VlemCall_18__MultRC;
    IData/*31:0*/ tb_top__DOT__u_dut__DOT____VlemCall_17__MultRC;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_9__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_8__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_7__NxLSAddr;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_6__NxLSAddr;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSA0;
    tb_top__DOT__u_dut__DOT__RDBSA0 = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSA1;
    tb_top__DOT__u_dut__DOT__RDBSA1 = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSB0;
    tb_top__DOT__u_dut__DOT__RDBSB0 = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSB1;
    tb_top__DOT__u_dut__DOT__RDBSB1 = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__RPW_EN;
    tb_top__DOT__u_dut__DOT__RPW_EN = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP = 0;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_17__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_16__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_15__NxLSAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_14__NxLSAddr;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT____VlemCall_13__RxScreenOver;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT____VlemCall_12__RxScreenOver;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_11__RxCHAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_9__NxCHAddr2;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_8__NxCHAddr2;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_5__RxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_4__RxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_3__NxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_2__NxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_1__NxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_0__NxPNAddr;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSA0;
    tb_top__DOT__u_ref__DOT__RDBSA0 = 0;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSA1;
    tb_top__DOT__u_ref__DOT__RDBSA1 = 0;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSB0;
    tb_top__DOT__u_ref__DOT__RDBSB0 = 0;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSB1;
    tb_top__DOT__u_ref__DOT__RDBSB1 = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__RPW_EN;
    tb_top__DOT__u_ref__DOT__RPW_EN = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP = 0;
    VlUnpacked<Vtb_top_VDP2NSRegs_t__struct__0, 4> __Vfunc_NSxRegs__0__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SCX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SCY = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMY = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMHF = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMQT = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSTA = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSCX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSCY = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LZMX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__VCSC = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSS = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LWTA = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_NSxRegs__0__REGS;
    VL_ZERO_W(2304, __Vfunc_NSxRegs__0__REGS);
    VlUnpacked<Vtb_top_VDP2RSRegs_t__struct__0, 2> __Vfunc_RSxRegs__1__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RSxRegs__1__REGS;
    VL_ZERO_W(2304, __Vfunc_RSxRegs__1__REGS);
    VlUnpacked<Vtb_top_VDP2RPRegs_t__struct__0, 2> __Vfunc_RPxRegs__2__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KTE = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KMD = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KTAOS = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KDBS = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KLCE = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__OVR = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__OVPNR = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RPxRegs__2__REGS;
    VL_ZERO_W(2304, __Vfunc_RPxRegs__2__REGS);
    CData/*3:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W = 0;
    CData/*2:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W = 0;
    CData/*2:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__20__NxLSTA;
    __Vfunc_NxLSAddr__20__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__20__TBL_OFFS;
    __Vfunc_NxLSAddr__20__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__20__VAL_OFFS;
    __Vfunc_NxLSAddr__20__VAL_OFFS = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__21__NxLSTA;
    __Vfunc_NxLSAddr__21__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__21__TBL_OFFS;
    __Vfunc_NxLSAddr__21__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__21__VAL_OFFS;
    __Vfunc_NxLSAddr__21__VAL_OFFS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__23__RxKAst;
    __Vfunc_RxCTAddr__23__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__23__RxKA;
    __Vfunc_RxCTAddr__23__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__23__RxKTAOS;
    __Vfunc_RxCTAddr__23__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__23__RxKDBS;
    __Vfunc_RxCTAddr__23__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__24__RxKAst;
    __Vfunc_RxCTAddr__24__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__24__RxKA;
    __Vfunc_RxCTAddr__24__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__24__RxKTAOS;
    __Vfunc_RxCTAddr__24__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__24__RxKDBS;
    __Vfunc_RxCTAddr__24__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__25__Vfuncout;
    __Vfunc_RxCTAddr__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__25__RxKAst;
    __Vfunc_RxCTAddr__25__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__25__RxKA;
    __Vfunc_RxCTAddr__25__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__25__RxKTAOS;
    __Vfunc_RxCTAddr__25__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__25__RxKDBS;
    __Vfunc_RxCTAddr__25__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__26__Vfuncout;
    __Vfunc_RxCTAddr__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__26__RxKAst;
    __Vfunc_RxCTAddr__26__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__26__RxKA;
    __Vfunc_RxCTAddr__26__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__26__RxKTAOS;
    __Vfunc_RxCTAddr__26__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__26__RxKDBS;
    __Vfunc_RxCTAddr__26__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_MultRC__32__Vfuncout;
    __Vfunc_MultRC__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__32__a;
    __Vfunc_MultRC__32__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__32__b;
    __Vfunc_MultRC__32__b = 0;
    IData/*31:0*/ __Vfunc_MultRC__33__Vfuncout;
    __Vfunc_MultRC__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__33__a;
    __Vfunc_MultRC__33__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__33__b;
    __Vfunc_MultRC__33__b = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__Vfuncout;
    __Vfunc_WinTest__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W0HIT;
    __Vfunc_WinTest__92__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W1HIT;
    __Vfunc_WinTest__92__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W0E;
    __Vfunc_WinTest__92__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W1E;
    __Vfunc_WinTest__92__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__LOG;
    __Vfunc_WinTest__92__LOG = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__98__Vfuncout;
    __Vfunc_MakeDotData__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__98__DCC;
    __Vfunc_MakeDotData__98__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__98__CDP;
    __Vfunc_MakeDotData__98__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__98__CHCN;
    __Vfunc_MakeDotData__98__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__98__TPON;
    __Vfunc_MakeDotData__98__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__99__Vfuncout;
    __Vfunc_MakeDotData__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__99__DCC;
    __Vfunc_MakeDotData__99__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__99__CDP;
    __Vfunc_MakeDotData__99__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__99__CHCN;
    __Vfunc_MakeDotData__99__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__99__TPON;
    __Vfunc_MakeDotData__99__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__100__Vfuncout;
    __Vfunc_MakeDotData__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__100__DCC;
    __Vfunc_MakeDotData__100__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__100__CDP;
    __Vfunc_MakeDotData__100__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__100__CHCN;
    __Vfunc_MakeDotData__100__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__100__TPON;
    __Vfunc_MakeDotData__100__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__101__Vfuncout;
    __Vfunc_MakeDotData__101__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__101__DCC;
    __Vfunc_MakeDotData__101__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__101__CDP;
    __Vfunc_MakeDotData__101__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__101__CHCN;
    __Vfunc_MakeDotData__101__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__101__TPON;
    __Vfunc_MakeDotData__101__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__102__Vfuncout;
    __Vfunc_MakeDotData__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__102__DCC;
    __Vfunc_MakeDotData__102__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__102__CDP;
    __Vfunc_MakeDotData__102__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__102__CHCN;
    __Vfunc_MakeDotData__102__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__102__TPON;
    __Vfunc_MakeDotData__102__TPON = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__Vfuncout;
    __Vfunc_WinTest__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W0HIT;
    __Vfunc_WinTest__109__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W1HIT;
    __Vfunc_WinTest__109__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__WSHIT;
    __Vfunc_WinTest__109__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W0E;
    __Vfunc_WinTest__109__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W1E;
    __Vfunc_WinTest__109__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__SWE;
    __Vfunc_WinTest__109__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__LOG;
    __Vfunc_WinTest__109__LOG = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__Vfuncout;
    __Vfunc_WinTest__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W0HIT;
    __Vfunc_WinTest__110__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W1HIT;
    __Vfunc_WinTest__110__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__WSHIT;
    __Vfunc_WinTest__110__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W0E;
    __Vfunc_WinTest__110__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W1E;
    __Vfunc_WinTest__110__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__SWE;
    __Vfunc_WinTest__110__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__LOG;
    __Vfunc_WinTest__110__LOG = 0;
    VlUnpacked<Vtb_top_VDP2NSRegs_t__struct__0, 4> __Vfunc_NSxRegs__132__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SCX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SCY = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMY = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMHF = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMQT = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSTA = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSCX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSCY = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LZMX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__VCSC = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSS = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LWTA = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_NSxRegs__132__REGS;
    VL_ZERO_W(2304, __Vfunc_NSxRegs__132__REGS);
    VlUnpacked<Vtb_top_VDP2RSRegs_t__struct__0, 2> __Vfunc_RSxRegs__133__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RSxRegs__133__REGS;
    VL_ZERO_W(2304, __Vfunc_RSxRegs__133__REGS);
    VlUnpacked<Vtb_top_VDP2RPRegs_t__struct__0, 2> __Vfunc_RPxRegs__134__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KTE = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KMD = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KTAOS = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KDBS = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KLCE = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__OVR = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__OVPNR = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RPxRegs__134__REGS;
    VL_ZERO_W(2304, __Vfunc_RPxRegs__134__REGS);
    CData/*1:0*/ __Vfunc_NxPNAddr__135__NxPN_CNT;
    __Vfunc_NxPNAddr__135__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__135__NxOFFX;
    __Vfunc_NxPNAddr__135__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__135__NxOFFY;
    __Vfunc_NxPNAddr__135__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__135__NxMP;
    __Vfunc_NxPNAddr__135__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__135__NxPLSZ;
    __Vfunc_NxPNAddr__135__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxCHSZ;
    __Vfunc_NxPNAddr__135__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxPNB;
    __Vfunc_NxPNAddr__135__NxPNB = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxZMHF;
    __Vfunc_NxPNAddr__135__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxZMQT;
    __Vfunc_NxPNAddr__135__NxZMQT = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__136__NxPN_CNT;
    __Vfunc_NxPNAddr__136__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__136__NxOFFX;
    __Vfunc_NxPNAddr__136__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__136__NxOFFY;
    __Vfunc_NxPNAddr__136__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__136__NxMP;
    __Vfunc_NxPNAddr__136__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__136__NxPLSZ;
    __Vfunc_NxPNAddr__136__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxCHSZ;
    __Vfunc_NxPNAddr__136__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxPNB;
    __Vfunc_NxPNAddr__136__NxPNB = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxZMHF;
    __Vfunc_NxPNAddr__136__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxZMQT;
    __Vfunc_NxPNAddr__136__NxZMQT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__137__NxOFFX;
    __Vfunc_NxPNAddr__137__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__137__NxOFFY;
    __Vfunc_NxPNAddr__137__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__137__NxMP;
    __Vfunc_NxPNAddr__137__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__137__NxPLSZ;
    __Vfunc_NxPNAddr__137__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__137__NxCHSZ;
    __Vfunc_NxPNAddr__137__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__137__NxPNB;
    __Vfunc_NxPNAddr__137__NxPNB = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__138__NxOFFX;
    __Vfunc_NxPNAddr__138__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__138__NxOFFY;
    __Vfunc_NxPNAddr__138__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__138__NxMP;
    __Vfunc_NxPNAddr__138__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__138__NxPLSZ;
    __Vfunc_NxPNAddr__138__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__138__NxCHSZ;
    __Vfunc_NxPNAddr__138__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__138__NxPNB;
    __Vfunc_NxPNAddr__138__NxPNB = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__139__RxOFFX;
    __Vfunc_RxPNAddr__139__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__139__RxOFFY;
    __Vfunc_RxPNAddr__139__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxPNAddr__139__RxMP;
    __Vfunc_RxPNAddr__139__RxMP = 0;
    CData/*1:0*/ __Vfunc_RxPNAddr__139__RxPLSZ;
    __Vfunc_RxPNAddr__139__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__139__RxCHSZ;
    __Vfunc_RxPNAddr__139__RxCHSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__139__RxPNB;
    __Vfunc_RxPNAddr__139__RxPNB = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__140__RxOFFX;
    __Vfunc_RxPNAddr__140__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__140__RxOFFY;
    __Vfunc_RxPNAddr__140__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxPNAddr__140__RxMP;
    __Vfunc_RxPNAddr__140__RxMP = 0;
    CData/*1:0*/ __Vfunc_RxPNAddr__140__RxPLSZ;
    __Vfunc_RxPNAddr__140__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__140__RxCHSZ;
    __Vfunc_RxPNAddr__140__RxCHSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__140__RxPNB;
    __Vfunc_RxPNAddr__140__RxPNB = 0;
    VlUnpacked<IData/*31:0*/, 2> __Vfunc_NxCHAddr2__145__NxPN;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_NxCHAddr2__145__NxPN[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_NxCHAddr2__145__NxCH_CNT;
    __Vfunc_NxCHAddr2__145__NxCH_CNT = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__145__NxOFFX;
    __Vfunc_NxCHAddr2__145__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__145__NxOFFY;
    __Vfunc_NxCHAddr2__145__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxCHAddr2__145__NxCHCN;
    __Vfunc_NxCHAddr2__145__NxCHCN = 0;
    CData/*0:0*/ __Vfunc_NxCHAddr2__145__NxCHSZ;
    __Vfunc_NxCHAddr2__145__NxCHSZ = 0;
    VlUnpacked<IData/*31:0*/, 2> __Vfunc_NxCHAddr2__146__NxPN;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_NxCHAddr2__146__NxPN[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_NxCHAddr2__146__NxCH_CNT;
    __Vfunc_NxCHAddr2__146__NxCH_CNT = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__146__NxOFFX;
    __Vfunc_NxCHAddr2__146__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__146__NxOFFY;
    __Vfunc_NxCHAddr2__146__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxCHAddr2__146__NxCHCN;
    __Vfunc_NxCHAddr2__146__NxCHCN = 0;
    CData/*0:0*/ __Vfunc_NxCHAddr2__146__NxCHSZ;
    __Vfunc_NxCHAddr2__146__NxCHSZ = 0;
    IData/*31:0*/ __Vfunc_RxCHAddr__149__RxPNx;
    __Vfunc_RxCHAddr__149__RxPNx = 0;
    SData/*11:0*/ __Vfunc_RxCHAddr__149__RxOFFX;
    __Vfunc_RxCHAddr__149__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxCHAddr__149__RxOFFY;
    __Vfunc_RxCHAddr__149__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxCHAddr__149__RxCHCN;
    __Vfunc_RxCHAddr__149__RxCHCN = 0;
    CData/*0:0*/ __Vfunc_RxCHAddr__149__RxCHSZ;
    __Vfunc_RxCHAddr__149__RxCHSZ = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__150__RxOVR;
    __Vfunc_RxScreenOver__150__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__150__RxOFFX;
    __Vfunc_RxScreenOver__150__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__150__RxOFFY;
    __Vfunc_RxScreenOver__150__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__150__RxPLSZ;
    __Vfunc_RxScreenOver__150__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__150__RxBMSZ;
    __Vfunc_RxScreenOver__150__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__150__RxBMEN;
    __Vfunc_RxScreenOver__150__RxBMEN = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__151__RxOVR;
    __Vfunc_RxScreenOver__151__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__151__RxOFFX;
    __Vfunc_RxScreenOver__151__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__151__RxOFFY;
    __Vfunc_RxScreenOver__151__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__151__RxPLSZ;
    __Vfunc_RxScreenOver__151__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__151__RxBMSZ;
    __Vfunc_RxScreenOver__151__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__151__RxBMEN;
    __Vfunc_RxScreenOver__151__RxBMEN = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__152__NxLSTA;
    __Vfunc_NxLSAddr__152__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__152__TBL_OFFS;
    __Vfunc_NxLSAddr__152__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__152__VAL_OFFS;
    __Vfunc_NxLSAddr__152__VAL_OFFS = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__153__NxLSTA;
    __Vfunc_NxLSAddr__153__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__153__TBL_OFFS;
    __Vfunc_NxLSAddr__153__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__153__VAL_OFFS;
    __Vfunc_NxLSAddr__153__VAL_OFFS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__155__RxKAst;
    __Vfunc_RxCTAddr__155__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__155__RxKA;
    __Vfunc_RxCTAddr__155__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__155__RxKTAOS;
    __Vfunc_RxCTAddr__155__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__155__RxKDBS;
    __Vfunc_RxCTAddr__155__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__156__RxKAst;
    __Vfunc_RxCTAddr__156__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__156__RxKA;
    __Vfunc_RxCTAddr__156__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__156__RxKTAOS;
    __Vfunc_RxCTAddr__156__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__156__RxKDBS;
    __Vfunc_RxCTAddr__156__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__157__Vfuncout;
    __Vfunc_RxCTAddr__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__157__RxKAst;
    __Vfunc_RxCTAddr__157__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__157__RxKA;
    __Vfunc_RxCTAddr__157__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__157__RxKTAOS;
    __Vfunc_RxCTAddr__157__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__157__RxKDBS;
    __Vfunc_RxCTAddr__157__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__158__Vfuncout;
    __Vfunc_RxCTAddr__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__158__RxKAst;
    __Vfunc_RxCTAddr__158__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__158__RxKA;
    __Vfunc_RxCTAddr__158__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__158__RxKTAOS;
    __Vfunc_RxCTAddr__158__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__158__RxKDBS;
    __Vfunc_RxCTAddr__158__RxKDBS = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__Vfuncout;
    __Vfunc_WinTest__226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W0HIT;
    __Vfunc_WinTest__226__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W1HIT;
    __Vfunc_WinTest__226__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W0E;
    __Vfunc_WinTest__226__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W1E;
    __Vfunc_WinTest__226__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__LOG;
    __Vfunc_WinTest__226__LOG = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__232__Vfuncout;
    __Vfunc_MakeDotData__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__232__DCC;
    __Vfunc_MakeDotData__232__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__232__CDP;
    __Vfunc_MakeDotData__232__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__232__CHCN;
    __Vfunc_MakeDotData__232__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__232__TPON;
    __Vfunc_MakeDotData__232__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__233__Vfuncout;
    __Vfunc_MakeDotData__233__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__233__DCC;
    __Vfunc_MakeDotData__233__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__233__CDP;
    __Vfunc_MakeDotData__233__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__233__CHCN;
    __Vfunc_MakeDotData__233__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__233__TPON;
    __Vfunc_MakeDotData__233__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__234__Vfuncout;
    __Vfunc_MakeDotData__234__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__234__DCC;
    __Vfunc_MakeDotData__234__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__234__CDP;
    __Vfunc_MakeDotData__234__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__234__CHCN;
    __Vfunc_MakeDotData__234__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__234__TPON;
    __Vfunc_MakeDotData__234__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__235__Vfuncout;
    __Vfunc_MakeDotData__235__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__235__DCC;
    __Vfunc_MakeDotData__235__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__235__CDP;
    __Vfunc_MakeDotData__235__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__235__CHCN;
    __Vfunc_MakeDotData__235__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__235__TPON;
    __Vfunc_MakeDotData__235__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__236__Vfuncout;
    __Vfunc_MakeDotData__236__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__236__DCC;
    __Vfunc_MakeDotData__236__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__236__CDP;
    __Vfunc_MakeDotData__236__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__236__CHCN;
    __Vfunc_MakeDotData__236__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__236__TPON;
    __Vfunc_MakeDotData__236__TPON = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__Vfuncout;
    __Vfunc_WinTest__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W0HIT;
    __Vfunc_WinTest__243__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W1HIT;
    __Vfunc_WinTest__243__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__WSHIT;
    __Vfunc_WinTest__243__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W0E;
    __Vfunc_WinTest__243__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W1E;
    __Vfunc_WinTest__243__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__SWE;
    __Vfunc_WinTest__243__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__LOG;
    __Vfunc_WinTest__243__LOG = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__Vfuncout;
    __Vfunc_WinTest__244__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W0HIT;
    __Vfunc_WinTest__244__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W1HIT;
    __Vfunc_WinTest__244__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__WSHIT;
    __Vfunc_WinTest__244__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W0E;
    __Vfunc_WinTest__244__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W1E;
    __Vfunc_WinTest__244__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__SWE;
    __Vfunc_WinTest__244__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__LOG;
    __Vfunc_WinTest__244__LOG = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_19;
    __VdfgRegularize_hebeb780c_0_19 = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr = 0;
    CData/*1:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX = 0;
    SData/*8:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr = 0;
    IData/*31:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN = 0;
    SData/*10:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX = 0;
    CData/*4:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs = 0;
    CData/*3:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs = 0;
    CData/*3:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs = 0;
    CData/*2:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr = 0;
    SData/*8:0*/ TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr;
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs;
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs = 0;
    CData/*0:0*/ TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res = 0;
    IData/*23:0*/ TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC = 0;
    CData/*2:0*/ TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    // Body
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPSX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[23U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPSX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[21U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPEX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[22U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPEX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[20U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD1 = (((QData)((IData)(
                                                                   (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][7U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][6U]) 
                                                                     << 0x00000010U) 
                                                                    | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][5U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][4U])))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][3U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][2U]) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][1U]) 
                                                                         << 8U) 
                                                                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][0U])))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD2 = (((QData)((IData)(
                                                                   (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][7U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][6U]) 
                                                                     << 0x00000010U) 
                                                                    | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][5U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][4U])))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][3U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][2U]) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][1U]) 
                                                                         << 8U) 
                                                                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][0U])))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD3 = (((QData)((IData)(
                                                                   (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][7U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][6U]) 
                                                                     << 0x00000010U) 
                                                                    | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][5U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][4U])))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][3U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][2U]) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][1U]) 
                                                                         << 8U) 
                                                                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][0U])))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPSX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[23U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPSX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[21U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPEX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[22U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPEX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[20U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__LWE[0U] = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[17U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_ref__DOT__LWE[1U] = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[16U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA = (0x0000001fU 
                                                 & ((0x13U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                            >> 0x0000001eU))))
                                                     ? 
                                                    (0x00000018U 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                            >> 3U))))
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                             >> 0x0000001eU))))
                                                      ? 
                                                     (0x0000001aU 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                             >> 3U))))
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                              >> 0x0000001eU))))
                                                       ? 
                                                      (0x0000001cU 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                              >> 3U))))
                                                       : 
                                                      ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                          >> 0x0000001eU))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber5 
        = ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                  >> 1U)) | (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__A));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_END 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x0151U : 0x0131U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                  >> 1U)))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] = (
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[1U] 
                                                    << 0x0000000aU) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                                      >> 0x00000016U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] = (
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[2U] 
                                                    << 0x0000000aU) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[1U] 
                                                      >> 0x00000016U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] = (0x0000ffffU 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                       << 0x0000000aU) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[2U] 
                                                         >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_END 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x0151U : 0x0131U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                  >> 1U)))))));
    vlSelfRef.r_RA0_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A;
    vlSelfRef.d_RA0_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_A;
    vlSelfRef.r_RA1_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A;
    vlSelfRef.d_RA1_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_A;
    vlSelfRef.r_RA_D = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_D;
    vlSelfRef.d_RA_D = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA_D;
    vlSelfRef.r_RA_WE = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_WE;
    vlSelfRef.d_RA_WE = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA_WE;
    vlSelfRef.r_RB0_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A;
    vlSelfRef.d_RB0_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_A;
    vlSelfRef.r_RB1_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A;
    vlSelfRef.d_RB1_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_A;
    vlSelfRef.r_RB_D = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_D;
    vlSelfRef.d_RB_D = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB_D;
    vlSelfRef.r_RB_WE = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_WE;
    vlSelfRef.d_RB_WE = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB_WE;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = (IData)(
                                                        (2U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__d_HRES))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = (IData)(
                                                        (2U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__r_HRES))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = (1U 
                                                 & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]) 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                       >> 0x0000001eU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxDC[0U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxDC[1U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxDC[0U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxDC[1U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_RDREQ = 
        (1U & (~ ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT))) 
                  | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_RDREQ = 
        (1U & (~ ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT))) 
                  | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                                                   == 
                                                   (0x000001ffU 
                                                    & (0x01feU 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                                         >> 2U))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                                                   == 
                                                   (0x000001ffU 
                                                    & (0x01feU 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                                         >> 2U))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR = 
        (0x0007ffffU & (((0x00000040U & ((~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS) 
                                             >> 5U)) 
                                         << 6U)) | 
                         (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS) 
                                         << 1U))) + 
                        (0x0007ffbeU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[24U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR = 
        (0x0007ffffU & ((0x0007fffeU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[32U]) 
                        + ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS) 
                           << 1U)));
    vlSelfRef.r_RA_RD = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD));
    vlSelfRef.d_RA_RD = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_RD));
    vlSelfRef.r_RB_RD = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD));
    vlSelfRef.d_RB_RD = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_RD));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCDP[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCDP[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[1U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCDP[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[0U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCDP[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[1U];
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x0003ffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem
                                                           [vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR] 
                                                           >> 0x00000012U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (0x0003ffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem
                                                           [vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR] 
                                                           >> 0x00000012U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem
                                                            [vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR] 
                                                            >> 0x00000010U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = (0x0000ffffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem
                                                           [vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem
                                                            [vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR] 
                                                            >> 0x00000010U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = (0x0000ffffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem
                                                           [vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = (1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                    ^ 
                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                     >> 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VS_START = (0x000003ffU 
                                                   & (((IData)(vlSelfRef.PAL)
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                         ? 0x0113U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                          ? 0x010bU
                                                          : 0x0103U))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                         ? 0x00f5U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                          ? 0x00f5U
                                                          : 0x00edU))) 
                                                      - 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VS_START = (0x000003ffU 
                                                   & (((IData)(vlSelfRef.PAL)
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                         ? 0x0113U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                          ? 0x010bU
                                                          : 0x0103U))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                         ? 0x00f5U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                          ? 0x00f5U
                                                          : 0x00edU))) 
                                                      - 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x000c0000U 
                                                     == 
                                                     (0x000e0000U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__A)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_48 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                                 [
                                                                 (0x0000001fU 
                                                                  & Vtb_top__ConstPool__CONST_hb568d580_0
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((0x07fffffcU 
                                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                                          << 2U)) 
                                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                                         >> 0x0000001eU)))])] 
                                                                 >> 0x0000001cU)))) 
                                                  << 0x0000001dU) 
                                                 | (0x1fffffc0U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                    [
                                                    (0x0000001fU 
                                                     & Vtb_top__ConstPool__CONST_hb568d580_0
                                                     [
                                                     (0x0000001fU 
                                                      & ((0x07fffffcU 
                                                          & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                             << 2U)) 
                                                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                            >> 0x0000001eU)))])]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_49 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                                                 [
                                                                 (0x0000001fU 
                                                                  & Vtb_top__ConstPool__CONST_h1f995f22_0
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((0x07fffffcU 
                                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                                          << 2U)) 
                                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                                         >> 0x0000001eU)))])] 
                                                                 >> 0x00000012U)))) 
                                                  << 0x00000013U) 
                                                 | (0x0007ffc0U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                                    [
                                                    (0x0000001fU 
                                                     & Vtb_top__ConstPool__CONST_h1f995f22_0
                                                     [
                                                     (0x0000001fU 
                                                      & ((0x07fffffcU 
                                                          & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                             << 2U)) 
                                                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                            >> 0x0000001eU)))])]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VS_END = (0x000003ffU 
                                                 & (((IData)(vlSelfRef.PAL)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                       ? 0x01ddU
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                        ? 0x01d5U
                                                        : 0x01cdU))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                       ? 0x01f1U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                                        ? 0x01f1U
                                                        : 0x01e9U))) 
                                                    - 
                                                    (1U 
                                                     & (- (IData)(
                                                                  ((0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VS_END = (0x000003ffU 
                                                 & (((IData)(vlSelfRef.PAL)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                       ? 0x01ddU
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                        ? 0x01d5U
                                                        : 0x01cdU))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                       ? 0x01f1U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                        ? 0x01f1U
                                                        : 0x01e9U))) 
                                                    - 
                                                    (1U 
                                                     & (- (IData)(
                                                                  ((0U 
                                                                    != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[0U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[0U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[1U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[1U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[2U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[2U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[3U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[3U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x01b1U : 0x0195U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                  >> 1U)))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES 
        = ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)) 
           | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT) 
              < (0x000001ffU & (((IData)(Vtb_top__ConstPool__TABLE_h33db5abf_0
                                         [(((IData)(vlSelfRef.PAL) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))]) 
                                 - ((4U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                     ? 1U : 2U)) >> 1U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__IS_VISIBLE_LINES 
        = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT) 
           < (Vtb_top__ConstPool__TABLE_h33db5abf_0
              [(((IData)(vlSelfRef.PAL) << 5U) | (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))] 
              >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x01b1U : 0x0195U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                  >> 1U)))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES 
        = ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)) 
           | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT) 
              < (0x000001ffU & (((IData)(Vtb_top__ConstPool__TABLE_h33db5abf_0
                                         [(((IData)(vlSelfRef.PAL) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))]) 
                                 - ((4U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                     ? 1U : 2U)) >> 1U))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__IS_VISIBLE_LINES 
        = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT) 
           < (Vtb_top__ConstPool__TABLE_h33db5abf_0
              [(((IData)(vlSelfRef.PAL) << 5U) | (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))] 
              >> 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD = ((0U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                                                  ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                                                    ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF
                                                    : vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF)));
    vlSelfRef.cov = ((0xfdffU & (IData)(vlSelfRef.cov)) 
                     | ((3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                      >> 0x0000000cU))) 
                        << 9U));
    if (vlSelfRef.AD_N) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR 
            = (0x000007ffU & ((0x00000700U & vlSelfRef.tb_top__DOT__u_dut__DOT__A) 
                              | (0x000000ffU & (IData)(vlSelfRef.DI))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR 
            = (0x000007ffU & ((0x00000700U & vlSelfRef.tb_top__DOT__u_ref__DOT__A) 
                              | (0x000000ffU & (IData)(vlSelfRef.DI))));
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR 
            = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
        vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR 
            = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__HS_START = (0x000001ffU 
                                                   & (((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                                        ? 0x017cU
                                                        : 0x015eU) 
                                                      - 
                                                      (4U 
                                                       & (- (IData)((IData)(vlSelfRef.PAL))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__HS_START = (0x000001ffU 
                                                   & (((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                                        ? 0x017cU
                                                        : 0x015eU) 
                                                      - 
                                                      (4U 
                                                       & (- (IData)((IData)(vlSelfRef.PAL))))));
    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                  >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                               >> 1U))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH));
        } else {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC));
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_N = (0x000007ffU 
                                                & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__CAOS) 
                                                    << 8U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk32__DOT__PAL)));
    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                  >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                               >> 1U))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH));
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC));
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_N = (0x000007ffU 
                                                & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS) 
                                                    << 8U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = ((IData)(vlSelfRef.CE_R) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[23U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[21U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[22U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[20U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.CS_N) 
                                                       | ((IData)(vlSelfRef.AD_N) 
                                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                                             >> 0x00000013U)))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.CS_N) 
                                                       | ((IData)(vlSelfRef.AD_N) 
                                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                                             >> 0x00000013U)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[0U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[0U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[1U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[1U])));
    __Vfunc_MultRC__32__b = (vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                             - vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB);
    __Vfunc_MultRC__32__a = vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA;
    vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__32__a), 
                      VL_EXTENDS_QI(64,32, __Vfunc_MultRC__32__b));
    __Vfunc_MultRC__32__Vfuncout = (IData)((vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                            >> 0x10U));
    tb_top__DOT__u_dut__DOT____VlemCall_17__MultRC 
        = __Vfunc_MultRC__32__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__SUMX = (vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX 
                                               + tb_top__DOT__u_dut__DOT____VlemCall_17__MultRC);
    __Vfunc_MultRC__33__b = (vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                             - vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB);
    __Vfunc_MultRC__33__a = vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA;
    vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__33__a), 
                      VL_EXTENDS_QI(64,32, __Vfunc_MultRC__33__b));
    __Vfunc_MultRC__33__Vfuncout = (IData)((vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                            >> 0x10U));
    tb_top__DOT__u_dut__DOT____VlemCall_18__MultRC 
        = __Vfunc_MultRC__33__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__SUMY = (vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY 
                                               + tb_top__DOT__u_dut__DOT____VlemCall_18__MultRC);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY = ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))
                                                  ? 
                                                 ((0x000001feU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD))))
                                                  : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX0) 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                      >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x00080000U 
                                                     == 
                                                     (0x000c0000U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__A)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x00080000U 
                                                     == 
                                                     (0x000c0000U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__A)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxRP_ADDR = 
        (0x0007ffffU & (((0x00000040U & ((~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS) 
                                             >> 5U)) 
                                         << 6U)) | 
                         (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS) 
                                         << 1U))) + 
                        (0x0007ffbeU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[24U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[0U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[0U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[1U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[1U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x000c0000U 
                                                     == 
                                                     (0x000e0000U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__A)));
    __VdfgRegularize_hebeb780c_0_19 = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                              >> 0x0000001aU) 
                                             & (IData)(
                                                       (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                                        >> 0x00000024U))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R = ((IData)(vlSelfRef.CE_R) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F = ((IData)(vlSelfRef.CE_R) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[0U] = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[17U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[1U] = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[16U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[23U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[21U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[22U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[20U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY = ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))
                                                  ? 
                                                 ((0x000001feU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD))))
                                                  : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX) 
                                                 << 1U) 
                                                | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX0) 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                      >> 1U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[0U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAy[0U] 
                                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[1U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAy[1U] 
                                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[1U]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = (1U 
                                                 & ((~ (IData)(vlSelfRef.DTEN_N)) 
                                                    & (~ (IData)(vlSelfRef.REQ_N))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[1U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[2U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[3U]);
    __Vfunc_WinTest__226__LOG = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 7U));
    __Vfunc_WinTest__226__W1E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 3U));
    __Vfunc_WinTest__226__W0E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 1U));
    __Vfunc_WinTest__226__W1HIT = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[7U] 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 2U)));
    __Vfunc_WinTest__226__W0HIT = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[7U] 
                                         ^ vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U]));
    if (__Vfunc_WinTest__226__W1E) {
        if (__Vfunc_WinTest__226__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__226__W1HIT) 
                   & (IData)(__Vfunc_WinTest__226__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__226__W1HIT) 
                   | (IData)(__Vfunc_WinTest__226__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__226__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__226__W1HIT;
        }
    } else if (__Vfunc_WinTest__226__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__226__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__226__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__226__Vfuncout = ((IData)(__Vfunc_WinTest__226__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    tb_top__DOT__u_ref__DOT__RPW_EN = __Vfunc_WinTest__226__Vfuncout;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000047U)) {
        __Vfunc_RPxRegs__134__REGS[__Vilp1] = vlSelfRef.tb_top__DOT__u_ref__DOT__REGS
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & __Vfunc_RPxRegs__134__REGS[56U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_RPxRegs__134__REGS[56U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[51U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[47U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[51U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[47U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[51U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[47U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[51U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[47U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[50U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[46U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[50U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[46U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[50U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[46U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[50U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[46U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[49U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[45U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[49U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[45U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[49U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[45U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[49U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[45U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[48U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[44U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[48U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[44U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[48U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[44U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[48U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[44U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTAOS 
        = (7U & __Vfunc_RPxRegs__134__REGS[26U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTAOS 
        = (7U & (__Vfunc_RPxRegs__134__REGS[26U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 0x0000000eU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVPNR 
        = (__Vfunc_RPxRegs__134__REGS[25U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVPNR 
        = (0x0000ffffU & __Vfunc_RPxRegs__134__REGS[25U]);
    __Vfunc_RPxRegs__134__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG = __Vfunc_RPxRegs__134__Vfuncout;
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[32U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[32U];
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[33U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[33U];
    }
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT 
            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem
               [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp) 
                                - (IData)(0x21U)))]);
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT 
            = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem
                     [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp) 
                                      - (IData)(0x21U)))] 
                     >> 1U));
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT34));
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT 
            = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT34) 
                     >> 1U));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[0U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAy[0U] 
                                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[1U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAy[1U] 
                                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[1U]));
    __Vfunc_WinTest__92__LOG = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                      >> 7U));
    __Vfunc_WinTest__92__W1E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                      >> 3U));
    __Vfunc_WinTest__92__W0E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                      >> 1U));
    __Vfunc_WinTest__92__W1HIT = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem
                                         [(0x0000003fU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp) 
                                              - (IData)(8U)))] 
                                         >> 1U) ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                   >> 2U)));
    __Vfunc_WinTest__92__W0HIT = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem
                                        [(0x0000003fU 
                                          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp) 
                                             - (IData)(8U)))] 
                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U]));
    if (__Vfunc_WinTest__92__W1E) {
        if (__Vfunc_WinTest__92__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__92__W1HIT) 
                   & (IData)(__Vfunc_WinTest__92__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__92__W1HIT) 
                   | (IData)(__Vfunc_WinTest__92__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__92__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__92__W1HIT;
        }
    } else if (__Vfunc_WinTest__92__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__92__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__92__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__92__Vfuncout = ((IData)(__Vfunc_WinTest__92__LOG)
                                      ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                      : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    tb_top__DOT__u_dut__DOT__RPW_EN = __Vfunc_WinTest__92__Vfuncout;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[0U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[1U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[1U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[2U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[2U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[2U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[3U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[3U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[3U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[0U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NVCSY[0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[1U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NVCSY[1U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[2U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[3U];
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x00000047U)) {
        __Vfunc_RSxRegs__133__REGS[__Vilp2] = vlSelfRef.tb_top__DOT__u_ref__DOT__REGS
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_RSxRegs__133__REGS[57U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (__Vfunc_RSxRegs__133__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & __Vfunc_RSxRegs__133__REGS[60U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_RSxRegs__133__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & __Vfunc_RSxRegs__133__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & __Vfunc_RSxRegs__133__REGS[14U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_RSxRegs__133__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[8U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & (__Vfunc_RSxRegs__133__REGS[13U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & __Vfunc_RSxRegs__133__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[3U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & (__Vfunc_RSxRegs__133__REGS[3U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & __Vfunc_RSxRegs__133__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[12U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__133__REGS[4U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__133__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & (__Vfunc_RSxRegs__133__REGS[12U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & __Vfunc_RSxRegs__133__REGS[12U]);
    __Vfunc_RSxRegs__133__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG = __Vfunc_RSxRegs__133__Vfuncout;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x00000047U)) {
        __Vfunc_NSxRegs__132__REGS[__Vilp3] = vlSelfRef.tb_top__DOT__u_ref__DOT__REGS
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (3U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHSZ 
        = (1U & __Vfunc_NSxRegs__132__REGS[61U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & __Vfunc_NSxRegs__132__REGS[57U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[57U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[57U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[57U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x0000001dU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_NSxRegs__132__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__132__REGS[59U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PNC 
        = (__Vfunc_NSxRegs__132__REGS[58U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__132__REGS[58U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[55U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[54U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[53U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[52U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[55U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[54U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[53U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[52U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[55U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[54U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[53U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[52U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[55U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[54U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[53U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[52U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[43U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[39U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[35U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[34U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[42U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[38U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[35U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[34U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[41U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[37U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[40U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[36U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[31U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[30U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__VCSC 
        = (1U & __Vfunc_NSxRegs__132__REGS[33U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__VCSC 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x0000000bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__132__REGS[33U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & __Vfunc_NSxRegs__132__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[17U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[16U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x0000001bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[9U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PRIN 
        = (7U & __Vfunc_NSxRegs__132__REGS[9U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[9U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & __Vfunc_NSxRegs__132__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[13U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[13U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[13U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & __Vfunc_NSxRegs__132__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__132__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__132__REGS[5U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCRT 
        = (0x0000001fU & __Vfunc_NSxRegs__132__REGS[5U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__132__REGS[5U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & __Vfunc_NSxRegs__132__REGS[12U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[12U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[12U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[12U] >> 6U));
    __Vfunc_NSxRegs__132__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG = __Vfunc_NSxRegs__132__Vfuncout;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x00000047U)) {
        __Vfunc_RPxRegs__2__REGS[__Vilp4] = vlSelfRef.tb_top__DOT__u_dut__DOT__REGS
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & __Vfunc_RPxRegs__2__REGS[56U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_RPxRegs__2__REGS[56U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[51U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[47U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[51U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[47U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[51U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[47U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[51U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[47U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[50U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[46U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[50U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[46U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[50U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[46U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[50U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[46U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[49U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[45U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[49U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[45U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[49U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[45U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[49U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[45U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[48U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[44U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[48U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[44U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[48U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[44U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[48U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[44U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTAOS 
        = (7U & __Vfunc_RPxRegs__2__REGS[26U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTAOS 
        = (7U & (__Vfunc_RPxRegs__2__REGS[26U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 0x0000000eU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVPNR 
        = (__Vfunc_RPxRegs__2__REGS[25U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVPNR 
        = (0x0000ffffU & __Vfunc_RPxRegs__2__REGS[25U]);
    __Vfunc_RPxRegs__2__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG = __Vfunc_RPxRegs__2__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[0U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[4U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[1U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[5U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[4U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[2U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[6U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[5U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[3U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[7U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[6U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[4U] = (0x000001ffU 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[7U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F = ((IData)(vlSelfRef.CE_R) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R = ((IData)(vlSelfRef.CE_R) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[0U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[1U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[1U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[2U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[2U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[2U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[3U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[3U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[3U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[0U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NVCSY[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[1U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NVCSY[1U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[3U];
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x00000047U)) {
        __Vfunc_RSxRegs__1__REGS[__Vilp5] = vlSelfRef.tb_top__DOT__u_dut__DOT__REGS
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_RSxRegs__1__REGS[57U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (__Vfunc_RSxRegs__1__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & __Vfunc_RSxRegs__1__REGS[60U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_RSxRegs__1__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & __Vfunc_RSxRegs__1__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & __Vfunc_RSxRegs__1__REGS[14U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_RSxRegs__1__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[8U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & (__Vfunc_RSxRegs__1__REGS[13U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & __Vfunc_RSxRegs__1__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[3U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & (__Vfunc_RSxRegs__1__REGS[3U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & __Vfunc_RSxRegs__1__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[12U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__1__REGS[4U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__1__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & (__Vfunc_RSxRegs__1__REGS[12U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & __Vfunc_RSxRegs__1__REGS[12U]);
    __Vfunc_RSxRegs__1__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG = __Vfunc_RSxRegs__1__Vfuncout;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x00000047U)) {
        __Vfunc_NSxRegs__0__REGS[__Vilp6] = vlSelfRef.tb_top__DOT__u_dut__DOT__REGS
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (3U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHSZ 
        = (1U & __Vfunc_NSxRegs__0__REGS[61U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & __Vfunc_NSxRegs__0__REGS[57U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[57U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[57U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[57U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x0000001dU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_NSxRegs__0__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__0__REGS[59U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PNC 
        = (__Vfunc_NSxRegs__0__REGS[58U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__0__REGS[58U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[55U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[54U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[53U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[52U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[55U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[54U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[53U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[52U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[55U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[54U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[53U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[52U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[55U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[54U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[53U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[52U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[43U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[39U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[35U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[34U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[42U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[38U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[35U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[34U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[41U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[37U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[40U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[36U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[31U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[30U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__VCSC 
        = (1U & __Vfunc_NSxRegs__0__REGS[33U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__VCSC 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x0000000bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__0__REGS[33U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & __Vfunc_NSxRegs__0__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[17U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[16U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x0000001bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[9U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PRIN 
        = (7U & __Vfunc_NSxRegs__0__REGS[9U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[9U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & __Vfunc_NSxRegs__0__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[13U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[13U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[13U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & __Vfunc_NSxRegs__0__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__0__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__0__REGS[5U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCRT 
        = (0x0000001fU & __Vfunc_NSxRegs__0__REGS[5U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__0__REGS[5U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & __Vfunc_NSxRegs__0__REGS[12U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[12U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[12U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[12U] >> 6U));
    __Vfunc_NSxRegs__0__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG = __Vfunc_NSxRegs__0__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__CYT = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                                              & (3U 
                                                 | (4U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                         >> 1U)) 
                                                       << 2U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START_EN 
        = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START) 
            - (IData)(1U)) == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START_EN 
        = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START) 
            - (IData)(1U)) == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT));
    vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A = (0x000003ffU 
                                                   & ((2U 
                                                       <= 
                                                       (3U 
                                                        & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR) 
                                                       >> 1U)
                                                       : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A = (0x000003ffU 
                                                   & ((2U 
                                                       <= 
                                                       (3U 
                                                        & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR) 
                                                       >> 1U)
                                                       : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC_HSTART 
        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD) 
                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                              >> 0x00000017U)) ? ((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                                    ? 0x0099U
                                                    : 0x0089U) 
                                                  - 
                                                  (4U 
                                                   & (- (IData)((IData)(vlSelfRef.PAL)))))
                           : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HS_START)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC_HSTART 
        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD) 
                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                              >> 0x00000017U)) ? ((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                                    ? 0x0099U
                                                    : 0x0089U) 
                                                  - 
                                                  (4U 
                                                   & (- (IData)((IData)(vlSelfRef.PAL)))))
                           : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HS_START)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_X = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33));
    vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_Y = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ = (
                                                   (~ (IData)(vlSelfRef.REQ_N)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ = (
                                                   (~ (IData)(vlSelfRef.REQ_N)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__whit33____pinNumber3 
        = ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
               >= ((0x000003feU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[1U] 
                                    >> 1U) << 1U)) 
                   | (1U & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                             >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[1U])))) 
              | (0x0360U <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[1U])) 
             & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                 <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)) 
                & ((0x0360U > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)) 
                   & ((0x02ecU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)) 
                      & (((3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                          & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U] 
                              >= ((0U == (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                   ? 0x00f0U : 0x0100U)) 
                             & (0x01edU >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U]))) 
                         | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                             >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[1U]) 
                            & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                                <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U]) 
                               & ((0x01feU != vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[1U]) 
                                  & (0x01feU > vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U]))))))))) 
            << 1U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                        >= ((0x000003feU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[0U] 
                                             >> 1U) 
                                            << 1U)) 
                            | (1U & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                      >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[0U])))) 
                       | (0x0360U <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[0U])) 
                      & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                          <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23)) 
                         & ((0x0360U > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23)) 
                            & ((0x02ecU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23)) 
                               & (((3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U] 
                                       >= ((0U == (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                            ? 0x00f0U
                                            : 0x0100U)) 
                                      & (0x01edU >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U]))) 
                                  | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                                      >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[0U]) 
                                     & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                                         <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U]) 
                                        & ((0x01feU 
                                            != vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[0U]) 
                                           & (0x01feU 
                                              > vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U]))))))))));
    vlSelfRef.r_misc[0U] = ((0xf0000000U & vlSelfRef.r_misc[0U]) 
                            | ((0x0ff00000U & (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                                               << 0x0000000cU)) 
                               | ((((0x000003fcU & 
                                     (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                                      >> 0x0000000eU)) 
                                    | ((((((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                           >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R)) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HSYNC))))) 
                                   << 0x0000000aU) 
                                  | (((((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC)) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT3)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK))))) 
                                       << 7U) | (((
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__INTERLACE_INT)) 
                                                  << 6U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__INTERLACE_INT) 
                                                    << 5U))) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                         << 2U) | (IData)(vlSelfRef.tb_top__DOT__r_VRES))))));
    vlSelfRef.r_misc[0U] = ((0x0fffffffU & vlSelfRef.r_misc[0U]) 
                            | (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                               << 0x0000001cU));
    vlSelfRef.r_misc[1U] = ((0xfff00000U & vlSelfRef.r_misc[1U]) 
                            | ((0x0ffffff0U & ((IData)(vlSelfRef.tb_top__DOT__r_FBDO) 
                                               << 4U)) 
                               | (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                                                 >> 4U))));
    vlSelfRef.r_misc[1U] = ((0xf80fffffU & vlSelfRef.r_misc[1U]) 
                            | ((((((2U & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WLOCK) 
                                           | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RRDY)) 
                                              | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY)) 
                                                 | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRDY)) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST) 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT) 
                                                          >> 3U)))))) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VINT)))) 
                                  << 5U) | (((2U & 
                                              ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HINT)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R)) 
                                            << 3U)) 
                                | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                                    << 2U) | ((2U & 
                                               ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HTIM)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VTIM)))))) 
                               << 0x00000014U));
    vlSelfRef.r_misc[1U] = ((0x07ffffffU & vlSelfRef.r_misc[1U]) 
                            | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RD)
                                 ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_DO)
                                 : ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_RD)
                                     ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_DO)
                                     : ((0U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                   >> 0x00000010U)))
                                         ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_Q)
                                         : ((1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                               >> 0x00000010U)))
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_Q)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                     >> 0x00000010U)))
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_Q)
                                                 : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_Q)))))) 
                               << 0x0000001bU));
    vlSelfRef.r_misc[2U] = (0x000007ffU & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RD)
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_DO)
                                             : ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_RD)
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_DO)
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                      >> 0x00000010U)))
                                                  ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_Q)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                       >> 0x00000010U)))
                                                   ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_Q)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                        >> 0x00000010U)))
                                                    ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_Q)
                                                    : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_Q)))))) 
                                           >> 5U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                                   >= 
                                                   ((0x000003feU 
                                                     & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[0U] 
                                                         >> 1U) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                           >> 1U) 
                                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[0U])))) 
                                                  | (0x0360U 
                                                     <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[0U])) 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                                     <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
                                                    & ((0x0360U 
                                                        > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
                                                       & ((0x02ecU 
                                                           != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
                                                          & (((3U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                                              & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U] 
                                                                  >= 
                                                                  ((0U 
                                                                    == (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                                    ? 0x00f0U
                                                                    : 0x0100U)) 
                                                                 & (0x01edU 
                                                                    >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U]))) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                 >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[0U]) 
                                                                & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                    <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U]) 
                                                                   & ((0x01feU 
                                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[0U]) 
                                                                      & (0x01feU 
                                                                         > vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U])))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                                   >= 
                                                   ((0x000003feU 
                                                     & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[1U] 
                                                         >> 1U) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                           >> 1U) 
                                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[1U])))) 
                                                  | (0x0360U 
                                                     <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[1U])) 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                                     <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)) 
                                                    & ((0x0360U 
                                                        > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)) 
                                                       & ((0x02ecU 
                                                           != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)) 
                                                          & (((3U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                                              & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U] 
                                                                  >= 
                                                                  ((0U 
                                                                    == (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                                    ? 0x00f0U
                                                                    : 0x0100U)) 
                                                                 & (0x01edU 
                                                                    >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U]))) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                 >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[1U]) 
                                                                & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                    <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U]) 
                                                                   & ((0x01feU 
                                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[1U]) 
                                                                      & (0x01feU 
                                                                         > vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U])))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_WE = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL) 
                                                 & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_44 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42));
    vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP = (1U 
                                                & ((0x00020000U 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U])
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_ref__DOT__RPW_EN) 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
                                                    >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__242__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__242__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__242__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__242__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__242__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__242__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__242__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__242__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__242__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__242__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__242__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__242__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__242__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__242__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__242__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__242__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__242__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__242__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__242__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxW_EN[1U] = 0U;
    __Vfunc_WinTest__243__LOG = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                 >> 0x0000001fU);
    __Vfunc_WinTest__243__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        >> 0x0000001dU) 
                                       & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__243__W1E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x0000001bU));
    __Vfunc_WinTest__243__W0E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x00000019U));
    __Vfunc_WinTest__243__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000001cU)));
    __Vfunc_WinTest__243__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000001aU)));
    __Vfunc_WinTest__243__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x00000018U)));
    if (__Vfunc_WinTest__243__SWE) {
        if (__Vfunc_WinTest__243__W1E) {
            if (__Vfunc_WinTest__243__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__243__WSHIT) 
                        & (IData)(__Vfunc_WinTest__243__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__243__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__243__WSHIT) 
                        | (IData)(__Vfunc_WinTest__243__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__243__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                       & (IData)(__Vfunc_WinTest__243__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                       | (IData)(__Vfunc_WinTest__243__W1HIT));
            }
        } else if (__Vfunc_WinTest__243__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                   & (IData)(__Vfunc_WinTest__243__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                   | (IData)(__Vfunc_WinTest__243__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__243__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__243__WSHIT;
        }
    } else if (__Vfunc_WinTest__243__W1E) {
        if (__Vfunc_WinTest__243__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__243__W1HIT) 
                   & (IData)(__Vfunc_WinTest__243__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__243__W1HIT) 
                   | (IData)(__Vfunc_WinTest__243__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__243__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__243__W1HIT;
        }
    } else if (__Vfunc_WinTest__243__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__243__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__243__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__243__Vfuncout = ((IData)(__Vfunc_WinTest__243__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_ref__DOT__SW_EN = __Vfunc_WinTest__243__Vfuncout;
    __Vfunc_WinTest__244__LOG = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x0000000fU));
    __Vfunc_WinTest__244__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        >> 0x0000000dU) 
                                       & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__244__W1E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x0000000bU));
    __Vfunc_WinTest__244__W0E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 9U));
    __Vfunc_WinTest__244__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000000cU)));
    __Vfunc_WinTest__244__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000000aU)));
    __Vfunc_WinTest__244__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 8U)));
    if (__Vfunc_WinTest__244__SWE) {
        if (__Vfunc_WinTest__244__W1E) {
            if (__Vfunc_WinTest__244__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__244__WSHIT) 
                        & (IData)(__Vfunc_WinTest__244__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__244__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__244__WSHIT) 
                        | (IData)(__Vfunc_WinTest__244__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__244__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                       & (IData)(__Vfunc_WinTest__244__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                       | (IData)(__Vfunc_WinTest__244__W1HIT));
            }
        } else if (__Vfunc_WinTest__244__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                   & (IData)(__Vfunc_WinTest__244__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                   | (IData)(__Vfunc_WinTest__244__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__244__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__244__WSHIT;
        }
    } else if (__Vfunc_WinTest__244__W1E) {
        if (__Vfunc_WinTest__244__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__244__W1HIT) 
                   & (IData)(__Vfunc_WinTest__244__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__244__W1HIT) 
                   | (IData)(__Vfunc_WinTest__244__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__244__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__244__W1HIT;
        }
    } else if (__Vfunc_WinTest__244__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__244__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__244__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__244__Vfuncout = ((IData)(__Vfunc_WinTest__244__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN = __Vfunc_WinTest__244__Vfuncout;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__238__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__238__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__238__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__238__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__238__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__238__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__238__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__238__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__238__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__238__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__238__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__238__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__238__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__238__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__238__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__238__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__238__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__238__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__238__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[1U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__239__LOG = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                   >> 0x0000001fU);
            vlSelfRef.__Vfunc_WinTest__239__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 0x0000001dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__239__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x0000001bU));
            vlSelfRef.__Vfunc_WinTest__239__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000019U));
            vlSelfRef.__Vfunc_WinTest__239__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 0x0000001cU)));
            vlSelfRef.__Vfunc_WinTest__239__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x0000001aU)));
            vlSelfRef.__Vfunc_WinTest__239__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x00000018U)));
            if (vlSelfRef.__Vfunc_WinTest__239__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__239__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__239__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__239__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__239__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__239__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__239__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__239__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__239__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__239__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__239__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__239__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[2U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__240__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 7U));
            vlSelfRef.__Vfunc_WinTest__240__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 5U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__240__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 3U));
            vlSelfRef.__Vfunc_WinTest__240__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 1U));
            vlSelfRef.__Vfunc_WinTest__240__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 4U)));
            vlSelfRef.__Vfunc_WinTest__240__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 2U)));
            vlSelfRef.__Vfunc_WinTest__240__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U]));
            if (vlSelfRef.__Vfunc_WinTest__240__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__240__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__240__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__240__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__240__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__240__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__240__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__240__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__240__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__240__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__240__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__240__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[3U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__241__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x0000000fU));
            vlSelfRef.__Vfunc_WinTest__241__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 0x0000000dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__241__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x0000000bU));
            vlSelfRef.__Vfunc_WinTest__241__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 9U));
            vlSelfRef.__Vfunc_WinTest__241__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 0x0000000cU)));
            vlSelfRef.__Vfunc_WinTest__241__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x0000000aU)));
            vlSelfRef.__Vfunc_WinTest__241__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 8U)));
            if (vlSelfRef.__Vfunc_WinTest__241__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__241__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__241__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__241__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__241__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__241__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__241__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__241__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__241__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__241__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__241__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__241__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__108__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__108__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__108__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__108__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__108__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__108__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__108__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__108__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__108__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__108__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__108__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__108__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__108__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__108__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__108__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__108__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__108__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__108__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__108__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxW_EN[1U] = 0U;
    __Vfunc_WinTest__109__LOG = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                 >> 0x0000001fU);
    __Vfunc_WinTest__109__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        >> 0x0000001dU) 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__109__W1E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x0000001bU));
    __Vfunc_WinTest__109__W0E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x00000019U));
    __Vfunc_WinTest__109__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000001cU)));
    __Vfunc_WinTest__109__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000001aU)));
    __Vfunc_WinTest__109__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x00000018U)));
    if (__Vfunc_WinTest__109__SWE) {
        if (__Vfunc_WinTest__109__W1E) {
            if (__Vfunc_WinTest__109__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__109__WSHIT) 
                        & (IData)(__Vfunc_WinTest__109__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__109__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__109__WSHIT) 
                        | (IData)(__Vfunc_WinTest__109__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__109__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                       & (IData)(__Vfunc_WinTest__109__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                       | (IData)(__Vfunc_WinTest__109__W1HIT));
            }
        } else if (__Vfunc_WinTest__109__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                   & (IData)(__Vfunc_WinTest__109__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                   | (IData)(__Vfunc_WinTest__109__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__109__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__109__WSHIT;
        }
    } else if (__Vfunc_WinTest__109__W1E) {
        if (__Vfunc_WinTest__109__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__109__W1HIT) 
                   & (IData)(__Vfunc_WinTest__109__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__109__W1HIT) 
                   | (IData)(__Vfunc_WinTest__109__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__109__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__109__W1HIT;
        }
    } else if (__Vfunc_WinTest__109__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__109__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__109__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__109__Vfuncout = ((IData)(__Vfunc_WinTest__109__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_dut__DOT__SW_EN = __Vfunc_WinTest__109__Vfuncout;
    __Vfunc_WinTest__110__LOG = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x0000000fU));
    __Vfunc_WinTest__110__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        >> 0x0000000dU) 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__110__W1E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x0000000bU));
    __Vfunc_WinTest__110__W0E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 9U));
    __Vfunc_WinTest__110__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000000cU)));
    __Vfunc_WinTest__110__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000000aU)));
    __Vfunc_WinTest__110__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 8U)));
    if (__Vfunc_WinTest__110__SWE) {
        if (__Vfunc_WinTest__110__W1E) {
            if (__Vfunc_WinTest__110__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__110__WSHIT) 
                        & (IData)(__Vfunc_WinTest__110__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__110__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__110__WSHIT) 
                        | (IData)(__Vfunc_WinTest__110__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__110__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                       & (IData)(__Vfunc_WinTest__110__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                       | (IData)(__Vfunc_WinTest__110__W1HIT));
            }
        } else if (__Vfunc_WinTest__110__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                   & (IData)(__Vfunc_WinTest__110__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                   | (IData)(__Vfunc_WinTest__110__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__110__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__110__WSHIT;
        }
    } else if (__Vfunc_WinTest__110__W1E) {
        if (__Vfunc_WinTest__110__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__110__W1HIT) 
                   & (IData)(__Vfunc_WinTest__110__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__110__W1HIT) 
                   | (IData)(__Vfunc_WinTest__110__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__110__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__110__W1HIT;
        }
    } else if (__Vfunc_WinTest__110__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__110__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__110__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__110__Vfuncout = ((IData)(__Vfunc_WinTest__110__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN = __Vfunc_WinTest__110__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__104__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__104__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__104__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__104__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__104__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__104__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__104__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__104__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__104__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__104__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__104__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__104__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__104__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__104__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__104__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__104__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__104__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__104__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__104__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[1U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__105__LOG = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                   >> 0x0000001fU);
            vlSelfRef.__Vfunc_WinTest__105__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 0x0000001dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__105__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x0000001bU));
            vlSelfRef.__Vfunc_WinTest__105__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000019U));
            vlSelfRef.__Vfunc_WinTest__105__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 0x0000001cU)));
            vlSelfRef.__Vfunc_WinTest__105__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x0000001aU)));
            vlSelfRef.__Vfunc_WinTest__105__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x00000018U)));
            if (vlSelfRef.__Vfunc_WinTest__105__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__105__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__105__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__105__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__105__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__105__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__105__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__105__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__105__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__105__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__105__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__105__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[2U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__106__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 7U));
            vlSelfRef.__Vfunc_WinTest__106__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 5U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__106__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 3U));
            vlSelfRef.__Vfunc_WinTest__106__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 1U));
            vlSelfRef.__Vfunc_WinTest__106__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 4U)));
            vlSelfRef.__Vfunc_WinTest__106__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 2U)));
            vlSelfRef.__Vfunc_WinTest__106__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U]));
            if (vlSelfRef.__Vfunc_WinTest__106__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__106__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__106__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__106__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__106__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__106__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__106__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__106__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__106__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__106__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__106__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__106__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[3U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__107__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x0000000fU));
            vlSelfRef.__Vfunc_WinTest__107__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 0x0000000dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__107__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x0000000bU));
            vlSelfRef.__Vfunc_WinTest__107__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 9U));
            vlSelfRef.__Vfunc_WinTest__107__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 0x0000000cU)));
            vlSelfRef.__Vfunc_WinTest__107__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x0000000aU)));
            vlSelfRef.__Vfunc_WinTest__107__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 8U)));
            if (vlSelfRef.__Vfunc_WinTest__107__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__107__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__107__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__107__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__107__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__107__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__107__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__107__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__107__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__107__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__107__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__107__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP = (1U 
                                                & ((0x00020000U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_dut__DOT__RPW_EN) 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
                                                    >> 0x00000010U)));
    __Vfunc_MakeDotData__232__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__232__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__232__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOTCDP;
    __Vfunc_MakeDotData__232__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__232__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__232__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__232__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__232__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                     | (~ ((__Vfunc_MakeDotData__232__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__232__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__232__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__232__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__232__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((__Vfunc_MakeDotData__232__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__232__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__232__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__232__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__232__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__232__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__232__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__232__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__232__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT = __Vfunc_MakeDotData__232__Vfuncout;
    vlSelfRef.cov = ((0xff7fU & (IData)(vlSelfRef.cov)) 
                     | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__LSCY) << 7U));
    vlSelfRef.cov = ((0xfeffU & (IData)(vlSelfRef.cov)) 
                     | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__MZE & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__ON) << 8U));
    vlSelfRef.cov = ((0xfbffU & (IData)(vlSelfRef.cov)) 
                     | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__BMEN & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__ON) << 0x0000000aU));
    __Vfunc_NxLSAddr__152__VAL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[0U];
    __Vfunc_NxLSAddr__152__TBL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[0U];
    __Vfunc_NxLSAddr__152__NxLSTA = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__LSTA;
    tb_top__DOT__u_ref__DOT____VlemCall_14__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__152__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__152__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__152__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_14__NxLSAddr;
    __Vfunc_NxLSAddr__153__VAL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[1U];
    __Vfunc_NxLSAddr__153__TBL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[1U];
    __Vfunc_NxLSAddr__153__NxLSTA = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__LSTA;
    tb_top__DOT__u_ref__DOT____VlemCall_15__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__153__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__153__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__153__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_15__NxLSAddr;
    __Vfunc_MakeDotData__235__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__235__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__235__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOTCDP;
    __Vfunc_MakeDotData__235__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__235__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__235__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__235__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__235__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                     | (~ ((__Vfunc_MakeDotData__235__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__235__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__235__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__235__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__235__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((__Vfunc_MakeDotData__235__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__235__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__235__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__235__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__235__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__235__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__235__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__235__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__235__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT = __Vfunc_MakeDotData__235__Vfuncout;
    __Vfunc_MakeDotData__236__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__236__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__236__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOTCDP;
    __Vfunc_MakeDotData__236__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__236__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__236__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__236__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__236__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                     | (~ ((__Vfunc_MakeDotData__236__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__236__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__236__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__236__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__236__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((__Vfunc_MakeDotData__236__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__236__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__236__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__236__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__236__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__236__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__236__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__236__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__236__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT = __Vfunc_MakeDotData__236__Vfuncout;
    __Vfunc_MakeDotData__233__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__233__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__233__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP;
    __Vfunc_MakeDotData__233__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__233__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__233__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__233__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__233__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                     | (~ ((__Vfunc_MakeDotData__233__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__233__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__233__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__233__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__233__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((__Vfunc_MakeDotData__233__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__233__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__233__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__233__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__233__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__233__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__233__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__233__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__233__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT = __Vfunc_MakeDotData__233__Vfuncout;
    __Vfunc_MakeDotData__234__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__234__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__234__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP;
    __Vfunc_MakeDotData__234__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__234__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__234__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__234__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__234__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                     | (~ ((__Vfunc_MakeDotData__234__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__234__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__234__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__234__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__234__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((__Vfunc_MakeDotData__234__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__234__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__234__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__234__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__234__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__234__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__234__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__234__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__234__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT = __Vfunc_MakeDotData__234__Vfuncout;
    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                  >> 2U) & (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                               >> 1U))))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                    = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                    = (0x0000000fU & ((0x00000100U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U]
                                       : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U]));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                    = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                    = (0x0000000fU & ((0x00000200U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U]
                                       : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U]));
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                    = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                      >> 4U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                    = (0x0000000fU & ((0x00000100U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                             >> 4U))
                                       : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                             >> 4U))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                    = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                      >> 4U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                    = (0x0000000fU & ((0x00000200U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                             >> 4U))
                                       : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                             >> 4U))));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 8U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                      >> 8U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 8U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                      >> 8U))));
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 0x0000000cU));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 0x0000000cU))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                         >> 0x0000000cU))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 0x0000000cU));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 0x0000000cU))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                         >> 0x0000000cU))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                         >> 0x00000010U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                         >> 0x00000010U))));
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 0x00000014U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 0x00000014U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                         >> 0x00000014U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 0x00000014U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 0x00000014U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                         >> 0x00000014U))));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 = 
            (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                            >> 0x00000018U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 = 
            (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                           >> 0x00000018U))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                           >> 0x00000018U))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 = 
            (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                            >> 0x00000018U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 = 
            (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                           >> 0x00000018U))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                           >> 0x00000018U))));
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 = 
            (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
             >> 0x0000001cU);
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 = 
            (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                           >> 0x0000001cU))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                           >> 0x0000001cU))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 = 
            (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
             >> 0x0000001cU);
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 = 
            (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                           >> 0x0000001cU))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                           >> 0x0000001cU))));
    }
    tb_top__DOT__u_ref__DOT__RDBSA0 = (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U]);
    tb_top__DOT__u_ref__DOT__RDBSA1 = (3U & ((0x00000100U 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                              ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                    >> 2U))
                                              : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U]));
    tb_top__DOT__u_ref__DOT__RDBSB0 = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                             >> 4U));
    tb_top__DOT__u_ref__DOT__RDBSB1 = (3U & ((0x00000200U 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                              ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                  << 0x0000001aU) 
                                                 | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                    >> 6U))
                                              : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                    >> 4U))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[0U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[0U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[1U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[1U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[2U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[2U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[3U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[3U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA0PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA1PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA0PN);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA1PN);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB0PN);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA0CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA1CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA0CH);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA1CH);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB1CH);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA0CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA1CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA0CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA1CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB0CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB1CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCRCT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxCRCT) | (((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                 >> 0x0000000fU) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCRCT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxCRCT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCTTP 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxCTTP) | vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTTP[0U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCTTP 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxCTTP) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTTP[1U]) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__AxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1))) 
            & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
               >> 8U)) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__BxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1))) 
            & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
               >> 9U)) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LS_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LW 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LW_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RPA 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RPB 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RCTA 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RCTB 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__R0RP 
        = ((2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
                         >> 0x00000010U))) ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__R0RPMSB)
            : vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[3U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RP_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__BS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LN 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxX[0U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxX[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxX[1U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxX[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxY[0U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxY[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxY[1U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxY[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wp) 
                 + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wpn 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wp) 
                 + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wpn 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wp) 
                 + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WE = ((7U 
                                                  == 
                                                  ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                                                   | (4U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                         << 1U)))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W = ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      >> 4U))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R));
    vlSelfRef.d_misc[0U] = ((0xf0000000U & vlSelfRef.d_misc[0U]) 
                            | ((0x0ff00000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                                               << 0x0000000cU)) 
                               | ((((0x000003fcU & 
                                     (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                                      >> 0x0000000eU)) 
                                    | ((((((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                           >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HSYNC))))) 
                                   << 0x0000000aU) 
                                  | (((((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC)) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT3)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK))))) 
                                       << 7U) | (((
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__INTERLACE_INT)) 
                                                  << 6U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__INTERLACE_INT) 
                                                    << 5U))) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                         << 2U) | (IData)(vlSelfRef.tb_top__DOT__d_VRES))))));
    vlSelfRef.d_misc[0U] = ((0x0fffffffU & vlSelfRef.d_misc[0U]) 
                            | (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                               << 0x0000001cU));
    vlSelfRef.d_misc[1U] = ((0xfff00000U & vlSelfRef.d_misc[1U]) 
                            | ((0x0ffffff0U & ((IData)(vlSelfRef.tb_top__DOT__d_FBDO) 
                                               << 4U)) 
                               | (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                                                 >> 4U))));
    vlSelfRef.d_misc[1U] = ((0xf80fffffU & vlSelfRef.d_misc[1U]) 
                            | ((((((2U & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WLOCK) 
                                           | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RRDY)) 
                                              | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RRDY)) 
                                                 | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WRDY)) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BURST) 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT) 
                                                          >> 3U)))))) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VINT)))) 
                                  << 5U) | (((2U & 
                                              ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HINT)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)) 
                                            << 3U)) 
                                | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                                    << 2U) | ((2U & 
                                               ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HTIM)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VTIM)))))) 
                               << 0x00000014U));
    vlSelfRef.d_misc[1U] = ((0x07ffffffU & vlSelfRef.d_misc[1U]) 
                            | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RD)
                                 ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_DO)
                                 : ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_RD)
                                     ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_DO)
                                     : ((0U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                   >> 0x00000010U)))
                                         ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_Q)
                                         : ((1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                               >> 0x00000010U)))
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_Q)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                     >> 0x00000010U)))
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_Q)
                                                 : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_Q)))))) 
                               << 0x0000001bU));
    vlSelfRef.d_misc[2U] = (0x000007ffU & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RD)
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_DO)
                                             : ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_RD)
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_DO)
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                      >> 0x00000010U)))
                                                  ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_Q)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                       >> 0x00000010U)))
                                                   ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_Q)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                        >> 0x00000010U)))
                                                    ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_Q)
                                                    : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_Q)))))) 
                                           >> 5U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R));
    __Vfunc_MakeDotData__98__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__98__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__98__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOTCDP;
    __Vfunc_MakeDotData__98__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__98__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__98__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__98__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__98__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                     | (~ ((__Vfunc_MakeDotData__98__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__98__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__98__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__98__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__98__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((__Vfunc_MakeDotData__98__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__98__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__98__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__98__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__98__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__98__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__98__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__98__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__98__Vfuncout = ((0x0c000000U 
                                          & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                                             << 0x00000012U)) 
                                         | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                             << 0x00000019U) 
                                            | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                << 0x00000018U) 
                                               | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT = __Vfunc_MakeDotData__98__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ACT = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH) 
                  & (((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                         .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                         .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__LZMX) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                            >> 2U))) 
                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                         >> 0x00000010U)) | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                .__PVT__LSCX 
                                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                .__PVT__LSCY) 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                               .__PVT__LZMX) 
                                              & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                                 >> 2U)) 
                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                                >> 0x00000011U))))))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH) 
                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[0U] 
                         | vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[1U]))))) {
            if ((1U & (~ (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                >> 0x00000014U)) & (IData)(
                                                           (0x00010000U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])))) 
                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH) 
                               & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                  >> 0x00000014U)) 
                              & (IData)((0U != (0x00030000U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U]))))) 
                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                              | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH)) 
                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                >> 0x00000015U)))))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH) 
                              & (IData)((0U != (0x00300000U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH) 
                                  & (IData)((0U != 
                                             (0x00300000U 
                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH)))) {
                                vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ACT = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_NxLSAddr__20__VAL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[0U];
    __Vfunc_NxLSAddr__20__TBL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[0U];
    __Vfunc_NxLSAddr__20__NxLSTA = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
        .__PVT__LSTA;
    tb_top__DOT__u_dut__DOT____VlemCall_6__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__20__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__20__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__20__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR[0U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_6__NxLSAddr;
    __Vfunc_NxLSAddr__21__VAL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[1U];
    __Vfunc_NxLSAddr__21__TBL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[1U];
    __Vfunc_NxLSAddr__21__NxLSTA = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
        .__PVT__LSTA;
    tb_top__DOT__u_dut__DOT____VlemCall_7__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__21__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__21__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__21__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR[1U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_7__NxLSAddr;
    __Vfunc_MakeDotData__99__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__99__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__99__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP;
    __Vfunc_MakeDotData__99__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__99__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__99__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__99__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__99__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                     | (~ ((__Vfunc_MakeDotData__99__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__99__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__99__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__99__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__99__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((__Vfunc_MakeDotData__99__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__99__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__99__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__99__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__99__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__99__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__99__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__99__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__99__Vfuncout = ((0x0c000000U 
                                          & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                                             << 0x00000012U)) 
                                         | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                             << 0x00000019U) 
                                            | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                << 0x00000018U) 
                                               | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT = __Vfunc_MakeDotData__99__Vfuncout;
    __Vfunc_MakeDotData__100__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__100__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__100__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP;
    __Vfunc_MakeDotData__100__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__100__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__100__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__100__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__100__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                     | (~ ((__Vfunc_MakeDotData__100__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__100__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__100__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__100__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__100__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((__Vfunc_MakeDotData__100__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__100__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__100__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__100__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__100__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__100__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__100__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__100__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__100__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT = __Vfunc_MakeDotData__100__Vfuncout;
    __Vfunc_MakeDotData__101__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__101__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__101__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOTCDP;
    __Vfunc_MakeDotData__101__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__101__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__101__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__101__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__101__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                     | (~ ((__Vfunc_MakeDotData__101__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__101__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__101__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__101__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__101__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((__Vfunc_MakeDotData__101__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__101__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__101__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__101__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__101__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__101__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__101__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__101__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__101__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT = __Vfunc_MakeDotData__101__Vfuncout;
    __Vfunc_MakeDotData__102__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__102__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__102__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOTCDP;
    __Vfunc_MakeDotData__102__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__102__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__102__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__102__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__102__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                     | (~ ((__Vfunc_MakeDotData__102__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__102__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__102__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__102__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__102__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((__Vfunc_MakeDotData__102__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__102__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__102__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__102__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__102__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__102__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__102__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__102__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__102__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT = __Vfunc_MakeDotData__102__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4 = ((0U 
                                                  == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                  .__PVT__CHCN) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                 .__PVT__ZMHF);
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4 = ((0U 
                                                  == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                  .__PVT__CHCN) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                 .__PVT__ZMHF);
    vlSelfRef.tb_top__DOT__u_dut__DOT__CYB0 = ((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld) 
                                                   >> 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                       >> 2U))))
                                                ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem
                                               [(1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                    >> 2U))]
                                                : 0U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__CYA0 = ((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld) 
                                                   >> 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                       >> 2U))))
                                                ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem
                                               [(1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                    >> 2U))]
                                                : 0U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
            & ((~ (IData)(vlSelfRef.DTEN_N)) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BURST))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ = 
        ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
            & ((~ (IData)(vlSelfRef.DTEN_N)) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST))));
    vlSelfRef.cov = ((0xff80U & (IData)(vlSelfRef.cov)) 
                     | (((((0x00001ffeU & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC) 
                                            << 1U) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                                              >> 0x00000013U))) 
                           | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT) 
                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT))) 
                          << 5U) | (((IData)((0x0000000100000000ULL 
                                              != (0x0000000300000000ULL 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT))) 
                                     << 4U) | (8U & 
                                               ((IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                         >> 0x0000001bU)) 
                                                << 3U)))) 
                        | ((4U & (((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                            >> 0x00000024U)) 
                                   & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                              >> 0x00000018U))) 
                                  << 2U)) | ((((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                   >> 1U)) 
                                               & (IData)(__VdfgRegularize_hebeb780c_0_19)) 
                                              << 1U) 
                                             | ((IData)(__VdfgRegularize_hebeb780c_0_19) 
                                                & ((IData)(
                                                           (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                            >> 0x00000019U)) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                        >> 1U)) 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                                 >> 0x00000024U)))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal2__WREN_B 
        = (3U & (- (IData)((((1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                           >> 0x0000000cU)))
                              ? (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                 >> 0x0000000aU) : 
                             ((2U > (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                           >> 0x0000000cU))) 
                              | vlSelfRef.tb_top__DOT__u_ref__DOT__A)) 
                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_WE)))));
    vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal1__WREN_B 
        = (3U & (- (IData)((((1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                           >> 0x0000000cU)))
                              ? (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                    >> 0x0000000aU))
                              : ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__A) 
                                 | (2U > (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                >> 0x0000000cU))))) 
                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_WE)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_WE = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44));
    vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44));
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP;
    __Vfunc_RxCTAddr__155__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__155__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__155__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP];
    __Vfunc_RxCTAddr__155__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__155__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__155__RxKAst))) 
                                      + __Vfunc_RxCTAddr__155__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__155__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_ref__DOT____VlemCall_16__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_16__RxCTAddr;
    __Vfunc_RxCTAddr__156__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__156__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__156__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__156__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__156__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__156__RxKAst))) 
                                      + __Vfunc_RxCTAddr__156__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__156__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_ref__DOT____VlemCall_17__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_17__RxCTAddr;
    __Vfunc_RxCTAddr__157__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__157__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__157__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[0U];
    __Vfunc_RxCTAddr__157__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[0U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__157__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__157__RxKAst))) 
                                      + __Vfunc_RxCTAddr__157__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__157__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__157__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR = __Vfunc_RxCTAddr__157__Vfuncout;
    __Vfunc_RxCTAddr__158__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__158__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__158__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__158__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__158__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__158__RxKAst))) 
                                      + __Vfunc_RxCTAddr__158__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__158__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__158__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR = __Vfunc_RxCTAddr__158__Vfuncout;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP;
    __Vfunc_RxCTAddr__23__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__23__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__23__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP];
    __Vfunc_RxCTAddr__23__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__23__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__23__RxKAst))) 
                                      + __Vfunc_RxCTAddr__23__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__23__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_dut__DOT____VlemCall_8__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR[0U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_8__RxCTAddr;
    __Vfunc_RxCTAddr__24__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__24__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__24__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__24__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__24__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__24__RxKAst))) 
                                      + __Vfunc_RxCTAddr__24__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__24__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_dut__DOT____VlemCall_9__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR[1U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_9__RxCTAddr;
    __Vfunc_RxCTAddr__25__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__25__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__25__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[0U];
    __Vfunc_RxCTAddr__25__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[0U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__25__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__25__RxKAst))) 
                                      + __Vfunc_RxCTAddr__25__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__25__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__25__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTA_ADDR = __Vfunc_RxCTAddr__25__Vfuncout;
    __Vfunc_RxCTAddr__26__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__26__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__26__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__26__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__26__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__26__RxKAst))) 
                                      + __Vfunc_RxCTAddr__26__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__26__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__26__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTB_ADDR = __Vfunc_RxCTAddr__26__Vfuncout;
    vlSelfRef.cov = ((0x07ffU & (IData)(vlSelfRef.cov)) 
                     | ((((((IData)(__VdfgRegularize_hebeb780c_0_19) 
                            & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                        >> 0x00000024U)) 
                               & ((~ (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                       >> 1U) | ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                                  >> 0x0000001fU) 
                                                 | ((IData)(
                                                            (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                             >> 0x00000019U)) 
                                                    | ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                            >> 0x0000000cU))) 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                                  >> 0x00000018U))))))) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCENFST)))) 
                           << 4U) | (((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                              ^ vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT) 
                                             >> 0x00000017U)) 
                                      | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                               >> 0x00000017U))) 
                                     << 2U)) | ((2U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__r_HRES)) 
                                                | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                                   >> 0x0000001fU))) 
                        << 0x0000000bU));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxA0CT) >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxB1CT) >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxA1CT) >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxB0CT) >> 1U));
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__R0RP;
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_RxBMAddr__147__RxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFY = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxY
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFX = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxX
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxBMAddr__147__RxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
            [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
            = ((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxBMSZ)
                ? ((0x0003fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFX)))
                : ((0x0001fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFX))));
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                             << 0x00000010U) 
                                            + (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                   ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                       << 0x00000010U) 
                                      + (0x0003fffeU 
                                         & vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                       ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0001fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 1U)))
                                       : (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0000fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 2U)))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_10__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_RxCHAddr__148__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFY = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxY
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFX = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxX
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][0U];
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFX) 
                              ^ (- (IData)((1U & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFY) 
                              ^ (- (IData)((vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                            ? 0U : 
                                           ((0x0007fff0U 
                                             & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                                << 4U)) 
                                            + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                                << 4U) 
                                               | (0x0000000eU 
                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                     << 1U))))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                   ? ((0x0007fff0U 
                                       & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                          << 4U)) + 
                                      (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                        << 3U) | (6U 
                                                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs))))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                       ? ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                              << 4U)) 
                                          + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                              << 2U) 
                                             | (2U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                   >> 1U))))
                                       : ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_10__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR[0U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_10__RxBMAddr;
    __Vfunc_RxCHAddr__149__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__CHSZ;
    __Vfunc_RxCHAddr__149__RxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__CHCN;
    __Vfunc_RxCHAddr__149__RxOFFY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                     .__PVT__RxY[1U]);
    __Vfunc_RxCHAddr__149__RxOFFX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                     .__PVT__RxX[1U]);
    __Vfunc_RxCHAddr__149__RxPNx = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][1U];
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(__Vfunc_RxCHAddr__149__RxOFFX) 
                          ^ (- (IData)((1U & (__Vfunc_RxCHAddr__149__RxPNx 
                                              >> 0x0000001eU))))));
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_RxCHAddr__149__RxOFFY) 
                          ^ (- (IData)((__Vfunc_RxCHAddr__149__RxPNx 
                                        >> 0x0000001fU)))));
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs 
        = ((IData)(__Vfunc_RxCHAddr__149__RxCHSZ) ? 
           ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs)) 
                                       | (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs))))
            : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs)));
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                           ? ((2U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                                        ? 0U : ((0x0007fff0U 
                                                 & (__Vfunc_RxCHAddr__149__RxPNx 
                                                    << 4U)) 
                                                + (
                                                   ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                                    << 4U) 
                                                   | (0x0000000eU 
                                                      & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                         << 1U))))))
                           : ((2U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                               ? ((0x0007fff0U & (__Vfunc_RxCHAddr__149__RxPNx 
                                                  << 4U)) 
                                  + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                      << 3U) | (6U 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs))))
                               : ((1U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                                   ? ((0x0007fff0U 
                                       & (__Vfunc_RxCHAddr__149__RxPNx 
                                          << 4U)) + 
                                      (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                        << 2U) | (2U 
                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                     >> 1U))))
                                   : ((0x0007fff0U 
                                       & (__Vfunc_RxCHAddr__149__RxPNx 
                                          << 4U)) + 
                                      ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                       << 1U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_11__RxCHAddr 
        = vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_11__RxCHAddr;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__R0RP;
    __Vfunc_RxPNAddr__139__RxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_RxPNAddr__139__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__CHSZ;
    __Vfunc_RxPNAddr__139__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[3U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[4U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[4U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[5U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[5U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[6U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[6U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[7U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[7U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[8U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[8U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[9U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[9U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[10U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[10U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[11U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[11U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[12U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[12U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[13U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[13U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[14U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[14U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[15U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[15U];
    __Vfunc_RxPNAddr__139__RxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MP;
    __Vfunc_RxPNAddr__139__RxOFFY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxY[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]);
    __Vfunc_RxPNAddr__139__RxOFFX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxX[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]);
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_RxPNAddr__139__RxPLSZ))
            ? (((IData)(__Vfunc_RxPNAddr__139__RxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn
                                           [((0x0000000cU 
                                              & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                                 >> 8U)) 
                                             | (3U 
                                                & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_RxPNAddr__139__RxPLSZ))
                ? (((IData)(__Vfunc_RxPNAddr__139__RxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn
                                               [((0x0000000cU 
                                                  & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                                     >> 7U)) 
                                                 | (3U 
                                                    & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_RxPNAddr__139__RxMP) 
                 << 6U) | vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn
                [((0x0000000cU & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                  >> 7U)) | (3U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                   >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxPNAddr__139__RxPNB) ? 
           ((IData)(__Vfunc_RxPNAddr__139__RxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_RxPNAddr__139__RxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_4__RxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_4__RxPNAddr;
    __Vfunc_RxPNAddr__140__RxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_RxPNAddr__140__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__CHSZ;
    __Vfunc_RxPNAddr__140__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[3U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[4U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[4U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[5U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[5U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[6U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[6U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[7U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[7U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[8U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[8U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[9U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[9U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[10U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[10U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[11U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[11U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[12U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[12U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[13U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[13U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[14U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[14U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[15U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[15U];
    __Vfunc_RxPNAddr__140__RxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MP;
    __Vfunc_RxPNAddr__140__RxOFFY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxY[1U]);
    __Vfunc_RxPNAddr__140__RxOFFX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxX[1U]);
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_RxPNAddr__140__RxPLSZ))
            ? (((IData)(__Vfunc_RxPNAddr__140__RxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn
                                           [((0x0000000cU 
                                              & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                                 >> 8U)) 
                                             | (3U 
                                                & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_RxPNAddr__140__RxPLSZ))
                ? (((IData)(__Vfunc_RxPNAddr__140__RxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn
                                               [((0x0000000cU 
                                                  & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                                     >> 7U)) 
                                                 | (3U 
                                                    & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_RxPNAddr__140__RxMP) 
                 << 6U) | vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn
                [((0x0000000cU & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                  >> 7U)) | (3U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                   >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxPNAddr__140__RxPNB) ? 
           ((IData)(__Vfunc_RxPNAddr__140__RxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_RxPNAddr__140__RxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_5__RxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_5__RxPNAddr;
    __Vfunc_RxScreenOver__150__RxBMEN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__150__RxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__150__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__150__RxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxY[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__150__RxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxX[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__150__RxOVR = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__150__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__150__RxBMEN) {
        if (__Vfunc_RxScreenOver__150__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__150__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__150__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__150__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__150__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__150__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_ref__DOT____VlemCall_12__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxSCRN_OVER[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_12__RxScreenOver;
    __Vfunc_RxScreenOver__151__RxBMEN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__151__RxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__151__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__151__RxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxY[1U];
    __Vfunc_RxScreenOver__151__RxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxX[1U];
    __Vfunc_RxScreenOver__151__RxOVR = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__151__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__151__RxBMEN) {
        if (__Vfunc_RxScreenOver__151__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__151__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__151__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__151__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__151__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__151__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_ref__DOT____VlemCall_13__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxSCRN_OVER[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_13__RxScreenOver;
    __Vfunc_NxPNAddr__135__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__ZMQT;
    __Vfunc_NxPNAddr__135__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__ZMHF;
    __Vfunc_NxPNAddr__135__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__135__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__135__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__135__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__135__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[0U];
    __Vfunc_NxPNAddr__135__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[0U];
    __Vfunc_NxPNAddr__135__NxPN_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[0U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNAddr__135__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNAddr__135__NxZMQT) 
                      | (IData)(__Vfunc_NxPNAddr__135__NxZMHF)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = (0x000007ffU & ((IData)(__Vfunc_NxPNAddr__135__NxOFFX) 
                          + (((IData)(__Vfunc_NxPNAddr__135__NxPN_CNT) 
                              & (IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK)) 
                             << 3U)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__135__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__135__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__135__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__135__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__135__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__135__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__135__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__135__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_0__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_0__NxPNAddr;
    __Vfunc_NxPNAddr__136__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__ZMQT;
    __Vfunc_NxPNAddr__136__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__ZMHF;
    __Vfunc_NxPNAddr__136__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__136__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__136__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__136__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__136__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[1U];
    __Vfunc_NxPNAddr__136__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[1U];
    __Vfunc_NxPNAddr__136__NxPN_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[1U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNAddr__136__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNAddr__136__NxZMQT) 
                      | (IData)(__Vfunc_NxPNAddr__136__NxZMHF)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = (0x000007ffU & ((IData)(__Vfunc_NxPNAddr__136__NxOFFX) 
                          + (((IData)(__Vfunc_NxPNAddr__136__NxPN_CNT) 
                              & (IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK)) 
                             << 3U)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__136__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__136__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__136__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__136__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__136__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__136__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__136__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__136__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_1__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_1__NxPNAddr;
    __Vfunc_NxPNAddr__137__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__137__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__137__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__137__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__137__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[2U];
    __Vfunc_NxPNAddr__137__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[2U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = __Vfunc_NxPNAddr__137__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__137__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__137__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__137__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__137__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__137__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__137__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__137__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__137__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_2__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[2U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_2__NxPNAddr;
    __Vfunc_NxPNAddr__138__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__138__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__138__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__138__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__138__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[3U];
    __Vfunc_NxPNAddr__138__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[3U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK = 0U;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = __Vfunc_NxPNAddr__138__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__138__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__138__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__138__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__138__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__138__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__138__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__138__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__138__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_3__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[3U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_3__NxPNAddr;
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[0U];
        vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[0U];
        vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[0U];
        vlSelfRef.__Vfunc_NxBMAddr__141__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs 
            = ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ))
                ? ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ))
                    ? ((0x0000ff80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00007f80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U))))
                : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ))
                    ? ((0x00007fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00003fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                            ? 0U : 
                                           ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                              << 0x00000010U) 
                                             + (0x0007fff0U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                                   << 4U))) 
                                            + ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                   ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                        << 0x00000010U) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                       ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 2U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                                   << 1U)))
                                       : ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 1U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                                   << 1U)))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_6__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_NxCHAddr__142__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__ZMQT;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__ZMHF;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][4U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][2U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][6U];
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK 
            = (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxZMQT) 
                << 1U) | ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxZMQT) 
                          | (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxZMHF)));
        if ((0U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__142__NxPN
                [((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX) 
                                  + (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                                      & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)) 
                                     << 3U)));
        } else if ((1U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__142__NxPN
                [(1U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                         >> 1U) & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX) 
                                  + (8U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK) 
                                              << 3U)))));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[0U];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX));
        }
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX) 
                              ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFY) 
                              ^ (- (IData)((vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt 
            = (7U & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                     ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                         >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                            ? 0U : 
                                           (((0x0007fff0U 
                                              & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                 << 4U)) 
                                             + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                                << 4U)) 
                                            + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                       ? (((0x0007fff0U 
                                            & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                               << 4U)) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                              << 2U)) 
                                          + (2U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                                   << 1U)))
                                       : ((0x0007fff0U 
                                           & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_6__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[0U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_6__NxBMAddr;
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[1U];
        vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[1U];
        vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[1U];
        vlSelfRef.__Vfunc_NxBMAddr__143__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs 
            = ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ))
                ? ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ))
                    ? ((0x0000ff80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00007f80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U))))
                : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ))
                    ? ((0x00007fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00003fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                            ? 0U : 
                                           ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                              << 0x00000010U) 
                                             + (0x0007fff0U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                                   << 4U))) 
                                            + ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                   ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                        << 0x00000010U) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                       ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 2U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                                   << 1U)))
                                       : ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 1U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                                   << 1U)))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_7__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_NxCHAddr__144__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__ZMQT;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__ZMHF;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][5U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][3U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][7U];
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK 
            = (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxZMQT) 
                << 1U) | ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxZMQT) 
                          | (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxZMHF)));
        if ((0U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__144__NxPN
                [((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX) 
                                  + (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                                      & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)) 
                                     << 3U)));
        } else if ((1U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__144__NxPN
                [(1U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                         >> 1U) & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX) 
                                  + (8U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK) 
                                              << 3U)))));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[0U];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX));
        }
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX) 
                              ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFY) 
                              ^ (- (IData)((vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt 
            = (7U & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                     ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                         >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                            ? 0U : 
                                           (((0x0007fff0U 
                                              & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                 << 4U)) 
                                             + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                                << 4U)) 
                                            + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                       ? (((0x0007fff0U 
                                            & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                               << 4U)) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                              << 2U)) 
                                          + (2U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                                   << 1U)))
                                       : ((0x0007fff0U 
                                           & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_7__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[1U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_7__NxBMAddr;
    __Vfunc_NxCHAddr2__145__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHSZ;
    __Vfunc_NxCHAddr2__145__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHCN;
    __Vfunc_NxCHAddr2__145__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxY[2U];
    __Vfunc_NxCHAddr2__145__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxX[2U];
    __Vfunc_NxCHAddr2__145__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[2U];
    __Vfunc_NxCHAddr2__145__NxPN = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
        = ((0U == (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
            ? __Vfunc_NxCHAddr2__145__NxPN[0U] : ((1U 
                                                   == (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                                                   ? __Vfunc_NxCHAddr2__145__NxPN
                                                  [
                                                  (1U 
                                                   & (IData)(__Vfunc_NxCHAddr2__145__NxCH_CNT))]
                                                   : __Vfunc_NxCHAddr2__145__NxPN[0U]));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX 
        = __Vfunc_NxCHAddr2__145__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX) 
                          ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                              >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_NxCHAddr2__145__NxOFFY) 
                          ^ (- (IData)((TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                        >> 0x0000001fU)))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt 
        = (7U & ((IData)(__Vfunc_NxCHAddr2__145__NxCH_CNT) 
                 ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                     >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs 
        = ((IData)(__Vfunc_NxCHAddr2__145__NxCHSZ) ? 
           ((0x00000010U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs)) 
                                       | (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs))))
            : (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs)));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                           ? ((2U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                                        ? 0U : (((0x0007fff0U 
                                                  & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                     << 4U)) 
                                                 + 
                                                 ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                                  << 4U)) 
                                                + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                   << 1U))))
                           : ((2U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                               ? (((0x0007fff0U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                   << 4U)) 
                                   + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                      << 3U)) + (6U 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                    << 1U)))
                               : ((1U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                          << 2U)) + 
                                      (2U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((0x0007fff0U 
                                       & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                          << 4U)) + 
                                      ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                       << 1U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_8__NxCHAddr2 
        = TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[2U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_8__NxCHAddr2;
    __Vfunc_NxCHAddr2__146__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHSZ;
    __Vfunc_NxCHAddr2__146__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHCN;
    __Vfunc_NxCHAddr2__146__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxY[3U];
    __Vfunc_NxCHAddr2__146__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxX[3U];
    __Vfunc_NxCHAddr2__146__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[3U];
    __Vfunc_NxCHAddr2__146__NxPN = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
        = ((0U == (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
            ? __Vfunc_NxCHAddr2__146__NxPN[0U] : ((1U 
                                                   == (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                                                   ? __Vfunc_NxCHAddr2__146__NxPN
                                                  [
                                                  (1U 
                                                   & (IData)(__Vfunc_NxCHAddr2__146__NxCH_CNT))]
                                                   : __Vfunc_NxCHAddr2__146__NxPN[0U]));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX 
        = __Vfunc_NxCHAddr2__146__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX) 
                          ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                              >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_NxCHAddr2__146__NxOFFY) 
                          ^ (- (IData)((TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                        >> 0x0000001fU)))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt 
        = (7U & ((IData)(__Vfunc_NxCHAddr2__146__NxCH_CNT) 
                 ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                     >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs 
        = ((IData)(__Vfunc_NxCHAddr2__146__NxCHSZ) ? 
           ((0x00000010U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs)) 
                                       | (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs))))
            : (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs)));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                           ? ((2U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                                        ? 0U : (((0x0007fff0U 
                                                  & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                     << 4U)) 
                                                 + 
                                                 ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                                  << 4U)) 
                                                + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                   << 1U))))
                           : ((2U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                               ? (((0x0007fff0U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                   << 4U)) 
                                   + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                      << 3U)) + (6U 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                    << 1U)))
                               : ((1U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                          << 2U)) + 
                                      (2U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((0x0007fff0U 
                                       & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                          << 4U)) + 
                                      ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                       << 1U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_9__NxCHAddr2 
        = TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[3U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_9__NxCHAddr2;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WE = ((0x17U 
                                                  >= 
                                                  (0x0000001fU 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                         >> 0x0000001eU)))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__r_xp____pinNumber2 
        = ((0x15U == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                      << 2U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__r_dx____pinNumber2 
        = ((0x0eU == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                      << 2U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_51 = (IData)(
                                                        ((0x40000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) 
                                                         & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__USEL = (3U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USL) 
                                                | (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4)) 
                                                 & ((0U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                    .__PVT__ZMQT));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4)) 
                                                 & ((0U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                    .__PVT__ZMQT));
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W = vlSelfRef.tb_top__DOT__u_dut__DOT__CYA0;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout 
        = (0x0000000fU & ((0U == (3U & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T)))
                           ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W) 
                              >> 0x0cU) : ((1U == (3U 
                                                   & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T)))
                                            ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W) 
                                               >> 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T)))
                                                ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W) 
                                                   >> 4U)
                                                : (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0 = __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout;
    if ((0x00000100U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U])) {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W 
            = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld) 
                      >> (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                >> 2U)))) ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem
               [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                       >> 2U))] : 0U);
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_0__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W)))));
        tb_top__DOT__u_dut__DOT__RDBSA1 = (3U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                    >> 2U)));
    } else {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYA0;
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_0__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W)))));
        tb_top__DOT__u_dut__DOT__RDBSA1 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U]);
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1 = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_0__CyNib;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W = vlSelfRef.tb_top__DOT__u_dut__DOT__CYB0;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout 
        = (0x0000000fU & ((0U == (3U & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T)))
                           ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W) 
                              >> 0x0cU) : ((1U == (3U 
                                                   & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T)))
                                            ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W) 
                                               >> 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T)))
                                                ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W) 
                                                   >> 4U)
                                                : (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0 = __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout;
    if ((0x00000200U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U])) {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W 
            = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld) 
                      >> (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                >> 2U)))) ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem
               [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                       >> 2U))] : 0U);
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_1__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W)))));
        tb_top__DOT__u_dut__DOT__RDBSB1 = (3U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                  << 0x0000001aU) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                    >> 6U)));
    } else {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYB0;
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_1__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W)))));
        tb_top__DOT__u_dut__DOT__RDBSB1 = (3U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                    >> 4U)));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1 = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_1__CyNib;
    tb_top__DOT__u_dut__DOT__RDBSA0 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U]);
    tb_top__DOT__u_dut__DOT__RDBSB0 = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                             >> 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA0PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA1PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA0PN);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA1PN);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB0PN);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA0CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA1CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA0CH);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA1CH);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB1CH);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA0CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA1CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA0CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA1CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB0CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB1CT);
}
