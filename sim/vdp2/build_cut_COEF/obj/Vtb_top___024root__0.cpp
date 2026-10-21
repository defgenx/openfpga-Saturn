// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root___eval_sample(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_sample\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top___024root___eval_triggers_vec__ico(Vtb_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vtb_top___024root___eval_body__ico(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_ico(Vtb_top___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    Vtb_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtb_top___024root___eval_body__ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.RES_N)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RES_N__1)) 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.RST_N)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RST_N__1)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.CLK) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__1)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__CLK__1 = vlSelfRef.CLK;
        vlSelfRef.__Vtrigprevexpr___TOP__RST_N__1 = vlSelfRef.RST_N;
        vlSelfRef.__Vtrigprevexpr___TOP__RES_N__1 = vlSelfRef.RES_N;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtb_top___024root___eval_inact(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_inact\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_top___024root___eval_body__nba(Vtb_top___024root* vlSelf);
void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_body__nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_top___024root___eval_obs(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_obs\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_top___024root___eval_react(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_react\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_top___024root___eval_postponed(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_postponed\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top___024root___eval_triggers_vec__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_vec__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((((vlSelfRef.d_RB1_Q 
                                                          != vlSelfRef.__Vtrigprevexpr___TOP__d_RB1_Q__0) 
                                                         << 6U) 
                                                        | (((vlSelfRef.d_RB0_Q 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__d_RB0_Q__0) 
                                                            << 5U) 
                                                           | ((vlSelfRef.d_RA1_Q 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__d_RA1_Q__0) 
                                                              << 4U))) 
                                                       | ((((vlSelfRef.d_RA0_Q 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__d_RA0_Q__0) 
                                                            << 3U) 
                                                           | ((vlSelfRef.r_RB1_Q 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__r_RB1_Q__0) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.r_RB0_Q 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__r_RB0_Q__0) 
                                                              << 1U) 
                                                             | (vlSelfRef.r_RA1_Q 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__r_RA1_Q__0)))) 
                                                      << 0x00000010U) 
                                                     | (((((((vlSelfRef.r_RA0_Q 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__r_RA0_Q__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.DBG_EXT) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DBG_EXT__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.SCRN_EN) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCRN_EN__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.EXLAT_N) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__EXLAT_N__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.PAL) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PAL__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.FBDI) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FBDI__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.REQ_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__REQ_N__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.DTEN_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DTEN_N__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.AD_N) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__AD_N__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.CS_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CS_N__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.DI) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DI__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.RES_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RES_N__0)))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.CE_F) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE_F__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.CE_R) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE_R__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.RST_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.CLK) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__0)))))))));
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000001000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000002000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000004000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000008000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000010000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000020000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000040000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000080000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000100000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000200000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000400000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<SData/*9:0*/, 64> Vtb_top__ConstPool__TABLE_h33db5abf_0;

