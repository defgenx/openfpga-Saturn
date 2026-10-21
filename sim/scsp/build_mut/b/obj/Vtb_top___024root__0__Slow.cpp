// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_SCSP_PKG___eval_static__TOP__SCSP_PKG(Vtb_top_SCSP_PKG* vlSelf);
VL_ATTR_COLD void Vtb_top_REF_SCSP_PKG___eval_static__TOP__REF_SCSP_PKG(Vtb_top_REF_SCSP_PKG* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_SCSP_PKG___eval_static__TOP__SCSP_PKG((&vlSymsp->TOP__SCSP_PKG));
    Vtb_top_REF_SCSP_PKG___eval_static__TOP__REF_SCSP_PKG((&vlSymsp->TOP__REF_SCSP_PKG));
    Vtb_top___024root___eval_static__TOP(vlSelf);
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
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__1 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__RST_N__1 = vlSelfRef.RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__RES_N__1 = vlSelfRef.RES_N;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf);

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

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    SData/*9:0*/ tb_top__DOT__new_i__DOT__unnamedblk5__DOT__LEVEL;
    tb_top__DOT__new_i__DOT__unnamedblk5__DOT__LEVEL = 0;
    CData/*4:0*/ tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE;
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    SData/*9:0*/ tb_top__DOT__ref_i__DOT__unnamedblk5__DOT__LEVEL;
    tb_top__DOT__ref_i__DOT__unnamedblk5__DOT__LEVEL = 0;
    // Body
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PHASE = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CALC_SO = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED = 0U;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE = 0U;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__ATTACK_VOL_CALC = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__DECAY_VOL_CALC = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__NEW_EVOL = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__NEW_EST = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__ERMAX = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__SRAC = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk4__DOT__ND_PREV = 0U;
    tb_top__DOT__new_i__DOT__unnamedblk5__DOT__LEVEL = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__S = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__TEMP = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_L = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk6__DOT__PAN_R = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk7__DOT__SD = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk7__DOT__MIXS_OLD = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__MIXS_Q = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__INPUTS = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__X = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__Y = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__BS = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__B = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__Y_REG = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__FRC_REG = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__ADRS_REG = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__MUL = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk8__DOT__ADDR = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__S = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__TEMP = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_L = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk9__DOT__PAN_R = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk10__DOT__CNT = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DEXE_OLD = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_START = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__REG_START = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk13__DOT__DMA_EXEC_OLD = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk13__DOT__REG_RD_DELAY = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_RUN = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND = 0U;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD[__Vi0] = 0;
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PHASE = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSX = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__SOUSY = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__OP2_EVOL = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SO = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SADIR = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_SALOOP = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CUR_LOOPEND = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__CALC_SO = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__COMP = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__EVENT = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED = 0U;
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE = 0U;
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__ATTACK_VOL_CALC = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__DECAY_VOL_CALC = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__NEW_EVOL = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__NEW_EST = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__ERMAX = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__SRAC = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk4__DOT__ND_PREV = 0U;
    tb_top__DOT__ref_i__DOT__unnamedblk5__DOT__LEVEL = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__S = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__TEMP = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_L = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk6__DOT__PAN_R = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk7__DOT__SD = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk7__DOT__MIXS_OLD = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__TEMP_Q = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__MEMS_Q = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__COEF_Q = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__MADRS_Q = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__MIXS_Q = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__EXTS_Q = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__INPUTS = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__X = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__Y = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__BS = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__B = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__Y_REG = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__FRC_REG = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__ADRS_REG = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__MUL = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk8__DOT__ADDR = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__S = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__TEMP = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_L = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk9__DOT__PAN_R = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk10__DOT__CNT = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DEXE_OLD = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk11__DOT__DMA_LEN_NEXT = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__MEM_START = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__MEM_DEV = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__REG_START = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk13__DOT__DMA_EXEC_OLD = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__unnamedblk13__DOT__REG_RD_DELAY = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i;
    tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i;
    tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__i);
    }
    tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i);
    }
    tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i)] = 0ULL;
        tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__i);
    }
    tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i)] = 0ULL;
        tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i);
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i)] = 0U;
        tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__i);
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i)] = 0ULL;
        tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__i);
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[(0x0000007fU 
                                                                                & tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__i);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000003fU)) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0U;
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
    IData/*21:0*/ tb_top__DOT__new_i__DOT__MOD_PHASE_SEL;
    tb_top__DOT__new_i__DOT__MOD_PHASE_SEL = 0;
    IData/*16:0*/ tb_top__DOT__new_i__DOT__SO_MOD;
    tb_top__DOT__new_i__DOT__SO_MOD = 0;
    CData/*5:0*/ tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0;
    tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0 = 0;
    CData/*4:0*/ tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    SData/*15:0*/ tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER;
    tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER = 0;
    IData/*16:0*/ tb_top__DOT__ref_i__DOT__SO_MOD;
    tb_top__DOT__ref_i__DOT__SO_MOD = 0;
    IData/*23:0*/ tb_top__DOT__ref_i__DOT__DSP_MEMS_D;
    tb_top__DOT__ref_i__DOT__DSP_MEMS_D = 0;
    CData/*5:0*/ tb_top__DOT__ref_i__DOT____Vconcswap_1_hb6d2b1c5__0;
    tb_top__DOT__ref_i__DOT____Vconcswap_1_hb6d2b1c5__0 = 0;
    CData/*4:0*/ tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE;
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    CData/*5:0*/ __Vfunc_EffRateCalc__5__Vfuncout;
    __Vfunc_EffRateCalc__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateCalc__5__RATE;
    __Vfunc_EffRateCalc__5__RATE = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__5__KRS;
    __Vfunc_EffRateCalc__5__KRS = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__5__OCT;
    __Vfunc_EffRateCalc__5__OCT = 0;
    CData/*3:0*/ __Vfunc_EffRateBit__6__Vfuncout;
    __Vfunc_EffRateBit__6__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateBit__6__ERATE;
    __Vfunc_EffRateBit__6__ERATE = 0;
    IData/*23:0*/ __Vfunc_DSPShifter__17__Vfuncout;
    __Vfunc_DSPShifter__17__Vfuncout = 0;
    IData/*25:0*/ __Vfunc_DSPShifter__17__A;
    __Vfunc_DSPShifter__17__A = 0;
    CData/*1:0*/ __Vfunc_DSPShifter__17__SHFT;
    __Vfunc_DSPShifter__17__SHFT = 0;
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
    CData/*5:0*/ __Vfunc_EffRateCalc__33__Vfuncout;
    __Vfunc_EffRateCalc__33__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateCalc__33__RATE;
    __Vfunc_EffRateCalc__33__RATE = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__33__KRS;
    __Vfunc_EffRateCalc__33__KRS = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__33__OCT;
    __Vfunc_EffRateCalc__33__OCT = 0;
    CData/*3:0*/ __Vfunc_EffRateBit__34__Vfuncout;
    __Vfunc_EffRateBit__34__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateBit__34__ERATE;
    __Vfunc_EffRateBit__34__ERATE = 0;
    IData/*23:0*/ __Vfunc_DSPShifter__45__Vfuncout;
    __Vfunc_DSPShifter__45__Vfuncout = 0;
    IData/*25:0*/ __Vfunc_DSPShifter__45__A;
    __Vfunc_DSPShifter__45__A = 0;
    CData/*1:0*/ __Vfunc_DSPShifter__45__SHFT;
    __Vfunc_DSPShifter__45__SHFT = 0;
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
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_21;
    __VdfgRegularize_hebeb780c_0_21 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_25;
    __VdfgRegularize_hebeb780c_0_25 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_26;
    __VdfgRegularize_hebeb780c_0_26 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_49;
    __VdfgRegularize_hebeb780c_0_49 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_50;
    __VdfgRegularize_hebeb780c_0_50 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_65;
    __VdfgRegularize_hebeb780c_0_65 = 0;
    CData/*4:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES = 0;
    CData/*5:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP = 0;
    CData/*3:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE = 0;
    CData/*5:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 = 0;
    CData/*4:0*/ TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP;
    TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP = 0;
    IData/*17:0*/ TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 = 0;
    IData/*17:0*/ TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 = 0;
    IData/*17:0*/ TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3;
    TOP__SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 = 0;
    IData/*25:0*/ TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP;
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP = 0;
    IData/*23:0*/ TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES;
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES = 0;
    CData/*4:0*/ TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__RES;
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__RES = 0;
    CData/*5:0*/ TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP;
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP = 0;
    CData/*3:0*/ TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE;
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE = 0;
    CData/*5:0*/ TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2;
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 = 0;
    CData/*4:0*/ TOP__REF_SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP;
    TOP__REF_SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP = 0;
    IData/*17:0*/ TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP1 = 0;
    IData/*17:0*/ TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP2 = 0;
    IData/*17:0*/ TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3;
    TOP__REF_SCSP_PKG__DOT__MVolCalc__Vstatic__TEMP3 = 0;
    IData/*25:0*/ TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP;
    TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP = 0;
    IData/*23:0*/ TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__RES;
    TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__RES = 0;
    // Body
    vlSelfRef.R_RAM_A = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_A;
    vlSelfRef.N_RAM_A = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A;
    vlSelfRef.R_RAM_D = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_D;
    vlSelfRef.N_RAM_D = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D;
    vlSelfRef.R_RAM_WE = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_WE;
    vlSelfRef.N_RAM_WE = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE;
    vlSelfRef.R_RAM_RD = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_RD;
    vlSelfRef.N_RAM_RD = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD;
    vlSelfRef.R_RAM_CS = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_CS;
    vlSelfRef.N_RAM_CS = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS;
    vlSelfRef.R_RAM_RFS = vlSelfRef.tb_top__DOT__ref_i__DOT__MEM_RFS;
    vlSelfRef.N_RAM_RFS = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RFS;
    vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_Q = ((0x00ffff00U 
                                                  & (vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__q 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__q 
                                                       >> 0x00000010U)));
    if ((0U == (2U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SA_RA = 
            (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                    >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR5_RA 
            = vlSelfRef.tb_top__DOT__new_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR6_RA 
            = vlSelfRef.tb_top__DOT__new_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA = 0U;
    } else {
        if ((2U == (2U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__SA_RA 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                          >> 0x00000023U)));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR2_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR0_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                  >> 0x00000012U));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR5_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR6_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
        }
        if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4) 
                                     >> 6U)));
        } else if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                 >> 1U)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4)));
        }
    }
    if ((0U == (2U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SA_RA = 
            (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                    >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RA = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR5_RA 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR6_RA 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA = 0U;
    } else {
        if ((2U == (2U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__SA_RA 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                          >> 0x00000023U)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR2_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[2U] 
                                  >> 0x00000012U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR5_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR6_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
        }
        if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4) 
                                     >> 6U)));
        } else if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                 >> 1U)))) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4)));
        }
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber3 
        = (0x00ffU & ((- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                           >> 0x00000013U))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber2 
        = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                         >> 0x0000001cU)))
                           ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                      >> 0x0000001dU))
                           : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber3 
        = (0x0fffU & ((- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                                   >> 0x0000001cU)))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2 
        = (0x0000001fU & ((0x00200000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP4)
                           ? (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                              >> 0x00000016U) : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                 >> 4U)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000015U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2 
        = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000022U)))
                           ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U))
                           : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                          >> 0x00000022U)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber3 
        = (0x0fffU & ((- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                   >> 0x00000022U)))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_DRAM____pinNumber3 
        = ((((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
             << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
                                 << 0x00000020U) | 
                                (((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
                                  << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))))) 
           & (- (QData)((IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                          >> 0x00000013U)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXS_NULL_RAM____pinNumber5 
        = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) 
            << 4U) | (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                                     >> 3U)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber3 
        = (0x00ffU & ((- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                           >> 0x00000013U))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber2 
        = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                         >> 0x0000001cU)))
                           ? (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                      >> 0x0000001dU))
                           : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 4U)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber3 
        = (0x0fffU & ((- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                                   >> 0x0000001cU)))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber2 
        = (0x0000001fU & ((0x00200000U & vlSelfRef.tb_top__DOT__ref_i__DOT__OP4)
                           ? (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                              >> 0x00000016U) : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                 >> 4U)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000015U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2 
        = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                         >> 0x00000022U)))
                           ? (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U))
                           : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 4U)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                          >> 0x00000022U)))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber3 
        = (0x0fffU & ((- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                   >> 0x00000022U)))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 
        = ((((QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)) 
             << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)) 
                                 << 0x00000020U) | 
                                (((QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)) 
                                  << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D))))) 
           & (- (QData)((IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                          >> 0x00000013U)))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.R_RDY_N = (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_RRDY) 
                                  & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_WRDY))));
    vlSelfRef.N_RDY_N = (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RRDY) 
                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WRDY))));
    vlSelfRef.R_INT_N = (1U & (~ (0U != (0x000007ffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR18) 
                                            & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR17))))));
    vlSelfRef.N_INT_N = (1U & (~ (0U != (0x000007ffU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR18) 
                                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR17))))));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST)
                           ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)
                           : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U)));
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber5 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A));
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber5 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber2 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST)
                           ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT)
                           : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 4U)));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) {
        vlSelfRef.tb_top__DOT__new_i__DOT__PCM_MIXS_Q 
            = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q;
        vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MIXS_Q 
            = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q;
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT__PCM_MIXS_Q 
            = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q;
        vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MIXS_Q 
            = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q;
    }
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__PCM_MIXS_Q 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q;
        vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MIXS_Q 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q;
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT__PCM_MIXS_Q 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q;
        vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MIXS_Q 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q;
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_REQ = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.AD_N) 
                                                      | ((IData)(vlSelfRef.CS_N) 
                                                         | (IData)(vlSelfRef.REQ_N)))));
    vlSelfRef.R_SCAVEC_N = (1U & (~ (7U == (IData)(vlSelfRef.SCFC))));
    __VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR11) 
                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR12));
    __VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR11) 
                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR12));
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0_SEL 
        = (IData)((0U == (0x060fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))));
    __VdfgRegularize_hebeb780c_0_17 = ((4U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR16) 
                                              >> 5U)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR15) 
                                                 >> 6U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CR14) 
                                                   >> 7U))));
    __VdfgRegularize_hebeb780c_0_18 = ((4U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR16) 
                                              >> 5U)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR15) 
                                                 >> 6U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR14) 
                                                   >> 7U))));
    __VdfgRegularize_hebeb780c_0_25 = ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                         << 6U) | (
                                                   ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)))) 
                                       & ((((0x0000000cU 
                                             & ((- (IData)((IData)(
                                                                   (0x0400U 
                                                                    == 
                                                                    (0x0603U 
                                                                     & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                << 2U)) 
                                            | (3U & 
                                               (- (IData)((IData)(
                                                                  (0x0401U 
                                                                   == 
                                                                   (0x0603U 
                                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))))) 
                                           << 4U) | 
                                          ((0x0000000cU 
                                            & ((- (IData)((IData)(
                                                                  (0x0402U 
                                                                   == 
                                                                   (0x0603U 
                                                                    & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                               << 2U)) 
                                           | (3U & 
                                              (- (IData)((IData)(
                                                                 (0x0403U 
                                                                  == 
                                                                  (0x0603U 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = ((0x000f0000U 
                                                  & (vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_D 
                                                     << 0x00000010U)) 
                                                 | (0x0000ffffU 
                                                    & (vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_D 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_47 = ((0x000f0000U 
                                                  & (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_D 
                                                     << 0x00000010U)) 
                                                 | (0x0000ffffU 
                                                    & (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_D 
                                                       >> 4U)));
    tb_top__DOT__new_i__DOT__MOD_PHASE_SEL = (0x003fffffU 
                                              & (((vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                   << 0x0000000fU) 
                                                  | (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                                                     >> 0x00000011U)) 
                                                 + 
                                                 (0x0000003fU 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))
                                                      ? 
                                                     ((vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                                         >> 7U))
                                                      : 
                                                     ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP3_PHASE_FRAC_NEXT) 
                                                      >> 8U)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((0x0000000cU 
                                                  & ((- (IData)((IData)(
                                                                        (0x0740U 
                                                                         == 
                                                                         (0x07e1U 
                                                                          & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x0741U 
                                                                          == 
                                                                          (0x07e1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((0x0000000cU 
                                                  & ((- (IData)((IData)(
                                                                        (0x0740U 
                                                                         == 
                                                                         (0x07e1U 
                                                                          & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x0741U 
                                                                          == 
                                                                          (0x07e1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__MOD_PHASE_CURR 
        = (0x003fffffU & (((vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                            << 0x0000000fU) | (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[0U] 
                                               >> 0x00000011U)) 
                          + (0x0000003fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[2U] 
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
    vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)) 
            & (IData)(vlSelfRef.CE)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)) 
                                                & (4U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) 
                                                 & (4U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)) 
                                                 & (4U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN) 
                                                 & (4U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ_NOFL2) {
        vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_10 
            = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_INP_REG) 
               << 8U);
    } else {
        vlSelfRef.__Vfunc_DSPFtoI__20__F = vlSelfRef.tb_top__DOT__new_i__DOT__DSP_INP_REG;
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN 
            = (1U & ((IData)(vlSelfRef.__Vfunc_DSPFtoI__20__F) 
                     >> 0x0000000fU));
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__EXP 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_DSPFtoI__20__F) 
                              >> 0x0000000bU));
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__MANT 
            = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_DSPFtoI__20__F));
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__RES 
            = (0x00ffffffU & ((0x0cU <= (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__EXP))
                               ? ((0x00fff800U & ((- (IData)((IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN))) 
                                                  << 0x0000000bU)) 
                                  | (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__MANT))
                               : VL_SHIFTRS_III(24,24,4, 
                                                ((((IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN) 
                                                   << 0x00000017U) 
                                                  | (0x00400000U 
                                                     & ((~ (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN)) 
                                                        << 0x00000016U))) 
                                                 | ((IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__MANT) 
                                                    << 0x0000000bU)), (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__EXP))));
        vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_9__DSPFtoI 
            = vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__RES;
        vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_10 
            = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_9__DSPFtoI;
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMS_D = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_10;
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_READ_NOFL2) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_10 
            = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_INP_REG) 
               << 8U);
    } else {
        vlSelfRef.__Vfunc_DSPFtoI__48__F = vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_INP_REG;
        vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__SIGN 
            = (1U & ((IData)(vlSelfRef.__Vfunc_DSPFtoI__48__F) 
                     >> 0x0000000fU));
        vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__EXP 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_DSPFtoI__48__F) 
                              >> 0x0000000bU));
        vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__MANT 
            = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_DSPFtoI__48__F));
        vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__RES 
            = (0x00ffffffU & ((0x0cU <= (IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__EXP))
                               ? ((0x00fff800U & ((- (IData)((IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__SIGN))) 
                                                  << 0x0000000bU)) 
                                  | (IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__MANT))
                               : VL_SHIFTRS_III(24,24,4, 
                                                ((((IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__SIGN) 
                                                   << 0x00000017U) 
                                                  | (0x00400000U 
                                                     & ((~ (IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__SIGN)) 
                                                        << 0x00000016U))) 
                                                 | ((IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__MANT) 
                                                    << 0x0000000bU)), (IData)(vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__EXP))));
        vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_9__DSPFtoI 
            = vlSymsp->TOP__REF_SCSP_PKG.DSPFtoI__Vstatic__RES;
        vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_10 
            = vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCall_9__DSPFtoI;
    }
    tb_top__DOT__ref_i__DOT__DSP_MEMS_D = vlSelfRef.tb_top__DOT__ref_i__DOT____VlemCond_10;
    __Vfunc_DSPShifter__45__SHFT = (3U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                  >> 0x00000014U)));
    __Vfunc_DSPShifter__45__A = vlSelfRef.tb_top__DOT__ref_i__DOT__SFT_REG;
    TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
        = ((2U & (IData)(__Vfunc_DSPShifter__45__SHFT))
            ? ((1U & (IData)(__Vfunc_DSPShifter__45__SHFT))
                ? __Vfunc_DSPShifter__45__A : (0x03fffffeU 
                                               & (__Vfunc_DSPShifter__45__A 
                                                  << 1U)))
            : ((1U & (IData)(__Vfunc_DSPShifter__45__SHFT))
                ? (0x03fffffeU & (__Vfunc_DSPShifter__45__A 
                                  << 1U)) : __Vfunc_DSPShifter__45__A));
    TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__RES 
        = ((((~ ((IData)(__Vfunc_DSPShifter__45__SHFT) 
                 >> 1U)) & (~ (TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                               >> 0x19U))) & (0U != 
                                              (3U & 
                                               (TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                                >> 0x17U))))
            ? 0x007fffffU : ((((~ ((IData)(__Vfunc_DSPShifter__45__SHFT) 
                                   >> 1U)) & (TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                              >> 0x19U)) 
                              & (3U != (3U & (TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                              >> 0x17U))))
                              ? 0x00800000U : (0x00ffffffU 
                                               & TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP)));
    __Vfunc_DSPShifter__45__Vfuncout = TOP__REF_SCSP_PKG__DOT__DSPShifter__Vstatic__RES;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SHFT_OUT = __Vfunc_DSPShifter__45__Vfuncout;
    vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP 
        = ((0x0000007cU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                           >> 0x00000012U)) | (3U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                                >> 1U)));
    if ((0x00080000U & vlSelfRef.tb_top__DOT__ref_i__DOT__OP7)) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 
            = (0x0000000fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000015U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP));
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 
            = (0x0000000fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                             >> 0x0000001cU)))
                               ? (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                          >> 0x00000018U))
                               : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2 
            = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                             >> 0x00000025U)))
                               ? (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                          >> 0x00000020U))
                               : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 1U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 2U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2 
            = (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2 
            = (0x0000007fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                             >> 0x00000037U)))
                               ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MDEC_CT) 
                                  + (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                             >> 0x00000030U)))
                               : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 1U)));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE = (
                                                   (~ vlSelfRef.tb_top__DOT__new_i__DOT__OP7) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE = (
                                                   (~ vlSelfRef.tb_top__DOT__ref_i__DOT__OP7) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)));
    vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)) 
            & (IData)(vlSelfRef.CE)));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL = (IData)(
                                                           (0x0403U 
                                                            == 
                                                            (0x0603U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))));
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE 
        = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT) 
            ^ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT) 
               - (IData)(1U))) & (1U ^ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT)));
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE 
        = (0x0000001fU & ((0x00000800U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                           ? ((0x00000400U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                               ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2)
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1) 
                                  >> 0x0000000bU)) : 
                          ((0x00000400U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                            ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1) 
                               >> 6U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1))));
    if ((IData)(((0x0c00U == (0x0c00U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))) 
                 & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                    >> 0x00000014U)))) {
        tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1));
    } else if (((3U != (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q) 
                              >> 0x0000000aU))) & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                                   >> 0x00000013U))) {
        tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2));
    }
    __Vfunc_EffRateCalc__5__OCT = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR5) 
                                                  >> 0x0000000bU));
    __Vfunc_EffRateCalc__5__KRS = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2) 
                                                  >> 0x0000000aU));
    __Vfunc_EffRateCalc__5__RATE = tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__5__KRS) 
                          + ((0x00000020U & ((IData)(__Vfunc_EffRateCalc__5__OCT) 
                                             << 2U)) 
                             | ((0x00000010U & ((IData)(__Vfunc_EffRateCalc__5__OCT) 
                                                << 1U)) 
                                | (IData)(__Vfunc_EffRateCalc__5__OCT)))));
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE 
        = ((0x0fU == (IData)(__Vfunc_EffRateCalc__5__KRS))
            ? 0U : ((0x00000020U & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                     ? 0U : ((0x00000010U & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                              ? 0x0000000fU : (0x0000000fU 
                                               & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP)))));
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__5__RATE) 
                          + (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE)));
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES = 
        ((0x00000020U & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2))
          ? 0x0000001fU : (0x0000001fU & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)));
    __Vfunc_EffRateCalc__5__Vfuncout = ((0x00000020U 
                                         & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)) 
                                        | (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES));
    tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0 
        = __Vfunc_EffRateCalc__5__Vfuncout;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_OVR 
        = (1U & ((IData)(tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0) 
                 >> 5U));
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE = (0x0000001fU 
                                                   & (IData)(tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0));
    __Vfunc_EffRateBit__6__ERATE = vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE;
    TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP = 
        (0x0000001fU & ((IData)(0x18U) - ((0x18U < (IData)(__Vfunc_EffRateBit__6__ERATE))
                                           ? 0x18U : (IData)(__Vfunc_EffRateBit__6__ERATE))));
    __Vfunc_EffRateBit__6__Vfuncout = (0x0000000fU 
                                       & ((IData)(TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP) 
                                          >> 1U));
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT 
        = __Vfunc_EffRateBit__6__Vfuncout;
    vlSelfRef.tb_top__DOT__new_i__DOT__ENV_STEP = (
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE)) 
                                                        | ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_OVR) 
                                                           & (0U 
                                                              == 
                                                              (0x0c00U 
                                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))))))) 
                                                   && (((0x18U 
                                                         > (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE)) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE))
                                                        ? 
                                                       (((0x0eU 
                                                          >= 
                                                          (0x0000000fU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))) 
                                                         && (1U 
                                                             & ((IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                                >> 
                                                                (0x0000000fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))))) 
                                                        | ((0x0eU 
                                                            >= 
                                                            (0x0000000fU 
                                                             & ((IData)(2U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))) 
                                                           && (1U 
                                                               & ((IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                                  >> 
                                                                  (0x0000000fU 
                                                                   & ((IData)(2U) 
                                                                      + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))))))
                                                        : 
                                                       ((0x0eU 
                                                         >= (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)) 
                                                        && (1U 
                                                            & ((IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                               >> (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT))))));
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE 
        = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT) 
            ^ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT_PREV)) 
           & (1U ^ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCNT)));
    tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE 
        = (0x0000001fU & ((2U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_EST))
                           ? ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_EST))
                               ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR2)
                               : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR1) 
                                  >> 0x0000000bU)) : 
                          ((1U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_EST))
                            ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR1) 
                               >> 6U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR1))));
    if (((3U == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_EST)) 
         & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
            >> 0x00000014U))) {
        tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR1));
    } else if (((3U != (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_EST)) 
                & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                   >> 0x00000013U))) {
        tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR2));
    }
    __Vfunc_EffRateCalc__33__OCT = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR5) 
                                                   >> 0x0000000bU));
    __Vfunc_EffRateCalc__33__KRS = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_SCR2) 
                                                   >> 0x0000000aU));
    __Vfunc_EffRateCalc__33__RATE = tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE;
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__33__KRS) 
                          + ((0x00000020U & ((IData)(__Vfunc_EffRateCalc__33__OCT) 
                                             << 2U)) 
                             | ((0x00000010U & ((IData)(__Vfunc_EffRateCalc__33__OCT) 
                                                << 1U)) 
                                | (IData)(__Vfunc_EffRateCalc__33__OCT)))));
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE 
        = ((0x0fU == (IData)(__Vfunc_EffRateCalc__33__KRS))
            ? 0U : ((0x00000020U & (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                     ? 0U : ((0x00000010U & (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                              ? 0x0000000fU : (0x0000000fU 
                                               & (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP)))));
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__33__RATE) 
                          + (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE)));
    TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__RES 
        = ((0x00000020U & (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2))
            ? 0x0000001fU : (0x0000001fU & (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)));
    __Vfunc_EffRateCalc__33__Vfuncout = ((0x00000020U 
                                          & (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)) 
                                         | (IData)(TOP__REF_SCSP_PKG__DOT__EffRateCalc__Vstatic__RES));
    tb_top__DOT__ref_i__DOT____Vconcswap_1_hb6d2b1c5__0 
        = __Vfunc_EffRateCalc__33__Vfuncout;
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_OVR 
        = (1U & ((IData)(tb_top__DOT__ref_i__DOT____Vconcswap_1_hb6d2b1c5__0) 
                 >> 5U));
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE = (0x0000001fU 
                                                   & (IData)(tb_top__DOT__ref_i__DOT____Vconcswap_1_hb6d2b1c5__0));
    __Vfunc_EffRateBit__34__ERATE = vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE;
    TOP__REF_SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP 
        = (0x0000001fU & ((IData)(0x18U) - ((0x18U 
                                             < (IData)(__Vfunc_EffRateBit__34__ERATE))
                                             ? 0x18U
                                             : (IData)(__Vfunc_EffRateBit__34__ERATE))));
    __Vfunc_EffRateBit__34__Vfuncout = (0x0000000fU 
                                        & ((IData)(TOP__REF_SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP) 
                                           >> 1U));
    vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT 
        = __Vfunc_EffRateBit__34__Vfuncout;
    vlSelfRef.tb_top__DOT__ref_i__DOT__ENV_STEP = (
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__RATE)) 
                                                        | ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_OVR) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP4_EST)))))) 
                                                   && (((0x18U 
                                                         > (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE)) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE))
                                                        ? 
                                                       (((0x0eU 
                                                          >= 
                                                          (0x0000000fU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT)))) 
                                                         && (1U 
                                                             & ((IData)(tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                                >> 
                                                                (0x0000000fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT)))))) 
                                                        | ((0x0eU 
                                                            >= 
                                                            (0x0000000fU 
                                                             & ((IData)(2U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT)))) 
                                                           && (1U 
                                                               & ((IData)(tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                                  >> 
                                                                  (0x0000000fU 
                                                                   & ((IData)(2U) 
                                                                      + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT)))))))
                                                        : 
                                                       ((0x0eU 
                                                         >= (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT)) 
                                                        && (1U 
                                                            & ((IData)(tb_top__DOT__ref_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                               >> (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__EFF_RATE_BIT))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP 
        = ((0x0000007cU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                           >> 0x00000012U)) | (3U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                                >> 1U)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
         & ((IData)(vlSelfRef.CE) & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV)));
    vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE = 
        ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
         & ((IData)(vlSelfRef.CE) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV)));
    vlSelfRef.N_SCAVEC_N = vlSelfRef.R_SCAVEC_N;
    vlSelfRef.R_SCIPL_N = (7U & (~ ((0x00000400U & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                     ? (IData)(__VdfgRegularize_hebeb780c_0_17)
                                     : ((0x00000100U 
                                         & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                         ? (IData)(__VdfgRegularize_hebeb780c_0_17)
                                         : ((0x00000080U 
                                             & (IData)(__VdfgRegularize_hebeb780c_0_0))
                                             ? (IData)(__VdfgRegularize_hebeb780c_0_17)
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
                                     ? (IData)(__VdfgRegularize_hebeb780c_0_18)
                                     : ((0x00000100U 
                                         & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                         ? (IData)(__VdfgRegularize_hebeb780c_0_18)
                                         : ((0x00000080U 
                                             & (IData)(__VdfgRegularize_hebeb780c_0_1))
                                             ? (IData)(__VdfgRegularize_hebeb780c_0_18)
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
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4 
        = (0x000000ffU & ((IData)(__VdfgRegularize_hebeb780c_0_25) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_25))));
    tb_top__DOT__new_i__DOT__SO_MOD = (0x0001ffffU 
                                       & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                                          & (((0x00010000U 
                                               & (tb_top__DOT__new_i__DOT__MOD_PHASE_SEL 
                                                  >> 5U)) 
                                              | (0x0000ffffU 
                                                 & (tb_top__DOT__new_i__DOT__MOD_PHASE_SEL 
                                                    >> 6U))) 
                                             + (0x0000ffffU 
                                                & (((vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                       >> 7U)) 
                                                   + 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                                                     >> 2U))))))))));
    tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER = (0x0000ffffU 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))
                                                      ? 
                                                     (0x0000ffffU 
                                                      & ((((vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                                                            << 0x0000000fU) 
                                                           | (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[0U] 
                                                              >> 0x00000011U)) 
                                                          + 
                                                          (0x0000003fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP3_PHASE_FRAC_NEXT) 
                                                              >> 8U))) 
                                                         >> 6U))
                                                      : 
                                                     (vlSelfRef.tb_top__DOT__ref_i__DOT__MOD_PHASE_CURR 
                                                      >> 6U)));
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_9) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_47;
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D));
    }
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_10) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_47;
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D));
    }
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_13) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_29;
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D));
    }
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_14) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_29;
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
        = (((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                           >> 0x00000025U))) ? ((0x00ff0000U 
                                                 & (tb_top__DOT__ref_i__DOT__DSP_MEMS_D 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (tb_top__DOT__ref_i__DOT__DSP_MEMS_D 
                                                      >> 8U)))
             : (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber3 
        = (0x0000ffffU & (((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                          >> 0x0000001cU)))
                            ? (vlSelfRef.tb_top__DOT__ref_i__DOT__SHFT_OUT 
                               >> 8U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D)) 
                          & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                                 >> 0x00000013U)))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 
        = (((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                           >> 0x00000037U))) ? ((0x00ff0000U 
                                                 & (vlSelfRef.tb_top__DOT__ref_i__DOT__SHFT_OUT 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.tb_top__DOT__ref_i__DOT__SHFT_OUT 
                                                      >> 8U)))
             : (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q = (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                  & (- (QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_SET
                                                                       [vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP]))));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 1U));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D));
    }
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 1U));
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D));
    }
    __VdfgRegularize_hebeb780c_0_65 = ((IData)(vlSelfRef.RES_N) 
                                       & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                  << 6U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                     << 4U) 
                                                    | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                        << 2U) 
                                                       | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)))) 
                                                & ((((0x0000000cU 
                                                      & ((- (IData)((IData)(
                                                                            (0x0400U 
                                                                             == 
                                                                             (0x0603U 
                                                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (- (IData)((IData)(
                                                                             (0x0401U 
                                                                              == 
                                                                              (0x0603U 
                                                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))))) 
                                                    << 4U) 
                                                   | ((0x0000000cU 
                                                       & ((- (IData)((IData)(
                                                                             (0x0402U 
                                                                              == 
                                                                              (0x0603U 
                                                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q = (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__q 
                                                  & (- (QData)((IData)(
                                                                       ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_OK) 
                                                                        & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem
                                                                        [vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP])))));
    if ((0x00080000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP7)) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber2 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 
            = (0x0000000fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000015U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber2 
            = (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 2U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 
            = (0x0000000fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x0000001cU)))
                               ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                          >> 0x00000018U))
                               : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2 
            = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x00000025U)))
                               ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                          >> 0x00000020U))
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 1U)));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber2 
            = (0x0000007fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x00000037U)))
                               ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MDEC_CT) 
                                  + (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x00000030U)))
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 1U)));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT0_CE = (IData)(
                                                          ((2U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN))))))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x1eU 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                      >> 5U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_32 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x0eU 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                      >> 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000bU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_34 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000aU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_35 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (9U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_37 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (7U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_38 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (6U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (5U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (4U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_41 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (3U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (2U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_44 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (1U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x060fU 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = (3U 
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = (0x0000000fU 
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
    __VdfgRegularize_hebeb780c_0_26 = (0x0000000fU 
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
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN))))))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((IData)(vlSelfRef.RES_N) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE));
    __VdfgRegularize_hebeb780c_0_50 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                       & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                          & (- (IData)(
                                                       (0x1eU 
                                                        == 
                                                        (0x0000003fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                            >> 5U)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE = (IData)(
                                                          ((6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)));
    vlSelfRef.tb_top__DOT__new_i__DOT__ADP = (0x000fffffU 
                                              & (vlSelfRef.tb_top__DOT__new_i__DOT__ADP_SA 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__ADP_PCM8B)
                                                   ? 
                                                  ((0x000e0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__new_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000011U)) 
                                                   | tb_top__DOT__new_i__DOT__SO_MOD)
                                                   : 
                                                  ((0x000c0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__new_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000012U)) 
                                                   | (tb_top__DOT__new_i__DOT__SO_MOD 
                                                      << 1U)))));
    tb_top__DOT__ref_i__DOT__SO_MOD = (0x0001ffffU 
                                       & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[0U] 
                                          & (((0x00010000U 
                                               & ((IData)(tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER) 
                                                  << 1U)) 
                                              | (IData)(tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER)) 
                                             + (0x0000ffffU 
                                                & (((vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                                                       >> 7U)) 
                                                   + 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                                                     >> 2U))))))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EVOL_RAM_4____pinNumber6 
        = (IData)(((4U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_65)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EVOL_RAM_2____pinNumber6 
        = (IData)(((0U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_65)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4 
        = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7))));
    __VdfgRegularize_hebeb780c_0_49 = ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 
        = (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                           >> 0x00000025U))) ? ((0x00ff0000U 
                                                 & (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMS_D 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMS_D 
                                                      >> 8U)))
             : (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = (3U 
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
                                                                               (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                                                >> 0x0000001cU))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_48 = (0x0000000fU 
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
                                                                               (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                                                >> 0x00000025U))))))));
    __VdfgRegularize_hebeb780c_0_21 = (0x0000000fU 
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
                                                                   (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                                    >> 0x00000037U)))))) 
                                          & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))));
    __Vfunc_DSPShifter__17__SHFT = (3U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                  >> 0x00000014U)));
    __Vfunc_DSPShifter__17__A = vlSelfRef.tb_top__DOT__new_i__DOT__SFT_REG;
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP = 
        ((2U & (IData)(__Vfunc_DSPShifter__17__SHFT))
          ? ((1U & (IData)(__Vfunc_DSPShifter__17__SHFT))
              ? __Vfunc_DSPShifter__17__A : (0x03fffffeU 
                                             & (__Vfunc_DSPShifter__17__A 
                                                << 1U)))
          : ((1U & (IData)(__Vfunc_DSPShifter__17__SHFT))
              ? (0x03fffffeU & (__Vfunc_DSPShifter__17__A 
                                << 1U)) : __Vfunc_DSPShifter__17__A));
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES = 
        ((((~ ((IData)(__Vfunc_DSPShifter__17__SHFT) 
               >> 1U)) & (~ (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                             >> 0x19U))) & (0U != (3U 
                                                   & (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                                      >> 0x17U))))
          ? 0x007fffffU : ((((~ ((IData)(__Vfunc_DSPShifter__17__SHFT) 
                                 >> 1U)) & (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                            >> 0x19U)) 
                            & (3U != (3U & (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                            >> 0x17U))))
                            ? 0x00800000U : (0x00ffffffU 
                                             & TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP)));
    __Vfunc_DSPShifter__17__Vfuncout = TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES;
    vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT = __Vfunc_DSPShifter__17__Vfuncout;
    vlSelfRef.tb_top__DOT__ref_i__DOT__SAMPLE_CE = 
        ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT)) 
         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                           >> 0x0000001cU))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LSA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4 
        = (0x0000000fU & ((IData)(__VdfgRegularize_hebeb780c_0_26) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_26))));
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
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber4 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                     & ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                        & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL)))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(__VdfgRegularize_hebeb780c_0_50)));
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_50))));
    vlSelfRef.tb_top__DOT__new_i__DOT__SAMPLE_CE = 
        ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)) 
         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_SET 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) 
           & ((~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000018U)) & (IData)(vlSelfRef.RES_N)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__ADP = (0x000fffffU 
                                              & (vlSelfRef.tb_top__DOT__ref_i__DOT__ADP_SA 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__ADP_PCM8B)
                                                   ? 
                                                  ((0x000e0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__ref_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000011U)) 
                                                   | tb_top__DOT__ref_i__DOT__SO_MOD)
                                                   : 
                                                  ((0x000c0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__ref_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000012U)) 
                                                   | (tb_top__DOT__ref_i__DOT__SO_MOD 
                                                      << 1U)))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_DRAM____pinNumber4 
        = (0x000000ffU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(__VdfgRegularize_hebeb780c_0_49)));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_49))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_48)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber4 
        = (0x0000000fU & ((IData)(__VdfgRegularize_hebeb780c_0_21) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_21))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber3 
        = (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                           >> 0x00000037U))) ? ((0x00ff0000U 
                                                 & (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                                                      >> 8U)))
             : (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber3 
        = (0x0000ffffU & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                          >> 0x0000001cU)))
                            ? (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                               >> 8U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
                          & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                                 >> 0x00000013U)))))));
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( CE)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( RES_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( CE_R)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( CE_F)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( DI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( CS_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( AD_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( DTEN_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( REQ_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( SCA)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( SCDI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( SCRW_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( SCAS_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( SCLDS_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( SCUDS_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( SCFC)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( ESL)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( ESR)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( SND_EN)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( R_RAM_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( N_RAM_Q)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge RES_N)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->RST_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5030369606897974962ull);
    vlSelf->CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14433250276100309095ull);
    vlSelf->RES_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13303405887424045070ull);
    vlSelf->CE_R = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7152352440588376800ull);
    vlSelf->CE_F = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6966210643085376216ull);
    vlSelf->DI = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2947528501619892130ull);
    vlSelf->CS_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16718419991174879421ull);
    vlSelf->AD_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6808643435062342660ull);
    vlSelf->DTEN_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15192072826543445779ull);
    vlSelf->REQ_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7432471687666578668ull);
    vlSelf->SCA = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9136170672954951198ull);
    vlSelf->SCDI = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1095635140508830312ull);
    vlSelf->SCRW_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16534122995453357146ull);
    vlSelf->SCAS_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17118638984159977873ull);
    vlSelf->SCLDS_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11000532037883502195ull);
    vlSelf->SCUDS_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3718960671347132204ull);
    vlSelf->SCFC = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1222459264902150397ull);
    vlSelf->ESL = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11736428872588479674ull);
    vlSelf->ESR = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9666554652743592500ull);
    vlSelf->SND_EN = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7175112533851081794ull);
    vlSelf->R_RAM_Q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7777974862384901313ull);
    vlSelf->N_RAM_Q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13977421059455502596ull);
    vlSelf->R_DO = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13799384405240272379ull);
    vlSelf->N_DO = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12446683275054514468ull);
    vlSelf->R_RDY_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5555206010461712678ull);
    vlSelf->N_RDY_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4208212025523993899ull);
    vlSelf->R_INT_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15598823446711040893ull);
    vlSelf->N_INT_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6874029233472990638ull);
    vlSelf->R_SCCE_R = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18326356374495388729ull);
    vlSelf->N_SCCE_R = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10163507778486229967ull);
    vlSelf->R_SCCE_F = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 978112578949656519ull);
    vlSelf->N_SCCE_F = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5389168862918615685ull);
    vlSelf->R_SCDO = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17331708898918210970ull);
    vlSelf->N_SCDO = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11911922376403248691ull);
    vlSelf->R_SCDTACK_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16399188668821670979ull);
    vlSelf->N_SCDTACK_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5772656372303550627ull);
    vlSelf->R_SCAVEC_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4910805062081342226ull);
    vlSelf->N_SCAVEC_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7157149724118529372ull);
    vlSelf->R_SCIPL_N = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6294251301217254070ull);
    vlSelf->N_SCIPL_N = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7951153099189969155ull);
    vlSelf->R_RAM_A = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9464800764831967667ull);
    vlSelf->N_RAM_A = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5591983876670544930ull);
    vlSelf->R_RAM_D = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 504103171902143747ull);
    vlSelf->N_RAM_D = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 389151470848204192ull);
    vlSelf->R_RAM_WE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14929685549008939141ull);
    vlSelf->N_RAM_WE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6360526473915657896ull);
    vlSelf->R_RAM_RD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4925096647534577590ull);
    vlSelf->N_RAM_RD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11692869901814420899ull);
    vlSelf->R_RAM_CS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9678019552476799222ull);
    vlSelf->N_RAM_CS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4741791549538799886ull);
    vlSelf->R_RAM_RFS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12985934994986798391ull);
    vlSelf->N_RAM_RFS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3668039062859536660ull);
    vlSelf->R_SOUND_L = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12688397483417011615ull);
    vlSelf->N_SOUND_L = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13391808351616150441ull);
    vlSelf->R_SOUND_R = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7819285156102767597ull);
    vlSelf->N_SOUND_R = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17538305399326282283ull);
    vlSelf->tb_top__DOT__new_i__DOT__CR0 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR1 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR6 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR7 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR8 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR9 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR10 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR11 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR12 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR13 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR14 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR15 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR16 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR17 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR18 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CR19 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2 = 0;
    VL_ZERO_RESET_W(87, vlSelf->tb_top__DOT__new_i__DOT__OP3);
    vlSelf->tb_top__DOT__new_i__DOT__OP4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP6 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP7 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__NOISE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__ADP = 0;
    vlSelf->tb_top__DOT__new_i__DOT__WD_READ = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_WD = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MONITOR_CA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MONITOR_SGC = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MONITOR_EG = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_ST = 0;
    vlSelf->tb_top__DOT__new_i__DOT__REG_ST = 0;
    vlSelf->tb_top__DOT__new_i__DOT__IO_ST = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_A = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_WE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_RD = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_CS = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_RFS = 0;
    vlSelf->tb_top__DOT__new_i__DOT__REG_A = 0;
    vlSelf->tb_top__DOT__new_i__DOT__REG_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__REG_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__REG_WE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__REG_RD = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_MA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_LEN = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_DIR = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_DAT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_WR = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DMA_EXEC = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CLK_DIV = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CYCLE_NUM = 0;
    vlSelf->tb_top__DOT__new_i__DOT__CYCLE0_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10949199628109732423ull);
    vlSelf->tb_top__DOT__new_i__DOT__CYCLE1_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12566136525695555333ull);
    vlSelf->tb_top__DOT__new_i__DOT__SLOT0_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6897776333424527400ull);
    vlSelf->tb_top__DOT__new_i__DOT__SLOT1_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17091441344295501997ull);
    vlSelf->tb_top__DOT__new_i__DOT__SAMPLE_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726304585359639062ull);
    vlSelf->tb_top__DOT__new_i__DOT__SCR0_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCR2_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SA_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCR5_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCR6_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SLOT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__RST = 0;
    vlSelf->tb_top__DOT__new_i__DOT__KYONEX_RUN = 0;
    vlSelf->tb_top__DOT__new_i__DOT__KYONEX_PEND = 0;
    vlSelf->tb_top__DOT__new_i__DOT__KB_SWEEP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12728169441095974970ull);
    vlSelf->tb_top__DOT__new_i__DOT__OP1_SCR5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP1_SCR6 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__KEY_RAM_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2_SCR0 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2_SCR2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2_SA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2_LSA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2_LEA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP2_SCR4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__STACK_RGEN = 0;
    vlSelf->tb_top__DOT__new_i__DOT__STACK_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SO_RAM_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP3_SCR0 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__ADP_SA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__ADP_PCM8B = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP3_PHASE_FRAC_NEXT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__ADP0_CURR = 0;
    vlSelf->tb_top__DOT__new_i__DOT__ADP0_NEXT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_WD0 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_WD1 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_WD_LATCH = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_PCM8B_LATCH = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_SCR1 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_SCR2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_SCR5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCNT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EFF_RATE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EFF_RATE_OVR = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EFF_RATE_BIT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__ENV_STEP = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP4_SCR6 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__EVOL_RAM_2____pinNumber6 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__EVOL_RAM_4____pinNumber6 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP6_SCR3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP7_SCR7 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__OP7_SCR8 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__STACK_WGEN = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DIR_ACC_L = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DIR_ACC_R = 0;
    vlSelf->tb_top__DOT__new_i__DOT__STACK_WE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17667423887348307535ull);
    vlSelf->tb_top__DOT__new_i__DOT__MPRO0_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MPRO_OK = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EFREG_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MIXS_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__PCM_MIXS_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_MIXS_Q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__DSP_EXTS[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__new_i__DOT__MIXS_GEN = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MIXS_NULL_SET = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11423851271535570927ull);
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXS_NULL_RAM____pinNumber5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_MPRO_STEP = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_MEMS_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MDEC_CT = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SFT_REG = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_MEMA_REG = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_INP_REG = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_OUT_REG = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_READ = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_WRITE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_READ_NOFL1 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DSP_READ_NOFL2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SHFT_OUT = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9950507422416288319ull);
    vlSelf->tb_top__DOT__new_i__DOT__TEMP_Q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14083212239135480423ull);
    vlSelf->tb_top__DOT__new_i__DOT__COEF_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MPRO1_IRA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEMS_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EXTS_Q = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EFF_ACC_L = 0;
    vlSelf->tb_top__DOT__new_i__DOT__EFF_ACC_R = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SUM_L = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SUM_R = 0;
    vlSelf->tb_top__DOT__new_i__DOT__TMR_CE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__A = 0;
    vlSelf->tb_top__DOT__new_i__DOT__WE_N = 0;
    vlSelf->tb_top__DOT__new_i__DOT__DQM = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_RPEND = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_RRDY = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_WA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_WE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_WPEND = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCU_WRDY = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCPU_RA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCPU_RPEND = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCPU_WA = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCPU_WE = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCPU_D = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCPU_WPEND = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MEM_DEV_LATCH = 0;
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR0_SEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 578251502100705541ull);
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SA____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_LSA____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__STACK1____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__COEF_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MPRO3_SEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16620303262048296675ull);
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MPRO_DRAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MPRO_DRAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MEMS_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT____Vcellinp__altsyncram_component__wren_a = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9834800989391062912ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12902585930986869840ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6214145904760838347ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6011430903799397869ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17065549650151714074ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15306896275129753870ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7938798854104919200ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16421594988898136099ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11402625388056741132ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1394161412943084068ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3799094291840232309ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3495099737631843472ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6371106460498689018ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9922369991900571410ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2447332837876159604ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14194549085299308824ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14206096263079786632ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8496440817973211016ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9325829714862274581ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3050991436395924576ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6747583995219068133ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1909032720767500852ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6460873976567330618ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 803918417879471990ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9226321553340942508ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16530796427508610943ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8967367389929540062ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2024120068852008909ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 732119738576290810ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4434258852240532103ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4043520702958926796ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12645628279389940708ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15780577406866014418ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11441867260207555487ull);
    vlSelf->tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT____Vcellinp__altsyncram_component__wren_a = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12087275587866268526ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10233525711308830947ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16739790880721456888ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11150393854661292389ull);
    vlSelf->tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT____Vcellinp__altsyncram_component__wren_a = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10692527826613730439ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10139642133272829021ull);
    vlSelf->tb_top__DOT__new_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16920895958346613296ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16553401665646105538ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5971217883726680810ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11381539427517911726ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9269128683127015381ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8015640852155487824ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16011858732359931066ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1739823688215775317ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2621845142080584095ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14155906304673120459ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6041646010487212158ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16243561797605618064ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13954866053892395908ull);
    vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1092486017594067561ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15652258704704642554ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10142562724732892937ull);
    vlSelf->tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__areg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11066982365596621015ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1311851298059575886ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13801382807779288932ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4464919454325183590ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 16326325251854372784ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8729175513505919313ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9864788670998487536ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10118470805710794368ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1922401254643773893ull);
    vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4928119384478484173ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9510676471064126248ull);
    }
    vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17997024390618130294ull);
    vlSelf->tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12849270722094578172ull);
    vlSelf->tb_top__DOT__ref_i__DOT__CR0 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR1 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR6 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR7 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR8 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR9 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR10 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR11 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR12 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR13 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR14 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR15 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR16 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR17 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR18 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CR19 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2 = 0;
    VL_ZERO_RESET_W(87, vlSelf->tb_top__DOT__ref_i__DOT__OP3);
    vlSelf->tb_top__DOT__ref_i__DOT__OP4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP6 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP7 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__NOISE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__ADP = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__WD_READ = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_WD = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MONITOR_CA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MONITOR_SGC = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MONITOR_EG = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_ST = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__REG_ST = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__IO_ST = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_A = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_WE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_RD = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_CS = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_RFS = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__REG_A = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__REG_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__REG_Q = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__REG_WE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__REG_RD = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_MA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_LEN = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_DIR = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_DAT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_WR = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DMA_EXEC = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CLK_DIV = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CYCLE_NUM = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__CYCLE0_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9527771300639584615ull);
    vlSelf->tb_top__DOT__ref_i__DOT__CYCLE1_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15817419977338176861ull);
    vlSelf->tb_top__DOT__ref_i__DOT__SLOT0_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5215431199389472443ull);
    vlSelf->tb_top__DOT__ref_i__DOT__SLOT1_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2297138281805087069ull);
    vlSelf->tb_top__DOT__ref_i__DOT__SAMPLE_CE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15741698315855374624ull);
    vlSelf->tb_top__DOT__ref_i__DOT__EVOL_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCR0_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCR2_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SA_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCR5_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCR6_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__LFO_RA = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR0_KB[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SLOT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__RST = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP1_SCR5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP1_SCR6 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__KEY_RAM_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__LFO_RAM_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2_SCR0 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2_SCR2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2_SA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2_LSA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2_LEA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP2_SCR4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__STACK_RGEN = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__STACK_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SO_RAM_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP3_SCR0 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__ADP_SA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__ADP_PCM8B = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP3_PHASE_FRAC_NEXT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MOD_PHASE_CURR = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12925500776466089245ull);
    vlSelf->tb_top__DOT__ref_i__DOT__ADP0_CURR = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__ADP0_NEXT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_WD0 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_WD1 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_WD_LATCH = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_PCM8B_LATCH = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_SCR1 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_SCR2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_SCR5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_EVOL = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_EST = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCNT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCNT_PREV = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__EFF_RATE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__EFF_RATE_OVR = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__EFF_RATE_BIT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__ENV_STEP = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_SCR6 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP4_LFO_DATA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__EVOL_RAM_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP6_SCR3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP7_SCR7 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__OP7_SCR8 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__STACK_WGEN = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DIR_ACC_L = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DIR_ACC_R = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__STACK_WE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15100044811948730482ull);
    vlSelf->tb_top__DOT__ref_i__DOT__MPRO0_Q = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MPRO1_Q = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__EFREG_Q = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__DSP_MPRO_SET[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MIXS_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__PCM_MIXS_Q = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_MIXS_Q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__DSP_EXTS[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__MIXS_NULL[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MIXS_GEN = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MDEC_CT = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SFT_REG = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_MEMA_REG = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_INP_REG = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_OUT_REG = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_READ = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_WRITE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_READ_NOFL1 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DSP_READ_NOFL2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SHFT_OUT = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12393128167729409199ull);
    vlSelf->tb_top__DOT__ref_i__DOT__EFF_ACC_L = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__EFF_ACC_R = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SUM_L = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SUM_R = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__TMR_CE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__A = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__WE_N = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__DQM = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_REQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5745959630721383897ull);
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_RPEND = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_RRDY = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_WA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_WE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_WPEND = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCU_WRDY = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCPU_RA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCPU_RPEND = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCPU_WA = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCPU_WE = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCPU_D = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__SCPU_WPEND = 0;
    vlSelf->tb_top__DOT__ref_i__DOT__MEM_DEV_LATCH = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SA____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LSA____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__STACK1____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber3 = 0;
    vlSelf->tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13496580382945739741ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3663087396734409256ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11653260130829276258ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5793082317260157190ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16993888334668025659ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11243788150830576613ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16235402705320203461ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7397528346581853607ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12391910246310306050ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1253791880651021127ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12836490462219616574ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 599557955951351945ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1414214681299563574ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16435105726628527498ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2793575624038459106ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 814425125053079613ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8153271863463144869ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16280663419121950163ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5007881172525167920ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9356028268374868742ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6702701882421393849ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5816835598599253450ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18318602238858059548ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16683013243311677666ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16091984742701195131ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13004495252835002386ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 415486123434470569ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6059020001102109958ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12525004574042660757ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7304113841054295383ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6194665648123231136ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8705785819859748252ull);
    vlSelf->tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4490426256879959904ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6099222113803538774ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17919349704651845957ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1660041653193854412ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9779940022500768815ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3733474128717361318ull);
    vlSelf->tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17813447576436330622ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1961380886539246838ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17971913145001461066ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5088359608035847985ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7025117923396228631ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3064317190691121034ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 15175149527344797000ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 14804105282389935709ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4321711999389968135ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 239675810704342035ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8658816188982078990ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11248712176137421253ull);
    }
    vlSelf->tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3110126386249457377ull);
    vlSelf->__Vfunc_DSPFtoI__20__F = 0;
    vlSelf->__Vfunc_DSPFtoI__48__F = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_14 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_28 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_29 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_30 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_31 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_32 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_33 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_34 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_35 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_36 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_37 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_38 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_39 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_40 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_41 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_42 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_44 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_45 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_46 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_47 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_48 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_51 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_52 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_54 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_55 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_56 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_58 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_59 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_60 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_61 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_63 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_64 = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__CYCLE_NUM = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__CYCLE_NUM = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SLOT = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCNT = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DSP_MEMA_REG = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DMA_MA = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DMA_RA = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DMA_DIR = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DMA_WR = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__A = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCU_RA = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCU_RPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCU_WA = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCU_D = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCU_WE = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCPU_RA = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCPU_WA = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCPU_D = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCPU_WE = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND = 0;
    vlSelf->__Vdly__N_SCDTACK_N = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__DMA_DAT = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__IO_ST = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__CR7 = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__REG_Q = 0;
    vlSelf->__Vdly__tb_top__DOT__new_i__DOT__CR4 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__KYONEX_PEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__PLFO_WAVE = 0;
    VL_ZERO_RESET_W(87, vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP3);
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__WD_READ = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP3_SCR0 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD1 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP4_WD0 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCNT = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR1 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR2 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__OP4_SCR6 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__DMA_MA = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__DMA_RA = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__DMA_DIR = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__DMA_WR = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__DMA_EXEC = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__A = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCU_RA = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCU_RPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCU_WA = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCU_D = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCU_WE = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCU_WPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCPU_RA = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCPU_RPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCPU_WA = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCPU_D = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCPU_WE = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__SCPU_WPEND = 0;
    vlSelf->__Vdly__R_SCDTACK_N = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__MEM_ST = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__MEM_DEV = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__DMA_DAT = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__REG_ST = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__IO_ST = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__CR4 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__CR7 = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__REG_Q = 0;
    vlSelf->__Vdly__tb_top__DOT__ref_i__DOT__CR1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MIXS_NULL_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__new_i__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR8__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR7__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__EFREG_RAM__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__SCR0_KB__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__unnamedblk1__DOT__SCR0_KB_OLD__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__DSP_EXTS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__ref_i__DOT__DSP_EXTS__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__ref_i__DOT__DSP_EXTS__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RST_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RES_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE_R__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE_F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DI__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CS_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__AD_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DTEN_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__REQ_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCA__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCDI__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCRW_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCAS_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCLDS_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCUDS_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCFC__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ESL__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ESR__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SND_EN__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__R_RAM_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__N_RAM_Q__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__CLK__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RST_N__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RES_N__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
