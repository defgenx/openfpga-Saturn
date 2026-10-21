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
void Vtb_top___024root___ico_sequent__TOP__1(Vtb_top___024root* vlSelf);

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
        {
            // Inlined CFunc: _eval_body__ico
            if ((0x0000000000000580ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_REQ 
                        = (1U & (~ ((IData)(vlSelfRef.AD_N) 
                                    | ((IData)(vlSelfRef.CS_N) 
                                       | (IData)(vlSelfRef.REQ_N)))));
                }
            }
            if ((0x0000000000020000ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.R_SCAVEC_N = (1U & (~ 
                                                  (7U 
                                                   == (IData)(vlSelfRef.SCFC))));
                    vlSelfRef.N_SCAVEC_N = vlSelfRef.R_SCAVEC_N;
                }
            }
            if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtb_top___024root___ico_sequent__TOP__1(vlSelf);
            }
            if ((0x000000000000000cULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 
                        = ((IData)(vlSelfRef.RES_N) 
                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE));
                    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_SET 
                        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) 
                           & ((~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000018U)) 
                              & (IData)(vlSelfRef.RES_N)));
                    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber4 
                        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U) | 
                                 ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15) 
                                  & ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                     & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL)))));
                }
            }
        }
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
                                                        ((((~ (IData)(vlSelfRef.RST_N)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RST_N__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.CLK) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__CLK__1 = vlSelfRef.CLK;
        vlSelfRef.__Vtrigprevexpr___TOP__RST_N__1 = vlSelfRef.RST_N;
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
                                                    (((((((IData)(vlSelfRef.N_RAM_Q) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__N_RAM_Q__0)) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelfRef.R_RAM_Q) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__R_RAM_Q__0)) 
                                                            << 5U) 
                                                           | (((IData)(vlSelfRef.SND_EN) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SND_EN__0)) 
                                                              << 4U))) 
                                                       | (((((IData)(vlSelfRef.ESR) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ESR__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.ESL) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ESL__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.SCFC) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCFC__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.SCUDS_N) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCUDS_N__0))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.SCLDS_N) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCLDS_N__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.SCAS_N) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCAS_N__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.SCRW_N) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCRW_N__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.SCDI) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SCDI__0)))) 
                                                          << 0x0000000cU) 
                                                         | (((((vlSelfRef.SCA 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__SCA__0) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.REQ_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__REQ_N__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.DTEN_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DTEN_N__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.AD_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__AD_N__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.CS_N) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CS_N__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.DI) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DI__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.CE_F) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE_F__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.CE_R) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE_R__0)))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.RES_N) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RES_N__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.CE) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.RST_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.CLK) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0 = vlSelfRef.RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__CE__0 = vlSelfRef.CE;
    vlSelfRef.__Vtrigprevexpr___TOP__RES_N__0 = vlSelfRef.RES_N;
    vlSelfRef.__Vtrigprevexpr___TOP__CE_R__0 = vlSelfRef.CE_R;
    vlSelfRef.__Vtrigprevexpr___TOP__CE_F__0 = vlSelfRef.CE_F;
    vlSelfRef.__Vtrigprevexpr___TOP__DI__0 = vlSelfRef.DI;
    vlSelfRef.__Vtrigprevexpr___TOP__CS_N__0 = vlSelfRef.CS_N;
    vlSelfRef.__Vtrigprevexpr___TOP__AD_N__0 = vlSelfRef.AD_N;
    vlSelfRef.__Vtrigprevexpr___TOP__DTEN_N__0 = vlSelfRef.DTEN_N;
    vlSelfRef.__Vtrigprevexpr___TOP__REQ_N__0 = vlSelfRef.REQ_N;
    vlSelfRef.__Vtrigprevexpr___TOP__SCA__0 = vlSelfRef.SCA;
    vlSelfRef.__Vtrigprevexpr___TOP__SCDI__0 = vlSelfRef.SCDI;
    vlSelfRef.__Vtrigprevexpr___TOP__SCRW_N__0 = vlSelfRef.SCRW_N;
    vlSelfRef.__Vtrigprevexpr___TOP__SCAS_N__0 = vlSelfRef.SCAS_N;
    vlSelfRef.__Vtrigprevexpr___TOP__SCLDS_N__0 = vlSelfRef.SCLDS_N;
    vlSelfRef.__Vtrigprevexpr___TOP__SCUDS_N__0 = vlSelfRef.SCUDS_N;
    vlSelfRef.__Vtrigprevexpr___TOP__SCFC__0 = vlSelfRef.SCFC;
    vlSelfRef.__Vtrigprevexpr___TOP__ESL__0 = vlSelfRef.ESL;
    vlSelfRef.__Vtrigprevexpr___TOP__ESR__0 = vlSelfRef.ESR;
    vlSelfRef.__Vtrigprevexpr___TOP__SND_EN__0 = vlSelfRef.SND_EN;
    vlSelfRef.__Vtrigprevexpr___TOP__R_RAM_Q__0 = vlSelfRef.R_RAM_Q;
    vlSelfRef.__Vtrigprevexpr___TOP__N_RAM_Q__0 = vlSelfRef.N_RAM_Q;
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

void Vtb_top___024root___ico_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ico_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_22;
    __VdfgRegularize_hebeb780c_0_22 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_27;
    __VdfgRegularize_hebeb780c_0_27 = 0;
    // Body
    vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)) 
            & (IData)(vlSelfRef.CE)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)) 
            & (IData)(vlSelfRef.CE)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
         & ((IData)(vlSelfRef.CE) & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV)));
    vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
         & ((IData)(vlSelfRef.CE) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT0_CE = (IData)(
                                                          ((2U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN))))))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber4 
        = (3U & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x18U == (0x0000003fU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                >> 5U))))))) 
                 | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE))) 
                    & (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE)))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK1____pinNumber4 
        = (3U & (((- (IData)(((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN) 
                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE)))) 
                  & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE)))) 
                 | ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                    & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                       & (- (IData)((0x19U == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                  >> 5U)))))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE = (IData)(
                                                          ((6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_32 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x1eU 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                      >> 5U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x0eU 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                      >> 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_34 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000bU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_35 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000aU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (9U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_37 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_38 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (7U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (6U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (5U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_41 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (4U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (3U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_43 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (2U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (1U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x060fU 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                        & (- (IData)(
                                                                     (0x76U 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                          >> 4U)))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                                                >> 0x0000001cU))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = (0x0000000fU 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                                        & ((0x0000000cU 
                                                            & ((- (IData)((IData)(
                                                                                (0x0700U 
                                                                                == 
                                                                                (0x07c1U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                               << 2U)) 
                                                           | (3U 
                                                              & (- (IData)((IData)(
                                                                                (0x0701U 
                                                                                == 
                                                                                (0x07c1U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                                                >> 0x00000025U))))))));
    __VdfgRegularize_hebeb780c_0_27 = (0x0000000fU 
                                       & ((((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                            & ((0x0000000cU 
                                                & ((- (IData)((IData)(
                                                                      (0x0600U 
                                                                       == 
                                                                       (0x0701U 
                                                                        & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)((IData)(
                                                                       (0x0601U 
                                                                        == 
                                                                        (0x0701U 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))))) 
                                           | (- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                                    >> 0x00000037U)))))) 
                                          & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)))));
    vlSelfRef.tb_top__DOT__new_i__DOT__SLOT0_CE = (IData)(
                                                          ((2U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN))))))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber4 
        = (3U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x18U == (0x0000003fU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                >> 5U))))))) 
                 | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE))) 
                    & (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK1____pinNumber4 
        = (3U & (((- (IData)(((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN) 
                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE)))) 
                  & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE)))) 
                 | ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                    & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                       & (- (IData)((0x19U == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                  >> 5U)))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x1eU 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                                      >> 5U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_51 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x0eU 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                                      >> 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_52 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000bU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000aU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (9U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_55 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (7U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (6U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (5U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (4U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (3U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_61 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (2U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (1U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_64 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0_SEL))) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_47 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                        & (- (IData)(
                                                                     (0x76U 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                                          >> 4U)))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO1_Q 
                                                                                >> 0x0000001cU))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_49 = (0x0000000fU 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                                        & ((0x0000000cU 
                                                            & ((- (IData)((IData)(
                                                                                (0x0700U 
                                                                                == 
                                                                                (0x07c1U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                               << 2U)) 
                                                           | (3U 
                                                              & (- (IData)((IData)(
                                                                                (0x0701U 
                                                                                == 
                                                                                (0x07c1U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO1_Q 
                                                                                >> 0x00000025U))))))));
    __VdfgRegularize_hebeb780c_0_22 = (0x0000000fU 
                                       & ((((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                            & ((0x0000000cU 
                                                & ((- (IData)((IData)(
                                                                      (0x0600U 
                                                                       == 
                                                                       (0x0701U 
                                                                        & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)((IData)(
                                                                       (0x0601U 
                                                                        == 
                                                                        (0x0701U 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))))) 
                                           | (- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO1_Q 
                                                                    >> 0x00000037U)))))) 
                                          & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))));
    vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE = (IData)(
                                                          ((6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__SAMPLE_CE = 
        ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT)) 
         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                           >> 0x0000001cU))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LSA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4 
        = (0x0000000fU & ((IData)(__VdfgRegularize_hebeb780c_0_27) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_27))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                           >> 0x0000001cU))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LSA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_47)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber4 
        = (0x0000000fU & ((IData)(__VdfgRegularize_hebeb780c_0_22) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_22))));
    vlSelfRef.tb_top__DOT__new_i__DOT__SAMPLE_CE = 
        ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)) 
         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE));
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
    IData/*31:0*/ tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i;
    tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__new_i__DOT__CLK_DIV;
    __Vdly__tb_top__DOT__new_i__DOT__CLK_DIV = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__ref_i__DOT__CLK_DIV;
    __Vdly__tb_top__DOT__ref_i__DOT__CLK_DIV = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    // Body
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __Vdly__tb_top__DOT__ref_i__DOT__CLK_DIV = vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0U;
    __Vdly__tb_top__DOT__new_i__DOT__CLK_DIV = vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CYCLE_NUM 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CYCLE_NUM 
        = vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a) {
        tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 4U;
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a) {
        tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 8U;
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x10U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x18U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x20U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x28U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x30U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x38U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a) {
        tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 4U;
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a) {
        tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 8U;
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x10U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x18U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x20U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x28U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x30U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 
                = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
                                          >> 0x38U)));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber4) {
        tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i = 1U;
        __VdlyVal__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                        >> 0x00000013U)));
        __VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2;
        __VdlySet__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK1____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK1____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST) 
         | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR6____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR6____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST) 
         | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37)))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
         | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54)))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR6____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR6____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
         | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55)))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR4____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR4____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LSA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LSA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR4____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR4____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LSA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LSA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                        >> 0x00000022U)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SA____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP) 
         | ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) 
            & ((IData)(vlSelfRef.RES_N) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN))))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 
            = ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP)) 
               & vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
               [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT]);
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT__SLOT;
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                >> 0x00000015U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                >> 0x00000015U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                >> 0x00000015U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                >> 0x00000015U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV) 
         & (IData)(vlSelfRef.CE))) {
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CYCLE_NUM 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)));
    }
    if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV) 
         & (IData)(vlSelfRef.CE))) {
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CYCLE_NUM 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                        >> 0x0000001cU)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber3));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber3) 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                        >> 0x0000001cU)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber3));
            __VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber3) 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3) 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3) 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR8____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR8____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3) 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_47))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3));
            __VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3) 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR8____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR8____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2;
            vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber3);
            __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
                                  >> 8U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
                                  >> 0x10U));
            __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4))) {
            __VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = (vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
                   >> 0x18U);
            __VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2;
            __VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
    }
    if (((IData)(((0U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15))) 
         | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_SET))) {
        if (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_SET) {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 
                = ((0x00000010U & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)) 
                                   << 4U)) | (0x0000000fU 
                                              & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                                 >> 0x00000014U)));
        } else {
            vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
            vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 
                = vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXS_NULL_RAM____pinNumber5;
        }
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE) {
        vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP5 
                                      >> 0x00000025U)));
        vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[2U] 
                              >> 0x00000012U));
        vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[2U] 
                              >> 0x00000012U));
        vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP5 
                                      >> 0x00000025U)));
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                              >> 0x00000012U));
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                              >> 0x00000012U));
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D;
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)
                          : (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q 
                                     >> 2U))))];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)
                          : (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q 
                                     >> 9U))))];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 1U) : (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q 
                                               >> 0x00000026U))))];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 1U) : ((IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q 
                                                >> 0x00000038U)) 
                                       + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MDEC_CT))))];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)
                          : (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                     >> 2U))))];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)
                          : (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                     >> 9U))))];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 1U) : (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                               >> 0x00000026U))))];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 1U) : ((IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                >> 0x00000038U)) 
                                       + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MDEC_CT))))];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                               >> 0x0000001dU))))];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                               >> 0x0000001dU))))];
    if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP) 
         | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15) 
            & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                >> 1U) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0_SEL))))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP)) 
                     & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                        >> 0x0000000bU)));
        vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP)
                               ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 4U)));
        vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    vlSelfRef.R_SCCE_R = 0U;
    vlSelfRef.R_SCCE_F = 0U;
    vlSelfRef.N_SCCE_R = 0U;
    vlSelfRef.N_SCCE_F = 0U;
    if (vlSelfRef.CE) {
        __Vdly__tb_top__DOT__ref_i__DOT__CLK_DIV = 
            (1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV)));
        vlSelfRef.R_SCCE_R = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV) 
                              & (IData)(vlSelfRef.CE));
        vlSelfRef.R_SCCE_F = ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV)) 
                              & (IData)(vlSelfRef.CE));
        __Vdly__tb_top__DOT__new_i__DOT__CLK_DIV = 
            (1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV)));
        vlSelfRef.N_SCCE_R = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV) 
                              & (IData)(vlSelfRef.CE));
        vlSelfRef.N_SCCE_F = ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV)) 
                              & (IData)(vlSelfRef.CE));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000000fU & (((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)) 
                          & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD))
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 1U) : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)
                                        ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q 
                                                             >> 0x00000026U)))))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000000fU & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN) 
                          & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD))
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 1U) : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)
                                        ? (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q 
                                                   >> 0x00000026U))
                                        : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                                           >> 3U))))];
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000000fU & (((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)) 
                          & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD))
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 1U) : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)
                                        ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                             >> 0x00000026U)))))];
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000000fU & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) 
                          & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD))
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 1U) : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)
                                        ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                   >> 0x00000026U))
                                        : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                                           >> 3U))))];
    if (__VdlySet__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV = __Vdly__tb_top__DOT__ref_i__DOT__CLK_DIV;
    vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV = __Vdly__tb_top__DOT__new_i__DOT__CLK_DIV;
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem
                [__VdlyDim0__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem__v3) 
                  << 0x00000018U));
    }
}