void Vtb_top___024root___ico_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ico_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtb_top___024root___ico_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ico_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__N_PCNT;
    tb_top__DOT__u_dut__DOT__N_PCNT = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__N_X;
    tb_top__DOT__u_dut__DOT__N_X = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__N_Y;
    tb_top__DOT__u_dut__DOT__N_Y = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__N_MPI;
    tb_top__DOT__u_dut__DOT__N_MPI = 0;
    SData/*15:0*/ tb_top__DOT__u_dut__DOT__N_MPW;
    tb_top__DOT__u_dut__DOT__N_MPW = 0;
    CData/*2:0*/ tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7;
    tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7 = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__N_PNA;
    tb_top__DOT__u_dut__DOT__N_PNA = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__R_PSET;
    tb_top__DOT__u_dut__DOT__R_PSET = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_PX;
    tb_top__DOT__u_dut__DOT__R_PX = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_PY;
    tb_top__DOT__u_dut__DOT__R_PY = 0;
    CData/*3:0*/ tb_top__DOT__u_dut__DOT__R_MPI;
    tb_top__DOT__u_dut__DOT__R_MPI = 0;
    SData/*15:0*/ tb_top__DOT__u_dut__DOT__R_MPW;
    tb_top__DOT__u_dut__DOT__R_MPW = 0;
    CData/*3:0*/ tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7;
    tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7 = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__R_PNA;
    tb_top__DOT__u_dut__DOT__R_PNA = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__NC_X;
    tb_top__DOT__u_dut__DOT__NC_X = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__NC_Y;
    tb_top__DOT__u_dut__DOT__NC_Y = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__N_CH01;
    tb_top__DOT__u_dut__DOT__N_CH01 = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__N_CH23;
    tb_top__DOT__u_dut__DOT__N_CH23 = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__R_CSET;
    tb_top__DOT__u_dut__DOT__R_CSET = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_CX;
    tb_top__DOT__u_dut__DOT__R_CX = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_CY;
    tb_top__DOT__u_dut__DOT__R_CY = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__R_CHA;
    tb_top__DOT__u_dut__DOT__R_CHA = 0;
    CData/*3:0*/ tb_top__DOT__u_dut__DOT__HCTB;
    tb_top__DOT__u_dut__DOT__HCTB = 0;
    IData/*23:0*/ tb_top__DOT__u_dut__DOT__RB2_D;
    tb_top__DOT__u_dut__DOT__RB2_D = 0;
    CData/*7:0*/ tb_top__DOT__u_dut__DOT__RB3_D;
    tb_top__DOT__u_dut__DOT__RB3_D = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc;
    tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc = 0;
    CData/*1:0*/ __Vfunc_NxPNMapIdx__9__Vfuncout;
    __Vfunc_NxPNMapIdx__9__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NxPNMapIdx__9__NxPN_CNT;
    __Vfunc_NxPNMapIdx__9__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNMapIdx__9__NxOFFX;
    __Vfunc_NxPNMapIdx__9__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNMapIdx__9__NxOFFY;
    __Vfunc_NxPNMapIdx__9__NxOFFY = 0;
    CData/*1:0*/ __Vfunc_NxPNMapIdx__9__NxPLSZ;
    __Vfunc_NxPNMapIdx__9__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNMapIdx__9__NxZMHF;
    __Vfunc_NxPNMapIdx__9__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNMapIdx__9__NxZMQT;
    __Vfunc_NxPNMapIdx__9__NxZMQT = 0;
    IData/*18:0*/ __Vfunc_NxPNAddr2__10__Vfuncout;
    __Vfunc_NxPNAddr2__10__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr2__10__NxPN_CNT;
    __Vfunc_NxPNAddr2__10__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr2__10__NxOFFX;
    __Vfunc_NxPNAddr2__10__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr2__10__NxOFFY;
    __Vfunc_NxPNAddr2__10__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr2__10__NxMP;
    __Vfunc_NxPNAddr2__10__NxMP = 0;
    CData/*5:0*/ __Vfunc_NxPNAddr2__10__NxMPe;
    __Vfunc_NxPNAddr2__10__NxMPe = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr2__10__NxPLSZ;
    __Vfunc_NxPNAddr2__10__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxCHSZ;
    __Vfunc_NxPNAddr2__10__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxPNB;
    __Vfunc_NxPNAddr2__10__NxPNB = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxZMHF;
    __Vfunc_NxPNAddr2__10__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxZMQT;
    __Vfunc_NxPNAddr2__10__NxZMQT = 0;
    CData/*3:0*/ __Vfunc_RxPNMapIdx__11__Vfuncout;
    __Vfunc_RxPNMapIdx__11__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_RxPNMapIdx__11__RxOFFX;
    __Vfunc_RxPNMapIdx__11__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNMapIdx__11__RxOFFY;
    __Vfunc_RxPNMapIdx__11__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxPNMapIdx__11__RxPLSZ;
    __Vfunc_RxPNMapIdx__11__RxPLSZ = 0;
    IData/*18:0*/ __Vfunc_RxPNAddr2__12__Vfuncout;
    __Vfunc_RxPNAddr2__12__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr2__12__RxOFFX;
    __Vfunc_RxPNAddr2__12__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr2__12__RxOFFY;
    __Vfunc_RxPNAddr2__12__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxPNAddr2__12__RxMP;
    __Vfunc_RxPNAddr2__12__RxMP = 0;
    CData/*5:0*/ __Vfunc_RxPNAddr2__12__RxMPe;
    __Vfunc_RxPNAddr2__12__RxMPe = 0;
    CData/*1:0*/ __Vfunc_RxPNAddr2__12__RxPLSZ;
    __Vfunc_RxPNAddr2__12__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr2__12__RxCHSZ;
    __Vfunc_RxPNAddr2__12__RxCHSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr2__12__RxPNB;
    __Vfunc_RxPNAddr2__12__RxPNB = 0;
    IData/*18:0*/ __Vfunc_NxCHAddr2__15__Vfuncout;
    __Vfunc_NxCHAddr2__15__Vfuncout = 0;
    VlUnpacked<IData/*31:0*/, 2> __Vfunc_NxCHAddr2__15__NxPN;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_NxCHAddr2__15__NxPN[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_NxCHAddr2__15__NxCH_CNT;
    __Vfunc_NxCHAddr2__15__NxCH_CNT = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__15__NxOFFX;
    __Vfunc_NxCHAddr2__15__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__15__NxOFFY;
    __Vfunc_NxCHAddr2__15__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxCHAddr2__15__NxCHCN;
    __Vfunc_NxCHAddr2__15__NxCHCN = 0;
    CData/*0:0*/ __Vfunc_NxCHAddr2__15__NxCHSZ;
    __Vfunc_NxCHAddr2__15__NxCHSZ = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_59;
    __VdfgRegularize_hebeb780c_0_59 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_60;
    __VdfgRegularize_hebeb780c_0_60 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_61;
    __VdfgRegularize_hebeb780c_0_61 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_66;
    __VdfgRegularize_hebeb780c_0_66 = 0;
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
    CData/*1:0*/ TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK;
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX;
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX = 0;
    IData/*18:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr = 0;
    CData/*1:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX = 0;
    SData/*8:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr = 0;
    IData/*18:0*/ TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr;
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr = 0;
    SData/*8:0*/ TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr;
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr = 0;
    IData/*31:0*/ __VExpandSel_Lsb_1;
    IData/*31:0*/ __VExpandSel_Lsb_2;
    IData/*31:0*/ __VExpandSel_Lsb_3;
    IData/*31:0*/ __VExpandSel_Lsb_4;
    IData/*31:0*/ __VExpandSel_Lsb_5;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.CE_R) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC));
    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R = ((IData)(vlSelfRef.CE_R) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F = ((IData)(vlSelfRef.CE_R) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F = ((IData)(vlSelfRef.CE_R) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R = ((IData)(vlSelfRef.CE_R) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_X = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40));
    vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_Y = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = (IData)(
                                                        ((0x40000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) 
                                                         & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__USEL = (3U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USL) 
                                                | (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (IData)(
                                                        (((4U 
                                                           == 
                                                           (6U 
                                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)) 
                                                         & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])));
    __VdfgRegularize_hebeb780c_0_66 = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                             [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL] 
                                             >> 1U));
    __VdfgRegularize_hebeb780c_0_1 = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL]);
    __VdfgRegularize_hebeb780c_0_0 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL]);
    tb_top__DOT__u_dut__DOT__N_PCNT = ((IData)(__VdfgRegularize_hebeb780c_0_66)
                                        ? 0U : vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT
                                       [(1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                         [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])]);
    tb_top__DOT__u_dut__DOT__R_CSET = (1U & ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                >> 6U)));
    tb_top__DOT__u_dut__DOT__R_PSET = ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__R0RP);
    if ((1U & (IData)(__VdfgRegularize_hebeb780c_0_0))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[0U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[0U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[1U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[1U];
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[0U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[0U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[1U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[1U];
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(7U & ((IData)(4U) + (1U & (IData)(__VdfgRegularize_hebeb780c_0_0))))];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(7U & ((IData)(2U) + (1U & (IData)(__VdfgRegularize_hebeb780c_0_0))))];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(7U & ((IData)(6U) + (1U & (IData)(__VdfgRegularize_hebeb780c_0_0))))];
    __VExpandSel_Lsb_1 = ((IData)(0x0000005dU) + (0x0000003fU 
                                                  & ((IData)(0x0000000bU) 
                                                     * (IData)(__VdfgRegularize_hebeb780c_0_0))));
    tb_top__DOT__u_dut__DOT__NC_X = (0x000007ffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_1))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000aU) 
                                                   + __VExpandSel_Lsb_1) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_1)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_1 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_1))));
    __VExpandSel_Lsb_2 = ((IData)(0x00000031U) + (0x0000003fU 
                                                  & ((IData)(0x0000000bU) 
                                                     * (IData)(__VdfgRegularize_hebeb780c_0_0))));
    tb_top__DOT__u_dut__DOT__NC_Y = (0x000007ffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_2))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000aU) 
                                                   + __VExpandSel_Lsb_2) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_2)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_2 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_2))));
    tb_top__DOT__u_dut__DOT__N_X = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxX[__VdfgRegularize_hebeb780c_0_0];
    tb_top__DOT__u_dut__DOT__N_Y = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxY[__VdfgRegularize_hebeb780c_0_0];
    __VExpandSel_Lsb_3 = ((IData)(0x00000019U) + (0x0000001fU 
                                                  & ((IData)(0x0000000cU) 
                                                     * (IData)(tb_top__DOT__u_dut__DOT__R_CSET))));
    tb_top__DOT__u_dut__DOT__R_CX = (0x00000fffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_3))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000bU) 
                                                   + __VExpandSel_Lsb_3) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_3)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_3 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_3))));
    __VExpandSel_Lsb_4 = ((IData)(1U) + (0x0000001fU 
                                         & ((IData)(0x0000000cU) 
                                            * (IData)(tb_top__DOT__u_dut__DOT__R_CSET))));
    tb_top__DOT__u_dut__DOT__R_CY = (0x00000fffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_4))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000bU) 
                                                   + __VExpandSel_Lsb_4) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_4)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_4 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_4))));
    tb_top__DOT__u_dut__DOT__R_PX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__RxX[tb_top__DOT__u_dut__DOT__R_PSET]);
    tb_top__DOT__u_dut__DOT__R_PY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__RxY[tb_top__DOT__u_dut__DOT__R_PSET]);
    __Vfunc_NxCHAddr2__15__NxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [(2U | (1U & (IData)(__VdfgRegularize_hebeb780c_0_0)))]
        .__PVT__CHSZ;
    __Vfunc_NxCHAddr2__15__NxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [(2U | (1U & (IData)(__VdfgRegularize_hebeb780c_0_0)))]
        .__PVT__CHCN;
    __Vfunc_NxCHAddr2__15__NxOFFY = tb_top__DOT__u_dut__DOT__NC_Y;
    __Vfunc_NxCHAddr2__15__NxOFFX = tb_top__DOT__u_dut__DOT__NC_X;
    __Vfunc_NxCHAddr2__15__NxCH_CNT = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT
        [(2U | (1U & (IData)(__VdfgRegularize_hebeb780c_0_0)))];
    __Vfunc_NxCHAddr2__15__NxPN = vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
        = ((0U == (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
            ? __Vfunc_NxCHAddr2__15__NxPN[0U] : ((1U 
                                                  == (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                                                  ? __Vfunc_NxCHAddr2__15__NxPN
                                                 [(1U 
                                                   & (IData)(__Vfunc_NxCHAddr2__15__NxCH_CNT))]
                                                  : __Vfunc_NxCHAddr2__15__NxPN[0U]));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX 
        = __Vfunc_NxCHAddr2__15__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX) 
                          ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                              >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_NxCHAddr2__15__NxOFFY) 
                          ^ (- (IData)((TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                        >> 0x0000001fU)))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt 
        = (7U & ((IData)(__Vfunc_NxCHAddr2__15__NxCH_CNT) 
                 ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                     >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs 
        = ((IData)(__Vfunc_NxCHAddr2__15__NxCHSZ) ? 
           ((0x00000010U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs)) 
                                       | (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs))))
            : (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs)));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                           ? ((2U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                                        ? 0U : (((0x0007fff0U 
                                                  & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                     << 4U)) 
                                                 + 
                                                 ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                                  << 4U)) 
                                                + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                   << 1U))))
                           : ((2U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                               ? (((0x0007fff0U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                   << 4U)) 
                                   + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                      << 3U)) + (6U 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                    << 1U)))
                               : ((1U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
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
    __Vfunc_NxCHAddr2__15__Vfuncout = TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    tb_top__DOT__u_dut__DOT__N_CH23 = __Vfunc_NxCHAddr2__15__Vfuncout;
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[(1U 
                                                   & (IData)(__VdfgRegularize_hebeb780c_0_0))]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY = tb_top__DOT__u_dut__DOT__NC_Y;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX = tb_top__DOT__u_dut__DOT__NC_X;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))];
        vlSelfRef.__Vfunc_NxBMAddr__13__NxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs 
            = ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ))
                ? ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ))
                    ? ((0x0000ff80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00007f80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U))))
                : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ))
                    ? ((0x00007fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00003fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                            ? 0U : 
                                           ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                              << 0x00000010U) 
                                             + (0x0007fff0U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                                   << 4U))) 
                                            + ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                   ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                        << 0x00000010U) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                       ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 2U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                                   << 1U)))
                                       : ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 1U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                                   << 1U)))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_2__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_NxCHAddr__14__NxZMQT = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__ZMQT;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxZMHF = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__ZMHF;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFY = tb_top__DOT__u_dut__DOT__NC_Y;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX = tb_top__DOT__u_dut__DOT__NC_X;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))];
        vlSelfRef.__Vfunc_NxCHAddr__14__NxPN = vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN;
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK 
            = (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxZMQT) 
                << 1U) | ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxZMQT) 
                          | (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxZMHF)));
        if ((0U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__14__NxPN
                [((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX) 
                                  + (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                                      & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)) 
                                     << 3U)));
        } else if ((1U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__14__NxPN
                [(1U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                         >> 1U) & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX) 
                                  + (8U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK) 
                                              << 3U)))));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__14__NxPN[0U];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX));
        }
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX) 
                              ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFY) 
                              ^ (- (IData)((vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt 
            = (7U & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                     ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                         >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                            ? 0U : 
                                           (((0x0007fff0U 
                                              & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                 << 4U)) 
                                             + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                                << 4U)) 
                                            + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
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
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_2__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr;
    }
    tb_top__DOT__u_dut__DOT__N_CH01 = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_2__NxBMAddr;
    __Vfunc_NxPNMapIdx__9__NxZMQT = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMQT;
    __Vfunc_NxPNMapIdx__9__NxZMHF = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMHF;
    __Vfunc_NxPNMapIdx__9__NxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__PLSZ;
    __Vfunc_NxPNMapIdx__9__NxOFFY = tb_top__DOT__u_dut__DOT__N_Y;
    __Vfunc_NxPNMapIdx__9__NxOFFX = tb_top__DOT__u_dut__DOT__N_X;
    __Vfunc_NxPNMapIdx__9__NxPN_CNT = tb_top__DOT__u_dut__DOT__N_PCNT;
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNMapIdx__9__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNMapIdx__9__NxZMQT) 
                      | (IData)(__Vfunc_NxPNMapIdx__9__NxZMHF)));
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX = 
        (0x000007ffU & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFX) 
                        + (((IData)(__Vfunc_NxPNMapIdx__9__NxPN_CNT) 
                            & (IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK)) 
                           << 3U)));
    __Vfunc_NxPNMapIdx__9__Vfuncout = ((0U == (IData)(__Vfunc_NxPNMapIdx__9__NxPLSZ))
                                        ? ((2U & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFY) 
                                                  >> 8U)) 
                                           | (1U & 
                                              ((IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX) 
                                               >> 9U)))
                                        : ((1U == (IData)(__Vfunc_NxPNMapIdx__9__NxPLSZ))
                                            ? ((2U 
                                                & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFY) 
                                                   >> 8U)) 
                                               | (1U 
                                                  & ((IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX) 
                                                     >> 0x0aU)))
                                            : ((2U 
                                                & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFY) 
                                                   >> 9U)) 
                                               | (1U 
                                                  & ((IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX) 
                                                     >> 0x0aU)))));
    tb_top__DOT__u_dut__DOT__N_MPI = __Vfunc_NxPNMapIdx__9__Vfuncout;
    if (((~ (IData)(__VdfgRegularize_hebeb780c_0_1)) 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.__Vfunc_RxBMAddr__16__RxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFY = tb_top__DOT__u_dut__DOT__R_CY;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFX = tb_top__DOT__u_dut__DOT__R_CX;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
            [tb_top__DOT__u_dut__DOT__R_CSET].__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
            = ((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxBMSZ)
                ? ((0x0003fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFX)))
                : ((0x0001fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFX))));
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                             << 0x00000010U) 
                                            + (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                   ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                       << 0x00000010U) 
                                      + (0x0003fffeU 
                                         & vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                       ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0001fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 1U)))
                                       : (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0000fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 2U)))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_3__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_RxCHAddr__17__RxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
            [__VdfgRegularize_hebeb780c_0_1].__PVT__CHSZ;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
            [__VdfgRegularize_hebeb780c_0_1].__PVT__CHCN;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFY = tb_top__DOT__u_dut__DOT__R_CY;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFX = tb_top__DOT__u_dut__DOT__R_CX;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[1U]
            [__VdfgRegularize_hebeb780c_0_1];
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFX) 
                              ^ (- (IData)((1U & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFY) 
                              ^ (- (IData)((vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                            ? 0U : 
                                           ((0x0007fff0U 
                                             & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                                << 4U)) 
                                            + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                                << 4U) 
                                               | (0x0000000eU 
                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                     << 1U))))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                   ? ((0x0007fff0U 
                                       & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                          << 4U)) + 
                                      (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                        << 3U) | (6U 
                                                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs))))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                       ? ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                              << 4U)) 
                                          + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                              << 2U) 
                                             | (2U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                   >> 1U))))
                                       : ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_3__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr;
    }
    tb_top__DOT__u_dut__DOT__R_CHA = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_3__RxBMAddr;
    __Vfunc_RxPNMapIdx__11__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__R_PSET].__PVT__PLSZ;
    __Vfunc_RxPNMapIdx__11__RxOFFY = tb_top__DOT__u_dut__DOT__R_PY;
    __Vfunc_RxPNMapIdx__11__RxOFFX = tb_top__DOT__u_dut__DOT__R_PX;
    __Vfunc_RxPNMapIdx__11__Vfuncout = ((0U == (IData)(__Vfunc_RxPNMapIdx__11__RxPLSZ))
                                         ? ((0x0000000cU 
                                             & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFY) 
                                                >> 7U)) 
                                            | (3U & 
                                               ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFX) 
                                                >> 9U)))
                                         : ((1U == (IData)(__Vfunc_RxPNMapIdx__11__RxPLSZ))
                                             ? ((0x0000000cU 
                                                 & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFY) 
                                                    >> 7U)) 
                                                | (3U 
                                                   & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFX) 
                                                      >> 0x0aU)))
                                             : ((0x0000000cU 
                                                 & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFY) 
                                                    >> 8U)) 
                                                | (3U 
                                                   & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFX) 
                                                      >> 0x0aU)))));
    tb_top__DOT__u_dut__DOT__R_MPI = __Vfunc_RxPNMapIdx__11__Vfuncout;
    tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7 
        = (((IData)(__VdfgRegularize_hebeb780c_0_0) 
            << 1U) | (1U & ((IData)(tb_top__DOT__u_dut__DOT__N_MPI) 
                            >> 1U)));
    tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7 
        = (((IData)(tb_top__DOT__u_dut__DOT__R_PSET) 
            << 3U) | (7U & ((IData)(tb_top__DOT__u_dut__DOT__R_MPI) 
                            >> 1U)));
    tb_top__DOT__u_dut__DOT__N_MPW = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld) 
                                             >> (IData)(tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7)))
                                       ? vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem
                                      [tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7]
                                       : 0U);
    tb_top__DOT__u_dut__DOT__R_MPW = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld) 
                                             >> (IData)(tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7)))
                                       ? vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem
                                      [tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7]
                                       : 0U);
    __Vfunc_NxPNAddr2__10__NxZMQT = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMQT;
    __Vfunc_NxPNAddr2__10__NxZMHF = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMHF;
    __Vfunc_NxPNAddr2__10__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                          [__VdfgRegularize_hebeb780c_0_0]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr2__10__NxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__CHSZ;
    __Vfunc_NxPNAddr2__10__NxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__PLSZ;
    __Vfunc_NxPNAddr2__10__NxMPe = (0x0000003fU & (
                                                   (1U 
                                                    & (IData)(tb_top__DOT__u_dut__DOT__N_MPI))
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_dut__DOT__N_MPW) 
                                                    >> 8U)
                                                    : (IData)(tb_top__DOT__u_dut__DOT__N_MPW)));
    __Vfunc_NxPNAddr2__10__NxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__MP;
    __Vfunc_NxPNAddr2__10__NxOFFY = tb_top__DOT__u_dut__DOT__N_Y;
    __Vfunc_NxPNAddr2__10__NxOFFX = tb_top__DOT__u_dut__DOT__N_X;
    __Vfunc_NxPNAddr2__10__NxPN_CNT = tb_top__DOT__u_dut__DOT__N_PCNT;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNAddr2__10__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNAddr2__10__NxZMQT) 
                      | (IData)(__Vfunc_NxPNAddr2__10__NxZMHF)));
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX = 
        (0x000007ffU & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFX) 
                        + (((IData)(__Vfunc_NxPNAddr2__10__NxPN_CNT) 
                            & (IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK)) 
                           << 3U)));
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr2__10__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr2__10__NxMP) 
                << 6U) | ((0x0000003cU & (IData)(__Vfunc_NxPNAddr2__10__NxMPe)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr2__10__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr2__10__NxMP) 
                    << 6U) | ((0x0000003eU & (IData)(__Vfunc_NxPNAddr2__10__NxMPe)) 
                              | (1U & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr2__10__NxMP) 
                 << 6U) | (IData)(__Vfunc_NxPNAddr2__10__NxMPe))));
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr = 
        ((IData)(__Vfunc_NxPNAddr2__10__NxPNB) ? ((IData)(__Vfunc_NxPNAddr2__10__NxCHSZ)
                                                   ? 
                                                  (((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                                    << 0x0000000aU) 
                                                   | ((0x000003e0U 
                                                       & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                                          << 1U)) 
                                                      | (0x0000001fU 
                                                         & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                            >> 4U))))
                                                   : 
                                                  ((0x0007f000U 
                                                    & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                                       << 0x0000000cU)) 
                                                   | ((0x00000fc0U 
                                                       & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                                          << 3U)) 
                                                      | (0x0000003fU 
                                                         & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                            >> 3U)))))
          : ((IData)(__Vfunc_NxPNAddr2__10__NxCHSZ)
              ? ((0x0007f800U & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000bU)) | 
                 ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                  << 2U)) | (0x0000003eU 
                                             & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                >> 3U))))
              : ((0x0007e000U & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000dU)) | 
                 ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                  << 4U)) | (0x0000007eU 
                                             & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                >> 2U))))));
    __Vfunc_NxPNAddr2__10__Vfuncout = TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr;
    tb_top__DOT__u_dut__DOT__N_PNA = __Vfunc_NxPNAddr2__10__Vfuncout;
    __Vfunc_RxPNAddr2__12__RxPNB = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
                                          [__VdfgRegularize_hebeb780c_0_1]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_RxPNAddr2__12__RxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
        [__VdfgRegularize_hebeb780c_0_1].__PVT__CHSZ;
    __Vfunc_RxPNAddr2__12__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__R_PSET].__PVT__PLSZ;
    __Vfunc_RxPNAddr2__12__RxMPe = (0x0000003fU & (
                                                   (1U 
                                                    & (IData)(tb_top__DOT__u_dut__DOT__R_MPI))
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_dut__DOT__R_MPW) 
                                                    >> 8U)
                                                    : (IData)(tb_top__DOT__u_dut__DOT__R_MPW)));
    __Vfunc_RxPNAddr2__12__RxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__R_PSET].__PVT__MP;
    __Vfunc_RxPNAddr2__12__RxOFFY = tb_top__DOT__u_dut__DOT__R_PY;
    __Vfunc_RxPNAddr2__12__RxOFFX = tb_top__DOT__u_dut__DOT__R_PX;
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_RxPNAddr2__12__RxPLSZ))
            ? (((IData)(__Vfunc_RxPNAddr2__12__RxMP) 
                << 6U) | ((0x0000003cU & (IData)(__Vfunc_RxPNAddr2__12__RxMPe)) 
                          | ((2U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_RxPNAddr2__12__RxPLSZ))
                ? (((IData)(__Vfunc_RxPNAddr2__12__RxMP) 
                    << 6U) | ((0x0000003eU & (IData)(__Vfunc_RxPNAddr2__12__RxMPe)) 
                              | (1U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_RxPNAddr2__12__RxMP) 
                 << 6U) | (IData)(__Vfunc_RxPNAddr2__12__RxMPe))));
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr = 
        ((IData)(__Vfunc_RxPNAddr2__12__RxPNB) ? ((IData)(__Vfunc_RxPNAddr2__12__RxCHSZ)
                                                   ? 
                                                  (((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                                    << 0x0000000aU) 
                                                   | ((0x000003e0U 
                                                       & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                                          << 1U)) 
                                                      | (0x0000001fU 
                                                         & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                            >> 4U))))
                                                   : 
                                                  ((0x0007f000U 
                                                    & ((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                                       << 0x0000000cU)) 
                                                   | ((0x00000fc0U 
                                                       & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                                          << 3U)) 
                                                      | (0x0000003fU 
                                                         & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                            >> 3U)))))
          : ((IData)(__Vfunc_RxPNAddr2__12__RxCHSZ)
              ? ((0x0007f800U & ((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000bU)) | 
                 ((0x000007c0U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                  << 2U)) | (0x0000003eU 
                                             & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                >> 3U))))
              : ((0x0007e000U & ((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000dU)) | 
                 ((0x00001f80U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                  << 4U)) | (0x0000007eU 
                                             & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                >> 2U))))));
    __Vfunc_RxPNAddr2__12__Vfuncout = TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr;
    tb_top__DOT__u_dut__DOT__R_PNA = __Vfunc_RxPNAddr2__12__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__UO = (0x0007ffffU 
                                             & ((2U 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                                 [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                 ? vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR
                                                [__VdfgRegularize_hebeb780c_0_1]
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                  ? tb_top__DOT__u_dut__DOT__R_CHA
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                                   [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                   ? tb_top__DOT__u_dut__DOT__R_PNA
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                                    [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                    ? 
                                                   ((0x0007fffeU 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[32U]) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_OFFS) 
                                                     << 1U))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                                     [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                     ? 
                                                    ((IData)(__VdfgRegularize_hebeb780c_0_66)
                                                      ? tb_top__DOT__u_dut__DOT__N_CH23
                                                      : tb_top__DOT__u_dut__DOT__N_CH01)
                                                     : 
                                                    (tb_top__DOT__u_dut__DOT__N_PNA 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL] 
                                                                      >> 4U)))))))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__AD = (((QData)((IData)(
                                                              ((vlSelfRef.tb_top__DOT__u_dut__DOT__UO 
                                                                << 0x00000010U) 
                                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__HA[2U]))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HA[1U]) 
                                                                 << 0x00000010U) 
                                                                | vlSelfRef.tb_top__DOT__u_dut__DOT__HA[0U]))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH = ((3U 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__UO 
                                                     >> 0x00000010U)) 
                                                 == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USEL));
    vlSelfRef.tb_top__DOT__u_dut__DOT__HVS = (((((vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U] 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                                << 3U) 
                                               | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U] 
                                                      >> 2U)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__MT = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH) 
                                                << 1U) 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U]) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U]) 
                                                 << 1U) 
                                                | vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 0U;
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
             >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                          >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
             >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                          >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
             >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                          >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
           >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
           >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
           >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
           >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
           >> 2U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
           >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
           >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
           >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
           >> 3U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
           >> 3U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
           >> 3U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
           >> 3U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    tb_top__DOT__u_dut__DOT__HCTB = (((((vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[3U] 
                                         >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                       << 3U) | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[2U] 
                                                     >> 1U)) 
                                                 << 2U)) 
                                     | ((2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[1U] 
                                                 >> 1U) 
                                                << 1U) 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT))) 
                                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[0U] 
                                              >> 1U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[0U] 
        = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                  .__PVT__NxA0PN & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1PN & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                             >> 1U)))
                     ? 1U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[0U] 
        = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                  .__PVT__NxA0CH & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1CH & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                             >> 1U)))
                     ? 1U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxVS) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0VS 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1VS) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0VS) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1VS)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVSS[0U] 
        = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                  .__PVT__NxA0VS & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1VS & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                             >> 1U)))
                     ? 1U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0VS 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_CNT[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[1U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0PN >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1PN & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                     ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxB0PN 
                                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[1U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0CH >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1CH & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                     ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxB0CH 
                                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxVS) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0VS 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1VS) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0VS) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1VS)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVSS[1U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0VS >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1VS & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                     ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxB0VS 
                                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_CNT[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (4U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[2U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0PN >> 2U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1PN >> 2U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((4U & 
                                              (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__NxB0PN 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (4U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[2U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0CH >> 2U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1CH >> 2U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((4U & 
                                              (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__NxB0CH 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (8U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[3U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0PN >> 3U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1PN >> 3U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((1U & 
                                              ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                .__PVT__NxB0PN 
                                                >> 3U) 
                                               & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                  >> 2U)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (8U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[3U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0CH >> 3U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1CH >> 3U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((1U & 
                                              ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                .__PVT__NxB0CH 
                                                >> 3U) 
                                               & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                  >> 2U)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[3U];
    tb_top__DOT__u_dut__DOT__RB2_D = 0U;
    tb_top__DOT__u_dut__DOT__RB3_D = 0U;
    tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[0U]);
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00bfffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00400000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CT 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CT) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CT) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CT) 
                                            << 0x00000016U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fcffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                 .__PVT__RxA0CT 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CT 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                        .__PVT__RxB0CT 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x00000010U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00efffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00100000U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCRCT 
                                            << 0x00000014U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffbfffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00004000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0PN 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1PN) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0PN) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1PN) 
                                            << 0x0000000eU)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fff3ffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                 .__PVT__RxA0PN 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1PN 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                        .__PVT__RxB0PN 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x0000000aU));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffeffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[0U]) 
                                         << 8U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffffbfU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000040U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCTTP 
                                            << 6U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffffefU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000010U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CH 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CH) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CH) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CH) 
                                            << 4U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffffcU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                .__PVT__RxA0CH 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                          ? 0U : ((1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                      .__PVT__RxA1CH 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                         >> 1U)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0CH 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 2U)))
                                                    ? 2U
                                                    : 3U))));
    __VExpandSel_Lsb_5 = ((IData)(0x00000019U) + (0x0000001fU 
                                                  & ((IData)(0x0000000cU) 
                                                     * (IData)(tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc))));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0xf8U & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (7U & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_5))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                 [(
                                                   ((IData)(2U) 
                                                    + __VExpandSel_Lsb_5) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_5)))) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                  [
                                                  (__VExpandSel_Lsb_5 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_5)))));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0xbfU & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (0x00000040U 
                                         & (tb_top__DOT__u_dut__DOT__RB2_D 
                                            << 2U)));
    tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc = 1U;
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x007fffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00800000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CT 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CT) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CT) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CT) 
                                            << 0x00000016U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00f3ffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                  .__PVT__RxA0CT 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (2U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CT 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                         .__PVT__RxB0CT 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x00000012U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00dfffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00200000U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCRCT 
                                            << 0x00000014U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ff7fffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00008000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0PN 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1PN) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0PN) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1PN) 
                                            << 0x0000000eU)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffcfffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                  .__PVT__RxA0PN 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (2U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1PN 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                         .__PVT__RxB0PN 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x0000000cU));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffdffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[1U]) 
                                         << 9U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffff7fU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000080U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCTTP 
                                            << 6U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffffdfU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000020U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CH 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CH) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CH) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CH) 
                                            << 4U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffff3U 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                  .__PVT__RxA0CH 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (2U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CH 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                         .__PVT__RxB0CH 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 2U));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0xc7U & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (0x00000038U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[1U] 
                                            >> 2U)));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0x7fU & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (0x00000080U 
                                         & (tb_top__DOT__u_dut__DOT__RB2_D 
                                            << 2U)));
    __VdfgRegularize_hebeb780c_0_9 = (1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                          & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 0U;
    if ((1U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[0U]))));
    }
    if ((2U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[1U]))));
    }
    if ((4U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[2U]))));
    }
    if ((8U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[3U]))));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HVS) 
                                                 | (IData)(tb_top__DOT__u_dut__DOT__HCTB));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x0007ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__BS << 0x00000014U) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__LN << 0x00000013U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x00187fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__LS << 0x00000012U) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__LS_POS << 0x0000000fU))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001f9fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__LW << 0x0000000eU) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__LW_POS << 0x0000000dU))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ffdffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[0U]) 
                           << 9U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ffbffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[1U]) 
                           << 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ff7ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[2U]) 
                           << 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001fefffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[3U]) 
                           << 0x0000000cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ffe7fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__R0RP << 8U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                   .__PVT__RCTA 
                                                   << 7U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001fff9fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__RCTB << 6U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                   .__PVT__RPA 
                                                   << 5U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0x3fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RP_POS << 0x0000001eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001fffe0U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((0x3ffffff0U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RPB 
                                           << 4U)) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__RP_POS >> 2U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xc3ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
            << 0x0000001aU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffffff0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
            << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffffcfffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS 
            << 0x0000000cU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        (0xf0ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfff3ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[0U]) << 0x00000012U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xcfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCHS[0U]) << 0x0000001cU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xfeffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[0U]) << 0x00000018U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffcfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[1U]) << 0x00000014U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0x3fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCHS[1U]) << 0x0000001eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xfdffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[1U]) << 0x00000019U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xff3fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[2U]) << 0x00000016U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffffffcU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[2U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xfbffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[2U]) << 0x0000001aU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfcffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[3U]) << 0x00000018U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffffff3U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCHS[3U]) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xf7ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[3U]) << 0x0000001bU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffff3fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPN_CNT[0U]) << 0x0000000eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffffcffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxVSS[0U]) << 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffcffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPN_CNT[1U]) << 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffff3ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxVSS[1U]) << 0x0000000aU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xff000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | tb_top__DOT__u_dut__DOT__RB2_D);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x000001ffffffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                                      .__PVT__LS 
                                                                      << 4U) 
                                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                     .__PVT__NxPN))) 
                                                    << 0x00000029U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003e1fffffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                    .__PVT__NxCH)) 
                                                    << 0x00000025U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fff81ffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                              .__PVT__NxCH_CNT[1U]) 
                                                                      << 3U) 
                                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                     .__PVT__NxCH_CNT[0U]))) 
                                                    << 0x00000019U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fe07fffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                              .__PVT__NxCH_CNT[3U]) 
                                                                      << 3U) 
                                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                     .__PVT__NxCH_CNT[2U]))) 
                                                    << 0x0000001fU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003ffffe01ffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                                    << 0x00000011U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003ffffffeffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                                                                     >> 0x0000001fU))) 
                                                    << 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fffffff7fffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                                                                        >> 0x0000001eU)))) 
                                                    << 0x0000000fU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fffffff8000ULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | (IData)((IData)(
                                                                   (0x00007fffU 
                                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U]))));
    __VdfgRegularize_hebeb780c_0_61 = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                              & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                             | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U]) 
                                                | ((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U])))));
    __VdfgRegularize_hebeb780c_0_60 = ((2U & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                 >> 1U) 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                               | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                       >> 1U)) 
                                                   | (((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                       >> 1U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                            >> 1U)))) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                        >> 1U)))) 
                                              << 1U)) 
                                       | (IData)(__VdfgRegularize_hebeb780c_0_61));
    __VdfgRegularize_hebeb780c_0_59 = ((4U & (((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                  >> 2U) 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                    >> 2U)) 
                                                | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                       >> 2U)) 
                                                   | (((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                       >> 2U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                            >> 2U))))) 
                                               | ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH))) 
                                              << 2U)) 
                                       | (IData)(__VdfgRegularize_hebeb780c_0_60));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNEN = ((8U 
                                                  & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                        >> 3U) 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 3U)) 
                                                      | (((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                          >> 3U) 
                                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                                >> 3U)) 
                                                            | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                                   >> 3U)) 
                                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                                     >> 3U)))))) 
                                                     << 3U)) 
                                                 | (IData)(__VdfgRegularize_hebeb780c_0_59));
}

