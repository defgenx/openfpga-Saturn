// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_REF_SH2_PKG___eval_static__TOP__REF_SH2_PKG(Vtb_top_REF_SH2_PKG* vlSelf);
VL_ATTR_COLD void Vtb_top_SH2_PKG___eval_static__TOP__SH2_PKG(Vtb_top_SH2_PKG* vlSelf);
VL_ATTR_COLD void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__dut__DOT__MSH(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__dut__DOT__SSH(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__ref0__DOT__MSH(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__ref0__DOT__SSH(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_REF_SH2_PKG___eval_static__TOP__REF_SH2_PKG((&vlSymsp->TOP__REF_SH2_PKG));
    Vtb_top_SH2_PKG___eval_static__TOP__SH2_PKG((&vlSymsp->TOP__SH2_PKG));
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_top__DOT__CLK = 0U;
        vlSelfRef.tb_top__DOT__RST_N = 0U;
        vlSelfRef.tb_top__DOT__watch_hit = 0U;
        vlSelfRef.tb_top__DOT__watch_hit_s = 0U;
        vlSelfRef.tb_top__DOT__ack_prev = 0U;
        vlSelfRef.tb_top__DOT__n_ack = 0U;
        vlSelfRef.tb_top__DOT__seen_m = 0U;
        vlSelfRef.tb_top__DOT__seen_s = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__NRES[0U] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__NRES[1U] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__NRES[2U] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF0 = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF64_33 = 0U;
    }
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__dut__DOT__MSH((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__dut__DOT__SSH((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__ref0__DOT__MSH((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_static__TOP__tb_top__DOT__ref0__DOT__SSH((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__CLK__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__RST_N__0 = 0U;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__dut__DOT__MSH__0(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__dut__DOT__SSH__0(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__0(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__dut__DOT__MSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
VL_ATTR_COLD void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__1(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__3(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__3(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__SSH__2(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);

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
                Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__dut__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
                Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__dut__DOT__SSH__0((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
                Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
                Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__0((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
                Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
                Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__dut__DOT__MSH__1((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
                Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___stl_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__1((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
                {
                    // Inlined CFunc: _stl_sequent__TOP__1
                    vlSelfRef.tb_top__DOT__dut__DOT__tbr 
                        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                       >> 1U)) & (0x0000f00000000000ULL 
                                                  == 
                                                  (0x0000f00000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))));
                    vlSelfRef.tb_top__DOT__dut__DOT__is_wraml 
                        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                       >> 3U)) & (0x0020000000000000ULL 
                                                  == 
                                                  (0x01f0000000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))));
                    vlSelfRef.tb_top__DOT__dut__DOT__is_rom 
                        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                       >> 3U)) & (0ULL 
                                                  == 
                                                  (0x01ff000000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))));
                    vlSelfRef.tb_top__DOT__ref0__DOT__tbr 
                        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                       >> 1U)) & (0x0000f00000000000ULL 
                                                  == 
                                                  (0x0000f00000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))));
                    vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml 
                        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                       >> 3U)) & (0x0020000000000000ULL 
                                                  == 
                                                  (0x01f0000000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))));
                    vlSelfRef.tb_top__DOT__ref0__DOT__is_rom 
                        = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                       >> 3U)) & (0ULL 
                                                  == 
                                                  (0x01ff000000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))));
                    vlSelfRef.tb_top__DOT__dut__DOT__cs0w 
                        = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_rom)
                            ? vlSelfRef.tb_top__DOT__dut__DOT__rom
                           [(0x00003fffU & (IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                    >> 0x00000022U)))]
                            : vlSelfRef.tb_top__DOT__dut__DOT__wraml
                           [(0x00003fffU & (IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                    >> 0x00000022U)))]);
                    vlSelfRef.tb_top__DOT__ref0__DOT__cs0w 
                        = ((IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_rom)
                            ? vlSelfRef.tb_top__DOT__ref0__DOT__rom
                           [(0x00003fffU & (IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                    >> 0x00000022U)))]
                            : vlSelfRef.tb_top__DOT__ref0__DOT__wraml
                           [(0x00003fffU & (IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                    >> 0x00000022U)))]);
                }
                Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__3((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
                Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__3((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
                {
                    // Inlined CFunc: _stl_sequent__TOP__2
                    vlSelfRef.tb_top__DOT__dut__DOT__SSHDI 
                        = vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.DI;
                    vlSelfRef.tb_top__DOT__ref0__DOT__SSHDI 
                        = vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.DI;
                }
                Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__2((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
                Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__SSH__2((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
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
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
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

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_top__DOT__dut__DOT____VlemExpr_4;
    IData/*31:0*/ tb_top__DOT__dut__DOT____VlemExpr_3;
    IData/*31:0*/ tb_top__DOT__dut__DOT____VlemExpr_2;
    IData/*31:0*/ tb_top__DOT__dut__DOT____VlemExpr_1;
    IData/*31:0*/ tb_top__DOT__dut__DOT____VlemExpr_0;
    IData/*31:0*/ tb_top__DOT__dut__DOT__fast_mode;
    tb_top__DOT__dut__DOT__fast_mode = 0;
    IData/*31:0*/ tb_top__DOT__dut__DOT__unnamedblk1__DOT__i;
    tb_top__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__dut__DOT__unnamedblk2__DOT__i;
    tb_top__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemExpr_4;
    IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemExpr_3;
    IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemExpr_2;
    IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemExpr_1;
    IData/*31:0*/ tb_top__DOT__ref0__DOT____VlemExpr_0;
    IData/*31:0*/ tb_top__DOT__ref0__DOT__fast_mode;
    tb_top__DOT__ref0__DOT__fast_mode = 0;
    IData/*31:0*/ tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i;
    tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i;
    tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__wait_mode = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__irq_mode = 0U;
    tb_top__DOT__dut__DOT__fast_mode = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__lfsr = 0x1234abcdU;
    tb_top__DOT__dut__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INI(32, "wait=%d"s, 
                                                               vlSelfRef.tb_top__DOT__dut__DOT__wait_mode);
    if ((! tb_top__DOT__dut__DOT____VlemExpr_0)) {
        vlSelfRef.tb_top__DOT__dut__DOT__wait_mode = 0U;
    }
    tb_top__DOT__dut__DOT____VlemExpr_1 = VL_VALUEPLUSARGS_INI(32, "irq=%d"s, 
                                                               vlSelfRef.tb_top__DOT__dut__DOT__irq_mode);
    if ((! tb_top__DOT__dut__DOT____VlemExpr_1)) {
        vlSelfRef.tb_top__DOT__dut__DOT__irq_mode = 0U;
    }
    tb_top__DOT__dut__DOT____VlemExpr_2 = VL_VALUEPLUSARGS_INI(32, "fast=%d"s, 
                                                               tb_top__DOT__dut__DOT__fast_mode);
    if ((! tb_top__DOT__dut__DOT____VlemExpr_2)) {
        tb_top__DOT__dut__DOT__fast_mode = 0U;
    }
    tb_top__DOT__dut__DOT____VlemExpr_3 = VL_VALUEPLUSARGS_INI(32, "seed=%h"s, 
                                                               vlSelfRef.tb_top__DOT__dut__DOT__lfsr);
    if ((! tb_top__DOT__dut__DOT____VlemExpr_3)) {
        vlSelfRef.tb_top__DOT__dut__DOT__lfsr = 0x1234abcdU;
    }
    vlSelfRef.tb_top__DOT__dut__DOT__FAST_R = (1U & tb_top__DOT__dut__DOT__fast_mode);
    tb_top__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_top__DOT__dut__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_top__DOT__dut__DOT__rom[(0x00003fffU 
                                              & tb_top__DOT__dut__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__wraml[(0x00003fffU 
                                                & tb_top__DOT__dut__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__abus[(0x00003fffU 
                                               & tb_top__DOT__dut__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__scr[(0x00003fffU 
                                              & tb_top__DOT__dut__DOT__unnamedblk1__DOT__i)] = 0U;
        tb_top__DOT__dut__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_top__DOT__dut__DOT__unnamedblk1__DOT__i);
    }
    tb_top__DOT__dut__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00010000U, tb_top__DOT__dut__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.tb_top__DOT__dut__DOT__wramh[(0x0000ffffU 
                                                & tb_top__DOT__dut__DOT__unnamedblk2__DOT__i)] = 0U;
        tb_top__DOT__dut__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_top__DOT__dut__DOT__unnamedblk2__DOT__i);
    }
    tb_top__DOT__dut__DOT____VlemExpr_4 = VL_VALUEPLUSARGS_INN(64, "prog=%s"s, 
                                                               vlSelfRef.tb_top__DOT__dut__DOT__prog);
    if ((! tb_top__DOT__dut__DOT____VlemExpr_4)) {
        vlSelfRef.tb_top__DOT__dut__DOT__prog = "prog.hex"s;
    }
    VL_READMEM_N(true, 32, 16384, 0, vlSelfRef.tb_top__DOT__dut__DOT__prog
                 ,  &(vlSelfRef.tb_top__DOT__dut__DOT__rom)
                 , 0, ~0ULL);
    vlSelfRef.tb_top__DOT__ref0__DOT__wait_mode = 0U;
    vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode = 0U;
    tb_top__DOT__ref0__DOT__fast_mode = 0U;
    vlSelfRef.tb_top__DOT__ref0__DOT__lfsr = 0x1234abcdU;
    tb_top__DOT__ref0__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INI(32, "wait=%d"s, 
                                                                vlSelfRef.tb_top__DOT__ref0__DOT__wait_mode);
    if ((! tb_top__DOT__ref0__DOT____VlemExpr_0)) {
        vlSelfRef.tb_top__DOT__ref0__DOT__wait_mode = 0U;
    }
    tb_top__DOT__ref0__DOT____VlemExpr_1 = VL_VALUEPLUSARGS_INI(32, "irq=%d"s, 
                                                                vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode);
    if ((! tb_top__DOT__ref0__DOT____VlemExpr_1)) {
        vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode = 0U;
    }
    tb_top__DOT__ref0__DOT____VlemExpr_2 = VL_VALUEPLUSARGS_INI(32, "fast=%d"s, 
                                                                tb_top__DOT__ref0__DOT__fast_mode);
    if ((! tb_top__DOT__ref0__DOT____VlemExpr_2)) {
        tb_top__DOT__ref0__DOT__fast_mode = 0U;
    }
    tb_top__DOT__ref0__DOT____VlemExpr_3 = VL_VALUEPLUSARGS_INI(32, "seed=%h"s, 
                                                                vlSelfRef.tb_top__DOT__ref0__DOT__lfsr);
    if ((! tb_top__DOT__ref0__DOT____VlemExpr_3)) {
        vlSelfRef.tb_top__DOT__ref0__DOT__lfsr = 0x1234abcdU;
    }
    vlSelfRef.tb_top__DOT__ref0__DOT__FAST_R = (1U 
                                                & tb_top__DOT__ref0__DOT__fast_mode);
    tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_top__DOT__ref0__DOT__rom[(0x00003fffU 
                                               & tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__ref0__DOT__wraml[(0x00003fffU 
                                                 & tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__ref0__DOT__abus[(0x00003fffU 
                                                & tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[(0x00003fffU 
                                               & tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i)] = 0U;
        tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_top__DOT__ref0__DOT__unnamedblk1__DOT__i);
    }
    tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00010000U, tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.tb_top__DOT__ref0__DOT__wramh[(0x0000ffffU 
                                                 & tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i)] = 0U;
        tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_top__DOT__ref0__DOT__unnamedblk2__DOT__i);
    }
    tb_top__DOT__ref0__DOT____VlemExpr_4 = VL_VALUEPLUSARGS_INN(64, "prog=%s"s, 
                                                                vlSelfRef.tb_top__DOT__ref0__DOT__prog);
    if ((! tb_top__DOT__ref0__DOT____VlemExpr_4)) {
        vlSelfRef.tb_top__DOT__ref0__DOT__prog = "prog.hex"s;
    }
    VL_READMEM_N(true, 32, 16384, 0, vlSelfRef.tb_top__DOT__ref0__DOT__prog
                 ,  &(vlSelfRef.tb_top__DOT__ref0__DOT__rom)
                 , 0, ~0ULL);
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

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ tb_top__DOT__dut__DOT__dvshr__DOT__OPND;
    tb_top__DOT__dut__DOT__dvshr__DOT__OPND = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hebeb780c_0_24;
    VL_ZERO_W(65, __VdfgRegularize_hebeb780c_0_24);
    VlWide<3>/*64:0*/ __VdfgRegularize_hebeb780c_0_25;
    VL_ZERO_W(65, __VdfgRegularize_hebeb780c_0_25);
    VlWide<3>/*64:0*/ __VdfgRegularize_hebeb780c_0_58;
    VL_ZERO_W(65, __VdfgRegularize_hebeb780c_0_58);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VL_SUB_W(3, __Vtemp_2, vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R, vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__D);
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM[2U] 
        = (1U & __Vtemp_2[2U]);
    __VdfgRegularize_hebeb780c_0_24[0U] = (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R64);
    __VdfgRegularize_hebeb780c_0_24[1U] = (IData)((vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R64 
                                                   >> 0x00000020U));
    __VdfgRegularize_hebeb780c_0_24[2U] = (1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R64 
                                                         >> 0x0000003fU)));
    __VdfgRegularize_hebeb780c_0_58[0U] = (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__D64);
    __VdfgRegularize_hebeb780c_0_58[1U] = (IData)((vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__D64 
                                                   >> 0x00000020U));
    __VdfgRegularize_hebeb780c_0_58[2U] = 0U;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = ((0x3fU 
                                                  == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__STEP)) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__OWNER) 
                                                 | (0x3fU 
                                                    == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__STEP)));
    tb_top__DOT__dut__DOT__dvshr__DOT__OPND = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__OWNER)
                                                ? vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_36
                                                : vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_28);
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__ACT1 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__PEND1)) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__PVT__divu__DOT__START_A) 
              & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__PVT__divu__DOT__OWN)) 
                 & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV))));
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__QB 
        = (1U ^ (vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM[2U] 
                 ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R_SIGN)));
    if (vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__T64) {
        VL_SUB_W(3, __Vtemp_4, __VdfgRegularize_hebeb780c_0_24, __VdfgRegularize_hebeb780c_0_58);
    } else {
        VL_ADD_W(3, __Vtemp_4, __VdfgRegularize_hebeb780c_0_24, __VdfgRegularize_hebeb780c_0_58);
    }
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM64[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM64[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SUM64[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__ACT0 
        = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__divu__DOT__START_A) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__PEND0)) 
                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59))));
    __VdfgRegularize_hebeb780c_0_25[0U] = (IData)(tb_top__DOT__dut__DOT__dvshr__DOT__OPND);
    __VdfgRegularize_hebeb780c_0_25[1U] = (IData)((tb_top__DOT__dut__DOT__dvshr__DOT__OPND 
                                                   >> 0x00000020U));
    __VdfgRegularize_hebeb780c_0_25[2U] = (1U & (IData)(
                                                        (tb_top__DOT__dut__DOT__dvshr__DOT__OPND 
                                                         >> 0x0000003fU)));
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__STEP))) {
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__NEG 
            = (1U & (IData)((tb_top__DOT__dut__DOT__dvshr__DOT__OPND 
                             >> 0x0000003fU)));
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[0U] 
            = __VdfgRegularize_hebeb780c_0_25[0U];
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[1U] 
            = __VdfgRegularize_hebeb780c_0_25[1U];
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[2U] 
            = __VdfgRegularize_hebeb780c_0_25[2U];
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__STEP))) {
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__NEG 
            = (1U & (IData)((tb_top__DOT__dut__DOT__dvshr__DOT__OPND 
                             >> 0x0000003fU)));
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[0U] 
            = __VdfgRegularize_hebeb780c_0_25[0U];
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[1U] 
            = __VdfgRegularize_hebeb780c_0_25[1U];
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[2U] 
            = __VdfgRegularize_hebeb780c_0_25[2U];
    } else if ((0x24U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__STEP))) {
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__NEG 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R_SIGN));
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[0U] 
            = vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R[0U];
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[1U] 
            = vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R[1U];
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[2U] 
            = vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__R[2U];
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__NEG 
            = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__divu__DOT__SGN));
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[0U] 
            = vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__Q;
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[1U] 
            = (IData)((0x00000001ffffffffULL & (- (QData)((IData)(
                                                                  (vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__Q 
                                                                   >> 0x0000001fU))))));
        vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__VAL[2U] 
            = (IData)(((0x00000001ffffffffULL & (- (QData)((IData)(
                                                                   (vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__Q 
                                                                    >> 0x0000001fU))))) 
                       >> 0x00000020U));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SEL0 
        = (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__PEND0) 
            | ((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__PEND1)) 
               & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__ACT0))) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23));
    vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SEL1 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__SEL0)) 
              & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__PEND1) 
                 | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dvshr__DOT__ACT1))));
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_top.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_top.RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_top__DOT__ncycles = 0;
    vlSelf->tb_top__DOT__cyc = 0;
    vlSelf->tb_top__DOT__nvec = 0;
    vlSelf->tb_top__DOT__nown_s = 0;
    vlSelf->tb_top__DOT__nwrite = 0;
    vlSelf->tb_top__DOT__verbose = 0;
    vlSelf->tb_top__DOT__chk_r = 0;
    vlSelf->tb_top__DOT__chk_d = 0;
    vlSelf->tb_top__DOT__nz = 0;
    vlSelf->tb_top__DOT__watch_lo = 0;
    vlSelf->tb_top__DOT__watch_hi = 0;
    vlSelf->tb_top__DOT__peek = 0;
    vlSelf->tb_top__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_top__DOT__dut__DOT__lfsr = 0;
    vlSelf->tb_top__DOT__dut__DOT__MCLK_DIV = 0;
    vlSelf->tb_top__DOT__dut__DOT__FAST_R = 0;
    vlSelf->tb_top__DOT__dut__DOT__cyc = 0;
    vlSelf->tb_top__DOT__dut__DOT__MSHRES_N = 0;
    vlSelf->tb_top__DOT__dut__DOT__SSHDI = 0;
    vlSelf->tb_top__DOT__dut__DOT__SSHRES_N = 0;
    vlSelf->tb_top__DOT__dut__DOT__wait_mode = 0;
    vlSelf->tb_top__DOT__dut__DOT__wait_mode_r = 0;
    vlSelf->tb_top__DOT__dut__DOT__irq_mode = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__rom[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__wraml[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__abus[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__scr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__wramh[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__dut__DOT__tbr = 0;
    vlSelf->tb_top__DOT__dut__DOT__is_rom = 0;
    vlSelf->tb_top__DOT__dut__DOT__is_wraml = 0;
    vlSelf->tb_top__DOT__dut__DOT__lvlM = 0;
    vlSelf->tb_top__DOT__dut__DOT__lvlS = 0;
    vlSelf->tb_top__DOT__dut__DOT__ageM = 0;
    vlSelf->tb_top__DOT__dut__DOT__ageS = 0;
    vlSelf->tb_top__DOT__dut__DOT__nmi_cnt = 0;
    vlSelf->tb_top__DOT__dut__DOT__snmi_cnt = 0;
    vlSelf->tb_top__DOT__dut__DOT__mfti_cnt = 0;
    vlSelf->tb_top__DOT__dut__DOT__sfti_cnt = 0;
    vlSelf->tb_top__DOT__dut__DOT__ssh_rel = 0;
    vlSelf->tb_top__DOT__dut__DOT__ssh_rel_dly = 0;
    vlSelf->tb_top__DOT__dut__DOT__cs0w = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__STEP = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__OWNER = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__DIV64 = 0;
    VL_ZERO_RESET_W(65, vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__R);
    VL_ZERO_RESET_W(65, vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__D);
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__Q = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__R64 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__D64 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__R_SIGN = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__D_SIGN = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__T64 = 0;
    VL_ZERO_RESET_W(65, vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__VAL);
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__NEG = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__OVF = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__PEND0 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__PEND1 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__P64_0 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__P64_1 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__ACT0 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__ACT1 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__SEL0 = 0;
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__SEL1 = 0;
    VL_ZERO_RESET_W(65, vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__SUM);
    VL_ZERO_RESET_W(65, vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__SUM64);
    vlSelf->tb_top__DOT__dut__DOT__dvshr__DOT__QB = 0;
    vlSelf->tb_top__DOT__ref0__DOT__lfsr = 0;
    vlSelf->tb_top__DOT__ref0__DOT__MCLK_DIV = 0;
    vlSelf->tb_top__DOT__ref0__DOT__FAST_R = 0;
    vlSelf->tb_top__DOT__ref0__DOT__cyc = 0;
    vlSelf->tb_top__DOT__ref0__DOT__MSHRES_N = 0;
    vlSelf->tb_top__DOT__ref0__DOT__SSHDI = 0;
    vlSelf->tb_top__DOT__ref0__DOT__SSHRES_N = 0;
    vlSelf->tb_top__DOT__ref0__DOT__wait_mode = 0;
    vlSelf->tb_top__DOT__ref0__DOT__wait_mode_r = 0;
    vlSelf->tb_top__DOT__ref0__DOT__irq_mode = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__ref0__DOT__rom[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__ref0__DOT__wraml[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__ref0__DOT__abus[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_top__DOT__ref0__DOT__scr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb_top__DOT__ref0__DOT__wramh[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__ref0__DOT__tbr = 0;
    vlSelf->tb_top__DOT__ref0__DOT__is_rom = 0;
    vlSelf->tb_top__DOT__ref0__DOT__is_wraml = 0;
    vlSelf->tb_top__DOT__ref0__DOT__lvlM = 0;
    vlSelf->tb_top__DOT__ref0__DOT__lvlS = 0;
    vlSelf->tb_top__DOT__ref0__DOT__ageM = 0;
    vlSelf->tb_top__DOT__ref0__DOT__ageS = 0;
    vlSelf->tb_top__DOT__ref0__DOT__nmi_cnt = 0;
    vlSelf->tb_top__DOT__ref0__DOT__snmi_cnt = 0;
    vlSelf->tb_top__DOT__ref0__DOT__mfti_cnt = 0;
    vlSelf->tb_top__DOT__ref0__DOT__sfti_cnt = 0;
    vlSelf->tb_top__DOT__ref0__DOT__ssh_rel = 0;
    vlSelf->tb_top__DOT__ref0__DOT__ssh_rel_dly = 0;
    vlSelf->tb_top__DOT__ref0__DOT__cs0w = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_59 = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__mfti_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__nmi_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__snmi_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__sfti_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__ref0__DOT__mfti_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__ref0__DOT__nmi_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__ref0__DOT__snmi_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__ref0__DOT__sfti_cnt = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__cyc = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__MCLK_DIV = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__STEP = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF0 = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__Q = 0;
    VL_ZERO_RESET_W(65, vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__R);
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__R_SIGN = 0;
    VL_ZERO_RESET_W(65, vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__D);
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__D_SIGN = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__T64 = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__unnamedblk1__DOT__OVF64_33 = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__PEND0 = 0;
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__dvshr__DOT__PEND1 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref0__DOT__cyc = 0;
    vlSelf->__Vdly__tb_top__DOT__ref0__DOT__MCLK_DIV = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__RST_N__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