void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_PLFOCalc__0__Vfuncout;
    __Vfunc_PLFOCalc__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__0__DATA;
    __Vfunc_PLFOCalc__0__DATA = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__0__NOISE;
    __Vfunc_PLFOCalc__0__NOISE = 0;
    CData/*1:0*/ __Vfunc_PLFOCalc__0__PLFOWS;
    __Vfunc_PLFOCalc__0__PLFOWS = 0;
    CData/*2:0*/ __Vfunc_PLFOCalc__0__PLFOS;
    __Vfunc_PLFOCalc__0__PLFOS = 0;
    IData/*22:0*/ __Vfunc_PhaseCalc__1__Vfuncout;
    __Vfunc_PhaseCalc__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PhaseCalc__1__SCR5;
    __Vfunc_PhaseCalc__1__SCR5 = 0;
    CData/*7:0*/ __Vfunc_PhaseCalc__1__PLFO_WAVE;
    __Vfunc_PhaseCalc__1__PLFO_WAVE = 0;
    SData/*9:0*/ __Vfunc_LFOFreqDiv__2__Vfuncout;
    __Vfunc_LFOFreqDiv__2__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_LFOFreqDiv__2__LFOF;
    __Vfunc_LFOFreqDiv__2__LFOF = 0;
    SData/*15:0*/ __Vfunc_MDCalc__3__X;
    __Vfunc_MDCalc__3__X = 0;
    SData/*15:0*/ __Vfunc_MDCalc__3__Y;
    __Vfunc_MDCalc__3__Y = 0;
    CData/*3:0*/ __Vfunc_MDCalc__3__MDL;
    __Vfunc_MDCalc__3__MDL = 0;
    SData/*15:0*/ __Vfunc_WaveMask__4__LEA;
    __Vfunc_WaveMask__4__LEA = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__13__Vfuncout;
    __Vfunc_LevelCalc__13__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__13__WAVE;
    __Vfunc_LevelCalc__13__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__13__SDL;
    __Vfunc_LevelCalc__13__SDL = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__14__Vfuncout;
    __Vfunc_PanLCalc__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__14__WAVE;
    __Vfunc_PanLCalc__14__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanLCalc__14__PAN;
    __Vfunc_PanLCalc__14__PAN = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__15__Vfuncout;
    __Vfunc_PanRCalc__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__15__WAVE;
    __Vfunc_PanRCalc__15__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanRCalc__15__PAN;
    __Vfunc_PanRCalc__15__PAN = 0;
    IData/*19:0*/ __Vfunc_DSPLevelCalc__16__Vfuncout;
    __Vfunc_DSPLevelCalc__16__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_DSPLevelCalc__16__WAVE;
    __Vfunc_DSPLevelCalc__16__WAVE = 0;
    CData/*2:0*/ __Vfunc_DSPLevelCalc__16__SDL;
    __Vfunc_DSPLevelCalc__16__SDL = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__21__Vfuncout;
    __Vfunc_LevelCalc__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__21__WAVE;
    __Vfunc_LevelCalc__21__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__21__SDL;
    __Vfunc_LevelCalc__21__SDL = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__22__WAVE;
    __Vfunc_LevelCalc__22__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__22__SDL;
    __Vfunc_LevelCalc__22__SDL = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__23__WAVE;
    __Vfunc_LevelCalc__23__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__23__SDL;
    __Vfunc_LevelCalc__23__SDL = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__24__Vfuncout;
    __Vfunc_PanLCalc__24__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__24__WAVE;
    __Vfunc_PanLCalc__24__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanLCalc__24__PAN;
    __Vfunc_PanLCalc__24__PAN = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__25__Vfuncout;
    __Vfunc_PanRCalc__25__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__25__WAVE;
    __Vfunc_PanRCalc__25__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanRCalc__25__PAN;
    __Vfunc_PanRCalc__25__PAN = 0;
    SData/*15:0*/ __Vfunc_MVolCalc__26__Vfuncout;
    __Vfunc_MVolCalc__26__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_MVolCalc__26__WAVE;
    __Vfunc_MVolCalc__26__WAVE = 0;
    CData/*3:0*/ __Vfunc_MVolCalc__26__MVOL;
    __Vfunc_MVolCalc__26__MVOL = 0;
    CData/*0:0*/ __Vfunc_MVolCalc__26__DAC18B;
    __Vfunc_MVolCalc__26__DAC18B = 0;
    SData/*15:0*/ __Vfunc_MVolCalc__27__Vfuncout;
    __Vfunc_MVolCalc__27__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_MVolCalc__27__WAVE;
    __Vfunc_MVolCalc__27__WAVE = 0;
    CData/*3:0*/ __Vfunc_MVolCalc__27__MVOL;
    __Vfunc_MVolCalc__27__MVOL = 0;
    CData/*0:0*/ __Vfunc_MVolCalc__27__DAC18B;
    __Vfunc_MVolCalc__27__DAC18B = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__28__Vfuncout;
    __Vfunc_PLFOCalc__28__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__28__DATA;
    __Vfunc_PLFOCalc__28__DATA = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__28__NOISE;
    __Vfunc_PLFOCalc__28__NOISE = 0;
    CData/*1:0*/ __Vfunc_PLFOCalc__28__PLFOWS;
    __Vfunc_PLFOCalc__28__PLFOWS = 0;
    CData/*2:0*/ __Vfunc_PLFOCalc__28__PLFOS;
    __Vfunc_PLFOCalc__28__PLFOS = 0;
    IData/*22:0*/ __Vfunc_PhaseCalc__29__Vfuncout;
    __Vfunc_PhaseCalc__29__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PhaseCalc__29__SCR5;
    __Vfunc_PhaseCalc__29__SCR5 = 0;
    CData/*7:0*/ __Vfunc_PhaseCalc__29__PLFO_WAVE;
    __Vfunc_PhaseCalc__29__PLFO_WAVE = 0;
    SData/*9:0*/ __Vfunc_LFOFreqDiv__30__Vfuncout;
    __Vfunc_LFOFreqDiv__30__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_LFOFreqDiv__30__LFOF;
    __Vfunc_LFOFreqDiv__30__LFOF = 0;
    SData/*15:0*/ __Vfunc_MDCalc__31__X;
    __Vfunc_MDCalc__31__X = 0;
    SData/*15:0*/ __Vfunc_MDCalc__31__Y;
    __Vfunc_MDCalc__31__Y = 0;
    CData/*3:0*/ __Vfunc_MDCalc__31__MDL;
    __Vfunc_MDCalc__31__MDL = 0;
    SData/*15:0*/ __Vfunc_WaveMask__32__LEA;
    __Vfunc_WaveMask__32__LEA = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__41__Vfuncout;
    __Vfunc_LevelCalc__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__41__WAVE;
    __Vfunc_LevelCalc__41__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__41__SDL;
    __Vfunc_LevelCalc__41__SDL = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__42__Vfuncout;
    __Vfunc_PanLCalc__42__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__42__WAVE;
    __Vfunc_PanLCalc__42__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanLCalc__42__PAN;
    __Vfunc_PanLCalc__42__PAN = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__43__Vfuncout;
    __Vfunc_PanRCalc__43__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__43__WAVE;
    __Vfunc_PanRCalc__43__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanRCalc__43__PAN;
    __Vfunc_PanRCalc__43__PAN = 0;
    IData/*19:0*/ __Vfunc_DSPLevelCalc__44__Vfuncout;
    __Vfunc_DSPLevelCalc__44__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_DSPLevelCalc__44__WAVE;
    __Vfunc_DSPLevelCalc__44__WAVE = 0;
    CData/*2:0*/ __Vfunc_DSPLevelCalc__44__SDL;
    __Vfunc_DSPLevelCalc__44__SDL = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__49__Vfuncout;
    __Vfunc_LevelCalc__49__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__49__WAVE;
    __Vfunc_LevelCalc__49__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__49__SDL;
    __Vfunc_LevelCalc__49__SDL = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__50__WAVE;
    __Vfunc_LevelCalc__50__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__50__SDL;
    __Vfunc_LevelCalc__50__SDL = 0;
    SData/*15:0*/ __Vfunc_LevelCalc__51__WAVE;
    __Vfunc_LevelCalc__51__WAVE = 0;
    CData/*2:0*/ __Vfunc_LevelCalc__51__SDL;
    __Vfunc_LevelCalc__51__SDL = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__52__Vfuncout;
    __Vfunc_PanLCalc__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanLCalc__52__WAVE;
    __Vfunc_PanLCalc__52__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanLCalc__52__PAN;
    __Vfunc_PanLCalc__52__PAN = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__53__Vfuncout;
    __Vfunc_PanRCalc__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PanRCalc__53__WAVE;
    __Vfunc_PanRCalc__53__WAVE = 0;
    CData/*4:0*/ __Vfunc_PanRCalc__53__PAN;
    __Vfunc_PanRCalc__53__PAN = 0;
    SData/*15:0*/ __Vfunc_MVolCalc__54__Vfuncout;
    __Vfunc_MVolCalc__54__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_MVolCalc__54__WAVE;
    __Vfunc_MVolCalc__54__WAVE = 0;
    CData/*3:0*/ __Vfunc_MVolCalc__54__MVOL;
    __Vfunc_MVolCalc__54__MVOL = 0;
    CData/*0:0*/ __Vfunc_MVolCalc__54__DAC18B;
    __Vfunc_MVolCalc__54__DAC18B = 0;
    SData/*15:0*/ __Vfunc_MVolCalc__55__Vfuncout;
    __Vfunc_MVolCalc__55__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_MVolCalc__55__WAVE;
    __Vfunc_MVolCalc__55__WAVE = 0;
    CData/*3:0*/ __Vfunc_MVolCalc__55__MVOL;
    __Vfunc_MVolCalc__55__MVOL = 0;
    CData/*0:0*/ __Vfunc_MVolCalc__55__DAC18B;
    __Vfunc_MVolCalc__55__DAC18B = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND;
    __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
    __Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L;
    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R;
    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L;
    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R;
    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R = 0;
    CData/*6:0*/ __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT;
    __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT = 0;
    SData/*10:0*/ __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN;
    __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__new_i__DOT__CR18;
    __Vdly__tb_top__DOT__new_i__DOT__CR18 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__new_i__DOT__CR12;
    __Vdly__tb_top__DOT__new_i__DOT__CR12 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__new_i__DOT__CR10;
    __Vdly__tb_top__DOT__new_i__DOT__CR10 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__new_i__DOT__CR9;
    __Vdly__tb_top__DOT__new_i__DOT__CR9 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__new_i__DOT__CR8;
    __Vdly__tb_top__DOT__new_i__DOT__CR8 = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND;
    __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
    __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L;
    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R;
    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L;
    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R;
    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R = 0;
    CData/*6:0*/ __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT;
    __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT = 0;
    SData/*10:0*/ __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN;
    __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__ref_i__DOT__CR18;
    __Vdly__tb_top__DOT__ref_i__DOT__CR18 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__ref_i__DOT__CR12;
    __Vdly__tb_top__DOT__ref_i__DOT__CR12 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__ref_i__DOT__CR10;
    __Vdly__tb_top__DOT__ref_i__DOT__CR10 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__ref_i__DOT__CR9;
    __Vdly__tb_top__DOT__ref_i__DOT__CR9 = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__ref_i__DOT__CR8;
    __Vdly__tb_top__DOT__ref_i__DOT__CR8 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__SCR0_KB__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR0_KB__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0;
    __VdlyVal__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v2;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v3;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v3 = 0;
    CData/*3:0*/ __VdlyLsb__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0;
    __VdlyLsb__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0;
    __VdlyDim0__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0;
    __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v1;
    __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v129;
    __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v129 = 0;
    IData/*17:0*/ TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 = 0;
    IData/*17:0*/ TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 = 0;
    IData/*17:0*/ TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 = 0;
    IData/*17:0*/ TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 = 0;
    IData/*17:0*/ TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 = 0;
    IData/*17:0*/ TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT 
        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT;
    __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCNT 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCNT;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCNT 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT;
    vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__DSP_EXTS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__DSP_EXTS__v0 = 0U;
    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L = vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_L;
    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R = vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_R;
    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L = vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_L;
    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R = vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_R;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__A = vlSelfRef.tb_top__DOT__ref_i__DOT__A;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCU_RA 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_RA;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCU_RPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_RPEND;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCU_WA 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_WA;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCU_D 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_D;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCU_WE 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_WE;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCU_WPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_WPEND;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCPU_RA 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCPU_RA;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCPU_RPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCPU_RPEND;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCPU_WA 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCPU_WA;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCPU_D 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCPU_D;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCPU_WE 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCPU_WE;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCPU_WPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCPU_WPEND;
    vlSelfRef.__Vdly__R_SCDTACK_N = vlSelfRef.R_SCDTACK_N;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MEM_ST 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_ST;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__MEM_DEV 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__MEM_DEV;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_DAT 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_DAT;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_ST 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__REG_ST;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__IO_ST 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__IO_ST;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A = vlSelfRef.tb_top__DOT__new_i__DOT__A;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RA 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RPEND;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WA 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_D 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_D;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WE 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WE;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WPEND;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RA 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WA 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_D 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_D;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WE 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WE;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WPEND;
    vlSelfRef.__Vdly__N_SCDTACK_N = vlSelfRef.N_SCDTACK_N;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV 
        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DAT 
        = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DAT;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST 
        = vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND 
        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__IO_ST 
        = vlSelfRef.tb_top__DOT__new_i__DOT__IO_ST;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD0 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_WD0;
    __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v129 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3_SCR0 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP3_SCR0;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR6 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR6;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR2 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR2;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_WD0 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP4_WD0;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR1 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR1;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD1 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_WD1;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3_SCR0 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR6 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR6;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR2 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR1 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_WD1 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP4_WD1;
    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L = vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_L;
    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R = vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_R;
    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L = vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_L;
    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R = vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_R;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__CR1;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v1 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1 
        = vlSelfRef.tb_top__DOT__new_i__DOT__CR1;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__WD_READ 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__WD_READ;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[0U] 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[0U];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U] 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[2U] 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[2U];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ 
        = vlSelfRef.tb_top__DOT__new_i__DOT__WD_READ;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[0U] 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U] 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U];
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[2U] 
        = vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U];
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_MA 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_MA;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_RA 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_RA;
    __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_LEN;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_DIR 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_DIR;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_WR;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC;
    __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND;
    __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v1 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v2 = 0U;
    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v3 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_MA 
        = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_MA;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_RA 
        = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_RA;
    __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_LEN;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DIR 
        = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR 
        = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC 
        = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC;
    __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_PEND;
    __Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__CR4;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4 
        = vlSelfRef.tb_top__DOT__new_i__DOT__CR4;
    __Vdly__tb_top__DOT__ref_i__DOT__CR10 = vlSelfRef.tb_top__DOT__ref_i__DOT__CR10;
    __Vdly__tb_top__DOT__ref_i__DOT__CR9 = vlSelfRef.tb_top__DOT__ref_i__DOT__CR9;
    __Vdly__tb_top__DOT__ref_i__DOT__CR8 = vlSelfRef.tb_top__DOT__ref_i__DOT__CR8;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__CR7;
    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__REG_Q;
    __Vdly__tb_top__DOT__ref_i__DOT__CR18 = vlSelfRef.tb_top__DOT__ref_i__DOT__CR18;
    __Vdly__tb_top__DOT__ref_i__DOT__CR12 = vlSelfRef.tb_top__DOT__ref_i__DOT__CR12;
    __Vdly__tb_top__DOT__new_i__DOT__CR10 = vlSelfRef.tb_top__DOT__new_i__DOT__CR10;
    __Vdly__tb_top__DOT__new_i__DOT__CR9 = vlSelfRef.tb_top__DOT__new_i__DOT__CR9;
    __Vdly__tb_top__DOT__new_i__DOT__CR8 = vlSelfRef.tb_top__DOT__new_i__DOT__CR8;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7 
        = vlSelfRef.tb_top__DOT__new_i__DOT__CR7;
    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__REG_Q;
    __Vdly__tb_top__DOT__new_i__DOT__CR18 = vlSelfRef.tb_top__DOT__new_i__DOT__CR18;
    __Vdly__tb_top__DOT__new_i__DOT__CR12 = vlSelfRef.tb_top__DOT__new_i__DOT__CR12;
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.RES_N) {
            if ((IData)(((0x01f00000U == (0x01f00000U 
                                          & vlSelfRef.tb_top__DOT__new_i__DOT__OP7)) 
                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE)))) {
                if ((4U & (IData)(vlSelfRef.SND_EN))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__DSP_EXTS__v0 
                        = vlSelfRef.ESL;
                    vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__DSP_EXTS__v1 
                        = vlSelfRef.ESR;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__DSP_EXTS__v0 = 0U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__DSP_EXTS__v1 = 0U;
                }
                vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__DSP_EXTS__v0 = 1U;
                vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)));
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__S 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                  >> 0x00000014U));
            __Vfunc_LevelCalc__41__SDL = (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8) 
                                                >> 0x0000000dU));
            __Vfunc_LevelCalc__41__WAVE = (0x0000ffffU 
                                           & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                              >> 1U));
            __Vfunc_LevelCalc__41__Vfuncout = ((0U 
                                                != (IData)(__Vfunc_LevelCalc__41__SDL))
                                                ? (0x0000ffffU 
                                                   & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__41__WAVE), 
                                                                    (7U 
                                                                     & (~ (IData)(__Vfunc_LevelCalc__41__SDL)))))
                                                : 0U);
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__TEMP 
                = __Vfunc_LevelCalc__41__Vfuncout;
            __Vfunc_PanLCalc__42__PAN = (0x0000001fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8) 
                                            >> 8U));
            __Vfunc_PanLCalc__42__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__TEMP;
            vlSymsp->TOP__REF_SCSP_PKG.PanLCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanLCalc__42__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanLCalc__42__PAN) 
                                                    >> 1U))));
            __Vfunc_PanLCalc__42__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanLCalc__42__PAN))
                                                  ? (IData)(__Vfunc_PanLCalc__42__WAVE)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PanLCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanLCalc__42__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__REF_SCSP_PKG.PanLCalc__Vstatic__TEMP), 2U)
                                                    : 0U))));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_L 
                = __Vfunc_PanLCalc__42__Vfuncout;
            __Vfunc_PanRCalc__43__PAN = (0x0000001fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8) 
                                            >> 8U));
            __Vfunc_PanRCalc__43__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__TEMP;
            vlSymsp->TOP__REF_SCSP_PKG.PanRCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanRCalc__43__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanRCalc__43__PAN) 
                                                    >> 1U))));
            __Vfunc_PanRCalc__43__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanRCalc__43__PAN))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PanRCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanRCalc__43__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__REF_SCSP_PKG.PanRCalc__Vstatic__TEMP), 2U)
                                                    : 0U))
                                                  : (IData)(__Vfunc_PanRCalc__43__WAVE)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_R 
                = __Vfunc_PanRCalc__43__Vfuncout;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__S 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000014U));
            __Vfunc_LevelCalc__13__SDL = (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8) 
                                                >> 0x0000000dU));
            __Vfunc_LevelCalc__13__WAVE = (0x0000ffffU 
                                           & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                              >> 1U));
            __Vfunc_LevelCalc__13__Vfuncout = ((0U 
                                                != (IData)(__Vfunc_LevelCalc__13__SDL))
                                                ? (0x0000ffffU 
                                                   & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__13__WAVE), 
                                                                    (7U 
                                                                     & (~ (IData)(__Vfunc_LevelCalc__13__SDL)))))
                                                : 0U);
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__TEMP 
                = __Vfunc_LevelCalc__13__Vfuncout;
            __Vfunc_PanLCalc__14__PAN = (0x0000001fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8) 
                                            >> 8U));
            __Vfunc_PanLCalc__14__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__TEMP;
            vlSymsp->TOP__SCSP_PKG.PanLCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanLCalc__14__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanLCalc__14__PAN) 
                                                    >> 1U))));
            __Vfunc_PanLCalc__14__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanLCalc__14__PAN))
                                                  ? (IData)(__Vfunc_PanLCalc__14__WAVE)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__SCSP_PKG.PanLCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanLCalc__14__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__SCSP_PKG.PanLCalc__Vstatic__TEMP), 2U)
                                                    : 0U))));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_L 
                = __Vfunc_PanLCalc__14__Vfuncout;
            __Vfunc_PanRCalc__15__PAN = (0x0000001fU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8) 
                                            >> 8U));
            __Vfunc_PanRCalc__15__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__TEMP;
            vlSymsp->TOP__SCSP_PKG.PanRCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanRCalc__15__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanRCalc__15__PAN) 
                                                    >> 1U))));
            __Vfunc_PanRCalc__15__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanRCalc__15__PAN))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SCSP_PKG.PanRCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanRCalc__15__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__SCSP_PKG.PanRCalc__Vstatic__TEMP), 2U)
                                                    : 0U))
                                                  : (IData)(__Vfunc_PanRCalc__15__WAVE)));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_R 
                = __Vfunc_PanRCalc__15__Vfuncout;
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__S 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                  >> 0x00000014U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP = 0U;
            if ((0x0fU >= (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__S))) {
                __Vfunc_LevelCalc__49__SDL = (7U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8) 
                                               >> 5U));
                __Vfunc_LevelCalc__49__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_Q;
                __Vfunc_LevelCalc__49__Vfuncout = (
                                                   (0U 
                                                    != (IData)(__Vfunc_LevelCalc__49__SDL))
                                                    ? 
                                                   (0x0000ffffU 
                                                    & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__49__WAVE), 
                                                                     (7U 
                                                                      & (~ (IData)(__Vfunc_LevelCalc__49__SDL)))))
                                                    : 0U);
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP 
                    = __Vfunc_LevelCalc__49__Vfuncout;
            } else if ((0x10U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__S))) {
                if ((4U & (IData)(vlSelfRef.SND_EN))) {
                    __Vfunc_LevelCalc__50__SDL = (7U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8) 
                                                     >> 5U));
                    __Vfunc_LevelCalc__50__WAVE = vlSelfRef.ESL;
                    vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_11__LevelCalc 
                        = ((0U != (IData)(__Vfunc_LevelCalc__50__SDL))
                            ? (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__50__WAVE), 
                                                            (7U 
                                                             & (~ (IData)(__Vfunc_LevelCalc__50__SDL)))))
                            : 0U);
                    vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_12 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_11__LevelCalc;
                } else {
                    vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_12 = 0U;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_12;
            } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__S))) {
                if ((4U & (IData)(vlSelfRef.SND_EN))) {
                    __Vfunc_LevelCalc__51__SDL = (7U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8) 
                                                     >> 5U));
                    __Vfunc_LevelCalc__51__WAVE = vlSelfRef.ESR;
                    vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_13__LevelCalc 
                        = ((0U != (IData)(__Vfunc_LevelCalc__51__SDL))
                            ? (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__51__WAVE), 
                                                            (7U 
                                                             & (~ (IData)(__Vfunc_LevelCalc__51__SDL)))))
                            : 0U);
                    vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_14 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_13__LevelCalc;
                } else {
                    vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_14 = 0U;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_14;
            }
            __Vfunc_PanLCalc__52__PAN = (0x0000001fU 
                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8));
            __Vfunc_PanLCalc__52__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP;
            vlSymsp->TOP__REF_SCSP_PKG.PanLCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanLCalc__52__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanLCalc__52__PAN) 
                                                    >> 1U))));
            __Vfunc_PanLCalc__52__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanLCalc__52__PAN))
                                                  ? (IData)(__Vfunc_PanLCalc__52__WAVE)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PanLCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanLCalc__52__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__REF_SCSP_PKG.PanLCalc__Vstatic__TEMP), 2U)
                                                    : 0U))));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_L 
                = __Vfunc_PanLCalc__52__Vfuncout;
            __Vfunc_PanRCalc__53__PAN = (0x0000001fU 
                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8));
            __Vfunc_PanRCalc__53__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP;
            vlSymsp->TOP__REF_SCSP_PKG.PanRCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanRCalc__53__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanRCalc__53__PAN) 
                                                    >> 1U))));
            __Vfunc_PanRCalc__53__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanRCalc__53__PAN))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PanRCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanRCalc__53__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__REF_SCSP_PKG.PanRCalc__Vstatic__TEMP), 2U)
                                                    : 0U))
                                                  : (IData)(__Vfunc_PanRCalc__53__WAVE)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_R 
                = __Vfunc_PanRCalc__53__Vfuncout;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__S 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000014U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP = 0U;
            if ((0x0fU >= (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__S))) {
                __Vfunc_LevelCalc__21__SDL = (7U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8) 
                                               >> 5U));
                __Vfunc_LevelCalc__21__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_Q;
                __Vfunc_LevelCalc__21__Vfuncout = (
                                                   (0U 
                                                    != (IData)(__Vfunc_LevelCalc__21__SDL))
                                                    ? 
                                                   (0x0000ffffU 
                                                    & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__21__WAVE), 
                                                                     (7U 
                                                                      & (~ (IData)(__Vfunc_LevelCalc__21__SDL)))))
                                                    : 0U);
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP 
                    = __Vfunc_LevelCalc__21__Vfuncout;
            } else if ((0x10U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__S))) {
                if ((4U & (IData)(vlSelfRef.SND_EN))) {
                    __Vfunc_LevelCalc__22__SDL = (7U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8) 
                                                     >> 5U));
                    __Vfunc_LevelCalc__22__WAVE = vlSelfRef.ESL;
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_11__LevelCalc 
                        = ((0U != (IData)(__Vfunc_LevelCalc__22__SDL))
                            ? (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__22__WAVE), 
                                                            (7U 
                                                             & (~ (IData)(__Vfunc_LevelCalc__22__SDL)))))
                            : 0U);
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_12 
                        = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_11__LevelCalc;
                } else {
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_12 = 0U;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP 
                    = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_12;
            } else if ((0x11U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__S))) {
                if ((4U & (IData)(vlSelfRef.SND_EN))) {
                    __Vfunc_LevelCalc__23__SDL = (7U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8) 
                                                     >> 5U));
                    __Vfunc_LevelCalc__23__WAVE = vlSelfRef.ESR;
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_13__LevelCalc 
                        = ((0U != (IData)(__Vfunc_LevelCalc__23__SDL))
                            ? (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_LevelCalc__23__WAVE), 
                                                            (7U 
                                                             & (~ (IData)(__Vfunc_LevelCalc__23__SDL)))))
                            : 0U);
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_14 
                        = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_13__LevelCalc;
                } else {
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_14 = 0U;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP 
                    = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_14;
            }
            __Vfunc_PanLCalc__24__PAN = (0x0000001fU 
                                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8));
            __Vfunc_PanLCalc__24__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP;
            vlSymsp->TOP__SCSP_PKG.PanLCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanLCalc__24__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanLCalc__24__PAN) 
                                                    >> 1U))));
            __Vfunc_PanLCalc__24__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanLCalc__24__PAN))
                                                  ? (IData)(__Vfunc_PanLCalc__24__WAVE)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__SCSP_PKG.PanLCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanLCalc__24__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__SCSP_PKG.PanLCalc__Vstatic__TEMP), 2U)
                                                    : 0U))));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_L 
                = __Vfunc_PanLCalc__24__Vfuncout;
            __Vfunc_PanRCalc__25__PAN = (0x0000001fU 
                                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8));
            __Vfunc_PanRCalc__25__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP;
            vlSymsp->TOP__SCSP_PKG.PanRCalc__Vstatic__TEMP 
                = (0x0000ffffU & VL_SHIFTRS_III(16,16,3, (IData)(__Vfunc_PanRCalc__25__WAVE), 
                                                (7U 
                                                 & ((IData)(__Vfunc_PanRCalc__25__PAN) 
                                                    >> 1U))));
            __Vfunc_PanRCalc__25__Vfuncout = (0x0000ffffU 
                                              & ((0x00000010U 
                                                  & (IData)(__Vfunc_PanRCalc__25__PAN))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SCSP_PKG.PanRCalc__Vstatic__TEMP) 
                                                  - 
                                                  ((1U 
                                                    & (IData)(__Vfunc_PanRCalc__25__PAN))
                                                    ? 
                                                   VL_SHIFTRS_III(16,16,32, (IData)(vlSymsp->TOP__SCSP_PKG.PanRCalc__Vstatic__TEMP), 2U)
                                                    : 0U))
                                                  : (IData)(__Vfunc_PanRCalc__25__WAVE)));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_R 
                = __Vfunc_PanRCalc__25__Vfuncout;
            if ((1U & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR7) 
                        >> 0x0000000cU) & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DEXE_OLD))))) {
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_MA 
                    = ((0x00078000U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR6) 
                                       << 3U)) | (0x00007fffU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR5) 
                                                     >> 1U)));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_RA 
                    = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR6) 
                                      >> 1U));
                __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN 
                    = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR7) 
                                      >> 1U));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_DIR 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR7) 
                             >> 0x0000000dU));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC = 1U;
            }
            if (((0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) {
                if ((2U != (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 8U)))) {
                    if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                      >> 9U)))) {
                        if ((3U == (3U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                            __VdlyDim0__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0 
                                = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                  >> 2U));
                            __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0 = 1U;
                        }
                    }
                }
                if ((2U == (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 8U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1)) 
                                                   | (0x00000100U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR0 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0)) 
                                                   | (0x0fU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR0 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0)) 
                                                   | (0x00000300U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR3 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR3)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR3 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR3));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR2 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR2)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR2 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR2)) 
                                                   | (0x00001f00U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                            if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4 
                                                = (
                                                   (0x07ffU 
                                                    & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4)) 
                                                   | (0x0000f800U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                        }
                        if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                        if ((1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                   & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR6 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR6)) 
                                                   | (0xfeU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((IData)(
                                                    (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                      >> 1U) 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR6 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR6)) 
                                                   | (0x0000ff00U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                   & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR5 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR5)) 
                                                   | (0xfeU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((IData)(
                                                    (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                      >> 1U) 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR5 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR5)) 
                                                   | (0x0000ff00U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                            if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR11 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR11)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR11 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR11)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR18) 
                                                         & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)))));
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR19 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR19)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                                                = (
                                                   (0xf8ffU 
                                                    & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18)) 
                                                   | (0x00000700U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR18) 
                                                         & ((~ 
                                                             ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                                                              >> 8U)) 
                                                            << 8U))));
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR19 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR19)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                                            = ((0xffdfU 
                                                & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18)) 
                                               | (0x00000020U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR17 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR17)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR17 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR17)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR16 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR16 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16));
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12)) 
                                               | (0x000000ffU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR12) 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)))));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                                            = ((0xf8ffU 
                                                & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12)) 
                                               | (0x00000700U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR12) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                                                          >> 8U)) 
                                                        << 8U))));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                                        = ((0xffdfU 
                                            & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12)) 
                                           | (0x00000020U 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR13 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR13)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR13 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR13)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                    }
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR15 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR15 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR14 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__CR14 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                        if ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                            if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__ref_i__DOT__CR10 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR10)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__ref_i__DOT__CR10 
                                            = ((0x00ffU 
                                                & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR10)) 
                                               | (0x00000700U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__ref_i__DOT__CR9 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR9)) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__ref_i__DOT__CR9 
                                        = ((0x00ffU 
                                            & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR9)) 
                                           | (0x00000700U 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                            } else {
                                if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__ref_i__DOT__CR8 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR8)) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__ref_i__DOT__CR8 
                                        = ((0x00ffU 
                                            & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR8)) 
                                           | (0x00000700U 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                            if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                                if ((1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                           & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC))))) {
                                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7 
                                        = ((0xff00U 
                                            & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7)) 
                                           | (0xfeU 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                                if ((IData)((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                              >> 1U) 
                                             & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC))))) {
                                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7 
                                        = ((0x00ffU 
                                            & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7)) 
                                           | (0x00007f00U 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
                                }
                            }
                        }
                    }
                }
            } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk13__DOT__REG_RD_DELAY) {
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 9U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                            ? ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                ? 0U : ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                         ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                             ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q)
                                             : (0x00ffU 
                                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q)))
                                         : ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                             ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q)
                                             : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q))))
                            : ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                ? ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q)
                                        : (0x0fffU 
                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q)))
                                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q)
                                        : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q)))
                                : ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q)
                                        : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q))
                                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q)
                                        : (0x0fffU 
                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q))))));
                } else if ((2U == (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                         >> 8U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                            ? ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                ? 0U : ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                         ? ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                                 ? 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR19))
                                                 : 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR18)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                                 ? 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR17))
                                                 : 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16))))
                                         : ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                                 ? 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15))
                                                 : 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                                 ? 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR13))
                                                 : 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR12))))))
                            : ((8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                ? ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                            ? (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR11))
                                            : (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR10)))
                                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                            ? (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR9))
                                            : (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR8))))
                                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                            ? (0x7000U 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR7))
                                            : 0U) : 0U))
                                : ((4U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                                 ? 0U
                                                 : 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR4))))
                                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                            ? (0x00ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR3))
                                            : (0x1fffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR2)))
                                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                            ? (0x01ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR1))
                                            : (0x030fU 
                                               & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0)))))));
                } else if ((0x18U == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 5U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5];
                } else if ((0x19U == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 5U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5];
                } else if ((0x0eU == (0x0000001fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 6U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = (0xfff8U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q));
                } else if ((0x1eU == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 5U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q;
                } else if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                         >> 9U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = (0x0000ffffU & ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                           ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                               ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q)
                                               : (IData)(
                                                         (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                          >> 0x10U)))
                                           : ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))
                                               ? (IData)(
                                                         (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                          >> 0x20U))
                                               : (IData)(
                                                         (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                          >> 0x30U)))));
                } else if ((6U == (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                         >> 8U)))) {
                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                                = (0x0000ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q);
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                            = (0x00ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 0x10U));
                    }
                } else if ((0x1cU == (0x0000001fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 6U)))) {
                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                                = (0x0000ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q);
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                            = (0x00ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 0x10U));
                    }
                } else if ((0x3aU == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 5U)))) {
                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) {
                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                                = (0x0000ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MIXS_Q);
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                            = (0x000fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MIXS_Q 
                                          >> 0x10U));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q 
                        = ((0x76U == (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                       >> 4U))) ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q)
                            : ((0x03b8U == (0x000003ffU 
                                            & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                               >> 1U)))
                                ? vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_EXTS
                               [(1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))]
                                : 0U));
                }
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_LEN) 
                                  - (IData)(1U)));
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC) {
                if (vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_DIR) {
                    if ((((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_WR)) 
                          & (8U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_ST))) 
                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) {
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_RA 
                            = (0x000007ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_RA)));
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 1U;
                    } else if ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_WR) 
                                 & (8U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_ST))) 
                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) {
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_MA 
                            = (0x0007ffffU & ((IData)(1U) 
                                              + vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_MA));
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 0U;
                        __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN 
                            = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT;
                        if ((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT))))) {
                            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC = 0U;
                        }
                    }
                } else if ((((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_WR)) 
                             & (3U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_DEV_LATCH))) 
                            & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_MA 
                        = (0x0007ffffU & ((IData)(1U) 
                                          + vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_MA));
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 1U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_WR) 
                             & (8U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_ST))) 
                            & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_RA 
                        = (0x000007ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_RA)));
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 0U;
                    __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT;
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT))))) {
                        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC = 0U;
                    }
                }
            }
            if ((1U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7) 
                        >> 0x0000000cU) & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DEXE_OLD))))) {
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_MA 
                    = ((0x00078000U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR6) 
                                       << 3U)) | (0x00007fffU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR5) 
                                                     >> 1U)));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_RA 
                    = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR6) 
                                      >> 1U));
                __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN 
                    = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7) 
                                      >> 1U));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DIR 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7) 
                             >> 0x0000000dU));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC = 1U;
            }
            if (((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
                if ((2U == (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 8U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1)) 
                                                   | (0x00000100U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR0 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0)) 
                                                   | (0x0fU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR0 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0)) 
                                                   | (0x00000300U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR3 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR3)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR3 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR3));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR2 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR2)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR2 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR2)) 
                                                   | (0x00001f00U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                            if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4 
                                                = (
                                                   (0x07ffU 
                                                    & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4)) 
                                                   | (0x0000f800U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                        }
                        if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                        if ((1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                   & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR6 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR6)) 
                                                   | (0xfeU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((IData)(
                                                    (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                      >> 1U) 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR6 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR6)) 
                                                   | (0x0000ff00U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                   & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR5 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR5)) 
                                                   | (0xfeU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((IData)(
                                                    (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                      >> 1U) 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC))))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR5 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR5)) 
                                                   | (0x0000ff00U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                            if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR11 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR11)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR11 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR11)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            __Vdly__tb_top__DOT__new_i__DOT__CR18 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR18) 
                                                         & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)))));
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR19 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR19)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            __Vdly__tb_top__DOT__new_i__DOT__CR18 
                                                = (
                                                   (0xf8ffU 
                                                    & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18)) 
                                                   | (0x00000700U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR18) 
                                                         & ((~ 
                                                             ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                                                              >> 8U)) 
                                                            << 8U))));
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR19 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR19)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__new_i__DOT__CR18 
                                            = ((0xffdfU 
                                                & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18)) 
                                               | (0x00000020U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR17 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR17)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR17 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR17)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR16 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR16 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16));
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__new_i__DOT__CR12 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12)) 
                                               | (0x000000ffU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR12) 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)))));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__new_i__DOT__CR12 
                                            = ((0xf8ffU 
                                                & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12)) 
                                               | (0x00000700U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR12) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                                                          >> 8U)) 
                                                        << 8U))));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__new_i__DOT__CR12 
                                        = ((0xffdfU 
                                            & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12)) 
                                           | (0x00000020U 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR13 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR13)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR13 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR13)) 
                                                   | (0x00000700U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                    }
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR15 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR15 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15));
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR14 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14)) 
                                                   | (0x000000ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                        }
                                        if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__CR14 
                                                = (0x00ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                        if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                            if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__new_i__DOT__CR10 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR10)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                        __Vdly__tb_top__DOT__new_i__DOT__CR10 
                                            = ((0x00ffU 
                                                & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR10)) 
                                               | (0x00000700U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__new_i__DOT__CR9 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR9)) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__new_i__DOT__CR9 
                                        = ((0x00ffU 
                                            & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR9)) 
                                           | (0x00000700U 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                            } else {
                                if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__new_i__DOT__CR8 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR8)) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE))) {
                                    __Vdly__tb_top__DOT__new_i__DOT__CR8 
                                        = ((0x00ffU 
                                            & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR8)) 
                                           | (0x00000700U 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                            if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                                if ((1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                           & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC))))) {
                                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7 
                                        = ((0xff00U 
                                            & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7)) 
                                           | (0xfeU 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                                if ((IData)((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                              >> 1U) 
                                             & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC))))) {
                                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7 
                                        = ((0x00ffU 
                                            & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7)) 
                                           | (0x00007f00U 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
                                }
                            }
                        }
                    }
                }
            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk13__DOT__REG_RD_DELAY) {
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 9U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                            ? ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                ? 0U : ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                         ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                             ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q)
                                             : (0x00ffU 
                                                & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q)))
                                         : ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                             ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q)
                                             : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q))))
                            : ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                ? ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q)
                                        : (0x0fffU 
                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q)))
                                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q)
                                        : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q)))
                                : ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q)
                                        : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q))
                                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q)
                                        : (0x0fffU 
                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q))))));
                } else if ((2U == (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                         >> 8U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                            ? ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                ? 0U : ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                         ? ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                                 ? 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR19))
                                                 : 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR18)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                                 ? 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR17))
                                                 : 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16))))
                                         : ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                                 ? 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15))
                                                 : 
                                                (0x00ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                                 ? 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR13))
                                                 : 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR12))))))
                            : ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                ? ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                            ? (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR11))
                                            : (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR10)))
                                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                            ? (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR9))
                                            : (0x07ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR8))))
                                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                            ? (0x7000U 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7))
                                            : 0U) : 0U))
                                : ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                    ? ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                                 ? 0U
                                                 : 
                                                (0x07ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR4))))
                                    : ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                            ? (0x00ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR3))
                                            : (0x1fffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR2)))
                                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                            ? (0x01ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR1))
                                            : (0x030fU 
                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0)))))));
                } else if ((0x18U == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 5U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5];
                } else if ((0x19U == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 5U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5];
                } else if ((0x0eU == (0x0000001fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 6U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = (0xfff8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q));
                } else if ((0x1eU == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 5U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q;
                } else if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                         >> 9U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = (0x0000ffffU & ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                           ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                               ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q)
                                               : (IData)(
                                                         (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                          >> 0x10U)))
                                           : ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))
                                               ? (IData)(
                                                         (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                          >> 0x20U))
                                               : (IData)(
                                                         (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                          >> 0x30U)))));
                } else if ((6U == (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                         >> 8U)))) {
                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                                = (0x0000ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q);
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                            = (0x00ffU & (vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 0x10U));
                    }
                } else if ((0x1cU == (0x0000001fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 6U)))) {
                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                                = (0x0000ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q);
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                            = (0x00ffU & (vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 0x10U));
                    }
                } else if ((0x3aU == (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 5U)))) {
                    if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                                = (0x0000ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MIXS_Q);
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                            = (0x000fU & (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MIXS_Q 
                                          >> 0x10U));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q 
                        = ((0x76U == (0x0000007fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                       >> 4U))) ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q)
                            : ((0x03b8U == (0x000003ffU 
                                            & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                               >> 1U)))
                                ? vlSelfRef.tb_top__DOT__new_i__DOT__DSP_EXTS
                               [(1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))]
                                : 0U));
                }
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_LEN) 
                                  - (IData)(1U)));
            if (vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC) {
                if (vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR) {
                    if ((((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR)) 
                          & (8U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST))) 
                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_RA 
                            = (0x000007ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_RA)));
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 1U;
                    } else if ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR) 
                                 & (8U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) 
                                & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_MA 
                            = (0x0007ffffU & ((IData)(1U) 
                                              + vlSelfRef.tb_top__DOT__new_i__DOT__DMA_MA));
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 0U;
                        __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT;
                        if ((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT))))) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC = 0U;
                        }
                    }
                } else if ((((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR)) 
                             & (3U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) 
                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_MA 
                        = (0x0007ffffU & ((IData)(1U) 
                                          + vlSelfRef.tb_top__DOT__new_i__DOT__DMA_MA));
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 1U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR) 
                             & (8U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST))) 
                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_RA 
                        = (0x000007ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_RA)));
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 0U;
                    __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT;
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT))))) {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC = 0U;
                    }
                }
            }
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4 
                = ((0xf800U & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4)) 
                   | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MONITOR_CA) 
                       << 7U) | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MONITOR_SGC) 
                                  << 5U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MONITOR_EG))));
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4 
                = ((0xf800U & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4)) 
                   | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MONITOR_CA) 
                       << 7U) | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MONITOR_SGC) 
                                  << 5U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MONITOR_EG))));
            if (((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC)) 
                 & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk13__DOT__DMA_EXEC_OLD))) {
                __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                    = (0x00000010U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12));
                __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                    = (0x00000010U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7 
                    = (0xefffU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7));
            }
            if ((1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE) 
                       >> (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR8) 
                                 >> 8U))))) {
                __Vdly__tb_top__DOT__ref_i__DOT__CR8 
                    = ((0xff00U & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR8)) 
                       | (0x000000ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR8))));
                if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR8)))) {
                    __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                        = (0x00000040U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12));
                    __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                        = (0x00000040U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18));
                }
            }
            if ((1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE) 
                       >> (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR9) 
                                 >> 8U))))) {
                __Vdly__tb_top__DOT__ref_i__DOT__CR9 
                    = ((0xff00U & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR9)) 
                       | (0x000000ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR9))));
                if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR9)))) {
                    __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                        = (0x00000080U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12));
                    __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                        = (0x00000080U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18));
                }
            }
            if ((1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE) 
                       >> (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR10) 
                                 >> 8U))))) {
                __Vdly__tb_top__DOT__ref_i__DOT__CR10 
                    = ((0xff00U & (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR10)) 
                       | (0x000000ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR10))));
                if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR10)))) {
                    __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                        = (0x00000100U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12));
                    __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                        = (0x00000100U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18));
                }
            }
            if (((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC)) 
                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk13__DOT__DMA_EXEC_OLD))) {
                __Vdly__tb_top__DOT__new_i__DOT__CR12 
                    = (0x00000010U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12));
                __Vdly__tb_top__DOT__new_i__DOT__CR18 
                    = (0x00000010U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7 
                    = (0xefffU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7));
            }
            if ((1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE) 
                       >> (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR8) 
                                 >> 8U))))) {
                __Vdly__tb_top__DOT__new_i__DOT__CR8 
                    = ((0xff00U & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR8)) 
                       | (0x000000ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR8))));
                if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR8)))) {
                    __Vdly__tb_top__DOT__new_i__DOT__CR12 
                        = (0x00000040U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12));
                    __Vdly__tb_top__DOT__new_i__DOT__CR18 
                        = (0x00000040U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18));
                }
            }
            if ((1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE) 
                       >> (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR9) 
                                 >> 8U))))) {
                __Vdly__tb_top__DOT__new_i__DOT__CR9 
                    = ((0xff00U & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR9)) 
                       | (0x000000ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR9))));
                if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR9)))) {
                    __Vdly__tb_top__DOT__new_i__DOT__CR12 
                        = (0x00000080U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12));
                    __Vdly__tb_top__DOT__new_i__DOT__CR18 
                        = (0x00000080U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18));
                }
            }
            if ((1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE) 
                       >> (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR10) 
                                 >> 8U))))) {
                __Vdly__tb_top__DOT__new_i__DOT__CR10 
                    = ((0xff00U & (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR10)) 
                       | (0x000000ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR10))));
                if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR10)))) {
                    __Vdly__tb_top__DOT__new_i__DOT__CR12 
                        = (0x00000100U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12));
                    __Vdly__tb_top__DOT__new_i__DOT__CR18 
                        = (0x00000100U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18));
                }
            }
            if ((IData)((((0U == (0x01f00000U & vlSelfRef.tb_top__DOT__ref_i__DOT__OP7)) 
                          & (0U == (6U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)))) 
                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)))) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__SUM_R 
                    = (0x0003ffffU & (((1U & (IData)(vlSelfRef.SND_EN))
                                        ? vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_R
                                        : 0U) + ((2U 
                                                  & (IData)(vlSelfRef.SND_EN))
                                                  ? vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_R
                                                  : 0U)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__SUM_L 
                    = (0x0003ffffU & (((1U & (IData)(vlSelfRef.SND_EN))
                                        ? vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_L
                                        : 0U) + ((2U 
                                                  & (IData)(vlSelfRef.SND_EN))
                                                  ? vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_L
                                                  : 0U)));
            }
            if ((IData)((((0U == (0x01f00000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP7)) 
                          & (0U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)))) 
                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SUM_R 
                    = (0x0003ffffU & (((1U & (IData)(vlSelfRef.SND_EN))
                                        ? vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_R
                                        : 0U) + ((2U 
                                                  & (IData)(vlSelfRef.SND_EN))
                                                  ? vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_R
                                                  : 0U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__SUM_L 
                    = (0x0003ffffU & (((1U & (IData)(vlSelfRef.SND_EN))
                                        ? vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_L
                                        : 0U) + ((2U 
                                                  & (IData)(vlSelfRef.SND_EN))
                                                  ? vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_L
                                                  : 0U)));
            }
            __Vfunc_DSPLevelCalc__44__SDL = (7U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7));
            __Vfunc_DSPLevelCalc__44__WAVE = (0x000ffff0U 
                                              & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                                 << 3U));
            __Vfunc_DSPLevelCalc__44__Vfuncout = ((0U 
                                                   != (IData)(__Vfunc_DSPLevelCalc__44__SDL))
                                                   ? 
                                                  (0x000fffffU 
                                                   & VL_SHIFTRS_III(20,20,3, __Vfunc_DSPLevelCalc__44__WAVE, 
                                                                    (7U 
                                                                     & (~ (IData)(__Vfunc_DSPLevelCalc__44__SDL)))))
                                                   : 0U);
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk7__DOT__SD 
                = __Vfunc_DSPLevelCalc__44__Vfuncout;
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE) {
                if ((IData)((((0U == (0x0600U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))) 
                              & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                 >> 1U)) & (0U == (0x0000001eU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                      << 1U)))))) {
                    __VdlyVal__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 
                        = (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                                 >> 0x0bU));
                    __VdlyDim0__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 
                        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                          >> 4U));
                    __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 1U;
                    if ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D))) {
                        __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND = 1U;
                    }
                }
                if ((1U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_D 
                        = (0x000fffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk7__DOT__MIXS_OLD 
                                          + vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk7__DOT__SD));
                }
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk7__DOT__MIXS_OLD 
                        = ((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_NULL
                                  [vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN] 
                                  >> (0x0000000fU & 
                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                                       >> 3U)))) ? 0U
                            : ((0x000ffff0U & (vlSelfRef.tb_top__DOT__ref_i__DOT__PCM_MIXS_Q 
                                               << 4U)) 
                               | (0x0000000fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__PCM_MIXS_Q 
                                                 >> 0x10U))));
                    __VdlyLsb__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                                          >> 3U));
                    __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN;
                    __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0 = 1U;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_READ_NOFL2 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_READ_NOFL1;
            }
            if ((IData)(((0x01f00000U == (0x01f00000U 
                                          & vlSelfRef.tb_top__DOT__ref_i__DOT__OP7)) 
                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE)))) {
                if ((4U & (IData)(vlSelfRef.SND_EN))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__DSP_EXTS__v0 
                        = vlSelfRef.ESL;
                    vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__DSP_EXTS__v1 
                        = vlSelfRef.ESR;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__DSP_EXTS__v0 = 0U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__DSP_EXTS__v1 = 0U;
                }
                vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__DSP_EXTS__v0 = 1U;
                __VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)));
                __VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1 = 1U;
                vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)));
            }
            __Vfunc_DSPLevelCalc__16__SDL = (7U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7));
            __Vfunc_DSPLevelCalc__16__WAVE = (0x000ffff0U 
                                              & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                                 << 3U));
            __Vfunc_DSPLevelCalc__16__Vfuncout = ((0U 
                                                   != (IData)(__Vfunc_DSPLevelCalc__16__SDL))
                                                   ? 
                                                  (0x000fffffU 
                                                   & VL_SHIFTRS_III(20,20,3, __Vfunc_DSPLevelCalc__16__WAVE, 
                                                                    (7U 
                                                                     & (~ (IData)(__Vfunc_DSPLevelCalc__16__SDL)))))
                                                   : 0U);
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk7__DOT__SD 
                = __Vfunc_DSPLevelCalc__16__Vfuncout;
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                if ((1U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_D 
                        = (0x000fffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk7__DOT__MIXS_OLD 
                                          + vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk7__DOT__SD));
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ_NOFL2 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ_NOFL1;
                if ((IData)((((0U == (0x0600U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) 
                              & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                 >> 1U)) & (0U == (0x0000001eU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                      << 1U)))))) {
                    if ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))) {
                        __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 1U;
                    }
                }
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk7__DOT__MIXS_OLD 
                        = (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXS_NULL_RAM____pinNumber5]
                            ? 0U : ((0x000ffff0U & 
                                     (vlSelfRef.tb_top__DOT__new_i__DOT__PCM_MIXS_Q 
                                      << 4U)) | (0x0000000fU 
                                                 & (vlSelfRef.tb_top__DOT__new_i__DOT__PCM_MIXS_Q 
                                                    >> 0x10U))));
                }
            }
            if ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) 
                  & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                     >> 0x00000013U)) & (~ (IData)(
                                                   (vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                                    >> 0x0000001cU))))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_OK = 0U;
            }
            __Vfunc_PLFOCalc__28__PLFOS = (7U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR6) 
                                                 >> 5U));
            __Vfunc_PLFOCalc__28__PLFOWS = (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR6) 
                                                  >> 8U));
            __Vfunc_PLFOCalc__28__NOISE = (0x000000ffU 
                                           & vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE);
            __Vfunc_PLFOCalc__28__DATA = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA;
            vlSymsp->TOP__REF_SCSP_PKG.PLFOCalc__Vstatic__WAVE 
                = ((2U & (IData)(__Vfunc_PLFOCalc__28__PLFOWS))
                    ? ((1U & (IData)(__Vfunc_PLFOCalc__28__PLFOWS))
                        ? (0x80U ^ (IData)(__Vfunc_PLFOCalc__28__NOISE))
                        : (0x000000feU & (((0x0000003fU 
                                            & ((IData)(__Vfunc_PLFOCalc__28__DATA) 
                                               ^ (- (IData)(
                                                            (1U 
                                                             & ((IData)(__Vfunc_PLFOCalc__28__DATA) 
                                                                >> 6U)))))) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PLFOCalc__28__DATA) 
                                                            >> 7U))))) 
                                          << 1U))) : 
                   ((1U & (IData)(__Vfunc_PLFOCalc__28__PLFOWS))
                     ? ((0x00000080U & (IData)(__Vfunc_PLFOCalc__28__DATA)) 
                        | (0x0000007fU & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(__Vfunc_PLFOCalc__28__DATA) 
                                                         >> 7U)))))))
                     : (IData)(__Vfunc_PLFOCalc__28__DATA)));
            vlSymsp->TOP__REF_SCSP_PKG.PLFOCalc__Vstatic__RET 
                = ((0U != (IData)(__Vfunc_PLFOCalc__28__PLFOS))
                    ? (0x000000ffU & VL_SHIFTRS_III(8,8,3, 
                                                    (0xfeU 
                                                     & (IData)(vlSymsp->TOP__REF_SCSP_PKG.PLFOCalc__Vstatic__WAVE)), 
                                                    (7U 
                                                     & (~ (IData)(__Vfunc_PLFOCalc__28__PLFOS)))))
                    : 0U);
            __Vfunc_PLFOCalc__28__Vfuncout = vlSymsp->TOP__REF_SCSP_PKG.PLFOCalc__Vstatic__RET;
            __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
                = __Vfunc_PLFOCalc__28__Vfuncout;
            __Vfunc_PhaseCalc__29__PLFO_WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
            __Vfunc_PhaseCalc__29__SCR5 = vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR5;
            vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__S 
                = (0x0000000fU & (8U ^ ((IData)(__Vfunc_PhaseCalc__29__SCR5) 
                                        >> 0x0000000bU)));
            vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__F 
                = (0x000007ffU & ((IData)(0x0400U) 
                                  + (IData)(__Vfunc_PhaseCalc__29__SCR5)));
            vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__TEMP 
                = (0x00007fffU & ((IData)(__Vfunc_PhaseCalc__29__PLFO_WAVE) 
                                  * (0x0000007fU & 
                                     ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__F) 
                                      >> 4U))));
            vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__FM 
                = ((0x00000e00U & ((- (IData)((1U & 
                                               ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                >> 0x0eU)))) 
                                   << 9U)) | (0x000001ffU 
                                              & ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                 >> 6U)));
            vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__P 
                = (0x07ffffffU & ((0x00000fffU & ((IData)(vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__F) 
                                                  + (IData)(vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__FM))) 
                                  << (IData)(vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__S)));
            __Vfunc_PhaseCalc__29__Vfuncout = (0x007fffffU 
                                               & (vlSymsp->TOP__REF_SCSP_PKG.PhaseCalc__Vstatic__P 
                                                  >> 4U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PHASE 
                = __Vfunc_PhaseCalc__29__Vfuncout;
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE) {
                if ((0x1fU == (0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                      >> 0x00000023U))))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN 
                        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN)));
                }
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__S))) {
                    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_L) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_L));
                    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_R) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_R));
                } else {
                    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_L 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_L) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_L))));
                    __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_R 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_R) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_R))));
                }
                if ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__S))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN 
                        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN)));
                }
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD0 
                    = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__WD_READ)
                        ? ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP3_SCR0))
                            ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__ADP0_CURR)
                                ? (0x0000ff00U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WD) 
                                                  << 8U))
                                : (0x0000ff00U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WD)))
                            : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WD))
                        : 0U);
            }
            __Vfunc_PLFOCalc__0__PLFOS = (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6) 
                                                >> 5U));
            __Vfunc_PLFOCalc__0__PLFOWS = (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6) 
                                                 >> 8U));
            __Vfunc_PLFOCalc__0__NOISE = (0x000000ffU 
                                          & vlSelfRef.tb_top__DOT__new_i__DOT__NOISE);
            __Vfunc_PLFOCalc__0__DATA = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA;
            vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__WAVE 
                = ((2U & (IData)(__Vfunc_PLFOCalc__0__PLFOWS))
                    ? ((1U & (IData)(__Vfunc_PLFOCalc__0__PLFOWS))
                        ? (0x80U ^ (IData)(__Vfunc_PLFOCalc__0__NOISE))
                        : (0x000000feU & (((0x0000003fU 
                                            & ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                               ^ (- (IData)(
                                                            (1U 
                                                             & ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                                                >> 6U)))))) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                                            >> 7U))))) 
                                          << 1U))) : 
                   ((1U & (IData)(__Vfunc_PLFOCalc__0__PLFOWS))
                     ? ((0x00000080U & (IData)(__Vfunc_PLFOCalc__0__DATA)) 
                        | (0x0000007fU & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                                         >> 7U)))))))
                     : (IData)(__Vfunc_PLFOCalc__0__DATA)));
            vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__RET 
                = ((0U != (IData)(__Vfunc_PLFOCalc__0__PLFOS))
                    ? (0x000000ffU & VL_SHIFTRS_III(8,8,3, 
                                                    (0xfeU 
                                                     & (IData)(vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__WAVE)), 
                                                    (7U 
                                                     & (~ (IData)(__Vfunc_PLFOCalc__0__PLFOS)))))
                    : 0U);
            __Vfunc_PLFOCalc__0__Vfuncout = vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__RET;
            __Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
                = __Vfunc_PLFOCalc__0__Vfuncout;
            __Vfunc_PhaseCalc__1__PLFO_WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
            __Vfunc_PhaseCalc__1__SCR5 = vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5;
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__S 
                = (0x0000000fU & (8U ^ ((IData)(__Vfunc_PhaseCalc__1__SCR5) 
                                        >> 0x0000000bU)));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__F 
                = (0x000007ffU & ((IData)(0x0400U) 
                                  + (IData)(__Vfunc_PhaseCalc__1__SCR5)));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__TEMP 
                = (0x00007fffU & ((IData)(__Vfunc_PhaseCalc__1__PLFO_WAVE) 
                                  * (0x0000007fU & 
                                     ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__F) 
                                      >> 4U))));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__FM 
                = ((0x00000e00U & ((- (IData)((1U & 
                                               ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                >> 0x0eU)))) 
                                   << 9U)) | (0x000001ffU 
                                              & ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                 >> 6U)));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__P 
                = (0x07ffffffU & ((0x00000fffU & ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__F) 
                                                  + (IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__FM))) 
                                  << (IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__S)));
            __Vfunc_PhaseCalc__1__Vfuncout = (0x007fffffU 
                                              & (vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__P 
                                                 >> 4U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PHASE 
                = __Vfunc_PhaseCalc__1__Vfuncout;
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                if ((0x1fU == (0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                      >> 0x00000023U))))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN 
                        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN)));
                }
                if ((0x1fU == (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                              >> 0x00000016U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCNT 
                        = (0x00007fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT)));
                }
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__S))) {
                    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_L) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_L));
                    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_R) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_R));
                } else {
                    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_L 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_L) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_L))));
                    __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_R 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_R) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_R))));
                }
                if ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__S))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN 
                        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN)));
                }
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_WD0 
                    = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__WD_READ)
                        ? ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0))
                            ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__ADP0_CURR)
                                ? (0x0000ff00U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD) 
                                                  << 8U))
                                : (0x0000ff00U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD)))
                            : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD))
                        : 0U);
            }
            if ((IData)(((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))) 
                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE)))) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_Q 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q;
            }
            if ((IData)(((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE)))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_Q 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q;
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DEXE_OLD 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR7) 
                         >> 0x0000000cU));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DEXE_OLD 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7) 
                         >> 0x0000000cU));
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE) {
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__S))) {
                    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_L) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_L));
                    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_R) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_R));
                } else {
                    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_L 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_L) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_L))));
                    __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_R 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_R) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_R))));
                }
                if ((0x1fU == (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                              >> 0x00000016U)))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT_PREV 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT;
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCNT 
                        = (0x00007fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT)));
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM_D = 0U;
                if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_RUN) {
                    if ((vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB
                         [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT] 
                         & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD
                                      [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT])))) {
                        vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM_D 
                            = (1U | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM_D));
                    }
                    if (((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB
                                    [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT])) 
                         & vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD
                         [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT])) {
                        vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM_D 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM_D));
                    }
                    __VdlyVal__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB
                        [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT];
                    __VdlyDim0__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
                    __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 = 1U;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                    = ((0x000000ff000001ffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__OP2) 
                       | ((QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PHASE)) 
                          << 9U));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2 
                    = ((0x00000001ffffffffULL & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2) 
                       | ((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST) 
                                               << 1U) 
                                              | (1U 
                                                 & vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                 [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT]))))) 
                          << 0x00000021U));
                if ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_RUN = 0U;
                    if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND) {
                        __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND = 0U;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_RUN = 1U;
                    }
                    vlSelfRef.tb_top__DOT__ref_i__DOT__RST = 0U;
                }
                vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2 
                    = (0x000000fe00000000ULL | vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2);
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2 
                    = ((0x000000feffffffffULL & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2) 
                       | ((QData)((IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                 [vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT] 
                                                 >> 1U)))) 
                          << 0x00000020U));
                vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2 
                    = (0x0000000100000000ULL | vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2);
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2 
                    = ((0x000000fffffffe00ULL & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2) 
                       | (IData)((IData)(((0x00000100U 
                                           & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR5) 
                                              >> 7U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE)))));
                vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2 
                    = (0x00000000000001ffULL | vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2);
                vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT)));
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_LOOPEND 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000012U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000011U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SADIR 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000010U));
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                               >> 0x00000021U)))) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO = 0U;
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
            } else {
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q);
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q;
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP 
                = ((0x0000ffffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                  ^ 
                                                  (- (IData)(
                                                             ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SADIR) 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                                                 >> 6U))))))) 
                   > ((1U & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SADIR) 
                              & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                 >> 6U)) | (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP))))
                       ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA)
                       : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW = 1U;
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE 
                    = ((0x00010000U & ((0xffff0000U 
                                        & (vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE 
                                           << 0x0000000bU)) 
                                       ^ (vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE 
                                          << 0x00000010U))) 
                       | (0x0000ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE 
                                         >> 1U)));
                if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                        = (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA;
                } else {
                    __Vfunc_LFOFreqDiv__30__LFOF = 
                        (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR6) 
                                        >> 0x0000000aU));
                    vlSymsp->TOP__REF_SCSP_PKG.LFOFreqDiv__Vstatic__TEMP 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (7U & (~ 
                                                   (3U 
                                                    & (IData)(__Vfunc_LFOFreqDiv__30__LFOF))))));
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA)));
                    vlSymsp->TOP__REF_SCSP_PKG.LFOFreqDiv__Vstatic__TEMP2 
                        = (((IData)(vlSymsp->TOP__REF_SCSP_PKG.LFOFreqDiv__Vstatic__TEMP) 
                            << 7U) >> (7U & ((IData)(__Vfunc_LFOFreqDiv__30__LFOF) 
                                             >> 2U)));
                    __Vfunc_LFOFreqDiv__30__Vfuncout 
                        = (0x000003ffU & (((IData)(vlSymsp->TOP__REF_SCSP_PKG.LFOFreqDiv__Vstatic__TEMP2) 
                                           - (IData)(4U)) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                        = __Vfunc_LFOFreqDiv__30__Vfuncout;
                }
                if ((0x00008000U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR6))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM_D 
                    = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA));
            }
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT0_CE) {
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD1 
                    = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_WD_LATCH)
                        ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_PCM8B_LATCH)
                            ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__ADP0_NEXT)
                                ? (0x0000ff00U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WD) 
                                                  << 8U))
                                : (0x0000ff00U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WD)))
                            : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WD))
                        : 0U);
            }
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_WD_LATCH 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__WD_READ;
                vlSelfRef.tb_top__DOT__ref_i__DOT__ADP0_NEXT 
                    = (1U & vlSelfRef.tb_top__DOT__ref_i__DOT__ADP);
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 0U;
                if ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                   >> 0x00000022U)))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
                } else {
                    if ((((0x03c0U <= (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__OP2_EVOL)) 
                          & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR2) 
                                >> 0x0000000fU))) & 
                         (~ (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                     >> 0x00000021U))))) {
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    } else {
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND 
                            = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_LOOPEND;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP 
                            = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR 
                            = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SADIR;
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO 
                            = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO;
                        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0))) {
                            if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0))) {
                                if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                    if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SADIR) {
                                        if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                        } else {
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA) 
                                                       << 1U)));
                                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                        }
                                    } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                  - 
                                                  ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA) 
                                                   << 1U)));
                                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                    }
                                } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                } else {
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = (0x0000ffffU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA) 
                                                 - (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA))));
                                }
                            } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                          - ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA) 
                                             + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA))));
                                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0))) {
                            if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = (0x0000ffffU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA) 
                                                 - (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA))));
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_LOOPEND)))) {
                                if (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) 
                                     & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED)))) {
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 1U;
                                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            }
                        } else if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP) {
                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                        }
                        if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND) {
                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                        }
                    }
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_INT 
                        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                           + (IData)(
                                                     (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                      >> 9U))) 
                                          >> 0x0000000eU));
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_FRAC 
                        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                          + (IData)(
                                                    (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                     >> 9U))));
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__ADP_SA 
                    = ((0x000f0000U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                       << 0x00000010U)) 
                       | ((0x0000fffeU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SA)) 
                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SA) 
                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                      >> 4U)))));
                vlSelfRef.tb_top__DOT__ref_i__DOT__ADP_PCM8B 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                             >> 4U));
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT;
                vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CALC_SO 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                      + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_INT)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM_D 
                    = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND) 
                        << 0x00000012U) | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                               << 0x00000010U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CALC_SO))));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[2U] 
                    = ((0x00001fffU & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[2U]) 
                       | (0x007fffffU & (((0x000003fcU 
                                           & ((IData)(
                                                      (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                       >> 0x00000020U)) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP))) 
                                         << 0x0000000dU)));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U] 
                    = ((0xff80007fU & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U]) 
                       | (0x007fff80U & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                          ^ (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR)))) 
                                         << 7U)));
                __Vfunc_MDCalc__31__MDL = (0x0000000fU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4) 
                                              >> 0x0000000cU));
                __Vfunc_MDCalc__31__Y = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSY;
                __Vfunc_MDCalc__31__X = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSX;
                vlSymsp->TOP__REF_SCSP_PKG.MDCalc__Vstatic__TEMP 
                    = (0x0001ffffU & (((0x00010000U 
                                        & ((IData)(__Vfunc_MDCalc__31__X) 
                                           << 1U)) 
                                       | (IData)(__Vfunc_MDCalc__31__X)) 
                                      + ((0x00010000U 
                                          & ((IData)(__Vfunc_MDCalc__31__Y) 
                                             << 1U)) 
                                         | (IData)(__Vfunc_MDCalc__31__Y))));
                vlSymsp->TOP__REF_SCSP_PKG.MDCalc__Vstatic__MD 
                    = (0x007fffffU & VL_SHIFTRS_III(23,23,4, 
                                                    (0x007fff80U 
                                                     & (vlSymsp->TOP__REF_SCSP_PKG.MDCalc__Vstatic__TEMP 
                                                        << 6U)), 
                                                    (0x0000000fU 
                                                     & (- (IData)(__Vfunc_MDCalc__31__MDL)))));
                vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_0__MDCalc 
                    = ((4U < (IData)(__Vfunc_MDCalc__31__MDL))
                        ? ((0x003e0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__REF_SCSP_PKG.MDCalc__Vstatic__MD 
                                                          >> 0x10U)))) 
                                           << 0x00000011U)) 
                           | (0x0001fffeU & vlSymsp->TOP__REF_SCSP_PKG.MDCalc__Vstatic__MD))
                        : 0U);
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[0U] 
                    = ((0x0001ffffU & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[0U]) 
                       | (vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_0__MDCalc 
                          << 0x00000011U));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U] 
                    = ((0xffffff80U & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U]) 
                       | (vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_0__MDCalc 
                          >> 0x0000000fU));
                __Vfunc_WaveMask__32__LEA = vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA;
                vlSymsp->TOP__REF_SCSP_PKG.WaveMask__Vstatic__RET = 0x0001ffffU;
                if ((0x00000400U & (IData)(__Vfunc_WaveMask__32__LEA))) {
                    vlSymsp->TOP__REF_SCSP_PKG.WaveMask__Vstatic__RET = 0x000003ffU;
                }
                if ((0x00000200U & (IData)(__Vfunc_WaveMask__32__LEA))) {
                    vlSymsp->TOP__REF_SCSP_PKG.WaveMask__Vstatic__RET = 0x000001ffU;
                }
                if ((0x00000100U & (IData)(__Vfunc_WaveMask__32__LEA))) {
                    vlSymsp->TOP__REF_SCSP_PKG.WaveMask__Vstatic__RET = 0x000000ffU;
                }
                if ((0x00000080U & (IData)(__Vfunc_WaveMask__32__LEA))) {
                    vlSymsp->TOP__REF_SCSP_PKG.WaveMask__Vstatic__RET = 0x0000007fU;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_1__WaveMask 
                    = vlSymsp->TOP__REF_SCSP_PKG.WaveMask__Vstatic__RET;
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[0U] 
                    = ((0xfffe0000U & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[0U]) 
                       | (0x0001ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_1__WaveMask 
                                         | (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                                     >> 8U)))))))));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U] 
                    = ((0x7fffffffU & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U]) 
                       | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                           ^ (- (IData)(((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                            >> 6U))))) 
                          << 0x0000001fU));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[2U] 
                    = ((0x007fe000U & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[2U]) 
                       | (0x00001fffU & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                          ^ (- (IData)(
                                                       ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                                           >> 6U))))) 
                                         >> 1U)));
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U] 
                    = ((0x807fffffU & vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U]) 
                       | (0x7f800000U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2) 
                                         << 0x00000017U)));
                if (vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__WD_READ = 1U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM_D 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_FRAC;
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__WD_READ = 0U;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM_D = 0U;
                }
                if (((0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                             >> 0x00000023U))) 
                     == (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR4) 
                                        >> 0x0000000bU)))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__MONITOR_CA 
                        = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW)
                            ? (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                              >> 0x0cU))
                            : 0U);
                }
            }
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT0_CE) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__ADP0_CURR 
                    = (1U & vlSelfRef.tb_top__DOT__ref_i__DOT__ADP);
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP3_PHASE_FRAC_NEXT 
                    = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                      ^ (- (IData)(
                                                   ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0) 
                                                       >> 6U))))));
            }
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE) {
                if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3_SCR0 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR6 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR2 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR5 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q;
                }
                vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR1 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q;
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q);
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV 
                        = (0x000003ffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 8U));
                    vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR6 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR5 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__OP2_EVOL 
                        = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__q));
                    vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR2 
                        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q;
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q;
                if ((0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    if ((2U != (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                          >> 1U)))) {
                            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSY 
                                = ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA))
                                    ? vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                                   [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5]
                                    : vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                                   [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5]);
                        }
                    }
                    if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSX 
                            = ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA))
                                ? vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                               [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5]
                                : vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                               [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5]);
                    }
                }
                vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SA 
                    = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q;
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__S))) {
                    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_L) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_L));
                    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R 
                        = ((0x00030000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_R) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                           | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_R));
                } else {
                    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_L 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_L) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_L))));
                    __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_R 
                                          + ((0x00030000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_R) 
                                                                >> 0x0fU)))) 
                                                 << 0x00000010U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_R))));
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D = 0U;
                if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST)))) {
                    if ((vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
                         [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT] 
                         & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem
                                      [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT])))) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D 
                            = (1U | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D));
                    }
                    if (((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
                                    [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT])) 
                         & vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem
                         [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT])) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D));
                    }
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                    = ((0x000000ff000001ffULL & vlSelfRef.tb_top__DOT__new_i__DOT__OP2) 
                       | ((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PHASE)) 
                          << 9U));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2 
                    = ((0x00000001ffffffffULL & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2) 
                       | ((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
                                               << 1U) 
                                              | (1U 
                                                 & vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                 [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT]))))) 
                          << 0x00000021U));
                if ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN = 0U;
                    if (vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_PEND) {
                        __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN = 1U;
                    }
                    vlSelfRef.tb_top__DOT__new_i__DOT__RST = 0U;
                }
                vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2 
                    = (0x000000fe00000000ULL | vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2);
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2 
                    = ((0x000000feffffffffULL & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2) 
                       | ((QData)((IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                 [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT] 
                                                 >> 1U)))) 
                          << 0x00000020U));
                vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2 
                    = (0x0000000100000000ULL | vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2);
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2 
                    = ((0x000000fffffffe00ULL & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2) 
                       | (IData)((IData)(((0x00000100U 
                                           & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5) 
                                              >> 7U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.tb_top__DOT__new_i__DOT__NOISE)))));
                vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2 
                    = (0x00000000000001ffULL | vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2);
                vlSelfRef.tb_top__DOT__new_i__DOT__SLOT 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)));
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000012U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000011U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000010U));
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                               >> 0x00000021U)))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO = 0U;
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
            } else {
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q);
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q;
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP 
                = ((0x0000ffffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                  ^ 
                                                  (- (IData)(
                                                             ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR) 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                                                 >> 6U))))))) 
                   > ((1U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR) 
                              & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                 >> 6U)) | (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP))))
                       ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA)
                       : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA)));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 1U;
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                    = ((0x00010000U & ((0xffff0000U 
                                        & (vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                                           << 0x0000000bU)) 
                                       ^ (vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                                          << 0x00000010U))) 
                       | (0x0000ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                                         >> 1U)));
                if ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                        = (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA;
                } else {
                    __Vfunc_LFOFreqDiv__2__LFOF = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6) 
                                                      >> 0x0000000aU));
                    vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (7U & (~ 
                                                   (3U 
                                                    & (IData)(__Vfunc_LFOFreqDiv__2__LFOF))))));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA)));
                    vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP2 
                        = (((IData)(vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP) 
                            << 7U) >> (7U & ((IData)(__Vfunc_LFOFreqDiv__2__LFOF) 
                                             >> 2U)));
                    __Vfunc_LFOFreqDiv__2__Vfuncout 
                        = (0x000003ffU & (((IData)(vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP2) 
                                           - (IData)(4U)) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                        = __Vfunc_LFOFreqDiv__2__Vfuncout;
                }
                if ((0x00008000U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_D 
                    = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA));
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT0_CE) {
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_WD1 
                    = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_WD_LATCH)
                        ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_PCM8B_LATCH)
                            ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__ADP0_NEXT)
                                ? (0x0000ff00U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD) 
                                                  << 8U))
                                : (0x0000ff00U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD)))
                            : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD))
                        : 0U);
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__OP4_WD_LATCH 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__WD_READ;
                vlSelfRef.tb_top__DOT__new_i__DOT__ADP0_NEXT 
                    = (1U & vlSelfRef.tb_top__DOT__new_i__DOT__ADP);
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 0U;
                if ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                   >> 0x00000022U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
                } else {
                    if ((((0x03c0U <= (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__OP2_EVOL)) 
                          & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR2) 
                                >> 0x0000000fU))) & 
                         (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                     >> 0x00000021U))))) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    } else {
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO;
                        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0))) {
                            if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0))) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                    if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR) {
                                        if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                        } else {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                                       << 1U)));
                                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                        }
                                    } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                  - 
                                                  ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA) 
                                                   << 1U)));
                                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                    }
                                } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                } else {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = (0x0000ffffU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                                 - (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA))));
                                }
                            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                          - ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                             + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA))));
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0))) {
                            if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = (0x0000ffffU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                                 - (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA))));
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND)))) {
                                if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) 
                                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED)))) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 1U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            }
                        } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                        }
                        if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                        }
                    }
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT 
                        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                           + (IData)(
                                                     (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                      >> 9U))) 
                                          >> 0x0000000eU));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC 
                        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                          + (IData)(
                                                    (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                     >> 9U))));
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__ADP_SA 
                    = ((0x000f0000U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                       << 0x00000010U)) 
                       | ((0x0000fffeU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA)) 
                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA) 
                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                      >> 4U)))));
                vlSelfRef.tb_top__DOT__new_i__DOT__ADP_PCM8B 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                             >> 4U));
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT;
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CALC_SO 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                      + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT)));
                vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM_D 
                    = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND) 
                        << 0x00000012U) | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                               << 0x00000010U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CALC_SO))));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[2U] 
                    = ((0x00001fffU & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[2U]) 
                       | (0x007fffffU & (((0x000003fcU 
                                           & ((IData)(
                                                      (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                       >> 0x00000020U)) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP))) 
                                         << 0x0000000dU)));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0xff80007fU & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (0x007fff80U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                          ^ (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR)))) 
                                         << 7U)));
                __Vfunc_MDCalc__3__MDL = (0x0000000fU 
                                          & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4) 
                                             >> 0x0000000cU));
                __Vfunc_MDCalc__3__Y = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY;
                __Vfunc_MDCalc__3__X = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX;
                vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__TEMP 
                    = (0x0001ffffU & (((0x00010000U 
                                        & ((IData)(__Vfunc_MDCalc__3__X) 
                                           << 1U)) 
                                       | (IData)(__Vfunc_MDCalc__3__X)) 
                                      + ((0x00010000U 
                                          & ((IData)(__Vfunc_MDCalc__3__Y) 
                                             << 1U)) 
                                         | (IData)(__Vfunc_MDCalc__3__Y))));
                vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__MD 
                    = (0x007fffffU & VL_SHIFTRS_III(23,23,4, 
                                                    (0x007fff80U 
                                                     & (vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__TEMP 
                                                        << 6U)), 
                                                    (0x0000000fU 
                                                     & (- (IData)(__Vfunc_MDCalc__3__MDL)))));
                vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_0__MDCalc 
                    = ((4U < (IData)(__Vfunc_MDCalc__3__MDL))
                        ? ((0x003e0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__MD 
                                                          >> 0x10U)))) 
                                           << 0x00000011U)) 
                           | (0x0001fffeU & vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__MD))
                        : 0U);
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[0U] 
                    = ((0x0001ffffU & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[0U]) 
                       | (vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_0__MDCalc 
                          << 0x00000011U));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0xffffff80U & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_0__MDCalc 
                          >> 0x0000000fU));
                __Vfunc_WaveMask__4__LEA = vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA;
                vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x0001ffffU;
                if ((0x00000400U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x000003ffU;
                }
                if ((0x00000200U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x000001ffU;
                }
                if ((0x00000100U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x000000ffU;
                }
                if ((0x00000080U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x0000007fU;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_1__WaveMask 
                    = vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET;
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[0U] 
                    = ((0xfffe0000U & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[0U]) 
                       | (0x0001ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_1__WaveMask 
                                         | (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                                     >> 8U)))))))));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0x7fffffffU & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                           ^ (- (IData)(((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                            >> 6U))))) 
                          << 0x0000001fU));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[2U] 
                    = ((0x007fe000U & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[2U]) 
                       | (0x00001fffU & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                          ^ (- (IData)(
                                                       ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                                           >> 6U))))) 
                                         >> 1U)));
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0x807fffffU & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (0x7f800000U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2) 
                                         << 0x00000017U)));
                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 1U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM_D 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC;
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM_D = 0U;
                }
                if (((0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                             >> 0x00000023U))) 
                     == (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR4) 
                                        >> 0x0000000bU)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MONITOR_CA 
                        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW)
                            ? (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                              >> 0x0cU))
                            : 0U);
                }
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT0_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__ADP0_CURR 
                    = (1U & vlSelfRef.tb_top__DOT__new_i__DOT__ADP);
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3_PHASE_FRAC_NEXT 
                    = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                      ^ (- (IData)(
                                                   ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                                       >> 6U))))));
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE) {
                if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3_SCR0 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR6 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR2 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR5 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q;
                }
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR1 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q;
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q);
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV 
                        = (0x000003ffU & (vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 8U));
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__OP2_EVOL 
                        = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__q));
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR2 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q;
                if ((0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    if ((2U != (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                          >> 1U)))) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY 
                                = ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA))
                                    ? vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                                   [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]
                                    : vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                                   [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]);
                        }
                    }
                    if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX 
                            = ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA))
                                ? vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                               [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]
                                : vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                               [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]);
                    }
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q;
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk13__DOT__DMA_EXEC_OLD 
                = vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_EXEC;
            vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE = 0U;
            if (vlSelfRef.tb_top__DOT__ref_i__DOT__SAMPLE_CE) {
                __Vdly__tb_top__DOT__ref_i__DOT__CR12 
                    = (0x00000400U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR12));
                __Vdly__tb_top__DOT__ref_i__DOT__CR18 
                    = (0x00000400U | (IData)(__Vdly__tb_top__DOT__ref_i__DOT__CR18));
                __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0xfcU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (1U | (2U & ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)) 
                                      << 1U))));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0xfbU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (4U & ((~ (0U != (3U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)))) 
                                << 2U)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0xf7U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)))) 
                                << 3U)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0xefU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (0x00000010U & ((~ (0U != 
                                             (0x0000000fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)))) 
                                         << 4U)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0xdfU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (0x00000020U & ((~ (0U != 
                                             (0x0000001fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)))) 
                                         << 5U)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0xbfU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (0x00000040U & ((~ (0U != 
                                             (0x0000003fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT)))) 
                                         << 6U)));
                vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE 
                    = ((0x7fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE)) 
                       | (0x00000080U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT))) 
                                         << 7U)));
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk13__DOT__REG_RD_DELAY 
                = vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk13__DOT__DMA_EXEC_OLD 
                = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC;
            vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE = 0U;
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SAMPLE_CE) {
                __Vdly__tb_top__DOT__new_i__DOT__CR12 
                    = (0x00000400U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR12));
                __Vdly__tb_top__DOT__new_i__DOT__CR18 
                    = (0x00000400U | (IData)(__Vdly__tb_top__DOT__new_i__DOT__CR18));
                __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0xfcU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (1U | (2U & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)) 
                                      << 1U))));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0xfbU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (4U & ((~ (0U != (3U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)))) 
                                << 2U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0xf7U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)))) 
                                << 3U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0xefU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (0x00000010U & ((~ (0U != 
                                             (0x0000000fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)))) 
                                         << 4U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0xdfU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (0x00000020U & ((~ (0U != 
                                             (0x0000001fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)))) 
                                         << 5U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0xbfU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (0x00000040U & ((~ (0U != 
                                             (0x0000003fU 
                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT)))) 
                                         << 6U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE 
                    = ((0x7fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE)) 
                       | (0x00000080U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT))) 
                                         << 7U)));
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk13__DOT__REG_RD_DELAY 
                = vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD;
        } else {
            vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCNT = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD0 = 0U;
            __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v1 = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3_SCR0 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR6 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR2 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_WD0 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR1 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD1 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3_SCR0 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR6 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR2 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_SCR1 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP4_WD1 = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1 = 0U;
            __VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v1 = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4 = 0x007fU;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4 = 0x007fU;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7 = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__CR8 = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__CR9 = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__CR10 = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__CR12 = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__CR18 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7 = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__CR8 = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__CR9 = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__CR10 = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__CR12 = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__CR18 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCNT = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT_PREV = 0x7fffU;
            vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_OK = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR5 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR5 = 0U;
            __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v1 = 1U;
            __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__NOISE = 1U;
            __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v2 = 1U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__RST = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2 = 0ULL;
            vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2 = 0x000000ffffffffffULL;
            __VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v3 = 1U;
            __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__SLOT = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__NOISE = 1U;
            vlSelfRef.tb_top__DOT__new_i__DOT__RST = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2 = 0ULL;
            vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2 = 0x000000ffffffffffULL;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR8 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR8 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR6 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR5 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR6 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR5 = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[0U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[1U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP3[2U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__WD_READ = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[0U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[1U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP3[2U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 0U;
            __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR19 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR13 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR3 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR2 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR17 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR11 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR16 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR15 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR14 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CR0 = 0U;
            __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR19 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR13 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR3 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR2 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR17 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR11 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR16 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR15 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR14 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__CR0 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR6 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP1_SCR5 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LSA = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_LEA = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSY = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSX = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SA = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR0 = 0U;
            vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR2 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR2 = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCNT = 0U;
        __VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v129 = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR1 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR1 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_MA = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_RA = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_MA = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_RA = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR4 = 0x007fU;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4 = 0x007fU;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CR7 = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__CR8 = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__CR9 = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__CR10 = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__CR12 = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__CR18 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__REG_Q = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7 = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__CR8 = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__CR9 = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__CR10 = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__CR12 = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__CR18 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCNT = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT_PREV = 0x7fffU;
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_OK = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__OP2 = 0ULL;
        vlSelfRef.__VdlyMask__tb_top__DOT__ref_i__DOT__OP2 = 0x000000ffffffffffULL;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__OP2 = 0ULL;
        vlSelfRef.__VdlyMask__tb_top__DOT__new_i__DOT__OP2 = 0x000000ffffffffffULL;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DEXE_OLD = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR6 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR5 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DEXE_OLD = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR6 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR5 = 0U;
        __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__TMR_CE = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR19 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR13 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR3 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR2 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR17 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR11 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR16 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR15 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR14 = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__CR0 = 0U;
        __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__TMR_CE = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR19 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR13 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR3 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR2 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR17 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR11 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR16 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR15 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR14 = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__CR0 = 0U;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_SET[__VdlyDim0__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v0] = 1U;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v1) {
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_SET[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__DSP_MPRO_SET__v129) {
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x0000007fU)) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_SET[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__DMA_LEN = __Vdly__tb_top__DOT__ref_i__DOT__DMA_LEN;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_LEN = __Vdly__tb_top__DOT__new_i__DOT__DMA_LEN;
    vlSelfRef.tb_top__DOT__ref_i__DOT__CR10 = __Vdly__tb_top__DOT__ref_i__DOT__CR10;
    vlSelfRef.tb_top__DOT__ref_i__DOT__CR9 = __Vdly__tb_top__DOT__ref_i__DOT__CR9;
    vlSelfRef.tb_top__DOT__ref_i__DOT__CR8 = __Vdly__tb_top__DOT__ref_i__DOT__CR8;
    vlSelfRef.tb_top__DOT__ref_i__DOT__CR18 = __Vdly__tb_top__DOT__ref_i__DOT__CR18;
    vlSelfRef.tb_top__DOT__ref_i__DOT__CR12 = __Vdly__tb_top__DOT__ref_i__DOT__CR12;
    vlSelfRef.tb_top__DOT__new_i__DOT__CR10 = __Vdly__tb_top__DOT__new_i__DOT__CR10;
    vlSelfRef.tb_top__DOT__new_i__DOT__CR9 = __Vdly__tb_top__DOT__new_i__DOT__CR9;
    vlSelfRef.tb_top__DOT__new_i__DOT__CR8 = __Vdly__tb_top__DOT__new_i__DOT__CR8;
    vlSelfRef.tb_top__DOT__new_i__DOT__CR18 = __Vdly__tb_top__DOT__new_i__DOT__CR18;
    vlSelfRef.tb_top__DOT__new_i__DOT__CR12 = __Vdly__tb_top__DOT__new_i__DOT__CR12;
    vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_R = __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_R;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_R = __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_R;
    vlSelfRef.tb_top__DOT__ref_i__DOT__DIR_ACC_L = __Vdly__tb_top__DOT__ref_i__DOT__DIR_ACC_L;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_ACC_L = __Vdly__tb_top__DOT__ref_i__DOT__EFF_ACC_L;
    vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_R = __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_R;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_R = __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_R;
    vlSelfRef.tb_top__DOT__new_i__DOT__DIR_ACC_L = __Vdly__tb_top__DOT__new_i__DOT__DIR_ACC_L;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_ACC_L = __Vdly__tb_top__DOT__new_i__DOT__EFF_ACC_L;
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_NULL[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0] 
            = ((~ ((SData)(1U) << (IData)(__VdlyLsb__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0))) 
               & vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_NULL
               [__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v0]);
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_NULL[__VdlyDim0__tb_top__DOT__ref_i__DOT__MIXS_NULL__v1] = 0xffffU;
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND 
        = __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
    if (__VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR0_KB__v0] 
            = __VdlyVal__tb_top__DOT__ref_i__DOT__SCR0_KB__v0;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[0U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[1U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[2U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[3U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[4U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[5U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[6U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[7U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[8U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[9U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[10U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[11U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[12U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[13U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[14U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[15U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[16U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[17U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[18U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[19U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[20U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[21U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[22U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[23U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[24U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[25U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[26U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[27U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[28U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[29U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[30U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_KB[31U] = 0U;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[__VdlyDim0__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0] 
            = __VdlyVal__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[0U] = 0U;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[1U] = 0U;
    }
    if (__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v3) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[2U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[3U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[4U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[5U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[6U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[7U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[8U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[9U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[10U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[11U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[12U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[13U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[14U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[15U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[16U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[17U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[18U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[19U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[20U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[21U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[22U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[23U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[24U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[25U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[26U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[27U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[28U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[29U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[30U] = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[31U] = 0U;
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_PEND 
        = __Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = __Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((0x000f0000U 
                                                  & (vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_D 
                                                     << 0x00000010U)) 
                                                 | (0x0000ffffU 
                                                    & (vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_D 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_48 = ((0x000f0000U 
                                                  & (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_D 
                                                     << 0x00000010U)) 
                                                 | (0x0000ffffU 
                                                    & (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_D 
                                                       >> 4U)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT 
        = __Vdly__tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT 
        = __Vdly__tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT;
    vlSelfRef.R_INT_N = (1U & (~ (0U != (0x000007ffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR18) 
                                            & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR17))))));
    __VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR11) 
                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR12));
    __VdfgRegularize_hebeb780c_0_16 = ((4U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16) 
                                              >> 5U)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15) 
                                                 >> 6U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14) 
                                                   >> 7U))));
    __Vfunc_MVolCalc__54__DAC18B = (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0) 
                                          >> 8U));
    __Vfunc_MVolCalc__54__MVOL = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0));
    __Vfunc_MVolCalc__54__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__SUM_L;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 
        = (0x0003ffffU & ((IData)(__Vfunc_MVolCalc__54__DAC18B)
                           ? (__Vfunc_MVolCalc__54__WAVE 
                              << 2U) : __Vfunc_MVolCalc__54__WAVE));
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 
        = (0x0003ffffU & VL_SHIFTRS_III(18,18,3, TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1, 
                                        (7U & (~ ((IData)(__Vfunc_MVolCalc__54__MVOL) 
                                                  >> 1U)))));
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
        = ((0U != (IData)(__Vfunc_MVolCalc__54__MVOL))
            ? (0x0003ffffU & (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 
                              - ((1U & (IData)(__Vfunc_MVolCalc__54__MVOL))
                                  ? 0U : VL_SHIFTRS_III(18,18,32, TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2, 2U))))
            : 0U);
    __Vfunc_MVolCalc__54__Vfuncout = (((TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                        >> 0x11U) & 
                                       (3U != (3U & 
                                               (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                       ? 0x00008000U
                                       : (((~ (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                               >> 0x11U)) 
                                           & (0U != 
                                              (3U & 
                                               (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                           ? 0x00007fffU
                                           : (0x0000ffffU 
                                              & TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3)));
    vlSelfRef.R_SOUND_L = __Vfunc_MVolCalc__54__Vfuncout;
    __Vfunc_MVolCalc__55__DAC18B = (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0) 
                                          >> 8U));
    __Vfunc_MVolCalc__55__MVOL = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR0));
    __Vfunc_MVolCalc__55__WAVE = vlSelfRef.tb_top__DOT__ref_i__DOT__SUM_R;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 
        = (0x0003ffffU & ((IData)(__Vfunc_MVolCalc__55__DAC18B)
                           ? (__Vfunc_MVolCalc__55__WAVE 
                              << 2U) : __Vfunc_MVolCalc__55__WAVE));
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 
        = (0x0003ffffU & VL_SHIFTRS_III(18,18,3, TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1, 
                                        (7U & (~ ((IData)(__Vfunc_MVolCalc__55__MVOL) 
                                                  >> 1U)))));
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
        = ((0U != (IData)(__Vfunc_MVolCalc__55__MVOL))
            ? (0x0003ffffU & (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 
                              - ((1U & (IData)(__Vfunc_MVolCalc__55__MVOL))
                                  ? 0U : VL_SHIFTRS_III(18,18,32, TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2, 2U))))
            : 0U);
    __Vfunc_MVolCalc__55__Vfuncout = (((TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                        >> 0x11U) & 
                                       (3U != (3U & 
                                               (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                       ? 0x00008000U
                                       : (((~ (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                               >> 0x11U)) 
                                           & (0U != 
                                              (3U & 
                                               (TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                           ? 0x00007fffU
                                           : (0x0000ffffU 
                                              & TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3)));
    vlSelfRef.R_SOUND_R = __Vfunc_MVolCalc__55__Vfuncout;
    vlSelfRef.N_INT_N = (1U & (~ (0U != (0x000007ffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR18) 
                                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR17))))));
    __VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR11) 
                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR12));
    __VdfgRegularize_hebeb780c_0_17 = ((4U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16) 
                                              >> 5U)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15) 
                                                 >> 6U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14) 
                                                   >> 7U))));
    __Vfunc_MVolCalc__26__DAC18B = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0) 
                                          >> 8U));
    __Vfunc_MVolCalc__26__MVOL = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0));
    __Vfunc_MVolCalc__26__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__SUM_L;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 = 
        (0x0003ffffU & ((IData)(__Vfunc_MVolCalc__26__DAC18B)
                         ? (__Vfunc_MVolCalc__26__WAVE 
                            << 2U) : __Vfunc_MVolCalc__26__WAVE));
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 = 
        (0x0003ffffU & VL_SHIFTRS_III(18,18,3, TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1, 
                                      (7U & (~ ((IData)(__Vfunc_MVolCalc__26__MVOL) 
                                                >> 1U)))));
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 = 
        ((0U != (IData)(__Vfunc_MVolCalc__26__MVOL))
          ? (0x0003ffffU & (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 
                            - ((1U & (IData)(__Vfunc_MVolCalc__26__MVOL))
                                ? 0U : VL_SHIFTRS_III(18,18,32, TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2, 2U))))
          : 0U);
    __Vfunc_MVolCalc__26__Vfuncout = (((TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                        >> 0x11U) & 
                                       (3U != (3U & 
                                               (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                       ? 0x00008000U
                                       : (((~ (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                               >> 0x11U)) 
                                           & (0U != 
                                              (3U & 
                                               (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                           ? 0x00007fffU
                                           : (0x0000ffffU 
                                              & TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3)));
    vlSelfRef.N_SOUND_L = __Vfunc_MVolCalc__26__Vfuncout;
    __Vfunc_MVolCalc__27__DAC18B = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0) 
                                          >> 8U));
    __Vfunc_MVolCalc__27__MVOL = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR0));
    __Vfunc_MVolCalc__27__WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__SUM_R;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 = 
        (0x0003ffffU & ((IData)(__Vfunc_MVolCalc__27__DAC18B)
                         ? (__Vfunc_MVolCalc__27__WAVE 
                            << 2U) : __Vfunc_MVolCalc__27__WAVE));
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 = 
        (0x0003ffffU & VL_SHIFTRS_III(18,18,3, TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1, 
                                      (7U & (~ ((IData)(__Vfunc_MVolCalc__27__MVOL) 
                                                >> 1U)))));
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 = 
        ((0U != (IData)(__Vfunc_MVolCalc__27__MVOL))
          ? (0x0003ffffU & (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 
                            - ((1U & (IData)(__Vfunc_MVolCalc__27__MVOL))
                                ? 0U : VL_SHIFTRS_III(18,18,32, TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2, 2U))))
          : 0U);
    __Vfunc_MVolCalc__27__Vfuncout = (((TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                        >> 0x11U) & 
                                       (3U != (3U & 
                                               (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                       ? 0x00008000U
                                       : (((~ (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                               >> 0x11U)) 
                                           & (0U != 
                                              (3U & 
                                               (TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 
                                                >> 0x0fU))))
                                           ? 0x00007fffU
                                           : (0x0000ffffU 
                                              & TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3)));
    vlSelfRef.N_SOUND_R = __Vfunc_MVolCalc__27__Vfuncout;
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXS_NULL_RAM____pinNumber5 
        = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) 
            << 4U) | (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                                     >> 3U)));
    vlSelfRef.R_SCIPL_N = (7U & (~ ((0x00000400U & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                     ? (IData)(__VdfgRegularize_hebeb780c_0_16)
                                     : ((0x00000100U 
                                         & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                         ? (IData)(__VdfgRegularize_hebeb780c_0_16)
                                         : ((0x00000080U 
                                             & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                             ? (IData)(__VdfgRegularize_hebeb780c_0_16)
                                             : ((0x00000040U 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                                 ? 
                                                ((4U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16) 
                                                     >> 4U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15) 
                                                        >> 5U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14) 
                                                          >> 6U))))
                                                 : 
                                                ((0x00000020U 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16) 
                                                      >> 3U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14) 
                                                           >> 5U))))
                                                  : 
                                                 (((4U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16) 
                                                       >> 2U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15) 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14) 
                                                            >> 4U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(__VdfgRegularize_hebeb780c_0_0) 
                                                                   >> 4U))))))))))));
    vlSelfRef.N_SCIPL_N = (7U & (~ ((0x00000400U & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                     ? (IData)(__VdfgRegularize_hebeb780c_0_17)
                                     : ((0x00000100U 
                                         & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                         ? (IData)(__VdfgRegularize_hebeb780c_0_17)
                                         : ((0x00000080U 
                                             & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                             ? (IData)(__VdfgRegularize_hebeb780c_0_17)
                                             : ((0x00000040U 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                                 ? 
                                                ((4U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16) 
                                                     >> 4U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15) 
                                                        >> 5U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14) 
                                                          >> 6U))))
                                                 : 
                                                ((0x00000020U 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16) 
                                                      >> 3U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14) 
                                                           >> 5U))))
                                                  : 
                                                 (((4U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16) 
                                                       >> 2U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15) 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14) 
                                                            >> 4U)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                                                   >> 4U))))))))))));
}

void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 2U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                       >> 0x00000016U)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 2U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                       >> 0x00000016U)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber5];
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)
                          : (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                             >> 0x00000014U)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)
                          : (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                             >> 0x00000014U)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                 >> 0x00000023U)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                 >> 0x00000023U)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                 >> 0x00000023U)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                 >> 0x00000023U)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR6_RA)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR5_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR6_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR5_RA)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SA_RA)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_RA)))];
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR2_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SA_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR0_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR2_RA)))];
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
}