void Vtb_top___024root___ico_comb__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ico_comb__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_WE = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL) 
                                                 & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_WE = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51));
    vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51));
    vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
            & ((~ (IData)(vlSelfRef.DTEN_N)) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BURST))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ = 
        ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
            & ((~ (IData)(vlSelfRef.DTEN_N)) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST))));
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
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal2__WREN_B 
        = (3U & (- (IData)((((1U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                           >> 0x0000000cU)))
                              ? (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                 >> 0x0000000aU) : 
                             (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                              | (2U > (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                             >> 0x0000000cU))))) 
                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_WE)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal1__WREN_B 
        = (3U & (- (IData)((((1U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                           >> 0x0000000cU)))
                              ? (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                    >> 0x0000000aU))
                              : ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__A) 
                                 | (2U > (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                >> 0x0000000cU))))) 
                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_WE)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b1____pinNumber4 
        = (((0x0fU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (0x0eU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b0____pinNumber4 
        = (((0x0dU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (0x0cU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a1____pinNumber4 
        = (((0x0bU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (0x0aU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a0____pinNumber4 
        = (((9U == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (8U == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber4 
        = (((5U == (0x0000001fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                   >> 3U))) | (6U == 
                                               (0x0000001fU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                                   >> 3U)))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber4 
        = (IData)(((0x00000020U == (0x000000f8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR)));
}

void Vtb_top___024root___eval_body__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_body__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL 
                = (((~ (IData)(vlSelfRef.CS_N)) & (~ (IData)(vlSelfRef.AD_N))) 
                   & (0x000c0000U == (0x000e0000U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL 
                = (1U & (~ ((IData)(vlSelfRef.CS_N) 
                            | ((IData)(vlSelfRef.AD_N) 
                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                  >> 0x00000013U)))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL 
                = (1U & (~ ((IData)(vlSelfRef.CS_N) 
                            | ((IData)(vlSelfRef.AD_N) 
                               | (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                  >> 0x00000013U)))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL 
                = (((~ (IData)(vlSelfRef.CS_N)) & (~ (IData)(vlSelfRef.AD_N))) 
                   & (0x00080000U == (0x000c0000U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL 
                = (((~ (IData)(vlSelfRef.CS_N)) & (~ (IData)(vlSelfRef.AD_N))) 
                   & (0x00080000U == (0x000c0000U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL 
                = (((~ (IData)(vlSelfRef.CS_N)) & (~ (IData)(vlSelfRef.AD_N))) 
                   & (0x000c0000U == (0x000e0000U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)));
        }
    }
    if ((0x00000000000000a0ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            if (vlSelfRef.AD_N) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR 
                    = (0x000007ffU & ((0x00000700U 
                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__A) 
                                      | (0x000000ffU 
                                         & (IData)(vlSelfRef.DI))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR 
                    = (0x000007ffU & ((0x00000700U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__A) 
                                      | (0x000000ffU 
                                         & (IData)(vlSelfRef.DI))));
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
                vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A 
                = (0x000003ffU & ((2U <= (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                >> 0x0000000cU)))
                                   ? ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR) 
                                      >> 1U) : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A 
                = (0x000003ffU & ((2U <= (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                >> 0x0000000cU)))
                                   ? ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR) 
                                      >> 1U) : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR)));
        }
    }
    if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_top___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__2
            vlSelfRef.__VdfgRegularize_hebeb780c_0_49 
                = (1U & ((~ (IData)(vlSelfRef.DTEN_N)) 
                         & (~ (IData)(vlSelfRef.REQ_N))));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_51 
                = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49));
        }
    }
    if ((0x00000000000002c0ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__3
            vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ 
                = ((~ (IData)(vlSelfRef.REQ_N)) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ 
                = ((~ (IData)(vlSelfRef.REQ_N)) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL));
        }
    }
    if ((0x00000000000003c0ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_top___024root___ico_comb__TOP__4(vlSelf);
    }
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
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

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__tb_top__DOT__u_dut__DOT__whit33__DOT__wp;
    __Vdly__tb_top__DOT__u_dut__DOT__whit33__DOT__wp = 0;
    CData/*5:0*/ __Vdly__tb_top__DOT__u_dut__DOT__whit8__DOT__wp;
    __Vdly__tb_top__DOT__u_dut__DOT__whit8__DOT__wp = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__HA__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__HA__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v1;
    __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__HA__v1;
    __VdlySet__tb_top__DOT__u_dut__DOT__HA__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v2;
    __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__HA__v2;
    __VdlySet__tb_top__DOT__u_dut__DOT__HA__v2 = 0;
    QData/*63:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 = 0;
    QData/*35:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 = 0;
    QData/*35:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DOTCLK_DIV 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV;
    __VdlySet__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp;
    __VdlySet__tb_top__DOT__u_dut__DOT__HA__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__HA__v1 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__HA__v2 = 0U;
    __Vdly__tb_top__DOT__u_dut__DOT__whit8__DOT__wp 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp;
    __Vdly__tb_top__DOT__u_dut__DOT__whit33__DOT__wp 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp;
    __VdlySet__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DOTCLK_DIV 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WE) {
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WE) {
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD2;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD1;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD3;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD3;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 = 1U;
        __VdlyVal__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD2;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        __VdlySet__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0 = 1U;
        __VdlyVal__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD3;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        __VdlySet__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0 = 1U;
        __VdlyVal__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD1;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        __VdlySet__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0 = 1U;
        __VdlyVal__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 
            = (((QData)((IData)((((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][7U]) 
                                    << 8U) | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][6U]) 
                                  << 0x00000010U) | 
                                 (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][5U]) 
                                   << 8U) | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][4U])))) 
                << 0x00000020U) | (QData)((IData)((
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][2U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][1U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][0U])))));
        __VdlyDim0__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
        __VdlySet__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal2__WREN_B))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal2__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.DI));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal2__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.DI) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal1__WREN_B))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal1__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.DI));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__pal1__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.DI) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal2__WREN_B))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal2__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.DI));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal2__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.DI) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal1__WREN_B))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal1__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.DI));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____Vcellinp__pal1__WREN_B))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.DI) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__r_xp____pinNumber2) {
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__SUMY;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                        >> 3U)));
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__SUMX;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                        >> 3U)));
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__r_dx____pinNumber2) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__SUMY;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                        >> 3U)));
        __VdlySet__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0 = 1U;
        __VdlyVal__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__SUMX;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                        >> 3U)));
        __VdlySet__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.RES_N) {
        if (vlSelfRef.CE_R) {
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DOTCLK_DIV 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DOTCLK_DIV 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DOTCLK_DIV = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DOTCLK_DIV = 0U;
    }
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ) {
        __VdlyVal__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 
            = (((QData)((IData)((0x0003ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A))) 
                << 0x00000012U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DQM) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.DI)))));
        __VdlyDim0__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__WADDR;
        __VdlySet__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 
            = (((QData)((IData)((0x0003ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
                << 0x00000012U) | (QData)((IData)((
                                                   ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DQM) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.DI)))));
        __VdlyDim0__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__WADDR;
        __VdlySet__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber4) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 
            = (0x3f3fU & (IData)(vlSelfRef.DI));
        __VdlyDim0__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber5;
        __VdlySet__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber4) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 
            = (0x3f3fU & (IData)(vlSelfRef.DI));
        __VdlyDim0__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 
            = (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
        __VdlySet__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp) 
                              + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 
            = ((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                [vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP]
                .__PVT__KLCE << 7U) | vlSelfRef.tb_top__DOT__u_dut__DOT__RPxLCSD
               [vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP]);
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0[0U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0[1U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0[2U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U];
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wp;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[0U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[1U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[2U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[3U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[4U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[5U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[6U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U];
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[7U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U];
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wp;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wp;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 = 1U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__USL = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wp 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wpn;
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wp 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn;
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wp 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wpn;
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__USL = ((2U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USL))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USL))));
    }
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USEL))) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v0 
            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__UO);
        __VdlySet__tb_top__DOT__u_dut__DOT__HA__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v0 = 1U;
    }
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USEL))) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v1 
            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__UO);
        __VdlySet__tb_top__DOT__u_dut__DOT__HA__v1 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v1 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v1 = 1U;
    }
    if ((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USEL))) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v2 
            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__UO);
        __VdlySet__tb_top__DOT__u_dut__DOT__HA__v2 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v2 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v2 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN) {
        __Vdly__tb_top__DOT__u_dut__DOT__whit8__DOT__wp 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp) 
                              + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN)));
        __Vdly__tb_top__DOT__u_dut__DOT__whit33__DOT__wp 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp) 
                              + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN)));
        __VdlyVal__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__whit33____pinNumber3;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp;
        __VdlySet__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0 = 1U;
        __VdlyVal__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__whit33____pinNumber3;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp;
        __VdlySet__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0 = 1U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT34 = vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem
            [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp) 
                             - (IData)(0x21U)))];
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_Y))) {
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_Y) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 
                = (vlSelfRef.tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem
                   [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                           >> 1U))] + vlSelfRef.tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem
                   [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                           >> 1U))]);
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                         >> 1U));
        } else {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 
                = (vlSelfRef.tb_top__DOT__u_dut__DOT__SUMY 
                   & (- (IData)(((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W) 
                                   & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                         >> 0x0000001fU))) 
                                  & (4U == (6U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]))) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53)))));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 
                = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                            >> 3U)));
        }
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_X))) {
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_X) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 
                = (vlSelfRef.tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem
                   [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                           >> 1U))] + vlSelfRef.tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem
                   [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                           >> 1U))]);
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                         >> 1U));
        } else {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 
                = (vlSelfRef.tb_top__DOT__u_dut__DOT__SUMX 
                   & (- (IData)(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W)) 
                                  & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                        >> 0x0000001fU))) 
                                 & (4U == (6U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]))))));
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 
                = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                            >> 3U)));
        }
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b1____pinNumber4) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.DI;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 
            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
        __VdlySet__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a1____pinNumber4) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.DI;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 
            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
        __VdlySet__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b0____pinNumber4) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.DI;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 
            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
        __VdlySet__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a0____pinNumber4) {
        __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 
            = vlSelfRef.DI;
        __VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 
            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
        __VdlySet__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if ((IData)((((0U == (0xc0000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) 
                  & (1U == (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]))) 
                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W)))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 
            = ((- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                    >> 0x0000001eU))))) 
               & (((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))
                    ? vlSelfRef.__VdfgRegularize_hebeb780c_0_55
                    : (vlSelfRef.tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem
                       [(1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 3U)))] + vlSelfRef.__VdfgRegularize_hebeb780c_0_56)) 
                  & (- (IData)((((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                     >> 0x0000001fU)) 
                                 & (1U == (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]))) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W))))));
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                        >> 3U)));
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if ((IData)(((1U == (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) 
                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 
            = (((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))
                 ? vlSelfRef.__VdfgRegularize_hebeb780c_0_55
                 : (vlSelfRef.tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem
                    [(1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                               >> 3U)))] + vlSelfRef.__VdfgRegularize_hebeb780c_0_56)) 
               & (- (IData)((IData)((((0x40000000U 
                                       == (0xc0000000U 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) 
                                      & (1U == (7U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]))) 
                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W))))));
        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                        >> 3U)));
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 = 1U;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[__VdlyDim0__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__HA__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__HA[0U] = __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__HA__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__HA[1U] = __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v1;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__HA__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__HA[2U] = __VdlyVal__tb_top__DOT__u_dut__DOT__HA__v2;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp 
        = __Vdly__tb_top__DOT__u_dut__DOT__whit8__DOT__wp;
    if (__VdlySet__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem[__VdlyDim0__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem__v0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp 
        = __Vdly__tb_top__DOT__u_dut__DOT__whit33__DOT__wp;
}

void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vfunc_PNData__228__PNC;
    __Vfunc_PNData__228__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__228__CHSZ;
    __Vfunc_PNData__228__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__228__CHCN;
    __Vfunc_PNData__228__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__228__DW;
    __Vfunc_PNData__228__DW = 0;
    SData/*15:0*/ __Vfunc_PNData__229__PNC;
    __Vfunc_PNData__229__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__229__CHSZ;
    __Vfunc_PNData__229__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__229__CHCN;
    __Vfunc_PNData__229__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__229__DW;
    __Vfunc_PNData__229__DW = 0;
    SData/*15:0*/ __Vfunc_PNData__230__PNC;
    __Vfunc_PNData__230__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__230__CHSZ;
    __Vfunc_PNData__230__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__230__CHCN;
    __Vfunc_PNData__230__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__230__DW;
    __Vfunc_PNData__230__DW = 0;
    SData/*15:0*/ __Vfunc_PNData__231__PNC;
    __Vfunc_PNData__231__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__231__CHSZ;
    __Vfunc_PNData__231__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__231__CHCN;
    __Vfunc_PNData__231__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__231__DW;
    __Vfunc_PNData__231__DW = 0;
    // Body
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A = vlSelfRef.tb_top__DOT__u_ref__DOT__A;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A = vlSelfRef.tb_top__DOT__u_dut__DOT__A;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NVCSY__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP4__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP0__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP5__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP2__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP1__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP3__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP6__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP7__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC0__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC1__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC2__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC3__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__CELLX 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v8 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_HCNT 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT9 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VCT;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__HCT;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__H_CNT 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__ODD 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__ODD;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DISP_INT 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v9 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v10 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v11 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v12 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v13 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v13 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v15 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v9 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v17 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v4 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REG_RRDY 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RRDY;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v9 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v13 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v15 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v17 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v9 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v10 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v11 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v12 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v13 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v12 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v12 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v16 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v3 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WLOCK;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v4 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LS_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LW_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v1 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Xst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Xst;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Yst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Yst;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Zst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Zst;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DXst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DXst;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DYst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DYst;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DX 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DX;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DY 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DY;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PX 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PX;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PY 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PY;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PZ 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PZ;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CX 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CX;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CY 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CY;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CZ 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CZ;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_KAst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KAst;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DKAst 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DKAst;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_KX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_KY__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__dX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__dY__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xp__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yp__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Ysp__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAst__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RxCTTP__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RxX__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_VCNT 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_VCNT;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NY__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NY__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v4 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NVCSY__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v8 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP0__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP6__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP1__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP2__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP3__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP4__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP5__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP7__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__NDC_PTR 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_HCNT 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT9 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VCT;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__HCT;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__H_CNT 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__ODD 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__ODD;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__CELLX 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAst__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v2 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DISP_INT 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH;
    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxX__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk37__DOT__REG_RD_DELAY 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk37__DOT__REG_RD_DELAY;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REG_RRDY 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RRDY;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v4 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LW_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LS_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v4 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VS_OFFS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VS_OFFS;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v8 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v12 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v6 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_VCNT 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_VCNT;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NY__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NY__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v5 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_READ_PEND 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PEND;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WE 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WE;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v5 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WLOCK 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WLOCK;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH;
    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH;
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.RES_N) {
            if (((((~ (IData)(vlSelfRef.CS_N)) & (IData)(vlSelfRef.DTEN_N)) 
                  & (IData)(vlSelfRef.AD_N)) & (IData)(vlSelfRef.CE_R))) {
                if ((0x00008000U & (IData)(vlSelfRef.DI))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A 
                        = ((0x000fff00U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A) 
                           | (0x000000ffU & (IData)(vlSelfRef.DI)));
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A 
                        = ((0x000fff00U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A) 
                           | (0x000000ffU & (IData)(vlSelfRef.DI)));
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A 
                        = ((0x000000ffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A) 
                           | (0x000fff00U & ((IData)(vlSelfRef.DI) 
                                             << 8U)));
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A 
                        = ((0x000000ffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A) 
                           | (0x000fff00U & ((IData)(vlSelfRef.DI) 
                                             << 8U)));
                }
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL)) 
                  | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL)) 
                 & (~ (IData)(vlSelfRef.REQ_N)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A 
                    = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_top__DOT__u_ref__DOT__A));
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL)) 
                  | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL)) 
                 & (~ (IData)(vlSelfRef.REQ_N)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A 
                    = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__A));
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__CELLX 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX)));
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x01a9U : 0x018dU) - (IData)(1U))) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__CELLX = 0U;
                }
                if (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                         >> 0x0000001fU)) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DISP_INT = 0U;
                }
                if ((((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                       >> 0x0000001fU) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK)) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DISP_INT = 1U;
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A = 0x000fffffU;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A = 0x000fffffU;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__CELLX = 0U;
        }
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[0U] 
            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                              + vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[0U]));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[1U] 
            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                              + vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[1U]));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[2U] 
            = (0x0007ffffU & ((IData)(0x00000100U) 
                              + vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[2U]));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[3U] 
            = (0x0007ffffU & ((IData)(0x00000100U) 
                              + vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[3U]));
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
             | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                   >> 1U)))) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[0U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v3 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[3U];
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_HCNT 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT)));
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT) 
                     == (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                                        >> 8U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_HCNT = 0U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
             | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v8 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v9 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[8U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v10 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[9U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v11 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[10U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v12 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[11U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v13 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[12U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v14 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[13U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v15 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[14U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v16 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[15U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v17 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[16U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v18 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[17U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v19 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[18U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v20 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[19U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v21 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[20U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v22 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[21U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v23 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[22U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v24 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[23U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v25 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[24U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v26 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[25U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v27 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[26U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v28 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[27U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v29 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[28U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v30 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[29U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v31 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[30U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v32 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[31U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v33 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[32U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v8 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v9 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[8U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v10 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[9U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v11 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[10U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v12 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[11U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v13 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[12U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v14 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[13U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v15 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[14U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v16 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[15U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v17 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[16U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v18 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[17U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v19 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[18U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v20 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[19U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v21 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[20U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v22 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[21U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v23 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[22U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v24 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[23U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v25 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[24U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v26 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[25U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v27 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[26U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v28 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[27U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v29 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[28U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v30 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[29U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v31 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[30U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v32 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[31U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v33 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[32U];
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F)))) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x019dU : 0x0181U) - (IData)(1U))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_VISIBLE_LINES) 
                        | (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY 
                        = (0x000001ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY)));
                    if ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY = 0U;
                    }
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[0U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD
                [vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[0U];
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[7U];
            vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[0U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                [vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP]
                .__PVT__KLCE;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[0U];
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[7U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[1U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[2U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[1U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[3U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[4U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[2U];
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START_EN) 
                 | (7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX)))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NVCSY__v0 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__VS[0U] 
                       & (- (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                     .__PVT__VCSC & 
                                     (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                      .__PVT__MZE)))));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NVCSY__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NVCSY__v1 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__VS[1U] 
                       & (- (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                     .__PVT__VCSC & 
                                     (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                      .__PVT__MZE)))));
            }
            if ((7U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                        | (4U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                 << 1U))))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP4__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP4[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP4__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP4__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[4U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP0__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP0__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP0__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP5__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP5[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP5__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP5__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[5U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP2__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP2[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP2__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP2__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP1__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP1__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP1__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP3__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP3[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP3__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP3__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[3U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP6__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP6[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP6__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP6__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[6U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP7__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP7[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP7__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP7__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[7U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[8U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC0__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[9U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v3 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v4 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[10U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v5 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v6 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[11U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v7 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][3U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v8 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[12U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v9 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][4U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v10 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[13U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v11 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][5U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v12 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[14U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v13 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][6U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v14 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[15U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v15 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][7U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[8U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC1__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[9U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v3 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v4 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[10U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v5 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v6 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[11U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v7 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][3U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v8 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[12U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v9 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][4U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v10 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[13U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v11 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][5U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v12 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[14U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v13 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][6U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v14 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[15U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v15 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][7U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[8U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC2__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[9U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v3 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v4 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[10U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v5 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v6 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[11U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v7 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][3U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v8 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[12U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v9 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][4U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v10 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[13U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v11 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][5U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v12 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[14U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v13 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][6U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v14 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[15U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v15 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][7U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[8U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC3__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[9U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v3 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v4 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[10U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v5 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v6 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[11U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v7 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][3U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v8 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[12U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v9 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][4U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v10 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[13U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v11 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][5U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v12 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[14U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v13 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][6U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v14 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[15U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v15 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][7U];
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 
                = ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                     | (0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1))) 
                    | (0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0))) 
                   | (0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 
                = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1 
                = ((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                     | (1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1))) 
                    | (1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0))) 
                   | (1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1 
                = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2 
                = ((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                     | (2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1))) 
                    | (2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0))) 
                   | (2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2 
                = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3 
                = ((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                     | (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1))) 
                    | (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0))) 
                   | (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3 
                = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                      >> 1U)) << 2U))));
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH) {
                if ((7U == (7U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX) 
                                  | (4U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                           << 1U)))))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v4 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[0U]);
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v4 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v5 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[1U]);
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v6 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[2U]);
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v7 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk19__DOT__X[3U]);
                }
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[3U]
                .__PVT__LS) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v8 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[0U]);
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v8 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v9 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[1U]);
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v10 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[2U]);
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v11 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[3U]);
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F)))) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX)));
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x01b9U : 0x019dU) - (IData)(1U))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_VISIBLE_LINES) 
                        | (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX = 0U;
                }
            }
        }
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN 
            = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxPN) | (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0PN 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1PN) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0PN) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1PN)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPNS[0U] 
            = ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                               [(3U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                               >> 0x10U))))
                ? 0U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                         .__PVT__NxA1PN & (1U == (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                     [
                                                     (3U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                     >> 0x10U))))
                         ? 1U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                  .__PVT__NxB0PN & 
                                  (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                [(3U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH 
            = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxCH) | (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0CH 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1CH) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0CH) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1CH)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCHS[0U] 
            = ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                               [(3U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                               >> 0x10U))))
                ? 0U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                         .__PVT__NxA1CH & (1U == (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                     [
                                                     (3U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                     >> 0x10U))))
                         ? 1U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                  .__PVT__NxB0CH & 
                                  (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                [(3U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxVS 
            = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxVS) | (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0VS 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1VS) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0VS) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1VS)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxVSS[0U] 
            = ((IData)(((0U == (0x00030000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR)) 
                        & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                        .__PVT__NxA0VS)) ? 0U : ((IData)(
                                                         ((0x00010000U 
                                                           == 
                                                           (0x00030000U 
                                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR)) 
                                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                          .__PVT__NxA1VS))
                                                  ? 1U
                                                  : 
                                                 ((IData)(
                                                          ((0x00020000U 
                                                            == 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR)) 
                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                           .__PVT__NxB0VS))
                                                   ? 2U
                                                   : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN_CNT[0U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[0U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN_EN[0U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[0U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_CNT[0U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[0U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_EN[0U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[0U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN 
            = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxPN) | (2U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0PN 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1PN) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0PN) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1PN)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPNS[1U] 
            = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                 .__PVT__NxA0PN >> 1U) & (0U == (3U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                    [
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                    >> 0x10U))))
                ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__NxA1PN >> 1U) & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                       >> 0x10U))))
                         ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                   .__PVT__NxB0PN >> 1U) 
                                  & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH 
            = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxCH) | (2U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0CH 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1CH) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0CH) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1CH)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCHS[1U] 
            = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                 .__PVT__NxA0CH >> 1U) & (0U == (3U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                    [
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                    >> 0x10U))))
                ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__NxA1CH >> 1U) & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                       >> 0x10U))))
                         ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                   .__PVT__NxB0CH >> 1U) 
                                  & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxVS 
            = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxVS) | (2U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0VS 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1VS) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0VS) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1VS)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxVSS[1U] 
            = ((IData)(((0U == (0x00030000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR)) 
                        & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                           .__PVT__NxA0VS >> 1U))) ? 0U
                : ((IData)(((0x00010000U == (0x00030000U 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR)) 
                            & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                               .__PVT__NxA1VS >> 1U)))
                    ? 1U : ((IData)(((0x00020000U == 
                                      (0x00030000U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR)) 
                                     & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0VS 
                                        >> 1U))) ? 2U
                             : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN_CNT[1U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[1U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN_EN[1U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[1U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_CNT[1U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_EN[1U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[1U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN 
            = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxPN) | (4U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0PN 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1PN) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0PN) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1PN)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPNS[2U] 
            = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                 .__PVT__NxA0PN >> 2U) & (0U == (3U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                    [
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                    >> 0x10U))))
                ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__NxA1PN >> 2U) & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                       >> 0x10U))))
                         ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                   .__PVT__NxB0PN >> 2U) 
                                  & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH 
            = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxCH) | (4U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0CH 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1CH) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0CH) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1CH)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCHS[2U] 
            = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                 .__PVT__NxA0CH >> 2U) & (0U == (3U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                    [
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                    >> 0x10U))))
                ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__NxA1CH >> 2U) & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                       >> 0x10U))))
                         ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                   .__PVT__NxB0CH >> 2U) 
                                  & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN_EN[2U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[2U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_CNT[2U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[2U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_EN[2U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[2U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN 
            = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxPN) | (8U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0PN 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1PN) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0PN) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1PN)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPNS[3U] 
            = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                 .__PVT__NxA0PN >> 3U) & (0U == (3U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                    [
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                    >> 0x10U))))
                ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__NxA1PN >> 3U) & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                       >> 0x10U))))
                         ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                   .__PVT__NxB0PN >> 3U) 
                                  & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH 
            = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U]
                .__PVT__NxCH) | (8U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA0CH 
                                         | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                         .__PVT__NxA1CH) 
                                        | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                        .__PVT__NxB0CH) 
                                       | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__NxB1CH)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCHS[3U] 
            = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                 .__PVT__NxA0CH >> 3U) & (0U == (3U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                    [
                                                    (3U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                    >> 0x10U))))
                ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__NxA1CH >> 3U) & (1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                       >> 0x10U))))
                         ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                   .__PVT__NxB0CH >> 3U) 
                                  & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U))))
                                  ? 2U : 3U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxPN_EN[3U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[3U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_CNT[3U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[3U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U].__PVT__NxCH_EN[3U] 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[3U];
        if (vlSelfRef.CE_R) {
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxPN & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[0U])) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[0U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxPNS[0U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxPNS[0U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxPNS[0U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxPN_CNT[0U];
                if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__228__DW = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[0U] 
                                                   >> 0x10U);
                        __Vfunc_PNData__228__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__228__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__228__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__228__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__228__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__228__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__228__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__228__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__228__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__228__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__228__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__228__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__228__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__228__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__228__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__228__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__228__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__228__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__228__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__228__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__228__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__228__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__228__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__228__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__228__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__228__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__228__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__228__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__228__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__228__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_38__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_39 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_38__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_39 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[0U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_39;
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 
                        = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__ZMQT | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__ZMHF) & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[0U]) 
                            << 2U) | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                       .__PVT__ZMQT 
                                       & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[0U] 
                                          >> 1U)) << 1U));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 = 1U;
                }
            }
            if (((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                  .__PVT__NxPN >> 1U) & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[1U])) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[1U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxPNS[1U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxPNS[1U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxPNS[1U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxPN_CNT[1U];
                if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__228__DW = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[1U] 
                                                   >> 0x10U);
                        __Vfunc_PNData__228__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__228__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__228__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__228__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__228__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__228__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__228__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__228__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__228__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__228__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__228__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__228__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__228__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__228__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__228__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__228__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__228__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__228__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__228__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__228__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__228__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__228__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__228__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__228__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__228__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__228__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__228__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__228__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__228__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__228__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_38__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_39 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_38__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_39 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[1U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_39;
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 
                        = (1U | ((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__ZMQT | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__ZMHF) & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[1U]) 
                                  << 2U) | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                             .__PVT__ZMQT 
                                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[1U] 
                                                >> 1U)) 
                                            << 1U)));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 = 1U;
                }
            }
            if (((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                  .__PVT__NxPN >> 2U) & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[2U])) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[2U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxPNS[2U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxPNS[2U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxPNS[2U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[2U] = 0U;
                if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__229__DW = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[2U] 
                                                   >> 0x10U);
                        __Vfunc_PNData__229__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__229__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__229__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__229__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__229__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__229__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__229__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__229__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__229__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__229__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__229__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__229__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__229__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__229__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__229__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__229__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__229__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__229__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__229__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__229__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__229__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__229__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__229__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__229__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__229__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__229__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__229__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__229__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__229__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__229__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_40__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_41 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_40__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_41 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[2U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v2 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_41;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v2 = 1U;
                }
            }
            if (((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                  .__PVT__NxPN >> 3U) & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[3U])) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[3U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxPNS[3U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxPNS[3U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxPNS[3U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_CNT[3U] = 0U;
                if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__229__DW = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[3U] 
                                                   >> 0x10U);
                        __Vfunc_PNData__229__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__229__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__229__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__229__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__229__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__229__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__229__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__229__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__229__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__229__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__229__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__229__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__229__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__229__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__229__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__229__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__229__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__229__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__229__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__229__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__229__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__229__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__229__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__229__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__229__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__229__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__229__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__229__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__229__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__229__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_40__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_41 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_40__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_41 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_WD[3U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v3 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_41;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v3 = 1U;
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[3U]
                .__PVT__LS) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_HCNT = 0U;
            }
            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxVS)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[0U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxVSS[0U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxVSS[0U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxVSS[0U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v0 
                    = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[0U] 
                                      >> 0x10U));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VS__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v1 
                    = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[0U] 
                                      >> 8U));
            }
            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxVS)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[1U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxVSS[1U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxVSS[1U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxVSS[1U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v2 
                    = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[1U] 
                                      >> 0x10U));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VS__v2 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v3 
                    = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__VS_WD[1U] 
                                      >> 8U));
            }
            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxCH)) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxCHS[0U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxCHS[0U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxCHS[0U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0 = 1U;
            }
            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxCH)) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxCHS[1U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxCHS[1U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxCHS[1U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1 = 1U;
            }
            if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxCH)) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxCHS[2U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxCHS[2U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxCHS[2U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2 = 1U;
            }
            if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                 .__PVT__NxCH)) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                        .__PVT__NxCHS[3U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                                               .__PVT__NxCHS[3U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                            .__PVT__NxCHS[3U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3 = 1U;
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[3U] = 0U;
            if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                       .__PVT__CHCN 
                                       >> 2U)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[3U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                               >> 0x0000001eU)));
            } else if ((2U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                              .__PVT__NxCH & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__CHCN))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[1U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                    = (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH >> 1U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                               >> 0x0000001eU)));
            } else if (((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                         .__PVT__NxCH >> 1U) & (((0U 
                                                  == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                  .__PVT__CHCN) 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                 .__PVT__ZMQT) 
                                                | ((1U 
                                                    == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                    .__PVT__CHCN) 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                   .__PVT__ZMHF)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[1U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH >> 1U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                               >> 0x0000001eU)));
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[3U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][3U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][3U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][3U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[3U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[3U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[3U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][3U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH >> 3U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
                                               >> 0x0000001eU)));
            }
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[3U] 
                 & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[3U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 
                                = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 
                                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v2 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v2 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                   >> 2U)) & (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                                   >> 1U)) 
                                               & (~ 
                                                  (((1U 
                                                     == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                    .__PVT__ZMHF) 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                   .__PVT__ON))) 
                                              | (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                                   >> 1U) 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                 .__PVT__ON))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v4 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v4 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v5 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v5 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v6 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v6 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U])))));
                    }
                } else if (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                >> 2U)) & (((0U == 
                                             (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U])) 
                                            & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                  .__PVT__ZMQT 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                  .__PVT__ON))) 
                                           | (((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U])) 
                                               & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                               .__PVT__ZMQT) 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                              .__PVT__ON)))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v8 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v8 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v9 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v9 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v10 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v10 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v11 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v11 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v12 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v12 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v13 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v13 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v14 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[3U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v14 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[3U]))));
                }
                if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U] 
                                  >> 1U)))) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[3U])) {
                            if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                           >> 2U)) 
                                       & (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                               >> 1U)) 
                                           & (~ (((1U 
                                                   == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                   .__PVT__CHCN) 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                 .__PVT__ON))) 
                                          | (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                               >> 1U) 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                              .__PVT__ZMHF) 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                             .__PVT__ON))))) {
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v0 
                                    = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U]) 
                                          << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U]) 
                                        << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U]) 
                                                  << 1U));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v0 = 1U;
                            }
                        } else if (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U] 
                                        >> 2U)) & (
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U])) 
                                                    & (~ 
                                                       (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                        .__PVT__ZMQT 
                                                        & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                        .__PVT__ON))) 
                                                   | (((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[3U])) 
                                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                       .__PVT__ZMQT) 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                      .__PVT__ON)))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v1 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[3U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[3U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[3U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v1 = 1U;
                        }
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[2U] = 0U;
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                 .__PVT__NxCH & (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                              .__PVT__CHCN 
                                              >> 1U))))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[2U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                               >> 0x0000001eU)));
            } else if ((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                        .__PVT__NxCH & (((0U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__CHCN) 
                                         & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                         .__PVT__ZMQT) 
                                        | ((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                            .__PVT__CHCN) 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                           .__PVT__ZMHF)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[2U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
                                               >> 0x0000001eU)));
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[2U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[2U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[2U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[2U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[2U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH >> 2U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
                                               >> 0x0000001eU)));
            }
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[2U] 
                 & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[2U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                                  >> 8U));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 
                                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v17 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v17 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                   >> 2U)) & (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                                   >> 1U)) 
                                               & (~ 
                                                  (((1U 
                                                     == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                    .__PVT__ZMHF) 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                   .__PVT__ON))) 
                                              | (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                                   >> 1U) 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                 .__PVT__ON))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v19 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v19 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v20 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v20 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v21 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v21 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U])))));
                    }
                } else if (((((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                  >> 2U)) & (3U == 
                                             (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U]))) 
                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                             .__PVT__ZMQT) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__ON)) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v23 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v23 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v24 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v24 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v25 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v25 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v26 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v26 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v27 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v27 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v28 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v28 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v29 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v29 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[6U]))));
                } else if (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                >> 2U)) & (((0U == 
                                             (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U])) 
                                            & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                  .__PVT__ZMQT 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                  .__PVT__ON))) 
                                           | (((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U])) 
                                               & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                               .__PVT__ZMQT) 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                              .__PVT__ON)))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v31 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v31 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v32 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v32 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v33 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v33 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v34 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v34 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v35 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v35 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v36 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v36 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v37 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[2U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v37 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[2U]))));
                }
                if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U] 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U] 
                                  >> 1U)))) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[2U])) {
                            if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                           >> 2U)) 
                                       & (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                               >> 1U)) 
                                           & (~ (((1U 
                                                   == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                   .__PVT__CHCN) 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                 .__PVT__ON))) 
                                          | (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                               >> 1U) 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                              .__PVT__ZMHF) 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                             .__PVT__ON))))) {
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v2 
                                    = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U]) 
                                          << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U]) 
                                        << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U]) 
                                                  << 1U));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v2 = 1U;
                            }
                        } else if (((((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                          >> 2U)) & 
                                      (3U == (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U]))) 
                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                     .__PVT__ZMQT) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                    .__PVT__ON)) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v3 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[6U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[6U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[6U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v3 = 1U;
                        } else if (((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U] 
                                        >> 2U)) & (
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U])) 
                                                    & (~ 
                                                       (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                        .__PVT__ZMQT 
                                                        & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                        .__PVT__ON))) 
                                                   | (((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[2U])) 
                                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                       .__PVT__ZMQT) 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                      .__PVT__ON)))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v4 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[2U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[2U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[2U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v4 = 1U;
                        }
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[1U] = 0U;
            if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                       .__PVT__CHCN 
                                       >> 2U)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[1U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                               >> 0x0000001eU)));
            } else if ((((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                          .__PVT__NxCH >> 1U) & (0U 
                                                 == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                 .__PVT__CHCN)) 
                        & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__ZMQT))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[1U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[1U] 
                    = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                              .__PVT__NxCH >> 1U) & 
                             ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                                  .__PVT__NxCH_CNT[1U] 
                                  >> 1U)) | (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                             .__PVT__ZMHF 
                                             & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                                .__PVT__ZMQT)))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                               >> 0x0000001eU)));
            } else {
                if ((((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH >> 1U) & (1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                              .__PVT__CHCN)) 
                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                     .__PVT__ZMHF)) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                        .__PVT__NxCH_CNT[1U];
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMEN
                                           ? (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                              .__PVT__BMP 
                                              << 4U)
                                           : (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                              >> 0x00000010U)));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[1U];
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U] 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                        .__PVT__CHCN;
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                        .__PVT__NxCH_CNT[1U];
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMEN
                                           ? (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                              .__PVT__BMP 
                                              << 4U)
                                           : (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                              >> 0x00000010U)));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[1U];
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U] 
                        = (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__CHCN);
                }
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                 >> 0x0000001cU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[1U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[1U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH >> 1U));
            }
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[1U] 
                 & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[1U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                                  >> 0x10U));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 
                                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v40 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v40 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                   >> 2U)) & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                                 >> 1U))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v42 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v42 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v43 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v43 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v44 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v44 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U])))));
                    }
                } else if (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                .__PVT__ZMQT)) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__ON)) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v46 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v46 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v47 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v47 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v48 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v48 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v49 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v49 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v50 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v50 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v51 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v51 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v52 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v52 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[5U]))));
                } else if ((1U & (~ (0U != (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U]))))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v54 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v54 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v55 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v55 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v56 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v56 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v57 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v57 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v58 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v58 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v59 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v59 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v60 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[1U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v60 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[1U]))));
                }
                if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U] 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U])) {
                        if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                      >> 2U)))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v5 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v5 = 1U;
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[1U])) {
                        if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                       >> 2U)) & (~ 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                                   >> 1U))))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v6 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v6 = 1U;
                        }
                    } else if (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U] 
                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__ZMQT)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                .__PVT__ON)) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v7 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[5U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[5U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[5U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v7 = 1U;
                    } else if ((1U & (~ (0U != (7U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[1U]))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v8 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[1U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[1U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[1U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v8 = 1U;
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[0U] = 0U;
            if (((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                  .__PVT__NxCH & (0U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                  .__PVT__CHCN)) & 
                 (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                  .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                  .__PVT__ZMQT))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                          >> 0x00000010U));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                                                 .__PVT__NxCH_CNT[0U] 
                                                 >> 1U)) 
                                             | (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                .__PVT__ZMHF 
                                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                   .__PVT__ZMQT)))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                               >> 0x0000001eU)));
            } else if (((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                         .__PVT__NxCH & (1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                         .__PVT__CHCN)) 
                        & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__ZMHF)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                          >> 0x00000010U));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                       .__PVT__NxCH_EN[0U] ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U]
                        : 0U);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                             .__PVT__NxCH & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                                                .__PVT__NxCH_CNT[0U] 
                                                >> 1U))));
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxCH_CNT[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                          >> 0x00000010U));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                       .__PVT__NxCH_EN[0U] ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U]
                        : 0U);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U]
                    .__PVT__NxCH_EN[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                                               >> 0x0000001eU)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[0U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxCH);
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                .__PVT__BMEN) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[0U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                       .__PVT__BMPR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[4U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                       .__PVT__BMPR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[0U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                       .__PVT__BMCC);
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[4U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                       .__PVT__BMCC);
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                             >> 0x0000001dU));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[4U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                             >> 0x0000001dU));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
                             >> 0x0000001cU));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[4U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
                             >> 0x0000001cU));
            }
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NEN[0U] 
                 & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHEN[0U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U]);
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 
                                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v9 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[0U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[0U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v9 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v63 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v63 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v10 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[0U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[0U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v10 = 1U;
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCHCN[0U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                   >> 2U)) & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                                 >> 1U))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v65 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v65 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v66 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v66 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v67 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v67 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v11 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[0U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[0U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v11 = 1U;
                    }
                } else if (((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U] 
                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ZMQT)) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__ON)) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v69 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v69 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v70 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v70 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v71 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v71 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v72 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v72 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v73 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v73 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v74 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v74 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v75 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v75 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v12 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[4U]) 
                              << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[4U]) 
                            << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[4U]) 
                                      << 1U));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v12 = 1U;
                } else if ((1U & (~ (0U != (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCNT[0U]))))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 
                        = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v77 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v77 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v78 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v78 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v79 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v79 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v80 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v80 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v81 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v81 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v82 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v82 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v83 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCH[0U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v83 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v13 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPR[0U]) 
                              << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NCC[0U]) 
                            << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NPALN[0U]) 
                                      << 1U));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v13 = 1U;
                }
            }
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[1U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[0U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[2U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[1U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[3U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][0U];
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v4 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v8 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v9 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v10 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v11 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v12 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v13 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v14 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v15 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v16 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v17 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v18 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v19 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v20 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v21 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v22 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v23 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v24 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v25 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v26 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v27 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v28 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v29 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v30 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v31 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v32 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v33 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v34 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v35 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE[0U];
            if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                       .__PVT__NxPN & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                       .__PVT__CHCN 
                                       >> 2U)))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][0U];
            } else {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v0 
                    = ((2U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                              .__PVT__NxPN & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                              .__PVT__CHCN)) ? vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][1U]
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][3U]);
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE__v0 
                = ((vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE[3U]
                    .__PVT__NxPN & (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                                 .__PVT__CHCN 
                                                 >> 1U))))
                    ? vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][0U]
                    : vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][2U]);
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE[0U];
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_RP 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__R0RP;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__CH_RP 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                .__PVT__R0RP;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCT 
                = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCT) | (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CT 
                                             | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CT) 
                                            | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CT) 
                                           | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CT)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCTS[0U] 
                = ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                    .__PVT__RxA0CT & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                    ? 0U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                             .__PVT__RxA1CT & (1U == 
                                               (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                             ? 1U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                      .__PVT__RxB0CT 
                                      & (2U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCRCT 
                = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCRCT) | (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxCRCT));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxPN 
                = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxPN) | (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0PN 
                                             | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1PN) 
                                            | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0PN) 
                                           | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1PN)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxPNS[0U] 
                = ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                    .__PVT__RxA0PN & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                    ? 0U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                             .__PVT__RxA1PN & (1U == 
                                               (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                             ? 1U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                      .__PVT__RxB0PN 
                                      & (2U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxOVR 
                = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxOVR) | vlSelfRef.tb_top__DOT__u_ref__DOT__RxSCRN_OVER[0U]);
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCTTP 
                = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCTTP) | (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxCTTP));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCH 
                = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCH) | (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CH 
                                             | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CH) 
                                            | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CH) 
                                           | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CH)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCHS[0U] 
                = ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                    .__PVT__RxA0CH & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                    ? 0U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                             .__PVT__RxA1CH & (1U == 
                                               (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                             ? 1U : ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                      .__PVT__RxB0CH 
                                      & (2U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                   >> 0x10U))))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCELLX[0U] 
                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                   .__PVT__RxX[vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__CH_RP]);
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCT_EN[0U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[0U];
            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                 .__PVT__RxPN)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[0U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                        .__PVT__RxPNS[0U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                               .__PVT__RxPNS[0U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                            .__PVT__RxPNS[0U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                if (((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                      [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_RP]
                      .__PVT__OVR) & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                     .__PVT__RxOVR)) {
                    __Vfunc_PNData__230__DW = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                        [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_RP]
                        .__PVT__OVPNR;
                    __Vfunc_PNData__230__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__230__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__230__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__230__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__230__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__230__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__230__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__230__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__230__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__230__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__230__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__230__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__230__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__230__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__230__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__230__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__230__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__230__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__230__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__230__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__230__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__230__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__230__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__230__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__230__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__230__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__230__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__230__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__230__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__230__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_42__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_42__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0 = 1U;
                } else if ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                            .__PVT__PNC)) {
                    __Vfunc_PNData__231__DW = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[0U] 
                                               >> 0x10U);
                    __Vfunc_PNData__231__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__231__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__231__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__231__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__231__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__231__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__231__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__231__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__231__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__231__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__231__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__231__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__231__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__231__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__231__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__231__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__231__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__231__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__231__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__231__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__231__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__231__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__231__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__231__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__231__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__231__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__231__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__231__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__231__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__231__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_43__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_43__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[0U];
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2 = 1U;
                }
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0 
                = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                           [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_RP]
                           .__PVT__OVR >> 1U) & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                          .__PVT__RxOVR) | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                         .__PVT__RxCTTP));
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0 = 1U;
            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                 .__PVT__RxCH)) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                        .__PVT__RxCHS[0U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                               .__PVT__RxCHS[0U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                            .__PVT__RxCHS[0U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0 = 1U;
            }
            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[3U]
                 .__PVT__RxCH)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[3U]
                    .__PVT__RxCELLX[0U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][0U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][0U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][0U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U] 
                    = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][0U] 
                              >> 0x0000001eU) & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                 .__PVT__BMEN)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH[0U] 
                       & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[4U][0U]))))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[0U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[4U][0U];
                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                     .__PVT__CHCN)) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                  .__PVT__CHCN >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                   .__PVT__CHCN))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v0 
                                = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v0 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v0 
                                = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[0U]) 
                                    << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[0U]) 
                                               << 8U) 
                                              | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[0U]));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v1 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                  >> 0x10U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v2 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                  >> 8U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v3 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U]);
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                            .__PVT__CHCN)) {
                    if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                               ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))) {
                        if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                   ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v4 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                  >> 8U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v4 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v5 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U]);
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v6 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                               >> 0x18U);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v6 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v7 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                              >> 0x10U));
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v1 
                        = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[0U]) 
                            << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[0U]) 
                                       << 8U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[0U]));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v1 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v8 
                        = (0x000000ffU & ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                           .__PVT__CHCN)
                                           ? ((1U & 
                                               ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                 >> 1U) 
                                                ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                               ? ((1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U]
                                                   : 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                   >> 8U))
                                               : ((1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                   ? 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                   >> 0x18U)))
                                           : ((1U & 
                                               ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                 >> 2U) 
                                                ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                               ? ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                       >> 1U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U])
                                                    : 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                       >> 4U)))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                       >> 8U))
                                                    : 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                       >> 0x0cU))))
                                               : ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                       >> 1U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                       >> 0x10U))
                                                    : 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                       >> 0x14U)))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[0U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[0U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                       >> 0x18U))
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[0U] 
                                                    >> 0x1cU))))));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v8 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v2 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[0U]) 
                              << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[0U]) 
                            << 8U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[0U]) 
                                       << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[0U]));
                }
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__PN_RP = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__CH_RP = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCT 
                = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCT) | (2U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CT 
                                             | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CT) 
                                            | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CT) 
                                           | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CT)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCTS[1U] 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                     .__PVT__RxA0CT >> 1U) & (0U == 
                                              (3U & 
                                               (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                >> 0x10U))))
                    ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                              .__PVT__RxA1CT >> 1U) 
                             & (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                             [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                             >> 0x10U))))
                             ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxB0CT 
                                       >> 1U) & (2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                     [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                     >> 0x10U))))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCRCT 
                = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCRCT) | (2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxCRCT));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxPN 
                = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxPN) | (2U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0PN 
                                             | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1PN) 
                                            | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0PN) 
                                           | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1PN)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxPNS[1U] 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                     .__PVT__RxA0PN >> 1U) & (0U == 
                                              (3U & 
                                               (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                                [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                >> 0x10U))))
                    ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                              .__PVT__RxA1PN >> 1U) 
                             & (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                             [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                             >> 0x10U))))
                             ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxB0PN 
                                       >> 1U) & (2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                                     [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                     >> 0x10U))))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxOVR 
                = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxOVR) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RxSCRN_OVER[1U]) 
                                      << 1U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCTTP 
                = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCTTP) | (2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxCTTP));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCH 
                = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
                    .__PVT__RxCH) | (2U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CH 
                                             | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CH) 
                                            | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CH) 
                                           | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CH)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCHS[1U] 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                     .__PVT__RxA0CH >> 1U) & (0U == 
                                              (3U & 
                                               (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                                [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                >> 0x10U))))
                    ? 0U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                              .__PVT__RxA1CH >> 1U) 
                             & (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                             [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                             >> 0x10U))))
                             ? 1U : (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__RxB0CH 
                                       >> 1U) & (2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                                     [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                     >> 0x10U))))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCELLX[1U] 
                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                   .__PVT__RxX[1U]);
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U].__PVT__RxCT_EN[1U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[1U];
            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                 .__PVT__RxPN)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[1U] 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                        .__PVT__RxPNS[1U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                               .__PVT__RxPNS[1U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                            .__PVT__RxPNS[1U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                if (((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                      .__PVT__OVR) & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                      .__PVT__RxOVR 
                                      >> 1U))) {
                    __Vfunc_PNData__230__DW = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                        .__PVT__OVPNR;
                    __Vfunc_PNData__230__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__230__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__230__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__230__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__230__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__230__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__230__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__230__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__230__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__230__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__230__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__230__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__230__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__230__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__230__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__230__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__230__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__230__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__230__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__230__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__230__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__230__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__230__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__230__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__230__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__230__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__230__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__230__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__230__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__230__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_42__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_42__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3 = 1U;
                } else if ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                            .__PVT__PNC)) {
                    __Vfunc_PNData__231__DW = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[1U] 
                                               >> 0x10U);
                    __Vfunc_PNData__231__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__231__CHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__231__PNC = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__231__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__231__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__231__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__231__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__231__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__231__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__231__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__231__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__231__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__231__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__231__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__231__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__231__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__231__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__231__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__231__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__231__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__231__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__231__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__231__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__231__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__231__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__231__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__231__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__231__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__231__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__231__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_43__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_43__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPN_WD[1U];
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5 = 1U;
                }
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1 
                = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                           .__PVT__OVR & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                           .__PVT__RxOVR) | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                          .__PVT__RxCTTP) >> 1U));
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1 = 1U;
            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                 .__PVT__RxCH)) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1 
                    = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                        .__PVT__RxCHS[1U]) ? ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                               .__PVT__RxCHS[1U])
                                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                               : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                            .__PVT__RxCHS[1U]) ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1 = 1U;
            }
            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[3U]
                 .__PVT__RxCH)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[3U]
                    .__PVT__RxCELLX[1U];
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][1U] 
                                          >> 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][1U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][1U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U] 
                    = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][1U] 
                              >> 0x0000001eU) & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                                 .__PVT__BMEN)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH[1U] 
                       & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[4U][1U]))))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[1U] 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[4U][1U];
                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                     .__PVT__CHCN)) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__CHCN >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__CHCN))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v9 
                                = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v9 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v3 
                                = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[1U]) 
                                    << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[1U]) 
                                               << 8U) 
                                              | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[1U]));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v10 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                  >> 0x10U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v11 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                  >> 8U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v12 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U]);
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                            .__PVT__CHCN)) {
                    if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                               ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))) {
                        if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                   ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v13 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                  >> 8U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v13 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v14 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U]);
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v15 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                               >> 0x18U);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v15 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v16 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                              >> 0x10U));
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v4 
                        = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[1U]) 
                            << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[1U]) 
                                       << 8U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[1U]));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v4 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v17 
                        = (0x000000ffU & ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                           .__PVT__CHCN)
                                           ? ((1U & 
                                               ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                 >> 1U) 
                                                ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                               ? ((1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U]
                                                   : 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                   >> 8U))
                                               : ((1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                   ? 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                   >> 0x18U)))
                                           : ((1U & 
                                               ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                 >> 2U) 
                                                ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                               ? ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                       >> 1U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U])
                                                    : 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                       >> 4U)))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                       >> 8U))
                                                    : 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                       >> 0x0cU))))
                                               : ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                       >> 1U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                       >> 0x14U)))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCELLX[1U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RHF[1U]))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                       >> 0x18U))
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCH[1U] 
                                                    >> 0x1cU))))));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v17 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v5 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPR[1U]) 
                              << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RCC[1U]) 
                            << 8U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RPALN[1U]) 
                                       << 1U) | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RTP[1U]));
                }
            }
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[1U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[2U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[1U];
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[3U] 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][0U];
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v8 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v9 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v10 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[2U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v11 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[2U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v12 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[3U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v13 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[3U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[0U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[0U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[1U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[1U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[2U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[2U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v8 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[3U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v9 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[3U][1U];
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH)))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS 
                            = ((0x20U & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS)) 
                               | (0x0000001fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS))));
                        if ((0x17U == (0x0000001fU 
                                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS)))) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS 
                                = (0x00000020U & ((~ 
                                                   ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS) 
                                                    >> 5U)) 
                                                  << 5U));
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT) 
                 & (0x01feU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS = 0U;
            }
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            if ((0x00000010U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0 
                    = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0 = 1U;
            }
            if ((0x00000020U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1 
                    = ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1 = 1U;
            }
            if ((0x00001000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__VS_WD[0U] 
                    = ((0x00000200U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((0x00000100U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00000100U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v0 
                    = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__VS_WD[0U] 
                                      >> 0x10U));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VS__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v1 
                    = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__VS_WD[0U] 
                                      >> 8U));
            }
            if ((0x00002000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__VS_WD[1U] 
                    = ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((0x00000400U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00000400U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v2 
                    = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__VS_WD[1U] 
                                      >> 0x10U));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VS__v2 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v3 
                    = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__VS_WD[1U] 
                                      >> 8U));
            }
            if ((0x00000010U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0 
                    = ((0x20000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? ((0x10000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x10000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0 = 1U;
            }
            if ((0x00000020U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1 
                    = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                        >> 0x0000001fU) ? ((0x40000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x40000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1 = 1U;
            }
            if ((0x00000040U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2 
                    = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2 = 1U;
            }
            if ((0x00000080U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3 
                    = ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3 = 1U;
            }
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                               >> 0x00000017U)))) {
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPALN[0U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                           << 0x0000001bU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                             >> 5U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                 >> 3U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                 >> 2U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[0U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U]);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000011U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U] 
                    = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                              >> 4U) & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                        .__PVT__BMEN)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                    = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH[0U] 
                       & (- (IData)((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U])))));
                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                     .__PVT__CHCN)) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                  .__PVT__CHCN >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                   .__PVT__CHCN))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v0 
                                = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[0U]) 
                                    << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[0U]) 
                                               << 8U) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[0U]));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v0 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v0 
                                = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v0 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v1 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                  >> 0x10U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v2 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                  >> 8U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v3 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U]);
                        }
                    }
                } else {
                    if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                         .__PVT__CHCN)) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v1 
                            = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[0U]) 
                                << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[0U]) 
                                           << 8U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[0U]));
                        if ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                   ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))) {
                            if ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))) {
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v4 
                                    = (0x000000ffU 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                          >> 8U));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v4 = 1U;
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v5 
                                    = (0x000000ffU 
                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U]);
                            }
                        } else {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v6 
                                = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v6 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v7 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                  >> 0x10U));
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v1 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[0U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[0U]) 
                                << 8U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPALN[0U]) 
                                           << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[0U]));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v8 
                            = (0x000000ffU & ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                               .__PVT__CHCN)
                                               ? ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                       >> 1U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                    ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U]
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                    >> 8U))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                    ? 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                    >> 0x18U)))
                                               : ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                       >> 2U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                   ? 
                                                  ((1U 
                                                    & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                        >> 1U) 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U])
                                                     : 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                        >> 4U)))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                        >> 8U))
                                                     : 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                        >> 0x0cU))))
                                                   : 
                                                  ((1U 
                                                    & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                        >> 1U) 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                        >> 0x10U))
                                                     : 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                        >> 0x14U)))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[0U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[0U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                        >> 0x18U))
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[0U] 
                                                     >> 0x1cU))))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v8 = 1U;
                    }
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v1 = 1U;
                }
            }
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                               >> 0x00000018U)))) {
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPALN[1U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                           << 0x00000011U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                             >> 0x0000000fU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                 >> 0x0000000dU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                 >> 0x0000000cU));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[1U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                             >> 1U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000014U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U] 
                    = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                              >> 0x0000000eU) & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                                 .__PVT__BMEN)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                    = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH[1U] 
                       & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                              >> 1U))))));
                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                     .__PVT__CHCN)) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__CHCN >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__CHCN))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v2 
                                = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[1U]) 
                                    << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[1U]) 
                                               << 8U) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[1U]));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v2 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v9 
                                = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v9 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v10 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                  >> 0x10U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v11 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                  >> 8U));
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v12 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U]);
                        }
                    }
                } else {
                    if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                         .__PVT__CHCN)) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v3 
                            = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[1U]) 
                                << 9U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[1U]) 
                                           << 8U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[1U]));
                        if ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                   ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))) {
                            if ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))) {
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v13 
                                    = (0x000000ffU 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                          >> 8U));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v13 = 1U;
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v14 
                                    = (0x000000ffU 
                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U]);
                            }
                        } else {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v15 
                                = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v15 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v16 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                  >> 0x10U));
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v3 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPR[1U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCC[1U]) 
                                << 8U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RPALN[1U]) 
                                           << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RTP[1U]));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v17 
                            = (0x000000ffU & ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                               .__PVT__CHCN)
                                               ? ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                       >> 1U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                   ? 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                    ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U]
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                    >> 8U))
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                    ? 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                    >> 0x18U)))
                                               : ((1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                       >> 2U) 
                                                      ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                   ? 
                                                  ((1U 
                                                    & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                        >> 1U) 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U])
                                                     : 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                        >> 4U)))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                        >> 8U))
                                                     : 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                        >> 0x0cU))))
                                                   : 
                                                  ((1U 
                                                    & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                        >> 1U) 
                                                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                    ? 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                        >> 0x10U))
                                                     : 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                        >> 0x14U)))
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCELLX[1U] 
                                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RHF[1U]))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                        >> 0x18U))
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RCH[1U] 
                                                     >> 0x1cU))))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v17 = 1U;
                    }
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v3 = 1U;
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[3U] = 0U;
            if ((1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                >> 0x00000025U)) & 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__CHCN >> 2U)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 3U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 1U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U]);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                           << 0x00000017U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                             >> 9U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 7U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 6U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 2U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[3U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000025U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                               >> 8U)));
            } else if ((1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                       >> 0x00000026U)) 
                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__CHCN >> 1U)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x0000001cU)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x00000013U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 0x0000000dU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x0000000bU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x0000000aU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                           << 0x00000017U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                             >> 9U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 7U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 6U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 0x0000000cU)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[1U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                    = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000019U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[3U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000026U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                               >> 8U)));
            } else if (((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                 >> 0x00000026U)) & 
                        (((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                          .__PVT__ZMQT) | ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                            .__PVT__CHCN) 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                           .__PVT__ZMHF)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x0000001cU)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           << 0x0000000bU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                             >> 0x00000015U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000013U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000012U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                           << 0x00000017U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                             >> 9U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 7U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 6U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x00000014U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[1U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000019U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[3U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000026U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                               >> 8U)));
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000022U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           << 0x0000001fU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                             >> 1U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x0000001fU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x0000001eU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[7U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                           << 0x00000017U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                             >> 9U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 7U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[7U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                 >> 6U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                              .__PVT__BMEN) & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U]));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[3U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[3U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x0000001bU));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[3U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000028U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[7U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                               >> 8U)));
            }
            if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[3U] 
                 & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[3U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 
                                = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                   >> 0x18U);
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 
                                = (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v2 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v2 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                   >> 2U)) & (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                                   >> 1U)) 
                                               & (~ 
                                                  (((1U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                    .__PVT__ZMHF) 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                   .__PVT__ON))) 
                                              | (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                                   >> 1U) 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                 .__PVT__ON))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v4 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v4 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v5 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v5 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v6 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v6 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U])))));
                    }
                } else if (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                >> 2U)) & (((0U == 
                                             (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U])) 
                                            & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                  .__PVT__ZMQT 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                  .__PVT__ON))) 
                                           | (((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U])) 
                                               & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                               .__PVT__ZMQT) 
                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                              .__PVT__ON)))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v8 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v8 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v9 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v9 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v10 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v10 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v11 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v11 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v12 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v12 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v13 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v13 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v14 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[3U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v14 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[3U]))));
                }
                if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U] 
                                  >> 1U)))) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[3U])) {
                            if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                           >> 2U)) 
                                       & (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                               >> 1U)) 
                                           & (~ (((1U 
                                                   == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                   .__PVT__CHCN) 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                 .__PVT__ON))) 
                                          | (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                               >> 1U) 
                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                              .__PVT__ZMHF) 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                             .__PVT__ON))))) {
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v0 
                                    = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U]) 
                                          << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U]) 
                                        << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U]) 
                                                  << 1U));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v0 = 1U;
                            }
                        } else if (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U] 
                                        >> 2U)) & (
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U])) 
                                                    & (~ 
                                                       (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                        .__PVT__ZMQT 
                                                        & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                        .__PVT__ON))) 
                                                   | (((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[3U])) 
                                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                       .__PVT__ZMQT) 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                      .__PVT__ON)))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v1 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[3U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[3U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[3U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v1 = 1U;
                        }
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[2U] = 0U;
            if (((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                          >> 0x00000025U)) & (0U != 
                                              (3U & 
                                               (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                .__PVT__CHCN 
                                                >> 1U))))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 3U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 1U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U]);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 2U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[2U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[2U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000025U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x0000001eU)));
            } else if (((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                 >> 0x00000025U)) & 
                        (((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                          .__PVT__ZMQT) | ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                            .__PVT__CHCN) 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                           .__PVT__ZMHF)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           << 0x00000015U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                             >> 0x0000000bU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 9U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 8U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x0000001dU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x0000001cU));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x0000000aU)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[2U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[2U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000025U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x0000001eU)));
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x0000001fU)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 9U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           >> 0x00000017U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x00000015U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x00000014U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 9U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           >> 0x00000017U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x00000015U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x00000014U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 0x00000016U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[2U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                       .__PVT__CHCN);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[2U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x0000001aU));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[2U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000027U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 0x00000016U)));
            }
            if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[2U] 
                 & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[2U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                                  >> 8U));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 
                                = (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v17 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v17 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                   >> 2U)) & (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                                   >> 1U)) 
                                               & (~ 
                                                  (((1U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                    .__PVT__ZMHF) 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                   .__PVT__ON))) 
                                              | (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                                   >> 1U) 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                 .__PVT__ON))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v19 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v19 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v20 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v20 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v21 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v21 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U])))));
                    }
                } else if (((((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                  >> 2U)) & (3U == 
                                             (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U]))) 
                             & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                             .__PVT__ZMQT) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__ON)) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v23 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v23 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v24 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v24 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v25 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v25 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v26 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v26 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v27 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v27 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v28 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v28 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v29 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v29 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[6U]))));
                } else if (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                >> 2U)) & (((0U == 
                                             (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U])) 
                                            & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                  .__PVT__ZMQT 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                  .__PVT__ON))) 
                                           | (((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U])) 
                                               & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                               .__PVT__ZMQT) 
                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                              .__PVT__ON)))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v31 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v31 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v32 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v32 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v33 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v33 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v34 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v34 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v35 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v35 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v36 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v36 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v37 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[2U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v37 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[2U]))));
                }
                if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U] 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U] 
                                  >> 1U)))) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[2U])) {
                            if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                           >> 2U)) 
                                       & (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                               >> 1U)) 
                                           & (~ (((1U 
                                                   == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                   .__PVT__CHCN) 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                  .__PVT__ZMHF) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                 .__PVT__ON))) 
                                          | (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                               >> 1U) 
                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                              .__PVT__ZMHF) 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                             .__PVT__ON))))) {
                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v2 
                                    = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U]) 
                                          << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U]) 
                                        << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U]) 
                                                  << 1U));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v2 = 1U;
                            }
                        } else if (((((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                          >> 2U)) & 
                                      (3U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U]))) 
                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                     .__PVT__ZMQT) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                    .__PVT__ON)) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v3 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[6U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[6U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[6U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v3 = 1U;
                        } else if (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U] 
                                        >> 2U)) & (
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U])) 
                                                    & (~ 
                                                       (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                        .__PVT__ZMQT 
                                                        & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                        .__PVT__ON))) 
                                                   | (((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[2U])) 
                                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                       .__PVT__ZMQT) 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                      .__PVT__ON)))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v4 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[2U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[2U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[2U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v4 = 1U;
                        }
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[1U] = 0U;
            if ((1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                >> 0x00000025U)) & 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__CHCN >> 2U)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 3U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 1U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U]);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           << 0x0000000bU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                             >> 0x00000015U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000013U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000012U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 2U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[1U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[1U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000025U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x00000014U)));
            } else if ((((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                  >> 0x00000026U)) 
                         & (0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__CHCN)) & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                              .__PVT__ZMHF 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                              .__PVT__ZMQT))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x0000001cU)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x00000013U) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 0x0000000dU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x0000000bU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 0x0000000aU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           << 0x0000000bU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                             >> 0x00000015U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000013U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000012U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 0x0000000cU)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[1U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[1U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000019U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[1U] 
                    = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                      >> 0x00000026U)) 
                             & ((~ (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                            >> 0x0000001dU))) 
                                | (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                   .__PVT__ZMHF & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                   .__PVT__ZMQT)))));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x00000014U)));
            } else {
                if ((((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                               >> 0x00000026U)) & (1U 
                                                   == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                   .__PVT__CHCN)) 
                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                     .__PVT__ZMHF)) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                        = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                         >> 0x0000001cU)));
                    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__BMEN) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                            = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                              .__PVT__BMP 
                                              << 4U));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                               .__PVT__BMPR);
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                               .__PVT__BMCC);
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                            = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               << 0x00000013U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                                 >> 0x0000000dU)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                            = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                     >> 0x0000000bU));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                            = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                     >> 0x0000000aU));
                    }
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U] 
                        = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                                   >> 0x0000000cU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[1U];
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U] 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__CHCN;
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                        = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                         >> 0x0000001cU)));
                    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__BMEN) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                            = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                              .__PVT__BMP 
                                              << 4U));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                               .__PVT__BMPR);
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                               .__PVT__BMCC);
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U] 
                            = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               << 0x00000013U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                                 >> 0x0000000dU)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U] 
                            = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                     >> 0x0000000bU));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U] 
                            = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                     >> 0x0000000aU));
                    }
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U] 
                        = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                                   >> 0x0000000cU)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[1U];
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U] 
                        = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__CHCN);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           << 0x0000000bU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                             >> 0x00000015U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000013U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                 >> 0x00000012U));
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                               >> 0x00000014U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[1U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000019U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[1U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000026U)));
            }
            if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[1U] 
                 & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[1U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 
                                = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                                  >> 0x10U));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 
                                = (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v40 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v40 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                   >> 2U)) & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                                 >> 1U))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v42 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v42 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v43 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v43 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v44 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v44 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U])))));
                    }
                } else if (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__ZMQT)) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__ON)) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v46 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v46 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v47 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v47 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v48 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v48 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v49 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v49 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v50 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v50 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v51 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v51 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v52 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v52 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[5U]))));
                } else if ((1U & (~ (0U != (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U]))))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v54 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v54 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v55 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v55 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v56 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v56 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v57 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v57 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v58 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v58 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v59 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v59 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v60 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[1U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v60 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[1U]))));
                }
                if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U] 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U])) {
                        if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                      >> 2U)))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v5 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v5 = 1U;
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[1U])) {
                        if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                       >> 2U)) & (~ 
                                                  (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                                   >> 1U))))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v6 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v6 = 1U;
                        }
                    } else if (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U] 
                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__ZMQT)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__ON)) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v7 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[5U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[5U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[5U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v7 = 1U;
                    } else if ((1U & (~ (0U != (7U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[1U]))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v8 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[1U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[1U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[1U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v8 = 1U;
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[0U] = 0U;
            if ((((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                           >> 0x00000025U)) & (0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                               .__PVT__CHCN)) 
                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__ZMQT))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 3U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 1U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U]);
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 2U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[0U] 
                    = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                      >> 0x00000025U)) 
                             & ((~ (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                            >> 0x0000001aU))) 
                                | (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                   .__PVT__ZMHF & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                   .__PVT__ZMQT)))));
            } else if ((((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                  >> 0x00000025U)) 
                         & (1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__CHCN)) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__ZMHF)) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 3U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 1U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U]);
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 2U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                    = ((0x01000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U]
                        : 0U);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[0U] 
                    = (IData)((0x0000002000000000ULL 
                               == (0x0000002004000000ULL 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q)));
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                    = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000019U)));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__BMEN) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U] 
                        = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__BMP 
                                          << 4U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMPR);
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__BMCC);
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U] 
                        = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                             >> 3U)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U] 
                        = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                 >> 1U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U] 
                        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U]);
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U] 
                    = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] 
                                               >> 2U)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                    = ((0x01000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U]
                        : 0U);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U] 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CHCN;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[0U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                             >> 0x00000018U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[0U] 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                     >> 0x00000025U)));
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__BMEN) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[4U] 
                    = (0x0000007fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                      .__PVT__BMP << 4U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[4U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                       .__PVT__BMPR);
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[4U] 
                    = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                       .__PVT__BMCC);
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[4U] 
                    = (0x0000007fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                       << 0x00000015U) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                         >> 0x0000000bU)));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[4U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                             >> 9U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[4U] 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                             >> 8U));
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U] 
                = (1U & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                          .__PVT__BMEN) & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] 
                                           >> 0x0000000aU)));
            if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NEN[0U] 
                 & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHEN[0U])) {
                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U] 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U]))) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 
                                = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U]);
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 
                                = (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U]);
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 = 1U;
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v9 
                                = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U]) 
                                      << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U]) 
                                    << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U]) 
                                              << 1U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v9 = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U])) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                  >> 2U)))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                      << 1U)) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]);
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v63 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v63 
                            = ((6U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v10 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v10 = 1U;
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCHCN[0U])) {
                    if ((1U & ((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                   >> 2U)) & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                                 >> 1U))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                               >> 0x18U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v65 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                              >> 0x10U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v65 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v66 
                            = (0x000000ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                              >> 8U));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v66 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (2U 
                                                    ^ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v67 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U]);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v67 
                            = ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                                      << 2U)) | (3U 
                                                 & (~ 
                                                    (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U])))));
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v11 
                            = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U]) 
                                  << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U]) 
                                << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U]) 
                                          << 1U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v11 = 1U;
                    }
                } else if (((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U] 
                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ZMHF | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ZMQT)) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__ON)) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v69 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v69 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v70 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v70 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v71 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v71 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v72 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v72 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v73 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v73 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v74 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v74 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v75 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v75 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[4U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v12 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[4U]) 
                              << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[4U]) 
                            << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[4U]) 
                                      << 1U));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v12 = 1U;
                } else if ((1U & (~ (0U != (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCNT[0U]))))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 
                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                           >> 0x1cU);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 
                        = (7U & (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U])));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v77 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x18U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v77 
                        = (7U & (1U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v78 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x14U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v78 
                        = (7U & (2U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v79 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v79 
                        = (7U & (3U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v80 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 0x0cU));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v80 
                        = (7U & (4U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v81 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 8U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v81 
                        = (7U & (5U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v82 
                        = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U] 
                                          >> 4U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v82 
                        = (7U & (6U ^ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v83 
                        = (0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCH[0U]);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v83 
                        = (7U & (~ (- (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NHF[0U]))));
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v13 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPR[0U]) 
                              << 1U) | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NCC[0U]) 
                            << 8U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NPALN[0U]) 
                                      << 1U));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v13 = 1U;
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__CELLX = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS = 0U;
    }
}
