// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sndram.h for the primary calling header

#include "Vtb_sndram__pch.h"

VL_ATTR_COLD void Vtb_sndram___024root___eval_initial__TOP(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__1(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__2(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__3(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__4(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__5(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__6(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__7(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__8(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__9(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__10(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__11(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__12(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__13(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__14(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15(Vtb_sndram___024root* vlSelf);

void Vtb_sndram___024root___eval_initial(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sndram___024root___eval_initial__TOP(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__8(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__9(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__10(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__11(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__12(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__13(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__14(vlSelf);
    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15(vlSelf);
}

void Vtb_sndram___024root___eval_sample(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_sample\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_sndram___024root___eval_ico(Vtb_sndram___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_ico\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sndram___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_sndram___024root___eval_triggers_vec__act(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___timing_ready(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 2> &in);
void Vtb_sndram___024root___eval_triggers_ext__act(Vtb_sndram___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 2> &latched);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag);
#endif  // VL_DEBUG
void Vtb_sndram___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 3> &in);
bool Vtb_sndram___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in);
void Vtb_sndram___024root___timing_resume(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___eval_body__act(Vtb_sndram___024root* vlSelf);

bool Vtb_sndram___024root___eval_act(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_act\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sndram___024root___eval_triggers_vec__act(vlSelf);
    Vtb_sndram___024root___timing_ready(vlSelf);
    Vtb_sndram___024root___trigger_orInto__act_vec_ext(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
    Vtb_sndram___024root___eval_triggers_ext__act(vlSelf, vlSelfRef.__VnbaTriggered);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sndram___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sndram___024root___trigger_orInto__act_ext_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sndram___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_sndram___024root___timing_resume(vlSelf);
        Vtb_sndram___024root___eval_body__act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sndram___024root___eval_inact(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_inact\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        vlSelfRef.__VdlySched.resumeZeroDelay();
    }
    return (__VinactExecute);
}

bool Vtb_sndram___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vtb_sndram___024root___eval_body__nba(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out);

bool Vtb_sndram___024root___eval_nba(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_nba\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sndram___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_sndram___024root___eval_body__nba(vlSelf);
        Vtb_sndram___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_sndram___024root___eval_obs(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_obs\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_sndram___024root___eval_react(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_react\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_sndram___024root___eval_postponed(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_postponed\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb_sndram.sv", 
                                         113);
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                         VL_MULS_III(32, (IData)(0x0000000aU), vlSelfRef.tb_sndram__DOT__T_RAM))), 
                                         nullptr, "tb_sndram.sv", 
                                         113);
    vlSelfRef.tb_sndram__DOT__init = 0U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__1(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_sndram__DOT__errs;
    tb_sndram__DOT__errs = 0;
    IData/*31:0*/ tb_sndram__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_sndram__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    tb_sndram__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000258U;
    while (VL_LTS_III(32, 0U, tb_sndram__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                             VL_MULS_III(32, (IData)(0x000007d0U), vlSelfRef.tb_sndram__DOT__T_RAM))), 
                                             nullptr, 
                                             "tb_sndram.sv", 
                                             195);
        tb_sndram__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_sndram__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    tb_sndram__DOT__errs = 0U;
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[64U] 
                      != vlSelfRef.tb_sndram__DOT__expv[0U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #0: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[64U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[0U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[65U] 
                      != vlSelfRef.tb_sndram__DOT__expv[1U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #1: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[65U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[1U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[66U] 
                      != vlSelfRef.tb_sndram__DOT__expv[2U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #2: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[66U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[2U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[67U] 
                      != vlSelfRef.tb_sndram__DOT__expv[3U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #3: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[67U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[3U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[68U] 
                      != vlSelfRef.tb_sndram__DOT__expv[4U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #4: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[68U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[4U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[69U] 
                      != vlSelfRef.tb_sndram__DOT__expv[5U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #5: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[69U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[5U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[70U] 
                      != vlSelfRef.tb_sndram__DOT__expv[6U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #6: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[70U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[6U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[71U] 
                      != vlSelfRef.tb_sndram__DOT__expv[7U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #7: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[71U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[7U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[72U] 
                      != vlSelfRef.tb_sndram__DOT__expv[8U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #8: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[72U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[8U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[73U] 
                      != vlSelfRef.tb_sndram__DOT__expv[9U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #9: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[73U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[9U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[74U] 
                      != vlSelfRef.tb_sndram__DOT__expv[10U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #10: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[74U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[10U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[75U] 
                      != vlSelfRef.tb_sndram__DOT__expv[11U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #11: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[75U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[11U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[76U] 
                      != vlSelfRef.tb_sndram__DOT__expv[12U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #12: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[76U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[12U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[77U] 
                      != vlSelfRef.tb_sndram__DOT__expv[13U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #13: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[77U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[13U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[78U] 
                      != vlSelfRef.tb_sndram__DOT__expv[14U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #14: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[78U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[14U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[79U] 
                      != vlSelfRef.tb_sndram__DOT__expv[15U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #15: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[79U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[15U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[80U] 
                      != vlSelfRef.tb_sndram__DOT__expv[16U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #16: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[80U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[16U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[81U] 
                      != vlSelfRef.tb_sndram__DOT__expv[17U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #17: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[81U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[17U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[82U] 
                      != vlSelfRef.tb_sndram__DOT__expv[18U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #18: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[82U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[18U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[83U] 
                      != vlSelfRef.tb_sndram__DOT__expv[19U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #19: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[83U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[19U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[84U] 
                      != vlSelfRef.tb_sndram__DOT__expv[20U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #20: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[84U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[20U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[85U] 
                      != vlSelfRef.tb_sndram__DOT__expv[21U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #21: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[85U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[21U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[86U] 
                      != vlSelfRef.tb_sndram__DOT__expv[22U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #22: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[86U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[22U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[87U] 
                      != vlSelfRef.tb_sndram__DOT__expv[23U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #23: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[87U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[23U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[88U] 
                      != vlSelfRef.tb_sndram__DOT__expv[24U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #24: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[88U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[24U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[89U] 
                      != vlSelfRef.tb_sndram__DOT__expv[25U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #25: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[89U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[25U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[90U] 
                      != vlSelfRef.tb_sndram__DOT__expv[26U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #26: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[90U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[26U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[91U] 
                      != vlSelfRef.tb_sndram__DOT__expv[27U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #27: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[91U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[27U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[92U] 
                      != vlSelfRef.tb_sndram__DOT__expv[28U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #28: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[92U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[28U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[93U] 
                      != vlSelfRef.tb_sndram__DOT__expv[29U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #29: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[93U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[29U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[94U] 
                      != vlSelfRef.tb_sndram__DOT__expv[30U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #30: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[94U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[30U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[95U] 
                      != vlSelfRef.tb_sndram__DOT__expv[31U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #31: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[95U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[31U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[96U] 
                      != vlSelfRef.tb_sndram__DOT__expv[32U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #32: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[96U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[32U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[97U] 
                      != vlSelfRef.tb_sndram__DOT__expv[33U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #33: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[97U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[33U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[98U] 
                      != vlSelfRef.tb_sndram__DOT__expv[34U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #34: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[98U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[34U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[99U] 
                      != vlSelfRef.tb_sndram__DOT__expv[35U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #35: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[99U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[35U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[100U] 
                      != vlSelfRef.tb_sndram__DOT__expv[36U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #36: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[100U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[36U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[101U] 
                      != vlSelfRef.tb_sndram__DOT__expv[37U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #37: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[101U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[37U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[102U] 
                      != vlSelfRef.tb_sndram__DOT__expv[38U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #38: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[102U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[38U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[103U] 
                      != vlSelfRef.tb_sndram__DOT__expv[39U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #39: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[103U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[39U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[104U] 
                      != vlSelfRef.tb_sndram__DOT__expv[40U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #40: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[104U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[40U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[105U] 
                      != vlSelfRef.tb_sndram__DOT__expv[41U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #41: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[105U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[41U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[106U] 
                      != vlSelfRef.tb_sndram__DOT__expv[42U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #42: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[106U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[42U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[107U] 
                      != vlSelfRef.tb_sndram__DOT__expv[43U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #43: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[107U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[43U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[108U] 
                      != vlSelfRef.tb_sndram__DOT__expv[44U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #44: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[108U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[44U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[109U] 
                      != vlSelfRef.tb_sndram__DOT__expv[45U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #45: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[109U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[45U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[110U] 
                      != vlSelfRef.tb_sndram__DOT__expv[46U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #46: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[110U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[46U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[111U] 
                      != vlSelfRef.tb_sndram__DOT__expv[47U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #47: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[111U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[47U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[112U] 
                      != vlSelfRef.tb_sndram__DOT__expv[48U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #48: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[112U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[48U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[113U] 
                      != vlSelfRef.tb_sndram__DOT__expv[49U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #49: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[113U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[49U]);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_sndram__DOT__wramh[114U] 
                      != vlSelfRef.tb_sndram__DOT__expv[50U])))) {
        tb_sndram__DOT__errs = ((IData)(1U) + tb_sndram__DOT__errs);
        VL_WRITEF_NX("MISMATCH #50: got %08h exp %08h\n",2
                     , '#',32,vlSelfRef.tb_sndram__DOT__wramh[114U]
                     , '#',32,vlSelfRef.tb_sndram__DOT__expv[50U]);
    }
    VL_WRITEF_NX("done_flag=%04h results=51 mismatches=%0d sdram_errors=%0d scsp_drop=%0d\n",4
                 , '#',32,vlSelfRef.tb_sndram__DOT__wramh[3U]
                 , '~',32,tb_sndram__DOT__errs, '#',32,vlSelfRef.tb_sndram__DOT__m_err
                 , '#',8,(IData)(vlSelfRef.tb_sndram__DOT__dbg_scsp_drop));
    if ((((0x00000d0eU == vlSelfRef.tb_sndram__DOT__wramh[3U]) 
          & (0U == tb_sndram__DOT__errs)) & (0U == vlSelfRef.tb_sndram__DOT__m_err))) {
        VL_WRITEF_NX("PASS\n",0);
    } else {
        VL_WRITEF_NX("FAIL\n",0);
    }
    VL_FINISH_MT("tb_sndram.sv", 202, "");
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_hc9d59cf1__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__2(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        while ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__clk_run)))) {
            Vtb_sndram___024root____VbeforeTrig_hc9d59cf1__0(vlSelf, 
                                                             "@( tb_sndram.clk_run)");
            co_await vlSelfRef.__VtrigSched_hc9d59cf1__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_sndram.clk_run)", 
                                                                 "tb_sndram.sv", 
                                                                 20);
        }
        co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__T_RAM)), 
                                             nullptr, 
                                             "tb_sndram.sv", 
                                             20);
        vlSelfRef.tb_sndram__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__CLK)));
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__3(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        while ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__clk_run)))) {
            Vtb_sndram___024root____VbeforeTrig_hc9d59cf1__0(vlSelf, 
                                                             "@( tb_sndram.clk_run)");
            co_await vlSelfRef.__VtrigSched_hc9d59cf1__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_sndram.clk_run)", 
                                                                 "tb_sndram.sv", 
                                                                 19);
        }
        co_await vlSelfRef.__VdlySched.delay((QData)((IData)(
                                                             VL_DIVS_III(32, vlSelfRef.tb_sndram__DOT__T_RAM, (IData)(2U)))), 
                                             nullptr, 
                                             "tb_sndram.sv", 
                                             19);
        vlSelfRef.tb_sndram__DOT__clk_ram = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__clk_ram)));
    }
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_hd0c814cc__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__4____Vfork_1__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__4(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_hd0c814cc__0(vlSelf, 
                                                         "@( tb_sndram.dram_a)");
        co_await vlSelfRef.__VtrigSched_hd0c814cc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_a)", 
                                                             "tb_sndram.sv", 
                                                             127);
        vlSelfRef.__Vintraval_hfed655d3__0 = vlSelfRef.tb_sndram__DOT__dram_a;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__4____Vfork_1__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__4____Vfork_1__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__4____Vfork_1__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         127);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__a_d__v0 = vlSelfRef.__Vintraval_hfed655d3__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__a_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_hc9e7124c__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__5____Vfork_2__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__5(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_hc9e7124c__0(vlSelf, 
                                                         "@( tb_sndram.dram_ba)");
        co_await vlSelfRef.__VtrigSched_hc9e7124c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_ba)", 
                                                             "tb_sndram.sv", 
                                                             128);
        vlSelfRef.__Vintraval_ha9f8309c__0 = vlSelfRef.tb_sndram__DOT__dram_ba;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__5____Vfork_2__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__5____Vfork_2__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__5____Vfork_2__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         128);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__ba_d__v0 = vlSelfRef.__Vintraval_ha9f8309c__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__ba_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_h82373107__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__6____Vfork_3__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__6(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h82373107__0(vlSelf, 
                                                         "@( tb_sndram.dram_dqm)");
        co_await vlSelfRef.__VtrigSched_h82373107__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_dqm)", 
                                                             "tb_sndram.sv", 
                                                             129);
        vlSelfRef.__Vintraval_ha80348d5__0 = vlSelfRef.tb_sndram__DOT__dram_dqm;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__6____Vfork_3__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__6____Vfork_3__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__6____Vfork_3__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         129);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__dqm_d__v0 
        = vlSelfRef.__Vintraval_ha80348d5__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__dqm_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_hc98dedca__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__7____Vfork_4__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__7(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__7\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_hc98dedca__0(vlSelf, 
                                                         "@( tb_sndram.dram_ras_n)");
        co_await vlSelfRef.__VtrigSched_hc98dedca__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_ras_n)", 
                                                             "tb_sndram.sv", 
                                                             130);
        vlSelfRef.__Vintraval_h4716196b__0 = vlSelfRef.tb_sndram__DOT__dram_ras_n;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__7____Vfork_4__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__7____Vfork_4__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__7____Vfork_4__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         130);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__ras_d__v0 
        = vlSelfRef.__Vintraval_h4716196b__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__ras_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_h23c291f1__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__8____Vfork_5__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__8(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__8\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h23c291f1__0(vlSelf, 
                                                         "@( tb_sndram.dram_cas_n)");
        co_await vlSelfRef.__VtrigSched_h23c291f1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_cas_n)", 
                                                             "tb_sndram.sv", 
                                                             131);
        vlSelfRef.__Vintraval_hfd120d51__0 = vlSelfRef.tb_sndram__DOT__dram_cas_n;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__8____Vfork_5__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__8____Vfork_5__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__8____Vfork_5__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         131);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__cas_d__v0 
        = vlSelfRef.__Vintraval_hfd120d51__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__cas_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_h66198558__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__9____Vfork_6__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__9(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__9\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h66198558__0(vlSelf, 
                                                         "@( tb_sndram.dram_we_n)");
        co_await vlSelfRef.__VtrigSched_h66198558__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_we_n)", 
                                                             "tb_sndram.sv", 
                                                             132);
        vlSelfRef.__Vintraval_h15ceaaae__0 = vlSelfRef.tb_sndram__DOT__dram_we_n;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__9____Vfork_6__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__9____Vfork_6__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__9____Vfork_6__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         132);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__we_d__v0 = vlSelfRef.__Vintraval_h15ceaaae__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__we_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_h5a73f95d__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__10____Vfork_7__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__10(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__10\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h5a73f95d__0(vlSelf, 
                                                         "@( tb_sndram.dram_dq_oe)");
        co_await vlSelfRef.__VtrigSched_h5a73f95d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_dq_oe)", 
                                                             "tb_sndram.sv", 
                                                             133);
        vlSelfRef.__Vintraval_h3d5f690c__0 = vlSelfRef.tb_sndram__DOT__dram_dq_oe;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__10____Vfork_7__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__10____Vfork_7__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__10____Vfork_7__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         133);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__oe_d__v0 = vlSelfRef.__Vintraval_h3d5f690c__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__oe_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_hd673bf82__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__11____Vfork_8__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__11(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__11\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_hd673bf82__0(vlSelf, 
                                                         "@( tb_sndram.dram_dq_o)");
        co_await vlSelfRef.__VtrigSched_hd673bf82__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_dq_o)", 
                                                             "tb_sndram.sv", 
                                                             134);
        vlSelfRef.__Vintraval_h2002a7ff__0 = vlSelfRef.tb_sndram__DOT__dram_dq_o;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__11____Vfork_8__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__11____Vfork_8__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__11____Vfork_8__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         134);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__o_d__v0 = vlSelfRef.__Vintraval_h2002a7ff__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__o_d__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_h48cf05bf__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__12____Vfork_9__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__12(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__12\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h48cf05bf__0(vlSelf, 
                                                         "@( tb_sndram.dram_clk)");
        co_await vlSelfRef.__VtrigSched_h48cf05bf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dram_clk)", 
                                                             "tb_sndram.sv", 
                                                             135);
        vlSelfRef.__Vintraval_hb48577dd__0 = vlSelfRef.tb_sndram__DOT__dram_clk;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__12____Vfork_9__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__12____Vfork_9__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__12____Vfork_9__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TCO)), 
                                         nullptr, "tb_sndram.sv", 
                                         135);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdr_clk__v0 
        = vlSelfRef.__Vintraval_hb48577dd__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__sdr_clk__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_h474ec7ad__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__13____Vfork_11__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__13(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__13\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h474ec7ad__0(vlSelf, 
                                                         "@( tb_sndram.dq)");
        co_await vlSelfRef.__VtrigSched_h474ec7ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dq)", 
                                                             "tb_sndram.sv", 
                                                             137);
        vlSelfRef.__Vintraval_h50986b74__0 = vlSelfRef.tb_sndram__DOT__dq;
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__13____Vfork_11__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__13____Vfork_11__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__13____Vfork_11__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TIN)), 
                                         nullptr, "tb_sndram.sv", 
                                         137);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__dq_in_r__strong__out3__v0 
        = vlSelfRef.__Vintraval_h50986b74__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__dq_in_r__strong__out3__v0 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__14____Vfork_10__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__14(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__14\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_h474ec7ad__0(vlSelf, 
                                                         "@( tb_sndram.dq)");
        co_await vlSelfRef.__VtrigSched_h474ec7ad__0.trigger(0U, 
                                                             nullptr, 
                                                             "@( tb_sndram.dq)", 
                                                             "tb_sndram.sv", 
                                                             137);
        vlSelfRef.__Vintraval_hd5c5750a__0 = (0x0000ffffU 
                                              & ((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en) 
                                                 | (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__oe_d)))));
        Vtb_sndram___024root___eval_initial__TOP__Vtiming__14____Vfork_10__0(vlSelf);
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__14____Vfork_10__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__14____Vfork_10__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay((QData)((IData)(vlSelfRef.tb_sndram__DOT__TIN)), 
                                         nullptr, "tb_sndram.sv", 
                                         137);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__dq_in_r__strong__en3__v0 
        = vlSelfRef.__Vintraval_hd5c5750a__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__dq_in_r__strong__en3__v0 = 1U;
    co_return;
}

void Vtb_sndram___024root____VbeforeTrig_hcd6a6a57__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vtb_sndram__ConstPool__CONST_h3af3cf12_0;
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_12__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_13__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_14__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_15__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_16__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_17__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_18__0(Vtb_sndram___024root* vlSelf);
VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_19__0(Vtb_sndram___024root* vlSelf);

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtask_tb_sndram__DOT__model__DOT__err__68__msg;
    VL_ZERO_W(256, __Vtask_tb_sndram__DOT__model__DOT__err__68__msg);
    IData/*31:0*/ __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__bk;
    __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__bk = 0;
    QData/*63:0*/ __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__t_pre;
    __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__t_pre = 0;
    IData/*31:0*/ __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__bk;
    __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__bk = 0;
    QData/*63:0*/ __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__t_pre;
    __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__t_pre = 0;
    IData/*31:0*/ __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk;
    __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk = 0;
    IData/*31:0*/ __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw;
    __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw = 0;
    IData/*31:0*/ __Vtask_tb_sndram__DOT__model__DOT__check_ret__82____VlefCall_0__row_valid;
    __Vtask_tb_sndram__DOT__model__DOT__check_ret__82____VlefCall_0__row_valid = 0;
    IData/*31:0*/ __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__Vfuncout;
    __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__bk;
    __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__bk = 0;
    IData/*31:0*/ __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__rw;
    __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__rw = 0;
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        Vtb_sndram___024root____VbeforeTrig_hcd6a6a57__0(vlSelf, 
                                                         "@(posedge tb_sndram.sdr_clk)");
        co_await vlSelfRef.__VtrigSched_hcd6a6a57__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sndram.sdr_clk)", 
                                                             "../mem/models/sdram_model.sv", 
                                                             125);
        vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
            = VL_TIME_UNITED_Q(1);
        vlSelfRef.tb_sndram__DOT__model__DOT__edge_n 
            = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__model__DOT__edge_n);
        vlSelfRef.tb_sndram__DOT__model__DOT__ei = 
            VL_MODDIVS_III(32, vlSelfRef.tb_sndram__DOT__model__DOT__edge_n, (IData)(0x00000010U));
        vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[(0x0000000fU 
                                                     & vlSelfRef.tb_sndram__DOT__model__DOT__ei)] 
            = vlSelfRef.tb_sndram__DOT__dqm_d;
        if (VL_UNLIKELY((((0x00000000000005dcULL > 
                           ((QData)(VL_TIME_UNITED_Q(1)) 
                            - vlSelfRef.tb_sndram__DOT__model__DOT__t_cmd_ch)) 
                          & (0ULL != vlSelfRef.tb_sndram__DOT__model__DOT__t_cmd_ch))))) {
            vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                               + vlSelfRef.tb_sndram__DOT__m_err);
            VL_WRITEF_NX("%0t SDRAM ERROR: command setup violation (%0d ps)\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',64,((QData)(VL_TIME_UNITED_Q(1)) 
                                   - vlSelfRef.tb_sndram__DOT__model__DOT__t_cmd_ch));
        }
        vlSelfRef.tb_sndram__DOT__model__DOT__cmd = 
            (((IData)(vlSelfRef.tb_sndram__DOT__ras_d) 
              << 2U) | (((IData)(vlSelfRef.tb_sndram__DOT__cas_d) 
                         << 1U) | (IData)(vlSelfRef.tb_sndram__DOT__we_d)));
        vlSelfRef.tb_sndram__DOT__model__DOT__bk = vlSelfRef.tb_sndram__DOT__ba_d;
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dbg) 
                          & (7U != (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd)))))) {
            VL_WRITEF_NX("%0t CMD %b ba=%0d a=%h dqm=%b\n",6, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd)
                         , '#',2,vlSelfRef.tb_sndram__DOT__ba_d
                         , '#',13,(IData)(vlSelfRef.tb_sndram__DOT__a_d)
                         , '#',2,vlSelfRef.tb_sndram__DOT__dqm_d);
        }
        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd))) {
                    vlSelfRef.tb_sndram__DOT__m_rd 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_rd);
                    if (VL_LIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act
                                   [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]))) {
                        if (VL_UNLIKELY((VL_GTS_IQQ(64, 0x0000000000004650ULL, 
                                                    (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                                     - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]))))) {
                            vlSelfRef.tb_sndram__DOT__m_err 
                                = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                            VL_WRITEF_NX("%0t SDRAM ERROR: READ before tRCD\n   dt %0d\n",3, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '~',64,(vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                                   - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                                   [
                                                   (3U 
                                                    & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]));
                        }
                        if (VL_UNLIKELY(((0U == vlSelfRef.tb_sndram__DOT__model__DOT__cl)))) {
                            vlSelfRef.tb_sndram__DOT__m_err 
                                = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                            VL_WRITEF_NX("%0t SDRAM ERROR: READ before mode register\n",2, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1));
                        }
                        vlSelfRef.tb_sndram__DOT__model__DOT__k = 0U;
                        while (VL_LTS_III(32, vlSelfRef.tb_sndram__DOT__model__DOT__k, vlSelfRef.tb_sndram__DOT__model__DOT__bl)) {
                            vlSelfRef.tb_sndram__DOT__model__DOT__ei 
                                = VL_MODDIVS_III(32, 
                                                 ((vlSelfRef.tb_sndram__DOT__model__DOT__edge_n 
                                                   + vlSelfRef.tb_sndram__DOT__model__DOT__cl) 
                                                  + vlSelfRef.tb_sndram__DOT__model__DOT__k), (IData)(0x00000010U));
                            if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__sl_v
                                             [(0x0000000fU 
                                               & vlSelfRef.tb_sndram__DOT__model__DOT__ei)]))) {
                                VL_ASSIGN_W(256, __Vtask_tb_sndram__DOT__model__DOT__err__68__msg, Vtb_sndram__ConstPool__CONST_h3af3cf12_0);
                                vlSelfRef.tb_sndram__DOT__m_err 
                                    = ((IData)(1U) 
                                       + vlSelfRef.tb_sndram__DOT__m_err);
                                VL_WRITEF_NX("%0t SDRAM ERROR: %0s\n",3, 'T',-12
                                             , '#',64,VL_TIME_UNITED_Q(1)
                                             , '#',256,__Vtask_tb_sndram__DOT__model__DOT__err__68__msg.data());
                            }
                            vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[(0x0000000fU 
                                                                        & vlSelfRef.tb_sndram__DOT__model__DOT__ei)] = 1U;
                            vlSelfRef.tb_sndram__DOT__model__DOT__sl_d[(0x0000000fU 
                                                                        & vlSelfRef.tb_sndram__DOT__model__DOT__ei)] 
                                = vlSelfRef.tb_sndram__DOT__model__DOT__mem
                                [((((0x00000300U & 
                                     (vlSelfRef.tb_sndram__DOT__model__DOT__bk 
                                      << 8U)) | (0x000000ffU 
                                                 & vlSelfRef.tb_sndram__DOT__model__DOT__bank_row
                                                 [(3U 
                                                   & vlSelfRef.tb_sndram__DOT__model__DOT__bk)])) 
                                   << 0x0000000aU) 
                                  | ((0x000003feU & (IData)(vlSelfRef.tb_sndram__DOT__a_d)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sndram__DOT__a_d) 
                                              ^ vlSelfRef.tb_sndram__DOT__model__DOT__k))))];
                            vlSelfRef.tb_sndram__DOT__model__DOT__k 
                                = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__model__DOT__k);
                        }
                        if ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__a_d))) {
                            __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__t_pre 
                                = (VL_GTS_IQQ(64, (0x000000000000a410ULL 
                                                   + vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                                   [
                                                   (3U 
                                                    & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]), 
                                              (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                               + VL_MULS_QQQ(64, 0x000000000000221aULL, 
                                                             VL_EXTENDS_QI(64,32, vlSelfRef.tb_sndram__DOT__model__DOT__bl))))
                                    ? (0x000000000000a410ULL 
                                       + vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                       [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)])
                                    : (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                       + VL_MULS_QQQ(64, 0x000000000000221aULL, 
                                                     VL_EXTENDS_QI(64,32, vlSelfRef.tb_sndram__DOT__model__DOT__bl))));
                            __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__bk 
                                = vlSelfRef.tb_sndram__DOT__model__DOT__bk;
                            vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[(3U 
                                                                            & __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__bk)] = 0U;
                            vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[(3U 
                                                                              & __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__bk)] 
                                = (0x0000000000004650ULL 
                                   + __Vtask_tb_sndram__DOT__model__DOT__start_pre__69__t_pre);
                        }
                    } else {
                        vlSelfRef.tb_sndram__DOT__m_err 
                            = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                        VL_WRITEF_NX("%0t SDRAM ERROR: READ to a closed bank\n",2, 'T',-12
                                     , '#',64,VL_TIME_UNITED_Q(1));
                    }
                } else {
                    vlSelfRef.tb_sndram__DOT__m_wr 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_wr);
                    if (VL_LIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act
                                   [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]))) {
                        if (VL_UNLIKELY((VL_GTS_IQQ(64, 0x0000000000004650ULL, 
                                                    (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                                     - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                                     [
                                                     (3U 
                                                      & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]))))) {
                            vlSelfRef.tb_sndram__DOT__m_err 
                                = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                            VL_WRITEF_NX("%0t SDRAM ERROR: WRITE before tRCD\n   dt %0d\n",3, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1)
                                         , '~',64,(vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                                   - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                                   [
                                                   (3U 
                                                    & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]));
                        }
                        if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))) {
                            vlSelfRef.tb_sndram__DOT__m_err 
                                = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                            VL_WRITEF_NX("%0t SDRAM ERROR: WRITE while the model drives DQ\n",2, 'T',-12
                                         , '#',64,VL_TIME_UNITED_Q(1));
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__dqm_d)))) {
                            vlSelfRef.tb_sndram__DOT__model__DOT__mem[(
                                                                       (0x000c0000U 
                                                                        & (vlSelfRef.tb_sndram__DOT__model__DOT__bk 
                                                                           << 0x00000012U)) 
                                                                       | ((0x0003fc00U 
                                                                           & (vlSelfRef.tb_sndram__DOT__model__DOT__bank_row
                                                                              [
                                                                              (3U 
                                                                               & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                                                                              << 0x0000000aU)) 
                                                                          | (0x000003ffU 
                                                                             & (IData)(vlSelfRef.tb_sndram__DOT__a_d))))] 
                                = ((0xff00U & vlSelfRef.tb_sndram__DOT__model__DOT__mem
                                    [((0x000c0000U 
                                       & (vlSelfRef.tb_sndram__DOT__model__DOT__bk 
                                          << 0x00000012U)) 
                                      | ((0x0003fc00U 
                                          & (vlSelfRef.tb_sndram__DOT__model__DOT__bank_row
                                             [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__a_d))))]) 
                                   | (0x000000ffU & vlSelfRef.tb_sndram__DOT__dq));
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__dqm_d) 
                                      >> 1U)))) {
                            vlSelfRef.tb_sndram__DOT__model__DOT__mem[(
                                                                       (0x000c0000U 
                                                                        & (vlSelfRef.tb_sndram__DOT__model__DOT__bk 
                                                                           << 0x00000012U)) 
                                                                       | ((0x0003fc00U 
                                                                           & (vlSelfRef.tb_sndram__DOT__model__DOT__bank_row
                                                                              [
                                                                              (3U 
                                                                               & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                                                                              << 0x0000000aU)) 
                                                                          | (0x000003ffU 
                                                                             & (IData)(vlSelfRef.tb_sndram__DOT__a_d))))] 
                                = ((0x00ffU & vlSelfRef.tb_sndram__DOT__model__DOT__mem
                                    [((0x000c0000U 
                                       & (vlSelfRef.tb_sndram__DOT__model__DOT__bk 
                                          << 0x00000012U)) 
                                      | ((0x0003fc00U 
                                          & (vlSelfRef.tb_sndram__DOT__model__DOT__bank_row
                                             [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__a_d))))]) 
                                   | ((SData)((0x000000ffU 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__dq) 
                                                  >> 8U))) 
                                      << 8U));
                        }
                        if ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__a_d))) {
                            __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__t_pre 
                                = (VL_GTS_IQQ(64, (0x000000000000a410ULL 
                                                   + vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                                   [
                                                   (3U 
                                                    & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]), 
                                              (0x0000000000004434ULL 
                                               + vlSelfRef.tb_sndram__DOT__model__DOT__tnow))
                                    ? (0x000000000000a410ULL 
                                       + vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                       [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)])
                                    : (0x0000000000004434ULL 
                                       + vlSelfRef.tb_sndram__DOT__model__DOT__tnow));
                            __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__bk 
                                = vlSelfRef.tb_sndram__DOT__model__DOT__bk;
                            vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[(3U 
                                                                            & __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__bk)] = 0U;
                            vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[(3U 
                                                                              & __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__bk)] 
                                = (0x0000000000004650ULL 
                                   + __Vtask_tb_sndram__DOT__model__DOT__start_pre__73__t_pre);
                        }
                    } else {
                        vlSelfRef.tb_sndram__DOT__m_err 
                            = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                        VL_WRITEF_NX("%0t SDRAM ERROR: WRITE to a closed bank\n",2, 'T',-12
                                     , '#',64,VL_TIME_UNITED_Q(1));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd))) {
            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd))) {
                vlSelfRef.tb_sndram__DOT__m_act = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_act);
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__mrs_done)))))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: ACT before init\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
                if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act
                                 [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: ACT to an active bank\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
                if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy
                                            [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)])))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: ACT before tRP\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
                if (VL_UNLIKELY((VL_GTS_IQQ(64, 0x000000000000ea60ULL, 
                                            (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                             - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                             [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]))))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: ACT before tRC\n   bank %0d dt %0d\n",4, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '~',32,vlSelfRef.tb_sndram__DOT__model__DOT__bk
                                 , '~',64,(vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                           - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                           [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)]));
                }
                if (VL_UNLIKELY((VL_GTS_IQQ(64, 0x0000000000002ee0ULL, 
                                            (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                             - vlSelfRef.tb_sndram__DOT__model__DOT__last_act_any))))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: ACT before tRRD\n   dt %0d\n",3, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '~',64,(vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                           - vlSelfRef.tb_sndram__DOT__model__DOT__last_act_any));
                }
                if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__last_ref_end)))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: ACT during tRFC\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
                if (VL_UNLIKELY(((0x0100U <= (IData)(vlSelfRef.tb_sndram__DOT__a_d))))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: row out of modelled range\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
                __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__a_d));
                __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk 
                    = vlSelfRef.tb_sndram__DOT__model__DOT__bk;
                __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__rw 
                    = __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw;
                __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__bk 
                    = __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk;
                __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__Vfuncout 
                    = (VL_GTS_III(32, 2U, __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__bk)
                        ? VL_GTS_III(32, 0x00000040U, __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__rw)
                        : VL_GTS_III(32, 0x000000c0U, __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__rw));
                __Vtask_tb_sndram__DOT__model__DOT__check_ret__82____VlefCall_0__row_valid 
                    = __Vfunc_tb_sndram__DOT__model__DOT__row_valid__83__Vfuncout;
                if (VL_UNLIKELY((((0U != __Vtask_tb_sndram__DOT__model__DOT__check_ret__82____VlefCall_0__row_valid) 
                                  & (0x0000000ee6b28000ULL 
                                     < ((QData)(VL_TIME_UNITED_Q(1)) 
                                        - vlSelfRef.tb_sndram__DOT__model__DOT__row_t
                                        [(0x000003ffU 
                                          & (VL_MULS_III(32, (IData)(0x00000100U), __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk) 
                                             + __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw))])))))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: retention bank %0d row %0d not restored for %0d ps\n",5, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '~',32,__Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk
                                 , '~',32,__Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw
                                 , '#',64,((QData)(VL_TIME_UNITED_Q(1)) 
                                           - vlSelfRef.tb_sndram__DOT__model__DOT__row_t
                                           [(0x000003ffU 
                                             & (VL_MULS_III(32, (IData)(0x00000100U), __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__bk) 
                                                + __Vtask_tb_sndram__DOT__model__DOT__check_ret__82__rw))]));
                }
                vlSelfRef.tb_sndram__DOT__model__DOT__row_t[(0x000003ffU 
                                                             & ((vlSelfRef.tb_sndram__DOT__model__DOT__bk 
                                                                 << 8U) 
                                                                + 
                                                                (0x000000ffU 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__a_d))))] 
                    = vlSelfRef.tb_sndram__DOT__model__DOT__tnow;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[(3U 
                                                                & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] = 1U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_row[(3U 
                                                                & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                    = vlSelfRef.tb_sndram__DOT__a_d;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act[(3U 
                                                                  & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                    = vlSelfRef.tb_sndram__DOT__model__DOT__tnow;
                vlSelfRef.tb_sndram__DOT__model__DOT__last_act_any 
                    = vlSelfRef.tb_sndram__DOT__model__DOT__tnow;
            } else if ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__a_d))) {
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[0U] = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[0U] 
                    = (0x0000000000004650ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
                vlSelfRef.tb_sndram__DOT__model__DOT__k = 4U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[1U] = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[1U] 
                    = (0x0000000000004650ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[2U] = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[2U] 
                    = (0x0000000000004650ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[3U] = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[3U] 
                    = (0x0000000000004650ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
                vlSelfRef.tb_sndram__DOT__model__DOT__pre_all_seen = 1U;
            } else {
                if (VL_UNLIKELY(((VL_GTS_IQQ(64, 0x000000000000a410ULL, 
                                             (vlSelfRef.tb_sndram__DOT__model__DOT__tnow 
                                              - vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act
                                              [(3U 
                                                & vlSelfRef.tb_sndram__DOT__model__DOT__bk)])) 
                                  & vlSelfRef.tb_sndram__DOT__model__DOT__bank_act
                                  [(3U & vlSelfRef.tb_sndram__DOT__model__DOT__bk)])))) {
                    vlSelfRef.tb_sndram__DOT__m_err 
                        = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__m_err);
                    VL_WRITEF_NX("%0t SDRAM ERROR: PRECHARGE before tRAS\n",2, 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                }
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[(3U 
                                                                & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[(3U 
                                                                  & vlSelfRef.tb_sndram__DOT__model__DOT__bk)] 
                    = (0x0000000000004650ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__cmd))) {
            if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[0U]))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH with an active bank\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            vlSelfRef.tb_sndram__DOT__model__DOT__k = 4U;
            vlSelfRef.tb_sndram__DOT__model__DOT__n_ref_init 
                = ((IData)(1U) + vlSelfRef.tb_sndram__DOT__model__DOT__n_ref_init);
            if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[1U]))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH with an active bank\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[2U]))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH with an active bank\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[3U]))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH with an active bank\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[0U])))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH before tRP\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[1U])))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH before tRP\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[2U])))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH before tRP\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[3U])))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH before tRP\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((VL_LTS_IQQ(64, vlSelfRef.tb_sndram__DOT__model__DOT__tnow, vlSelfRef.tb_sndram__DOT__model__DOT__last_ref_end)))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: REFRESH during tRFC\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            vlSelfRef.tb_sndram__DOT__model__DOT__last_ref_end 
                = (0x0000000000011940ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
        } else if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__ba_d))) {
            vlSelfRef.tb_sndram__DOT__model__DOT__cl 
                = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__a_d) 
                         >> 4U));
            vlSelfRef.tb_sndram__DOT__model__DOT__bl 
                = ((0U == (7U & (IData)(vlSelfRef.tb_sndram__DOT__a_d)))
                    ? 1U : ((1U == (7U & (IData)(vlSelfRef.tb_sndram__DOT__a_d)))
                             ? 2U : ((2U == (7U & (IData)(vlSelfRef.tb_sndram__DOT__a_d)))
                                      ? 4U : 8U)));
            vlSelfRef.tb_sndram__DOT__model__DOT__mrs_done = 1U;
            vlSelfRef.tb_sndram__DOT__model__DOT__last_ref_end 
                = (0x0000000000004434ULL + vlSelfRef.tb_sndram__DOT__model__DOT__tnow);
            vlSelfRef.tb_sndram__DOT__model__DOT__wburst_single 
                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__a_d) 
                         >> 9U));
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__pre_all_seen)))))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: MRS before PRECHARGE ALL\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY((VL_GTS_III(32, 2U, vlSelfRef.tb_sndram__DOT__model__DOT__n_ref_init)))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: MRS before two REFRESH\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
            if (VL_UNLIKELY(((1U & (((3U != vlSelfRef.tb_sndram__DOT__model__DOT__cl) 
                                     | (2U != vlSelfRef.tb_sndram__DOT__model__DOT__bl)) 
                                    | (~ (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__wburst_single))))))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM ERROR: unexpected mode register\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
            }
        }
        vlSelfRef.tb_sndram__DOT__model__DOT__ei = 
            VL_MODDIVS_III(32, vlSelfRef.tb_sndram__DOT__model__DOT__edge_n, (IData)(0x00000010U));
        if (vlSelfRef.tb_sndram__DOT__model__DOT__sl_v
            [(0x0000000fU & vlSelfRef.tb_sndram__DOT__model__DOT__ei)]) {
            vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[(0x0000000fU 
                                                        & vlSelfRef.tb_sndram__DOT__model__DOT__ei)] = 0U;
            vlSelfRef.tb_sndram__DOT__model__DOT__dq_en = 1U;
            vlSelfRef.tb_sndram__DOT__model__DOT__drove_prev = 1U;
            vlSelfRef.__Vintraval_h56d20ea6__0 = 0xffffU;
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_12__0(vlSelf);
            vlSelfRef.__Vintraval_h289f161a__0 = 0U;
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_13__0(vlSelf);
            vlSelfRef.__Vintraval_h9a6e8677__0 = ((
                                                   ((2U 
                                                     & vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h
                                                     [
                                                     (0x0000000fU 
                                                      & VL_MODDIVS_III(32, 
                                                                       ((IData)(0x0000000eU) 
                                                                        + vlSelfRef.tb_sndram__DOT__model__DOT__edge_n), (IData)(0x00000010U)))])
                                                     ? 0U
                                                     : 0xffU) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h
                                                      [
                                                      (0x0000000fU 
                                                       & VL_MODDIVS_III(32, 
                                                                        ((IData)(0x0000000eU) 
                                                                         + vlSelfRef.tb_sndram__DOT__model__DOT__edge_n), (IData)(0x00000010U)))])
                                                      ? 0U
                                                      : 0xffU));
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_14__0(vlSelf);
            vlSelfRef.__Vintraval_h84b11e51__0 = ((
                                                   ((2U 
                                                     & vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h
                                                     [
                                                     (0x0000000fU 
                                                      & VL_MODDIVS_III(32, 
                                                                       ((IData)(0x0000000eU) 
                                                                        + vlSelfRef.tb_sndram__DOT__model__DOT__edge_n), (IData)(0x00000010U)))])
                                                     ? 0U
                                                     : 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.tb_sndram__DOT__model__DOT__sl_d
                                                        [
                                                        (0x0000000fU 
                                                         & vlSelfRef.tb_sndram__DOT__model__DOT__ei)] 
                                                        >> 8U))) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h
                                                      [
                                                      (0x0000000fU 
                                                       & VL_MODDIVS_III(32, 
                                                                        ((IData)(0x0000000eU) 
                                                                         + vlSelfRef.tb_sndram__DOT__model__DOT__edge_n), (IData)(0x00000010U)))])
                                                      ? 0U
                                                      : 
                                                     (0x000000ffU 
                                                      & vlSelfRef.tb_sndram__DOT__model__DOT__sl_d
                                                      [
                                                      (0x0000000fU 
                                                       & vlSelfRef.tb_sndram__DOT__model__DOT__ei)])));
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_15__0(vlSelf);
            vlSelfRef.__Vintraval_h56d20ea6__1 = 0xffffU;
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_16__0(vlSelf);
            vlSelfRef.__Vintraval_h289f161a__1 = 0U;
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_17__0(vlSelf);
        } else if (vlSelfRef.tb_sndram__DOT__model__DOT__drove_prev) {
            vlSelfRef.tb_sndram__DOT__model__DOT__drove_prev = 0U;
            vlSelfRef.__Vintraval_h2e99b720__0 = 0U;
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_18__0(vlSelf);
            vlSelfRef.__Vintraval_h14622b3e__0 = 0U;
            Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_19__0(vlSelf);
        }
    }
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_19__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_19__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__tb_sndram__DOT__m_drive__v0;
    __VdlyVal__tb_sndram__DOT__m_drive__v0 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000001518ULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         229);
    __VdlyVal__tb_sndram__DOT__m_drive__v0 = vlSelfRef.__Vintraval_h14622b3e__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__m_drive__v0 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_18__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_18__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000001518ULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         228);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_en__v0 
        = vlSelfRef.__Vintraval_h2e99b720__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_en__v0 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_17__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_17__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002bdeULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         225);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2 
        = vlSelfRef.__Vintraval_h289f161a__1;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_16__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_16__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002bdeULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         225);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2 
        = vlSelfRef.__Vintraval_h56d20ea6__1;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_15__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_15__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000000157cULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         222);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1 
        = vlSelfRef.__Vintraval_h84b11e51__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_14__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_14__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000000157cULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         222);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1 
        = vlSelfRef.__Vintraval_h9a6e8677__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_13__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_13__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         221);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0 
        = vlSelfRef.__Vintraval_h289f161a__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0 = 1U;
    co_return;
}

VlCoroutine Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_12__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP__Vtiming__15____Vfork_12__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../mem/models/sdram_model.sv", 
                                         221);
    vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0 
        = vlSelfRef.__Vintraval_h56d20ea6__0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0 = 1U;
    co_return;
}

bool Vtb_sndram___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_anySet__ico\n"); );
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

void Vtb_sndram___024root___eval_triggers_ext__act(Vtb_sndram___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 2> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_triggers_ext__act\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((IData)(2U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
}

void Vtb_sndram___024root___eval_triggers_vec__act(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_triggers_vec__act\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_sndram__DOT__clk_ram)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_ram__0)) 
                                                      << 5U) 
                                                     | (((((~ (IData)(vlSelfRef.tb_sndram__DOT__CLK)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__CLK__0)) 
                                                          << 3U) 
                                                         | (((~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__RST_N__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_sndram__DOT__clk_ram) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_ram__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_sndram__DOT__CLK) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__CLK__0))))))));
    vlSelfRef.__VactTriggered[1U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.tb_sndram__DOT__clk_run) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_run__0)) 
                                                       << 0x00000012U) 
                                                      | ((((IData)(vlSelfRef.tb_sndram__DOT__dq) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dq__0)) 
                                                          << 0x00000011U) 
                                                         | (((IData)(vlSelfRef.tb_sndram__DOT__dram_clk) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_clk__0)) 
                                                            << 0x00000010U))) 
                                                     | ((((((((IData)(vlSelfRef.tb_sndram__DOT__dram_dq_o) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_o__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_sndram__DOT__dram_dq_oe) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_oe__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_sndram__DOT__dram_we_n) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_we_n__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_sndram__DOT__dram_cas_n) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_cas_n__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.tb_sndram__DOT__dram_ras_n) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ras_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_sndram__DOT__dram_dqm) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dqm__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_sndram__DOT__dram_ba) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ba__0)) 
                                                                 << 1U) 
                                                                | vlSelfRef.__VdlySched.awaitingCurrentTime())) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.tb_sndram__DOT__dram_a) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_a__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_sndram__DOT__sdr_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__sdr_clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_sndram__DOT__we_d) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__we_d__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_sndram__DOT__ras_d) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__ras_d__0)))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.tb_sndram__DOT__dqm_d) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dqm_d__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tb_sndram__DOT__cas_d) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__cas_d__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_sndram__DOT__ba_d) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__ba_d__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tb_sndram__DOT__a_d) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__a_d__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__CLK__0 
        = vlSelfRef.tb_sndram__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_ram__0 
        = vlSelfRef.tb_sndram__DOT__clk_ram;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__RST_N__0 
        = vlSelfRef.tb_sndram__DOT__RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__a_d__0 
        = vlSelfRef.tb_sndram__DOT__a_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__ba_d__0 
        = vlSelfRef.tb_sndram__DOT__ba_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__cas_d__0 
        = vlSelfRef.tb_sndram__DOT__cas_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dqm_d__0 
        = vlSelfRef.tb_sndram__DOT__dqm_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__ras_d__0 
        = vlSelfRef.tb_sndram__DOT__ras_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__we_d__0 
        = vlSelfRef.tb_sndram__DOT__we_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__sdr_clk__0 
        = vlSelfRef.tb_sndram__DOT__sdr_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_a__0 
        = vlSelfRef.tb_sndram__DOT__dram_a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ba__0 
        = vlSelfRef.tb_sndram__DOT__dram_ba;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dqm__0 
        = vlSelfRef.tb_sndram__DOT__dram_dqm;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ras_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_ras_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_cas_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_cas_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_we_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_we_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_oe__0 
        = vlSelfRef.tb_sndram__DOT__dram_dq_oe;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_o__0 
        = vlSelfRef.tb_sndram__DOT__dram_dq_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_clk__0 
        = vlSelfRef.tb_sndram__DOT__dram_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dq__0 
        = vlSelfRef.tb_sndram__DOT__dq;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_run__0 
        = vlSelfRef.tb_sndram__DOT__clk_run;
}

bool Vtb_sndram___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_anySet__act\n"); );
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

void Vtb_sndram___024root___act_sequent__TOP__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SWC9 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SWC9;
    vlSelfRef.__Vdly__tb_sndram__DOT__cyc = vlSelfRef.tb_sndram__DOT__cyc;
    vlSelfRef.__Vdly__tb_sndram__DOT__ce_ph = vlSelfRef.tb_sndram__DOT__ce_ph;
    vlSelfRef.__Vdly__tb_sndram__DOT__dot_div = vlSelfRef.tb_sndram__DOT__dot_div;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DIV = vlSelfRef.tb_sndram__DOT__SCSP_DIV;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CLK_DIV 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CLK_DIV;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CYCLE_NUM 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM;
    vlSelfRef.__Vdly__tb_sndram__DOT__MCLK_DIV = vlSelfRef.tb_sndram__DOT__MCLK_DIV;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0;
    vlSelfRef.__VdlySet__tb_sndram__DOT__wramh__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_CEGen__DOT__sum 
        = vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U];
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U] 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U];
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U] 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U];
}

void Vtb_sndram___024root___act_sequent__TOP__3(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__3\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT_CNT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_RGEN 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RGEN;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBREQ 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBREQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBRLS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_WAIT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_WAIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v6 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v7 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v8 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v9 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v10 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v11 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v12 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v13 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v14 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v15 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v6 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v7 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v8 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v9 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v10 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v11 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v6 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v7 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v8 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v9 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v10 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v11 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v12 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT 
        = vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_RWAIT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RWAIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__RSEL 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__RSEL;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v4 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v4 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCNT 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v7 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v8 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v9 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v4 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__PW;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__WDT_OVF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__MSBY_SBY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v5 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v6 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSTA;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_POS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_POS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CCACHE_RADDR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RADD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RADD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WADD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_DSP 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_CH 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v3 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v5 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND_REG 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RBA 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_A 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_A 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_B 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_C 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_LAST 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DMA_END 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DMA_END;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DW 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DW;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v2 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v4 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__IST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__ 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__ 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__ 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_WR_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCDTACK_N 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCDTACK_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__A;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_D 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_D;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WE 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_RPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_RPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DAT 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DAT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__IO_ST 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__IO_ST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_PEND 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_RUN 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_RUN;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__RST 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SLOT 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__NOISE 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_MA;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_RA;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_LEN;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DIR 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_WGEN 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_WGEN;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v0 = 0U;
    vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v2 = 0U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MDEC_CT 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR4;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR18;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR12;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR10;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR9;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR8;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_Q;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CRD_N_OLD 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CRD_N_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR5 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR5;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__CC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CC;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__ZF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ZF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__INIT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACH;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SFT_REG 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SFT_REG;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MB 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MB;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__SCR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TXI 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TXI;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TEI 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TEI;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__RXI 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__RXI;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__ERI 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__ERI;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK32_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK32_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK128_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK128_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK512_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK512_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8192_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8192_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VB;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_DO 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M0;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M1;
    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__MEM_WAIT 
        = vlSelfRef.tb_sndram__DOT__DCC__DOT__MEM_WAIT;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__T1S;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_SA 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP_SA;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_PCM8B 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP_PCM8B;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILSI 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILSI;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SX 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__TF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vH2;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vV;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vL2;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_BUF;
    vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = vlSelfRef.tb_sndram__DOT__BREQ_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VBR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VBR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__GBR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__GBR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SAT 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SAT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IIVECF_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IBS_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS0_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS1_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS2_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS3_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IWE_N;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__IDO;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RRDY 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RRDY;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WRDY 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WRDY;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DO = vlSelfRef.tb_sndram__DOT__SCSP_DO;
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_h2047061a_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_sndram__ConstPool__TABLE_hc21925a7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_h7a94dd37_0;
extern const VlWide<768>/*24575:0*/ Vtb_sndram__ConstPool__CONST_hf338d31f_0;

void Vtb_sndram___024root___act_sequent__TOP__4(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__4\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ __Vfunc_tb_sndram__DOT__merge__0__old;
    __Vfunc_tb_sndram__DOT__merge__0__old = 0;
    IData/*31:0*/ __Vfunc_tb_sndram__DOT__merge__0__d;
    __Vfunc_tb_sndram__DOT__merge__0__d = 0;
    CData/*3:0*/ __Vfunc_tb_sndram__DOT__merge__0__n;
    __Vfunc_tb_sndram__DOT__merge__0__n = 0;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    // Body
    if (VL_UNLIKELY((((~ (IData)(Vtb_sndram__ConstPool__TABLE_h2047061a_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_10])) 
                      & (IData)(vlSelfRef.tb_sndram__DOT__cs2_o))))) {
        VL_WRITEF_NX("%0t SH2  %s A=%07h DQM=%b DO=%08h\n",6, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,
                     ((0x00000100U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))
                       ? 0x5244U : 0x5752U), '#',27,
                     (0x07ffffffU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                             >> 0x00000020U)))
                     , '#',4,(0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                             >> 2U))
                     , '#',32,(IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1));
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_sndram__DOT__CWAIT_N) 
                       & (0x0100U == (0x0102U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)))) 
                      & (~ (IData)(Vtb_sndram__ConstPool__TABLE_h2047061a_0
                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_10])))))) {
        VL_WRITEF_NX("%0t SH2  rd data=%08h\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',32,vlSelfRef.tb_sndram__DOT__MSHDI);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N)) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__BDTEN_N))))))) {
        VL_WRITEF_NX("%0t BBUS data  BDO=%04h\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(vlSelfRef.tb_sndram__DOT__BDO));
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)) 
                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__brdy_o)))))) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                          & (IData)(vlSelfRef.tb_sndram__DOT__brdy_o))))) {
            VL_WRITEF_NX("%0t BBUS RDY  BDI=%04h\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',16,(IData)(vlSelfRef.tb_sndram__DOT__BDI));
        }
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram3__wren) {
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 
            = (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D 
               >> 0x00000018U);
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram2__wren) {
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D 
                              >> 0x00000010U));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram1__wren) {
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D 
                              >> 8U));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram0__wren) {
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D);
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SWC9 
        = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SWC9)));
    vlSelfRef.__Vdly__tb_sndram__DOT__cyc = ((IData)(1U) 
                                             + vlSelfRef.tb_sndram__DOT__cyc);
    vlSelfRef.__Vdly__tb_sndram__DOT__ce_ph = (1U & 
                                               (~ (IData)(vlSelfRef.tb_sndram__DOT__ce_ph)));
    if (vlSelfRef.tb_sndram__DOT__ce_ph) {
        vlSelfRef.__Vdly__tb_sndram__DOT__dot_div = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dot_div)));
    }
    if (vlSelfRef.tb_sndram__DOT__SCSP_2X_CE) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DIV 
            = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP_DIV)));
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 = 1U;
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 = 1U;
        }
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_EN) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_DATA;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_ADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_DATA;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_ADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber4))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3) 
                              >> 8U));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber4))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 
            = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK1____pinNumber4))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3) 
                              >> 8U));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK1____pinNumber4))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 
            = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__RAM_WE) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 
            = (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR));
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 
            = (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR));
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_WE) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_A_RDADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_A_RDADDR;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 
                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD);
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 
                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 
                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                                  >> 0x10U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 
                = (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE5))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE5))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE0))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE0))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 
                = (0x0fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                            >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 
                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD);
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 
                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD);
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 
                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 = 1U;
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 
                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 
                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                                  >> 0x10U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 = 1U;
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 
                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                                  >> 0x10U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 
                = (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 = 1U;
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 
                = (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber4))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WE))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WA)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WA));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE9))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE9))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE8))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE8))) {
        if ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 
                = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1));
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 = 1U;
        }
    }
    if ((((~ (0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__kk) 
                           >> 2U)))) | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_ANY))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)
                               ? vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA
                               : (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                                  >> (0x00000018U & 
                                      (((IData)(3U) 
                                        - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__kk)) 
                                       << 3U)))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 
            = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
                     & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS) 
                         + (3U & ((IData)(3U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS)))) 
                        >> 2U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 = 1U;
    }
    if ((((~ (0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__kk) 
                           >> 2U)))) | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_ANY))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)
                               ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                                  >> 8U) : (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                                            >> (0x00000018U 
                                                & (((IData)(3U) 
                                                    - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__kk)) 
                                                   << 3U)))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 
            = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
                     & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS) 
                         + (3U & ((IData)(2U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS)))) 
                        >> 2U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 = 1U;
    }
    if ((((~ (0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__kk) 
                           >> 2U)))) | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_ANY))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)
                               ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                                  >> 0x00000010U) : 
                              (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                               >> (0x00000018U & (((IData)(3U) 
                                                   - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__kk)) 
                                                  << 3U)))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 
            = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
                     & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS) 
                         + (3U & ((IData)(1U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS)))) 
                        >> 2U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 = 1U;
    }
    if ((((~ (0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__kk) 
                           >> 2U)))) | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_ANY))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)
                               ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA 
                               >> (0x00000018U & (((IData)(3U) 
                                                   - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__kk)) 
                                                  << 3U)))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 
            = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD)) 
                     & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS) 
                         + (3U & (- (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS)))) 
                        >> 2U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RWR) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 
            = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
                << 8U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 = 1U;
        }
    }
    if (vlSelfRef.tb_sndram__DOT__SCSP_CE) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CLK_DIV 
            = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CLK_DIV)));
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CLK_DIV) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP_CE))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CYCLE_NUM 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM)));
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__MCLK_DIV = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)));
    if (((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF) 
            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64) 
               & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))))) {
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0 
            = (7U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                     >> 2U));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0 = 1U;
    }
    if ((((IData)(((2U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A))) 
          | ((IData)(((4U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A))) 
             | ((IData)(((6U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A))) 
                | ((IData)(((4U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B))) 
                   | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R68))))) 
         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RWR))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 
            = ((0x00003f80U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
                               << 7U)) | (0x0000007fU 
                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 
            = ((0x00000080U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                ? 4U : (((3U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                       >> 1U))) ? 1U
                          : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                           >> 1U)))
                              ? 2U : 3U)) & (- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                            >> 3U)))))));
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH) 
         & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0 
            = Vtb_sndram__ConstPool__TABLE_hc21925a7_0
            [(0x0000000fU & (((IData)(1U) << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1)) 
                             | (((IData)(1U) << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2)) 
                                | ((IData)(1U) << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3)))))];
    }
    if ((1U & (((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                    >> 8U)) & (~ (IData)(Vtb_sndram__ConstPool__TABLE_h7a94dd37_0
                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_10]))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                      >> 2U))))))) {
        __Vfunc_tb_sndram__DOT__merge__0__n = (0x0000000fU 
                                               & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 2U));
        __Vfunc_tb_sndram__DOT__merge__0__d = (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1);
        __Vfunc_tb_sndram__DOT__merge__0__old = vlSelfRef.tb_sndram__DOT__wramh
            [(0x0000ffffU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                     >> 0x00000022U)))];
        vlSelfRef.tb_sndram__DOT____VlemCall_1__merge 
            = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_sndram__DOT__merge__0__n))
                                   ? (__Vfunc_tb_sndram__DOT__merge__0__old 
                                      >> 0x18U) : (__Vfunc_tb_sndram__DOT__merge__0__d 
                                                   >> 0x18U)) 
                                 << 8U)) | (0x000000ffU 
                                            & ((4U 
                                                & (IData)(__Vfunc_tb_sndram__DOT__merge__0__n))
                                                ? (__Vfunc_tb_sndram__DOT__merge__0__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_sndram__DOT__merge__0__d 
                                                   >> 0x10U)))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   ((2U 
                                                     & (IData)(__Vfunc_tb_sndram__DOT__merge__0__n))
                                                     ? 
                                                    (__Vfunc_tb_sndram__DOT__merge__0__old 
                                                     >> 8U)
                                                     : 
                                                    (__Vfunc_tb_sndram__DOT__merge__0__d 
                                                     >> 8U)) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      ((1U & (IData)(__Vfunc_tb_sndram__DOT__merge__0__n))
                                        ? __Vfunc_tb_sndram__DOT__merge__0__old
                                        : __Vfunc_tb_sndram__DOT__merge__0__d))));
        vlSelfRef.__VdlyVal__tb_sndram__DOT__wramh__v0 
            = vlSelfRef.tb_sndram__DOT____VlemCall_1__merge;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__wramh__v0 
            = (0x0000ffffU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                      >> 0x00000022U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__wramh__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 
            = Vtb_sndram__ConstPool__TABLE_hc21925a7_0
            [(0x0000000fU & (((IData)(1U) << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1)) 
                             | (((IData)(1U) << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2)) 
                                | ((IData)(1U) << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3)))))];
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RW) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT) 
               & ((~ (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                       >> 8U) | vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL
                      [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS])) 
                  | ((~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[0U] 
                         | vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[1U])) 
                     & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                        >> 8U))))))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT____Vcellinp__ACACHE____pinNumber4;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RW) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT) 
               & ((~ (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                       >> 8U) | vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL
                      [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS])) 
                  | ((~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[0U] 
                         | vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[1U])) 
                     & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                        >> 8U))))))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT____Vcellinp__ACACHE____pinNumber4;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP) 
         | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_RUN))))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 
            = ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP)) 
               & vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
               [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT]);
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT) 
         | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DC))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 
            = (((0x000f0000U & (((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                  ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                     >> 0x00000010U)
                                  : (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                                     [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                     >> 0x00000010U)) 
                                << 0x00000010U)) | 
                ((0x0000ff00U & (((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                   ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                      >> 8U) : (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                                                [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                                >> 8U)) 
                                 << 8U)) | (0x000000ffU 
                                            & ((1U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                                ? vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI
                                                : vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                                               [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH])))) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT))))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_WA;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT) 
         | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DR) 
            | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
               & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_rack) 
                  & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72)) 
                        & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                           [((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH) 
                             & (- (IData)((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)))))] 
                           >> 0x00000010U)))))))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 
            = (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DR)
                 ? ((((0x00000700U & (((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                        ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                           >> 0x00000018U)
                                        : (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM
                                           [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                           >> 0x00000018U)) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                                     ? 
                                                    (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                     >> 0x00000010U)
                                                     : 
                                                    (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM
                                                     [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                                     >> 0x00000010U)))) 
                     << 0x00000010U) | ((0x0000ff00U 
                                         & (((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                              ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                 >> 8U)
                                              : (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM
                                                 [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                                 >> 8U)) 
                                            << 8U)) 
                                        | (0x000000ffU 
                                           & ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                               ? vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI
                                               : vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM
                                              [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH]))))
                 : vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA_NEW) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT))))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_WA;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 = 1U;
    }
    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag23__wren))) {
        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag23__wren))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 
                = (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__data));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 
                = (0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                  >> 2U));
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag23__wren))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 
                = (0x0007ffffU & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__data 
                                          >> 0x13U)));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 
                = (0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                  >> 2U));
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__wren))) {
        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__wren))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 
                = (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__data));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 
                = (0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                  >> 2U));
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__wren))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 
                = (0x0007ffffU & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__data 
                                          >> 0x13U)));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 
                = (0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                  >> 2U));
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT) 
         | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DW) 
            | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CHW_DW_W)))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 
            = (0x07ffffffU & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DW)
                                ? ((((0x00000700U & 
                                      (((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                         ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                            >> 0x00000018U)
                                         : (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM
                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                            >> 0x00000018U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                                      ? 
                                                     (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                      >> 0x00000010U)
                                                      : 
                                                     (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM
                                                      [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                                      >> 0x00000010U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                            ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                               >> 8U)
                                            : (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM
                                               [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH] 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE))
                                           ? vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI
                                           : vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM
                                          [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH]))))
                                : (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CHW_DW_W) 
                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_WUP))
                                    ? ((IData)(4U) 
                                       + vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA)
                                    : vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA_NEW)) 
                              & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT)))))));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 
            = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_WA;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 = 1U;
    }
    if ((1U & ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                >> 0x00000015U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39))))) {
        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE4))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_98) 
         | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WS3) 
            | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WPW) 
               | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS1) 
                  | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFL) 
                     | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND)))))))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 
            = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WPW) 
                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_98))
                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA
                : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WA))
                    ? vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L
                    : vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WA;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (((QData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D)) 
                << 0x00000013U) | (QData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM_D)));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                              >> 0x00000012U));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_D);
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5 
                                      >> 0x00000025U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D;
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5 
                                      >> 0x00000025U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu) 
         | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK) 
            | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT 
            = ((1U & (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82)) 
                       | (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80))) 
                      | (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu)
                             ? (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                                        [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                                        >> 0x0000003eU))
                             : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr)
                                 ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                    >> 0x00000017U)
                                 : (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                    >> 0x00000017U))))))
                ? (0x0000003fU & ((0x0000000fU & ((0U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_81))
                                                   ? 
                                                  (vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR0 
                                                   >> 0x00000014U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_81))
                                                    ? 
                                                   (vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR0 
                                                    >> 4U)
                                                    : 
                                                   (vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR1 
                                                    >> 4U)))) 
                                  + ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu)
                                      ? ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RFS)
                                          ? (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu_i)
                                               ? 5U
                                               : ((1U 
                                                   & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80)) 
                                                      | (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82))))
                                                   ? 3U
                                                   : 5U)) 
                                             + (0x0000000fU 
                                                & vlSelfRef.tb_sndram__DOT__SCU__DOT__AREF))
                                          : 3U) : 2U)))
                : 0U);
    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT) 
                              - (IData)(1U)));
    }
    if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP) 
         | ((((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)) 
             & (0U == (0x060fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
               >> 1U)))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP)) 
                     & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
                        >> 0x0000000bU)));
        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP)
                               ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT)
                               : ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                  >> 4U)));
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if ((1U & ((IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                        >> 0x0000001cU)) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40))))) {
        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE6))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 
                = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A6;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE6))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 
                = (0x0fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D) 
                            >> 8U));
            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A6;
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 1U;
        }
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD = 1U;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_CEGen__DOT__sum 
        = (0x03ffffffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__ev)
                           ? (vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__nxt 
                              - vlSelfRef.tb_sndram__DOT__in_clk)
                           : vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__nxt));
    if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)) 
          & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
         | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT____Vcellinp__decrom__RESET))) {
        __VExpandSel_WordIdx_1 = (((IData)(0x00000060U) 
                                   * ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT____Vcellinp__decrom__RESET)
                                       ? 0x2dU : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CLS))) 
                                  >> 5U);
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
            = Vtb_sndram__ConstPool__CONST_hf338d31f_0
            [__VExpandSel_WordIdx_1];
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U] 
            = Vtb_sndram__ConstPool__CONST_hf338d31f_0
            [((IData)(1U) + __VExpandSel_WordIdx_1)];
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U] 
            = (0x003fffffU & Vtb_sndram__ConstPool__CONST_hf338d31f_0
               [((IData)(2U) + __VExpandSel_WordIdx_1)]);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_hdc2324bb_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_sndram__ConstPool__TABLE_h4d295306_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_sndram__ConstPool__TABLE_h1fac04a8_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_sndram__ConstPool__TABLE_h2c26a070_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_sndram__ConstPool__TABLE_he5a5c759_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_sndram__ConstPool__TABLE_hb05ff5bc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_sndram__ConstPool__TABLE_h20450440_0;
extern const VlUnpacked<CData/*7:0*/, 4> Vtb_sndram__ConstPool__TABLE_hd96158b0_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_sndram__ConstPool__TABLE_h537cf6d2_0;
extern const VlUnpacked<SData/*8:0*/, 4> Vtb_sndram__ConstPool__TABLE_h9b2cab03_0;

void Vtb_sndram___024root___act_sequent__TOP__11(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__11\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_he734af6f__0;
    tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_he734af6f__0 = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_h88ace628__0;
    tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_h88ace628__0 = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hecfdad81__0;
    tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hecfdad81__0 = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hacc92524__0;
    tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hacc92524__0 = 0;
    IData/*25:0*/ __Vfunc_DSPMult__16__Vfuncout;
    __Vfunc_DSPMult__16__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_DSPMult__16__X;
    __Vfunc_DSPMult__16__X = 0;
    SData/*12:0*/ __Vfunc_DSPMult__16__Y;
    __Vfunc_DSPMult__16__Y = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR1 = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR2;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR2 = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__dramsz;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__dramsz = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1 = 0;
    CData/*3:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__BCR1 = 0;
    CData/*0:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__BCR1 = 0;
    CData/*0:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__BCR1 = 0;
    CData/*0:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__BCR1 = 0;
    IData/*26:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR = 0;
    IData/*26:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR1 = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR2;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR2 = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__dramsz;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__dramsz = 0;
    IData/*26:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR = 0;
    IData/*26:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__area;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__area = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR1;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR1 = 0;
    SData/*15:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR2;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR2 = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__dramsz;
    __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__dramsz = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*1:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT_CNT 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT_CNT)));
            if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT_CNT))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT = 0U;
            }
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            if ((0x1fU == (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                  >> 0x00000023U))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_RGEN 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RGEN)));
            }
            if ((0x1fU == (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                          >> 0x00000016U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCNT 
                    = (0x00007fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT)));
            }
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                      >> 4U)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH 
                = ((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH))
                    ? 1U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH))));
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 1U;
            if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 2U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 4U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0U;
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SAT 
                                = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                         >> 1U));
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED 
                        = (1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP));
                }
            } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 4U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED 
                        = (IData)((3U == (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 4U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED 
                        = (IData)((3U == (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))));
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC 
                            = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL) 
                                     >> 1U));
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC 
                            = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                                        >> 1U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC 
                            = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                                        >> 1U)));
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC 
                                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                                         >> 1U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC 
                                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                                         >> 1U));
                        }
                    }
                }
            }
        }
        if (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC 
                    = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC) 
                             - (IData)(1U)));
            }
            if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 1U;
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((((0xfffffe92U == vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A) 
                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_WR)) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_REQ))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR 
                        = (0xdfU & vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI);
                }
                if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR 
                        = (0xefU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR));
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2_CE) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN 
                        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME) 
                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME));
                }
                if ((1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                            >> 0x0000001dU) & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R;
                } else if ((1U & (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_STALL)) 
                                   & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                         >> 7U))) & 
                                  (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                        = ((IData)(2U) + vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC);
                }
                if ((1U & ((((IData)(((0U != (0x00180000U 
                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])) 
                                      | (0U != (0x0000c000U 
                                                & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])))) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)))) 
                           & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE) 
                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE = 1U;
                } else if (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE = 0U;
                }
                if ((1U & (((((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                               >> 1U) & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                                         | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)))) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL))) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL))) 
                           | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                              .__PVT__EX.__PVT__BC 
                              & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                                 | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT))))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE = 1U;
                } else if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE)) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_STALL)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE = 0U;
                }
                if ((1U & ((((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                              >> 1U) & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)))) 
                           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                              | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE = 1U;
                } else if (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ)) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE = 0U;
                }
                if ((1U & (((((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL) 
                                  & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                                        >> 1U))) | 
                                 (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                     .__PVT__ID.__PVT__PC 
                                     >> 1U))) & (IData)(
                                                        ((0U 
                                                          != 
                                                          (0x00180000U 
                                                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])) 
                                                         | (0U 
                                                            != 
                                                            (0x0000c000U 
                                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U]))))) 
                               & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                     >> 5U))) & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))) 
                             & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                                | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)))) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL)) 
                               | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE) 
                                  == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                            >> 2U))))) 
                           | (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__LOAD_ISSUE) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))) 
                                & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                                   | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT)))) 
                               & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT = 1U;
                } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT = 0U;
                }
                if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT) 
                     & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                        | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL = 1U;
                } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL = 0U;
                }
                vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk2__DOT__BR_COND 
                    = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                        >> 0x0000000eU) & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BR_T) 
                                            == (1U 
                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                                   >> 0x0000000aU))) 
                                           | (2U == 
                                              (3U & 
                                               (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                                >> 0x0000000cU)))));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__NEW_IR 
                    = (0x0000ffffU & ((1U & ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                                                 >> 1U)) 
                                             | vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                             .__PVT__MA
                                             .__PVT__BC))
                                       ? ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC)
                                           ? vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_DI
                                           : (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_DI 
                                              >> 0x10U))
                                       : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR)));
                if ((1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                            >> 7U) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP)))) {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__NEW_IR = 9U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)))) {
                    if ((0x00000080U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U])) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP = 1U;
                    }
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP = 0U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__IR 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__PC 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__ID.__PVT__PC;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__BC 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk2__DOT__BR_COND;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_STALL)))) {
                    if ((1U & ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                                   >> 1U)) | vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                               .__PVT__MA.__PVT__BC))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR 
                            = (0x0000ffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_DI);
                    }
                    if ((0U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                      >> 2U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__IR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__NEW_IR;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__PC 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC;
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID.__PVT__IR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__NEW_IR;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID.__PVT__PC 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)))) {
                    if (((0U != (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                       >> 2U))) & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE) 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                                       >> 2U))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__IR 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__EX.__PVT__IR;
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                .__PVT__MA.__PVT__DI, vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI);
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__PC 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__EX.__PVT__PC;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__BC 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__EX.__PVT__BC;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__RES 
                        = ((0x00004000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B
                            : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R);
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__ADDR 
                        = ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                         >> 0x00000014U)))
                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A
                            : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                             >> 0x00000014U)))
                                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B
                                : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__WD 
                        = ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                         >> 0x00000012U)))
                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A
                            : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                             >> 0x00000012U)))
                                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B
                                : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R));
                    if (((5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP = 0U;
                    }
                    if ((1U & (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP))) 
                                & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_EXP))) 
                               & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILSI 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT;
                    } else if (((6U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE)) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP = 0U;
                    }
                    if ((0x10000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])) {
                        if ((0U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                          >> 0x0000001aU)))) {
                            if ((1U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                              >> 0x0000001aU)))) {
                                if ((2U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                  >> 0x0000001aU)))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VBR 
                                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R;
                                }
                            }
                            if ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                              >> 0x0000001aU)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__GBR 
                                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R;
                            }
                        }
                    }
                    if ((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ) 
                            & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                  >> 6U))) & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT))) 
                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL))) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH 
                            = (0x0000000fU & ((0U == 
                                               (3U 
                                                & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE) 
                                                   >> 2U)))
                                               ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP) 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE))))))
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE) 
                                                       >> 2U)))
                                                   ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE) 
                                                        >> 2U)))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE))
                                                     ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP)
                                                     : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP))
                                                    : 
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE))
                                                      ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP)
                                                      : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL)) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE) 
                                                                      >> 1U))))))))));
                    } else if (((7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE)) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH = 0U;
                    }
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WR_DONE) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS 
                        = (0x000000ffU & ((4U == (7U 
                                                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))
                                           ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                              >> 8U)
                                           : vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA));
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__RD_DONE) {
                    if ((4U != (7U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO;
                    }
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV 
                    = (0x0000000fU & (~ (IData)(vlSelfRef.tb_sndram__DOT__CIRL_N)));
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_EV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP 
                        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD) 
                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                              .__PVT__MA.__PVT__DI[1U] 
                              >> 6U));
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP = 0U;
            }
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__IR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__PC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__BC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__IR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__PC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__IR = 0U;
            __Vtemp_1[0U] = 0U;
            __Vtemp_1[1U] = 0xa0240000U;
            __Vtemp_1[2U] = 4U;
            VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI, __Vtemp_1);
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__PC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__BC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__RES = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__ADDR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__WD = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV = 0x0fU;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VBR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__GBR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH = 0U;
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND) 
             & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A 
                = (0x07fffff0U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA);
        } else if (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A 
                = (0x07fffff0U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA);
        } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A 
                = (0x07fffffcU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA);
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF) 
                       & ((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
                          | ((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_117))))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A 
                = (0x07ffffffU & ((IData)(4U) + vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A));
        }
        if ((IData)(((8U == (0x0000003cU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0 
                = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0 = 1U;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TCR_EVW) 
                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT;
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1 = 1U;
        }
        if ((IData)(((0x00000018U == (0x0000003cU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27)))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2 
                = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2 = 1U;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TCR_EVW) 
                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH))) {
            vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT;
            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3 = 1U;
        }
        if ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF) 
                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64)) 
                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE)))) 
             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CLR0))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L = 0U;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LBUS) 
                    | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSUM) 
                       | (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_93)) 
                          | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSHF))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L 
                = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_SEL))
                    ? vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA
                    : ((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_SEL))
                        ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD)
                        : ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_SEL))
                            ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L 
                                << 1U) | (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opLS)
                                                 ? 
                                                (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                  & (4U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))
                                                  ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F4)
                                                  : 
                                                 ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH)
                                                   ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F3)
                                                   : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F5)))
                                                 : (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                                                            >> 0x00000020U)))))
                            : (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD) 
                                << 0x0000001fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD))))))))));
        } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_GC) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L 
                = (7U & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L);
        }
        if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7) 
                    >> 0x0000000cU) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA 
                = ((0x00078000U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR6) 
                                   << 3U)) | (0x00007fffU 
                                              & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR5) 
                                                 >> 1U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR6) 
                                  >> 1U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN 
                = (0x000007ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7) 
                                  >> 1U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DIR 
                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7) 
                         >> 0x0000000dU));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC = 1U;
        }
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DMA_LEN_NEXT 
            = (0x000007ffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_LEN) 
                              - (IData)(1U)));
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC) {
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR) {
                if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR)) 
                      & (8U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST))) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA 
                        = (0x000007ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_RA)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 1U;
                } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR) 
                             & (8U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA 
                        = (0x0007ffffU & ((IData)(1U) 
                                          + vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_MA));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DMA_LEN_NEXT;
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DMA_LEN_NEXT))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC = 0U;
                    }
                }
            } else if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR)) 
                         & (3U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA 
                    = (0x0007ffffU & ((IData)(1U) + vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_MA));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 1U;
            } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR) 
                         & (8U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST))) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA 
                    = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_RA)));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DMA_LEN_NEXT;
                if ((1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DMA_LEN_NEXT))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC = 0U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) 
             & (0x01f00000U == (0x01f00000U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_WGEN 
                = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_WGEN)));
        }
        if ((IData)(((0x01f00000U == (0x01f00000U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7)) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE)))) {
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v0 = 1U;
        }
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__ADDR 
            = (0x0000ffffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM[0U]) 
                              + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT)));
        if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
            if ((2U == (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 8U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) {
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4 
                                            = ((0x07ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4)) 
                                               | (0x0000f800U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18)) 
                                               | (0x000000ffU 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR18) 
                                                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)))));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                                            = ((0xf8ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18)) 
                                               | (0x00000700U 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR18) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
                                                          >> 8U)) 
                                                        << 8U))));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                                        = ((0xffdfU 
                                            & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18)) 
                                           | (0x00000020U 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                                        = ((0xff00U 
                                            & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12)) 
                                           | (0x000000ffU 
                                              & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR12) 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)))));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                                        = ((0xf8ffU 
                                            & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12)) 
                                           | (0x00000700U 
                                              & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR12) 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
                                                      >> 8U)) 
                                                    << 8U))));
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                                    = ((0xffdfU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12)) 
                                       | (0x00000020U 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                    if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10 
                                        = ((0xff00U 
                                            & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10)) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                }
                                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10 
                                        = ((0x00ffU 
                                            & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10)) 
                                           | (0x00000700U 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9 
                                    = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9)) 
                                       | (0x000000ffU 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9 
                                    = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9)) 
                                       | (0x00000700U 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                        } else {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8 
                                    = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8)) 
                                       | (0x000000ffU 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8 
                                    = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8)) 
                                       | (0x00000700U 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC))))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7 
                                    = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7)) 
                                       | (0xfeU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                            if ((IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                          >> 1U) & 
                                         (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC))))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7 
                                    = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7)) 
                                       | (0x00007f00U 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                            }
                        }
                    }
                }
            }
        } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY) {
            if ((0U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 9U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = (((0U == (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) 
                        || (6U == (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))))
                        ? (0x0fffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_Q))
                        : ((0x0aU == (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))
                            ? (0x00ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_Q))
                            : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_Q)));
            } else if ((2U == (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                     >> 8U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                        ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                            ? 0U : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                     ? ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                         ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                             ? (0x07ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR19))
                                             : (0x07ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR18)))
                                         : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                             ? (0x07ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR17))
                                             : (0x00ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR16))))
                                     : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                         ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                             ? (0x00ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR15))
                                             : (0x00ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR14)))
                                         : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                             ? (0x07ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR13))
                                             : (0x07ffU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR12))))))
                        : ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                            ? ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                ? ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                        ? (0x07ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR11))
                                        : (0x07ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR10)))
                                    : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                        ? (0x07ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR9))
                                        : (0x07ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR8))))
                                : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                        ? (0x7000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7))
                                        : 0U) : 0U))
                            : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                ? ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                    ? 0U : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                             ? 0U : 
                                            (0x07ffU 
                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR4))))
                                : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                    ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                        ? (0x00ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR3))
                                        : (0x1fffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR2)))
                                    : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))
                                        ? (0x01ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1))
                                        : (0x030fU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR0)))))));
            } else if ((0x18U == (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                 >> 5U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0_Q;
            } else if ((0x19U == (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                 >> 5U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1_Q;
            } else if ((0x0eU == (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                 >> 6U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))
                        ? (0xfff8U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM
                           [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))])
                        : 0U);
            } else if ((0x1eU == (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                 >> 5U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))
                        ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM
                       [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))]
                        : 0U);
            } else if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                     >> 9U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))
                        ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM
                       [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))]
                        : 0U);
            } else if ((6U == (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                     >> 8U)))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                            = (0x0000ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM_Q);
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                        = (0x00ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM_Q 
                                      >> 0x10U));
                }
            } else if ((0x1cU == (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                 >> 6U)))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                            = (0x0000ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM_Q);
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                        = (0x00ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM_Q 
                                      >> 0x10U));
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q 
                    = ((0x3aU == (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                 >> 5U)))
                        ? 0U : (0x0000ffffU & ((0x76U 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                    >> 4U)))
                                                ? (
                                                   (0U 
                                                    >= 
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))
                                                    ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM
                                                   [
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))]
                                                    : 0U)
                                                : (
                                                   (0x03b8U 
                                                    == 
                                                    (0x000003ffU 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                        >> 1U)))
                                                    ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_EXTS
                                                   [
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))]
                                                    : 0U))));
            }
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4 
            = ((0xf800U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4)) 
               | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_CA) 
                   << 7U) | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_SGC) 
                              << 5U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_EG))));
        if (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                = (0x00000010U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                = (0x00000010U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7 
                = (0xefffU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7));
        }
        if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__TMR_CE) 
                   >> (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR8) 
                             >> 8U))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8 
                = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8)) 
                   | (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR8))));
            if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR8)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                    = (0x00000040U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                    = (0x00000040U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18));
            }
        }
        if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__TMR_CE) 
                   >> (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR9) 
                             >> 8U))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9 
                = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9)) 
                   | (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR9))));
            if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR9)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                    = (0x00000080U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                    = (0x00000080U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18));
            }
        }
        if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__TMR_CE) 
                   >> (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR10) 
                             >> 8U))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10 
                = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10)) 
                   | (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR10))));
            if ((0xffU == (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR10)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                    = (0x00000100U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                    = (0x00000100U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18));
            }
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SAMPLE_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 
                = (0x00000400U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 
                = (0x00000400U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18));
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_E) {
            if ((0x10U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D;
            }
            if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D;
            }
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
            if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                              >> 1U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR5 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5_Q;
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCL) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__CC 
                = (1U & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                                 >> 0x00000020U)));
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opZD) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__ZF 
                = (1U & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                                 >> 0x00000020U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SD 
                = (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC 
                   >> 0x1fU);
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SX 
                = (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H 
                   >> 0x1fU);
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__TF 
                = (1U & (~ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H 
                             ^ vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC) 
                            >> 0x1fU)));
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI;
        } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__EXEC) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL 
                = (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM);
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL) 
                >> 1U))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI;
        } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__WRH) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH 
                = (((IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
                             >> 0x21U)) << 1U) | (1U 
                                                  & ((IData)(
                                                             (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
                                                              >> 0x20U)) 
                                                     | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW))));
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__EXEC) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC = 0U;
        }
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__X 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_Q;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__Y 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__BS 
            = ((0x03000000U & ((- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_Q 
                                                 >> 0x17U)))) 
                               << 0x00000018U)) | vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_Q);
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__B 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__BS;
        __Vfunc_DSPMult__16__Y = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__Y;
        __Vfunc_DSPMult__16__X = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__X;
        vlSymsp->TOP__SCSPP_PKG.DSPMult__Vstatic__M 
            = (0x0000003fffffffffULL & VL_MULS_QQQ(38, 
                                                   (0x0000003fffffffffULL 
                                                    & VL_EXTENDS_QI(38,24, __Vfunc_DSPMult__16__X)), 
                                                   (0x0000003fffffffffULL 
                                                    & VL_EXTENDS_QI(38,13, (IData)(__Vfunc_DSPMult__16__Y)))));
        __Vfunc_DSPMult__16__Vfuncout = (0x03ffffffU 
                                         & (IData)(
                                                   (vlSymsp->TOP__SCSPP_PKG.DSPMult__Vstatic__M 
                                                    >> 0x0cU)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__MUL 
            = __Vfunc_DSPMult__16__Vfuncout;
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
            if ((IData)(((0x01f00000U == (0x01f00000U 
                                          & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MDEC_CT 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT) 
                                      - (IData)(1U)));
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG 
                = (0x0007ffffU & ((0x00000100U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1))
                                   ? ((0x00000080U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1))
                                       ? ((0x0007f000U 
                                           & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1) 
                                              << 0x0000000cU)) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__ADDR))
                                       : ((0x0007f000U 
                                           & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1) 
                                              << 0x0000000cU)) 
                                          + (0x00007fffU 
                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__ADDR))))
                                   : ((0x00000080U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1))
                                       ? ((0x0007f000U 
                                           & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1) 
                                              << 0x0000000cU)) 
                                          + (0x00003fffU 
                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__ADDR)))
                                       : ((0x0007f000U 
                                           & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1) 
                                              << 0x0000000cU)) 
                                          + (0x00001fffU 
                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__ADDR))))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SFT_REG 
                = (0x03ffffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__MUL 
                                  + vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__B));
        }
        if ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_90)
               ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL) 
                  >> 1U) : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MA 
                = (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW) 
                      | (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)))
                      ? (- (IData)((1U & ((0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))
                                           ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DW15)
                                           : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                                               >> 0x0000000fU) 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))))
                      : (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                         >> 0x10U)) << 0x00000010U) 
                   | (0x0000ffffU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__HI)
                                      ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                                         >> 0x10U) : vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI)));
        }
        if ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_90)
               ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL)
               : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MB 
                = (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW) 
                      | (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)))
                      ? (- (IData)((1U & ((0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))
                                           ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DW15)
                                           : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                                               >> 0x0000001fU) 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))))
                      : (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                         >> 0x10U)) << 0x00000010U) 
                   | (0x0000ffffU & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW) 
                                      | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__HI))
                                      ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                                         >> 0x10U) : vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__SCR = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO = 0U;
        }
        if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL) 
               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS)) 
              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__EXEC)) 
             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0 
                = ((3U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0)) 
                   | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR)
                       ? 0U : (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW) 
                                | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFL))
                                ? (0x0000000cU & ((2U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__KN) 
                                                        ^ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__KN)))))
                                : 0x0000000cU)));
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1 
                = ((3U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1)) 
                   | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR)
                        ? 0U : (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW) 
                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFL))
                                 ? (3U & ((2U & ((~ 
                                                  ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__KN) 
                                                   ^ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC))) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__KN)))))
                                 : 0U)) << 2U));
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__WRH) 
             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0 
                = ((0x0cU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0)) 
                   | (3U & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR)
                              ? 0U : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFL)
                                       ? (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN))))
                                       : 0x0cU)) >> 2U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1 
                = ((0x0cU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1)) 
                   | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR)
                       ? 0U : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFL)
                                ? (3U & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN) 
                                          << 1U) | 
                                         (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN)))))
                                : 0U)));
        }
        vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__CYC_NUM 
            = (0x0000000fU & (((Vtb_sndram__ConstPool__TABLE_hdc2324bb_0
                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_10] 
                                | (1U != (0x0000000fU 
                                          & (IData)(
                                                    (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000035U)))))
                                ? 8U : 7U) - (IData)(2U)));
        if (((((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                   >> 1U)) & (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD)) 
              & (~ (IData)(Vtb_sndram__ConstPool__TABLE_hdc2324bb_0
                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_10]))) 
             | (((~ (3U == (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                  >> 2U)))) & (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD)) 
                & (~ (IData)(Vtb_sndram__ConstPool__TABLE_hdc2324bb_0
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_10]))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__MEM_WAIT = 1U;
            if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT))) {
                if ((4U <= (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT) 
                                          - (IData)(4U)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__CYC_NUM) 
                                          - (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT)));
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT 
                    = vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__CYC_NUM;
            }
        } else if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT)) 
                    & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT) 
                                  - (IData)(1U)));
        } else if ((1U & ((~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT))) 
                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__MEM_WAIT = 0U;
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__TF 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT;
        }
        if (((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL) 
                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO 
                = ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                    ? ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                        ? vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC
                        : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L
                            : vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H))
                    : ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                        ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC
                            : (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE) 
                                << 1U) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF)))
                        : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L
                            : vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC)));
        }
        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__LL 
            = (1U & (0x0fU >> (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                     >> 0x19U))));
        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__dramsz 
            = (2U | (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR) 
                           >> 6U)));
        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR2 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2;
        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR1 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__area 
            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                     >> 0x19U));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res 
            = (3U & ((2U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__area))
                      ? ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__area))
                          ? ((1U & VL_REDXOR_32((3U 
                                                 & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR1))))
                              ? (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__dramsz)
                              : ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR2) 
                                 >> 6U)) : ((4U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR1))
                                             ? (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__dramsz)
                                             : ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR2) 
                                                >> 4U)))
                      : ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__area))
                          ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__BCR2) 
                             >> 2U) : 2U)));
        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__Vfuncout 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ 
            = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__28__Vfuncout;
        if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST 
                = (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST 
                = (0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
        } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST 
                = (0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST 
                = (8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
        } else {
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST 
                = (0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST 
                = (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
        }
        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE;
        if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
            if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)))) {
                        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF 
                                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__IDI);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                    if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
                        if (vlSelfRef.tb_sndram__DOT__CWAIT_N) {
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0cU;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
                        }
                    }
                } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT 
                            = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT) 
                                     - (IData)(1U)));
                    } else {
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0aU;
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
                        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT) 
                                 - (IData)(1U)));
                } else {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                    if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                                      >> 1U)))) {
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE) 
                                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)) 
                                    | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE) 
                                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)) 
                                    | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
                            }
                        }
                        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST) {
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                        }
                        if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                        } else if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                                = (0x0000000fU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                        } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                                = (0x0000000fU & ((IData)(4U) 
                                                  + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                        }
                    } else {
                        if ((1U & ((0U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                                                 >> 2U))) 
                                   | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE))))) {
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 1U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
                    }
                } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                            = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT) 
                                     - (IData)(1U)));
                    } else if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__CWAIT_N) 
                                      | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__LL))))) {
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 7U;
                        if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
                            }
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
                }
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 8U;
                    if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH) {
                    if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__CWAIT_N) 
                               | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__LL))))) {
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 5U;
                        if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT = 1U;
                    }
                } else {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 6U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
                            = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT) 
                                     - (IData)(1U)));
                    } else if (vlSelfRef.tb_sndram__DOT__CWAIT_N) {
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 2U;
                        if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
                            }
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
                        }
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                }
                if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                } else if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                        = (0x0000000fU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                        = (0x0000000fU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                }
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 1U;
                if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 1U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                    if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                               | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                    }
                }
            } else {
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__area 
                    = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                             >> 0x19U));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__Vstatic__res 
                    = (3U & ((2U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__area))
                              ? ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__area))
                                  ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR) 
                                     >> 6U) : ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR) 
                                               >> 4U))
                              : ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__area))
                                  ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR) 
                                     >> 2U) : (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__WCR))));
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__Vfuncout 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__Vstatic__res;
                tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hacc92524__0 
                    = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__29__Vfuncout;
                if ((2U & (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hacc92524__0))) {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 3U;
                    if ((1U & (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hacc92524__0))) {
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__area 
                            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                     >> 0x19U));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__Vstatic__res 
                            = (3U & ((2U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__area))
                                      ? ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__area))
                                          ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1) 
                                             >> 8U)
                                          : ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1) 
                                             >> 8U))
                                      : ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__area))
                                          ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1) 
                                             >> 6U)
                                          : ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__BCR1) 
                                             >> 4U))));
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__Vfuncout 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__Vstatic__res;
                        tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hecfdad81__0 
                            = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__30__Vfuncout;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
                            = (7U & (0x0b1aU >> ((IData)(3U) 
                                                 * (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hecfdad81__0))));
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 1U;
                    }
                } else if ((1U & (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_hacc92524__0))) {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 3U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
                } else {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 2U;
                    if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
                        }
                        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
                    }
                }
            }
        } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH = 0U;
        }
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v0 = 1U;
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                              >> 5U)))) {
                    if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 5U)))) {
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v3 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 4U)))) {
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v4 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 3U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v5 
                                                = (1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                      >> 8U));
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v5 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 2U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v6 
                                                = (1U 
                                                   & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v6 = 1U;
                                        }
                                    }
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[2U])))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                     >> 5U)))) {
                                                vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v0 
                                                    = 
                                                    (1U 
                                                     & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                        >> 0x18U));
                                                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v0 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                     >> 4U)))) {
                                                vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v1 
                                                    = 
                                                    (1U 
                                                     & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                        >> 0x10U));
                                                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v1 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                     >> 3U)))) {
                                                vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v2 
                                                    = 
                                                    (1U 
                                                     & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                        >> 8U));
                                                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v2 = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                     >> 2U)))) {
                                                vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v3 
                                                    = 
                                                    (7U 
                                                     & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v3 = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[2U])))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 5U)))) {
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v0 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 4U)))) {
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v1 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 3U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v2 
                                                = (1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                      >> 8U));
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v2 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 2U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v3 
                                                = (7U 
                                                   & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v3 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 5U)))) {
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v7 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 4U)))) {
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v8 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 3U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v9 
                                            = (1U & 
                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                >> 8U));
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v9 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 2U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v10 
                                            = (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v10 = 1U;
                                    }
                                }
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[1U])))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 5U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v4 
                                                = (1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                      >> 0x18U));
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v4 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 4U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v5 
                                                = (1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                      >> 0x10U));
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v5 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 3U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v6 
                                                = (1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                      >> 8U));
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v6 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                    >> 2U)))) {
                                            vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v7 
                                                = (7U 
                                                   & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v7 = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[1U])))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 5U)))) {
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v4 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 4U)))) {
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v5 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 3U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v6 
                                            = (1U & 
                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                >> 8U));
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v6 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 2U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v7 
                                            = (7U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v7 = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 5U)))) {
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v11 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 4U)))) {
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v12 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 3U)))) {
                                    vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v13 
                                        = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                 >> 8U));
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v13 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 2U)))) {
                                    vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v14 
                                        = (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v14 = 1U;
                                }
                            }
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[0U])))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 5U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v8 
                                            = (1U & 
                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                >> 0x18U));
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v8 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 4U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v9 
                                            = (1U & 
                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                >> 0x10U));
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v9 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 3U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v10 
                                            = (1U & 
                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                >> 8U));
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v10 = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                  >> 2U)))) {
                                        vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v11 
                                            = (7U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v11 = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[0U])))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 5U)))) {
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v8 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 4U)))) {
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v9 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 3U)))) {
                                    vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v10 
                                        = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                                 >> 8U));
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v10 = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 2U)))) {
                                    vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v11 
                                        = (7U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
                                    vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v11 = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[0U])) 
                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[0U]) 
                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[0U])) {
                vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0 
                    = ((1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                              >> 9U)) || ((1U & (~ 
                                                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[0U] 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[0U])) 
                                              && (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ))));
                vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0 = 1U;
            } else if ((1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[0U] 
                              | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[0U]))))) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v1 = 1U;
            }
            if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[1U])) 
                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[1U]) 
                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[1U])) {
                vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2 
                    = ((1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                              >> 9U)) || ((1U & (~ 
                                                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[1U] 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[1U])) 
                                              && (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ))));
                vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2 = 1U;
            } else if ((1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[1U] 
                              | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[1U]))))) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v3 = 1U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB = 0U;
            } else {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_CE) {
                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__EQA) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA = 1U;
                    }
                    if ((0x00010000U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF = 1U;
                    }
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC) 
                         == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB = 1U;
                    }
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_WRITE) {
                    if ((((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                              >> 0x13U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET = 0U;
                    }
                    if ((((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                              >> 0x11U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET = 0U;
                    }
                    if ((((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                              >> 0x12U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET = 0U;
                    }
                }
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
                if ((1U & (~ (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))))) {
                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR) {
                        if ((8U != (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                   >> 2U)))) {
                            if ((0x0aU != (0x0000000fU 
                                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                              >> 2U)))) {
                                if ((0x0cU == (0x0000000fU 
                                               & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                  >> 2U)))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                                        = ((1U & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR) 
                                           | (((4U 
                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                   >> 1U)) 
                                               | (3U 
                                                  & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                                                      & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA) 
                                                     >> 1U))) 
                                              << 1U));
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                                        = ((0xfffffffeU 
                                            & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR) 
                                           | (1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA));
                                }
                            }
                        }
                    }
                }
                if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL) 
                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))) {
                    if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA))) {
                        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0 
                            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                     >> 0x10U));
                        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA))) {
                        vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1 
                            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                     >> 8U));
                        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1 = 1U;
                    }
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB 
                        = ((IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB) 
                           | (0x00ffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX))));
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD 
                            = (1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD));
                    }
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                    = (1U | vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR);
                vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v2 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD = 0U;
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__WDT_OVF) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__MSBY_SBY = 0U;
            } else if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD))) 
                        & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR) 
                           >> 6U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__MSBY_SBY = 1U;
            }
            if (((((0xffffffe0U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
                   & (0xa55aU == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                  >> 0x10U))) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))) {
                if ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT 
                                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                    }
                }
            }
            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT)));
            if (((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))
                  ? ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))
                      ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))
                          ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4096_CE)
                          : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2048_CE))
                      : ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))
                          ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK1024_CE)
                          : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK256_CE)))
                  : ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))
                      ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))
                          ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK64_CE)
                          : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK16_CE))
                      : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4_CE) 
                         & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR) 
                            >> 3U))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW;
                if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW) 
                     == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ 
                        = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR) 
                                 >> 3U));
                }
            }
            if (((9U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (1U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (2U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (4U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (8U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000010U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000020U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000040U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000080U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000100U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[2U]) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000200U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[1U]) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000400U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[0U]) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00000800U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00001000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_PEND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0x00002000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
            }
            if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                         >> 3U) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW))) 
                       | (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD 
                             >> 8U))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW = 1U;
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT2) 
                 & (0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI)) 
                           & vlSelfRef.tb_sndram__DOT__SCU__DOT__IST))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffffeU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 1U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 1U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffffdU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 2U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 2U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffffbU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 3U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 3U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffff7U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 4U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 4U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xffffffefU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 5U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 5U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xffffffdfU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 6U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 6U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xffffffbfU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                            & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                  >> 7U))) & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                              >> 7U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xffffff7fU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                             >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                          >> 8U))) 
                           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                              >> 8U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffeffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                             >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                          >> 9U))) 
                           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                              >> 9U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffdffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                             >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                          >> 0x0aU))) 
                           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                              >> 0x0000000aU)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffffbffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                             >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                          >> 0x0bU))) 
                           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                              >> 0x0000000bU)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xfffff7ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                             >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                          >> 0x0cU))) 
                           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                              >> 0x0000000cU)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xffffefffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
                if ((1U & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN) 
                             >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                          >> 0x0dU))) 
                           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                              >> 0x0000000dU)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                        = (0xffffdfffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                }
            }
            if ((1U & ((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                        & (~ vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS)) 
                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffffeU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 1U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 1U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffffdU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 2U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 2U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffffbU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 3U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 3U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffff7U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW = 0U;
            } else if (((((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                           >> 4U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                        >> 4U))) & 
                         (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xffffffefU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 5U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 5U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xffffffdfU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 6U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 6U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xffffffbfU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 7U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 7U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xffffff7fU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 8U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 8U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffeffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 9U) & (~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                             >> 9U))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffdffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 0x0000000aU) & (~ 
                                                   (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                                    >> 0x0000000aU))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffffbffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 0x0000000bU) & (~ 
                                                   (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                                    >> 0x0000000bU))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xfffff7ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 0x0000000cU) & (~ 
                                                   (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                                    >> 0x0000000cU))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xffffefffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            } else if ((1U & (((vlSelfRef.tb_sndram__DOT__SCU__DOT__IST 
                                >> 0x0000000dU) & (~ 
                                                   (vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS 
                                                    >> 0x0000000dU))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_INT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST 
                    = (0xffffdfffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST);
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 1U;
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_RISE) {
                if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                    if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_INT) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_INT = 0U;
                                }
                            } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_INT) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_INT = 0U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_INT) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_INT = 0U;
                            }
                        } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_INT = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_INT = 0U;
                            }
                        } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_INT) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_INT = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_INT) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_INT = 0U;
                        }
                    } else {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_INT) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_INT = 0U;
                        }
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_INT) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_INT = 0U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL)))) {
                            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__ = 0U;
                            }
                            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__ = 0U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__ = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL))) {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_INT) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_INT = 0U;
                        }
                    } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_INT) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_INT = 0U;
                    }
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)))) {
                if (((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                     | (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR = 1U;
                }
            }
            if ((0x26U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__INT_ACP) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE 
                    = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL) 
                             >> 1U));
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_EV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z;
            }
        } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_READ) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET = 1U;
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET = 1U;
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET = 1U;
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)) 
                  & (0x3fU != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY = 1U;
            } else if (((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR)));
            if ((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__INIT = 0U;
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__REG_SEL) 
                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__OLDB) 
                       | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0) 
                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL)) 
                          << 0x0000000fU));
            }
            if ((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_WAIT)) 
                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE))) 
                 & (0U == (3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_WAIT = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT = 6U;
            } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_WAIT) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT 
                    = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT) 
                             - (IData)(1U)));
                if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_WAIT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_DO 
                        = ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000023U)))
                            ? ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000022U)))
                                ? ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000021U)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? 0x40U : 0x41U)
                                    : ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? 0x42U : 0x43U))
                                : ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000021U)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? 0x44U : 0x45U)
                                    : ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? 0x46U : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_INT)
                                                    ? 0x48U
                                                    : 0x47U))))
                            : ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000022U)))
                                ? ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000021U)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                            ? 0x50U
                                            : ((2U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                ? 0x51U
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                    ? 0x52U
                                                    : 0x53U)))
                                        : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__)
                                            ? 0x4aU
                                            : 0x49U))
                                    : ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? 0x4bU : (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                    ? 0x54U
                                                    : 
                                                   ((0x00000020U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                     ? 0x54U
                                                     : 
                                                    ((0x00000040U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                      ? 0x56U
                                                      : 0x57U)))))
                                : ((1U & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000021U)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000020U)))
                                        ? 0x4cU : 0x4dU)
                                    : (((0x00000100U 
                                         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                         ? 0x58U : 
                                        ((0x00000200U 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                          ? 0x59U : 
                                         ((0x00000400U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                           ? 0x5aU : 
                                          ((0x00000800U 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                            ? 0x5bU
                                            : ((0x00001000U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                ? 0x5cU
                                                : (
                                                   (0x00002000U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                    ? 0x5dU
                                                    : 
                                                   ((0x00004000U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT))
                                                     ? 0x5eU
                                                     : 0x5fU))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                                >> 0x00000020U)))))))));
                }
            } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE) 
                        & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                           >> 1U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 = 1U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__PW) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW = 0U;
                if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 1U;
                }
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
                if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR) 
                     & (0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))) {
                    if ((0U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW = 1U;
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 1U;
                        }
                    } else if ((2U != (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                             >> 2U)))) {
                        if ((3U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 2U)))) {
                            if ((0U != (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)))) {
                                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW = 1U;
                                } else {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV = 1U;
                                }
                            }
                        } else if ((6U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                 >> 2U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 = 1U;
                            }
                        } else if ((7U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                 >> 2U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 = 1U;
                            }
                        }
                    }
                    if ((0U != (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                        if ((2U != (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 2U)))) {
                            if ((3U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                              >> 2U)))) {
                                if ((0U != (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 
                                        = (0x000000ffU 
                                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV = 0U;
                if ((((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                      | (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) 
                     | (1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 0U;
                }
                if (((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 = 0U;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 = 1U;
            }
            if ((0x26U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) {
                if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR) 
                           | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 0U;
                }
            }
            if ((((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                      | (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                     | (5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                    | (8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                   | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                  | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                 | (0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)))) {
                if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))) 
                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY))) 
                     & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                         >> 1U) | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 = 0U;
                }
                if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))) 
                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY))) 
                     & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                         >> 1U) | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 1U;
                }
                if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ) 
                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))) 
                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY = 1U;
                }
                if ((((((((((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                            | (5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                           | (8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                          | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                         | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                        | (0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY)) 
                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_WR_N))) 
                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS)))) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 1U;
                    }
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 1U;
                    }
                }
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__BCR1 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__Vfuncout 
                    = (((IData)((1U == (3U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__BCR1)))) 
                        << 3U) | (4U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__BCR1)));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA 
                    = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMAreaSel__31__Vfuncout;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__BCR1 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__area 
                    = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                             >> 0x19U));
                vlSelfRef.__VcaseTableOut1 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__BCR1)))));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut1));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 1U));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 2U));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__area))
                                           ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__Vfuncout 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM 
                    = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__32__Vfuncout;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__BCR1 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__area 
                    = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                             >> 0x00000019U));
                vlSelfRef.__VcaseTableOut1 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__BCR1)))));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut1));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 1U));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 2U));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__area))
                                           ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__Vfuncout 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM 
                    = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__33__Vfuncout;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__BCR1 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__area 
                    = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                             >> 0x19U));
                vlSelfRef.__VcaseTableOut1 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__BCR1)))));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut1));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 1U));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 2U));
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__area))
                                           ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__Vfuncout 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM 
                    = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__34__Vfuncout;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE = 0U;
                if (((((((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                         | (5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                        | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY)) 
                      & (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) 
                     | ((((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                          | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                        & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST))))) {
                    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
                        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM)
                            ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)
                                ? 4U : 7U) : 1U);
                    if ((1U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                        if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = ((0x07fffff0U & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA) 
                                   | (0x0000000fU & 
                                      ((IData)(2U) 
                                       + vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)));
                            if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
                                    = (3U & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN))));
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                    = (0x0000ffffU 
                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH);
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                    = (0x0000000fU 
                                       & (~ (3U & (
                                                   (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA)))));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = ((0x07fffff0U & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA) 
                                   | (0x0000000fU & 
                                      ((IData)(4U) 
                                       + vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                        }
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N 
                        = (0U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                        >> 0x19U)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N 
                        = (1U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                        >> 0x19U)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N 
                        = (2U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                        >> 0x19U)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N 
                        = (3U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                        >> 0x19U)));
                } else if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_SEL) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS;
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE = 0U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE = 0U;
                    if (((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ))) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS))) 
                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)) 
                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                        } else if ((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                       | (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                      | ((8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)))) {
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 9U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = (0x06000000U & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N 
                                = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA) 
                                            >> 2U)));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT = 3U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N 
                                = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA) 
                                            >> 3U)));
                        }
                    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                                & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        if ((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                | (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                               | ((8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                  & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                              | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                             | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)))) {
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0bU;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBA;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0U;
                        }
                    } else if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                                 & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP)))) 
                                | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)) 
                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))))) {
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__IA;
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__35__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_0__SDRAMBank 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                            = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q);
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__36__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_1__SDRAMBank 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res;
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM 
                            = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_0__SDRAMBank) 
                               == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_1__SDRAMBank));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP 
                            = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM));
                        vlSelfRef.__VdlyMask__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 1U;
                        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT) 
                             & (((((((3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                            >> 0x19U)) 
                                     != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                                               >> 0x00000019U))) 
                                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE))) 
                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM))) 
                                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE) 
                                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)))) 
                                | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE) 
                                    & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)))))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                        } else if (((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                        | (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                       | (((5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))) 
                                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)))) 
                                      | ((8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)))) {
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__dramsz 
                                = (2U | (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR) 
                                               >> 6U)));
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR2 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK;
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR1 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE)))) {
                                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 1U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE 
                                        = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST)));
                                }
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 1U;
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                                = (3U & ((IData)(1U) 
                                         + (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR) 
                                                  >> 0x0000000eU))));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_DO;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ;
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__area 
                                = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                                         >> 0x00000019U));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM;
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res 
                                = (3U & ((2U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__area))
                                          ? ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__area))
                                              ? ((1U 
                                                  & VL_REDXOR_32(
                                                                 (3U 
                                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR1))))
                                                  ? (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR2) 
                                                  >> 6U))
                                              : ((4U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR1))
                                                  ? (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR2) 
                                                  >> 4U)))
                                          : ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__area))
                                              ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__BCR2) 
                                                 >> 2U)
                                              : 2U)));
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM) 
                                 & (0x000cU == (0x000cU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR))))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N 
                                    = (0U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                                               >> 0x00000019U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N 
                                    = (1U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                                               >> 0x00000019U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N 
                                    = (2U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                                               >> 0x00000019U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N 
                                    = (3U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                                               >> 0x00000019U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N 
                                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N 
                                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE;
                            }
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__Vfuncout 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res;
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
                                = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)
                                    ? 4U : 1U);
                            tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_h88ace628__0 
                                = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__37__Vfuncout;
                            if ((1U != (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_h88ace628__0))) {
                                if ((2U == (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_h88ace628__0))) {
                                    if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q)) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                            = (0x0000ffffU 
                                               & vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_DO);
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE))) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_BA)))));
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    } else {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                            = (vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_DO 
                                               >> 0x10U);
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE))) 
                                                      & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_BA) 
                                                         >> 2U)))));
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
                                            = (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_BA));
                                    }
                                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
                                    }
                                } else if ((3U == (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_h88ace628__0))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_DO;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                        = (0x0000000fU 
                                           & (~ ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE))) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_BA))));
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
                                    }
                                }
                            }
                        }
                    } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) {
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__IA;
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__38__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_2__SDRAMBank 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                            = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR);
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                                  ? 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__39__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_3__SDRAMBank 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res;
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM 
                            = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_2__SDRAMBank) 
                               == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT____VlemCall_3__SDRAMBank));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP 
                            = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM));
                        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT) 
                             & ((((((((3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__IA 
                                             >> 0x19U)) 
                                      != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                >> 0x19U))) 
                                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM))) 
                                  | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)))) 
                                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                     & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)))) 
                                | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE))))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
                        } else if (((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                        | (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                       | (((5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))) 
                                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)))) 
                                      | ((8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
                                = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                    & (3U > (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT)))
                                    ? (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT)))
                                    : 0U);
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__dramsz 
                                = (2U | (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR) 
                                               >> 6U)));
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR2 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK;
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR1 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA 
                                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR);
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA;
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__area 
                                = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                         >> 0x19U));
                            vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res 
                                = (3U & ((2U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__area))
                                          ? ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__area))
                                              ? ((1U 
                                                  & VL_REDXOR_32(
                                                                 (3U 
                                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR1))))
                                                  ? (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR2) 
                                                  >> 6U))
                                              : ((4U 
                                                  & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR1))
                                                  ? (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR2) 
                                                  >> 4U)))
                                          : ((1U & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__area))
                                              ? ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__BCR2) 
                                                 >> 2U)
                                              : 2U)));
                            __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__Vfuncout 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res;
                            tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_he734af6f__0 
                                = __Vfunc_tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__40__Vfuncout;
                            if ((1U != (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_he734af6f__0))) {
                                if ((2U == (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_he734af6f__0))) {
                                    if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                            = (0x0000ffffU 
                                               & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)))));
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    } else {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                            = (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                               >> 0x10U);
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                                                      & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA) 
                                                         >> 2U)))));
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
                                            = (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA));
                                    }
                                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
                                    }
                                } else if ((3U == (IData)(tb_sndram__DOT__MSH__DOT__bsc__DOT____VCase_he734af6f__0))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO 
                                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N 
                                        = (0x0000000fU 
                                           & (~ ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA))));
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
                                    }
                                }
                            }
                            if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST) 
                                  | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)))) {
                                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 1U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE 
                                        = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST)));
                                }
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 1U;
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                                = (3U & ((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH) 
                                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)) 
                                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)))
                                           ? 0U : 1U) 
                                         + (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR) 
                                                  >> 0x0000000eU))));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE;
                            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM) 
                                 & (0x000cU == (0x000cU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR))))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N 
                                    = (0U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N 
                                    = (1U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N 
                                    = (2U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N 
                                    = (3U != (3U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N 
                                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N 
                                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE;
                            }
                            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
                                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ;
                                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 4U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ = 0U;
                                vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE = 0U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE = 0U;
                }
            } else if ((((((((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                             | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                            | (4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                           | (6U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                          | (9U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_SEL)) 
                        & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS)))) {
                if (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY)) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY = 1U;
                }
                if (((((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE)) 
                       | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                      | (4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_WR_N)))) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 1U;
                    }
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 1U;
                    }
                }
                if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 = 1U;
                }
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL) 
                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO 
                    = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[0U] 
                        << 0x00000010U) | (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[1U] 
                                           << 8U));
            } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_RD) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO 
                    = ((0x00000020U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                        ? ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                ? 0U : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                         ? 0U : (0x0000000fU 
                                                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR)))
                            : ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                    ? 0U : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1))
                                : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                    ? 0U : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0))))
                        : ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                    ? (0x0000ffffU 
                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U])
                                    : vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[1U])
                                : vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q)
                            : ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                    ? (0x0000ffffU 
                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U])
                                    : vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[0U])
                                : vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q)));
            }
            if ((((0xffffffe0U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO 
                    = (0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO);
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO 
                    = ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO) 
                       | ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                           ? ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                               ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                   ? 0U : (0x00ffU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR)))
                               : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                   ? (0x00ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT))
                                   : (0x00f8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR))))
                           : ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                               ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                   ? (0xfefcU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR))
                                   : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR))
                               : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                   ? (0x00fcU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2))
                                   : (0x00001ff7U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1))))));
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH) {
                if ((1U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                        if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)) {
                            if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.tb_sndram__DOT__MSH__DOT__IDI));
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF) 
                                   | (vlSelfRef.tb_sndram__DOT__MSH__DOT__IDI 
                                      << 0x00000010U));
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__IDI;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ)) 
                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_REQ) 
                      & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)) 
                         & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_WR)) 
                            & (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR)) 
                                & (0U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                          >> 0x0000001dU))) 
                               | (((0U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                           >> 0x0000001dU)) 
                                   & ((~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT))) 
                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR))) 
                                  | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_TAS)) 
                                     & (1U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                               >> 0x0000001dU))))))))) 
                  & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE))) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 1U;
            }
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT;
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT_CNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_RGEN = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP = 1U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v15 = 1U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v12 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v4 = 1U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v4 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
            = (1U | vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR);
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__MSBY_SBY = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v4 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__IR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__PC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__BC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__IR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__PC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__IR = 0U;
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0xa0240000U;
        __Vtemp_2[2U] = 4U;
        VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                    .__PVT__MA.__PVT__DI, __Vtemp_2);
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__BC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__RES = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__ADDR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__WD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_WGEN = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v2 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MDEC_CT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4 = 0x007fU;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR5 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__INIT = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL = 0x01234567U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH = 0x89abcdefU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MB = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__SCR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_WAIT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV = 0x0fU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0 = 0x0fU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__MEM_WAIT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VBR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__GBR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0x0fU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
    }
    __Vtableidx10 = (((((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                          & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)) 
                             & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)))) 
                         << 3U) | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS) 
                                   << 2U)) | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBREQ) 
                                               << 1U) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)))) 
                      << 3U) | ((4U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                                       << 2U)) | (3U 
                                                  & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__RST_N))))));
    if ((0U != (1U & Vtb_sndram__ConstPool__TABLE_h4d295306_0
                [__Vtableidx10]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBREQ 
            = Vtb_sndram__ConstPool__TABLE_h1fac04a8_0
            [__Vtableidx10];
    }
    if ((0U != (2U & Vtb_sndram__ConstPool__TABLE_h4d295306_0
                [__Vtableidx10]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBRLS 
            = Vtb_sndram__ConstPool__TABLE_h2c26a070_0
            [__Vtableidx10];
    }
    __Vtableidx4 = ((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__INT_ACP) 
                        << 3U) | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ) 
                                  << 2U)) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD) 
                                              << 1U) 
                                             | (1U 
                                                & (((((((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR)) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B)) 
                                                     & (0U 
                                                        == 
                                                        (0x0000000eU 
                                                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB) 
                                                       >> 1U))
                                                    ? 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                                    >> 8U)
                                                    : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE))))) 
                     << 3U) | (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                << 2U) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) 
                                           << 1U) | (IData)(vlSelfRef.tb_sndram__DOT__RST_N))));
    if ((0U != (1U & Vtb_sndram__ConstPool__TABLE_he5a5c759_0
                [__Vtableidx4]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD 
            = Vtb_sndram__ConstPool__TABLE_hb05ff5bc_0
            [__Vtableidx4];
    }
    if ((0U != (2U & Vtb_sndram__ConstPool__TABLE_he5a5c759_0
                [__Vtableidx4]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ 
            = Vtb_sndram__ConstPool__TABLE_h20450440_0
            [__Vtableidx4];
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CRD_N_OLD 
        = ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N))) 
           || (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                     >> 1U)));
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1 
        = ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N))) 
           || (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0));
    __Vtableidx6 = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) 
                     << 1U) | (IData)(vlSelfRef.tb_sndram__DOT__RST_N));
    if ((0U != (0x10U & Vtb_sndram__ConstPool__TABLE_hd96158b0_0
                [__Vtableidx6]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TXI 
            = Vtb_sndram__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx6];
    }
    if ((0U != (0x20U & Vtb_sndram__ConstPool__TABLE_hd96158b0_0
                [__Vtableidx6]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TEI 
            = Vtb_sndram__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx6];
    }
    __Vtableidx7 = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) 
                     << 1U) | (IData)(vlSelfRef.tb_sndram__DOT__RST_N));
    if ((0U != (0x0010U & Vtb_sndram__ConstPool__TABLE_h9b2cab03_0
                [__Vtableidx7]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__RXI 
            = Vtb_sndram__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx7];
    }
    if ((0U != (0x0020U & Vtb_sndram__ConstPool__TABLE_h9b2cab03_0
                [__Vtableidx7]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__ERI 
            = Vtb_sndram__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx7];
    }
}

void Vtb_sndram___024root___act_sequent__TOP__13(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__13\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DC 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DC;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DR 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_BE 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DW 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DW;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM_D 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM_D;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR0 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR0;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR1 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR1;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__AREF 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__AREF;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RFS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM_D;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_D 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_D;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F3 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F3;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F4 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F4;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F5 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F5;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4096_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4096_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2048_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2048_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK1024_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK1024_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK256_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK256_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK64_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK64_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK16_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK16_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4_CE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVECF_LVL 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT2 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT2;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IMS 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_PEND 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_PEND;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR6;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR5;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_CA 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_CA;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_SGC 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_SGC;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_EG 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_EG;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR3 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR3;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR2 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR2;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__TMR_CE;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR19;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR17;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR16;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR15;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR14;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR13;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR11;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR0;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG 
        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL;
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__EXT_INT 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC;
    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD 
        = vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD 
        = vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SND 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__H 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__STATE 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR;
    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBA 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBA;
}

void Vtb_sndram___024root___act_sequent__TOP__17(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__17\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ tb_sndram__DOT__sdram__DOT__c_cmd;
    tb_sndram__DOT__sdram__DOT__c_cmd = 0;
    SData/*12:0*/ tb_sndram__DOT__sdram__DOT__c_a;
    tb_sndram__DOT__sdram__DOT__c_a = 0;
    CData/*1:0*/ tb_sndram__DOT__sdram__DOT__c_ba;
    tb_sndram__DOT__sdram__DOT__c_ba = 0;
    CData/*1:0*/ tb_sndram__DOT__sdram__DOT__c_dqm;
    tb_sndram__DOT__sdram__DOT__c_dqm = 0;
    SData/*15:0*/ tb_sndram__DOT__sdram__DOT__c_dq;
    tb_sndram__DOT__sdram__DOT__c_dq = 0;
    CData/*0:0*/ tb_sndram__DOT__sdram__DOT__c_oe;
    tb_sndram__DOT__sdram__DOT__c_oe = 0;
    CData/*0:0*/ tb_sndram__DOT__sdram__DOT__c_tv;
    tb_sndram__DOT__sdram__DOT__c_tv = 0;
    CData/*2:0*/ tb_sndram__DOT__sdram__DOT__c_tk;
    tb_sndram__DOT__sdram__DOT__c_tk = 0;
    CData/*0:0*/ tb_sndram__DOT__sdram__DOT__c_ti;
    tb_sndram__DOT__sdram__DOT__c_ti = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__44__s;
    __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__44__s = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__45__s;
    __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__45__s = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__46__s;
    __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__46__s = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__47__s;
    __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__47__s = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__r = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__r = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__50__s;
    __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__50__s = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__r = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__r = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__r = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__r = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__c;
    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__c = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__r = 0;
    SData/*12:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__Vfuncout;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__r;
    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__r = 0;
    CData/*7:0*/ __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__65__s;
    __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__65__s = 0;
    // Body
    vlSelfRef.__Vdly__tb_sndram__DOT__ram_q_o = vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q;
    vlSelfRef.__Vdly__tb_sndram__DOT__old_wr = (0U 
                                                != 
                                                ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE) 
                                                 & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS)))));
    vlSelfRef.__Vdly__tb_sndram__DOT__old_rd = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_RD) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS));
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sync_old 
        = vlSelfRef.tb_sndram__DOT__dot_ce_r;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd = 7U;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_a = 0U;
    if (((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_rd) 
         & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__old_rd)))) {
        if (((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_rd_p) 
             | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p))) {
            if ((0xffU != (IData)(vlSelfRef.tb_sndram__DOT__dbg_scsp_drop))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scsp_drop 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dbg_scsp_drop)));
            }
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_addr 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_A;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_t0 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p = 0U;
    }
    if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_wr)) 
         & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__old_wr)))) {
        if (((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_rd_p) 
             | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p))) {
            if ((0xffU != (IData)(vlSelfRef.tb_sndram__DOT__dbg_scsp_drop))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scsp_drop 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dbg_scsp_drop)));
            }
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_addr 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_A;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_din 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_D;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_be 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_wr;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_t0 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p = 0U;
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cyc 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc)));
    if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc))) {
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v0 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[0U];
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_row__v0 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v1 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U];
        __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__44__s 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[0U];
        vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_4__scr_next 
            = (0x0000003fU & ((IData)(1U) + (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__44__s)));
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v0 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_4__scr_next;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v0 = 1U;
        __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__45__s 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U];
        vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_5__scr_next 
            = (0x000000ffU & ((IData)(1U) + (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__45__s)));
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v1 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_5__scr_next;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v1 = 1U;
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v2 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[1U];
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v3 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U];
        __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__46__s 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[1U];
        vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_8__scr_next 
            = (0x0000003fU & ((IData)(1U) + (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__46__s)));
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v2 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_8__scr_next;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v2 = 1U;
        __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__47__s 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U];
        vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_9__scr_next 
            = (0x000000ffU & ((IData)(1U) + (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__47__s)));
        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v3 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_9__scr_next;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v3 = 1U;
    }
    tb_sndram__DOT__sdram__DOT__c_cmd = 7U;
    tb_sndram__DOT__sdram__DOT__c_a = 0U;
    tb_sndram__DOT__sdram__DOT__c_ba = 0U;
    tb_sndram__DOT__sdram__DOT__c_dqm = 0U;
    tb_sndram__DOT__sdram__DOT__c_dq = 0U;
    tb_sndram__DOT__sdram__DOT__c_oe = 0U;
    tb_sndram__DOT__sdram__DOT__c_tv = 0U;
    tb_sndram__DOT__sdram__DOT__c_tk = 7U;
    tb_sndram__DOT__sdram__DOT__c_ti = 0U;
    if (vlSelfRef.tb_sndram__DOT__init_done) {
        if ((8U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
            if ((4U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                if ((2U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                    if ((1U & (~ ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc))))) {
                        tb_sndram__DOT__sdram__DOT__c_cmd = 3U;
                        tb_sndram__DOT__sdram__DOT__c_ba = 2U;
                        if ((((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_rd_p) 
                              | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p)) 
                             & (~ (vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr 
                                   >> 0x11U)))) {
                            __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__r 
                                = (0x00000080U | (0x0000007fU 
                                                  & (vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr 
                                                     >> 0x0aU)));
                            __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__Vfuncout 
                                = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__r;
                            tb_sndram__DOT__sdram__DOT__c_a 
                                = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__48__Vfuncout;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v0 = 1U;
                            vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__s_wr__v0 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p;
                            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p = 0U;
                        } else {
                            __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__r 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U];
                            __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__Vfuncout 
                                = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__r;
                            tb_sndram__DOT__sdram__DOT__c_a 
                                = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__49__Vfuncout;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v1 = 1U;
                            __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__50__s 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U];
                            vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_10__scr_next 
                                = (0x000000ffU & ((IData)(1U) 
                                                  + (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__50__s)));
                            vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v4 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_10__scr_next;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v4 = 1U;
                        }
                    }
                }
            } else if ((2U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                if ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                    if (((1U >= vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[3U]) 
                         & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act) 
                            >> 3U))) {
                        __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__c 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[3U];
                        tb_sndram__DOT__sdram__DOT__c_cmd = 5U;
                        tb_sndram__DOT__sdram__DOT__c_ba = 3U;
                        __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__Vfuncout 
                            = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__c));
                        tb_sndram__DOT__sdram__DOT__c_tv = 1U;
                        tb_sndram__DOT__sdram__DOT__c_tk 
                            = ((1U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[3U])
                                ? 3U : 7U);
                        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                            = (7U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                        tb_sndram__DOT__sdram__DOT__c_a 
                            = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__51__Vfuncout;
                    } else if ((((2U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[1U]) 
                                 & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act) 
                                    >> 1U)) | ((2U 
                                                == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[3U]) 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act) 
                                                  >> 3U)))) {
                        __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__c 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[3U];
                        tb_sndram__DOT__sdram__DOT__c_cmd = 4U;
                        tb_sndram__DOT__sdram__DOT__c_ba 
                            = (vlSelfRef.tb_sndram__DOT__sdram__DOT__v_wsel[1U]
                                ? 3U : 1U);
                        __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__Vfuncout 
                            = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__c));
                        tb_sndram__DOT__sdram__DOT__c_dq 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_wd[1U];
                        tb_sndram__DOT__sdram__DOT__c_oe = 1U;
                        tb_sndram__DOT__sdram__DOT__c_dqm 
                            = (3U & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_wbe[1U])));
                        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                            = (0x0dU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                        tb_sndram__DOT__sdram__DOT__c_a 
                            = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__52__Vfuncout;
                        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                            = (7U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                    }
                }
            } else if ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                if (((1U >= vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[2U]) 
                     & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act) 
                        >> 2U))) {
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__c 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[2U];
                    tb_sndram__DOT__sdram__DOT__c_cmd = 5U;
                    tb_sndram__DOT__sdram__DOT__c_ba = 2U;
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__Vfuncout 
                        = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__c));
                    tb_sndram__DOT__sdram__DOT__c_tv = 1U;
                    tb_sndram__DOT__sdram__DOT__c_tk 
                        = ((1U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[2U])
                            ? 2U : 7U);
                    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                        = (0x0bU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                    tb_sndram__DOT__sdram__DOT__c_a 
                        = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__53__Vfuncout;
                } else if ((((2U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[0U]) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act)) 
                            | ((2U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[2U]) 
                               & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act) 
                                  >> 2U)))) {
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__c 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[2U];
                    tb_sndram__DOT__sdram__DOT__c_cmd = 4U;
                    tb_sndram__DOT__sdram__DOT__c_ba 
                        = (vlSelfRef.tb_sndram__DOT__sdram__DOT__v_wsel[0U]
                            ? 2U : 0U);
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__Vfuncout 
                        = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__c));
                    tb_sndram__DOT__sdram__DOT__c_dq 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_wd[0U];
                    tb_sndram__DOT__sdram__DOT__c_oe = 1U;
                    tb_sndram__DOT__sdram__DOT__c_dqm 
                        = (3U & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_wbe[0U])));
                    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                        = (0x0eU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                    tb_sndram__DOT__sdram__DOT__c_a 
                        = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__54__Vfuncout;
                    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                        = (0x0bU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                }
            } else if ((3U != vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[3U])) {
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__r 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[3U];
                tb_sndram__DOT__sdram__DOT__c_cmd = 3U;
                tb_sndram__DOT__sdram__DOT__c_ba = 3U;
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__Vfuncout 
                    = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__r;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                    = (8U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                tb_sndram__DOT__sdram__DOT__c_a = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__55__Vfuncout;
            }
        } else if ((4U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
            if ((2U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                if ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                    if (((1U >= vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[1U]) 
                         & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act) 
                            >> 1U))) {
                        __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__c 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[1U];
                        tb_sndram__DOT__sdram__DOT__c_cmd = 5U;
                        tb_sndram__DOT__sdram__DOT__c_ba = 1U;
                        __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__Vfuncout 
                            = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__c));
                        tb_sndram__DOT__sdram__DOT__c_tv = 1U;
                        tb_sndram__DOT__sdram__DOT__c_tk 
                            = ((1U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[1U])
                                ? 1U : 7U);
                        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                            = (0x0dU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                        tb_sndram__DOT__sdram__DOT__c_a 
                            = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__56__Vfuncout;
                    }
                } else if ((3U != vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[2U])) {
                    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__r 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[2U];
                    tb_sndram__DOT__sdram__DOT__c_cmd = 3U;
                    tb_sndram__DOT__sdram__DOT__c_ba = 2U;
                    __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__Vfuncout 
                        = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__r;
                    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                        = (4U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                    tb_sndram__DOT__sdram__DOT__c_a 
                        = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__57__Vfuncout;
                }
            } else if ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                if (((1U >= vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[0U]) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act))) {
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__c 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[0U];
                    tb_sndram__DOT__sdram__DOT__c_cmd = 5U;
                    tb_sndram__DOT__sdram__DOT__c_ba = 0U;
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__Vfuncout 
                        = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__c));
                    tb_sndram__DOT__sdram__DOT__c_tv = 1U;
                    tb_sndram__DOT__sdram__DOT__c_tk 
                        = ((1U == vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[0U])
                            ? 0U : 7U);
                    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                        = (0x0eU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                    tb_sndram__DOT__sdram__DOT__c_a 
                        = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__58__Vfuncout;
                }
            } else if ((3U != vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[1U])) {
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__r 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[1U];
                tb_sndram__DOT__sdram__DOT__c_cmd = 3U;
                tb_sndram__DOT__sdram__DOT__c_ba = 1U;
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__Vfuncout 
                    = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__r;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                    = (2U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                tb_sndram__DOT__sdram__DOT__c_a = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__59__Vfuncout;
            }
        } else if ((2U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
            if ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
                if (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[1U]) {
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__c 
                        = (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[1U]
                            ? 0U : (0x000003ffU & vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr));
                    tb_sndram__DOT__sdram__DOT__c_ba = 3U;
                    __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__Vfuncout 
                        = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__c));
                    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v2 = 1U;
                    tb_sndram__DOT__sdram__DOT__c_a 
                        = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__60__Vfuncout;
                    if (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_wr[1U]) {
                        tb_sndram__DOT__sdram__DOT__c_cmd = 4U;
                        tb_sndram__DOT__sdram__DOT__c_dq 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_din;
                        tb_sndram__DOT__sdram__DOT__c_oe = 1U;
                        tb_sndram__DOT__sdram__DOT__c_dqm 
                            = (3U & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_be)));
                    } else {
                        tb_sndram__DOT__sdram__DOT__c_cmd = 5U;
                        tb_sndram__DOT__sdram__DOT__c_tv = 1U;
                        if (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[1U]) {
                            tb_sndram__DOT__sdram__DOT__c_tk = 7U;
                        } else {
                            tb_sndram__DOT__sdram__DOT__c_tk = 4U;
                            tb_sndram__DOT__sdram__DOT__c_ti 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_v__v0 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v0 = 1U;
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v0 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                            vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_t0__v0 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_t0;
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_t0__v0 
                                = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__dl_wi 
                                = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi)));
                        }
                    }
                }
            } else if ((3U != vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[0U])) {
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__r 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[0U];
                tb_sndram__DOT__sdram__DOT__c_cmd = 3U;
                tb_sndram__DOT__sdram__DOT__c_ba = 0U;
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__Vfuncout 
                    = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__r;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                    = (1U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act));
                tb_sndram__DOT__sdram__DOT__c_a = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__61__Vfuncout;
            }
        } else if ((1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc)))) {
            if (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[0U]) {
                __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__c 
                    = (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[0U]
                        ? 0U : (0x000003ffU & vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr));
                tb_sndram__DOT__sdram__DOT__c_ba = 2U;
                __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__Vfuncout 
                    = (0x00000400U | (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__c));
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v3 = 1U;
                tb_sndram__DOT__sdram__DOT__c_a = __Vfunc_tb_sndram__DOT__sdram__DOT__col_a__62__Vfuncout;
                if (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_wr[0U]) {
                    tb_sndram__DOT__sdram__DOT__c_cmd = 4U;
                    tb_sndram__DOT__sdram__DOT__c_dq 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_din;
                    tb_sndram__DOT__sdram__DOT__c_oe = 1U;
                    tb_sndram__DOT__sdram__DOT__c_dqm 
                        = (3U & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_be)));
                } else {
                    tb_sndram__DOT__sdram__DOT__c_cmd = 5U;
                    tb_sndram__DOT__sdram__DOT__c_tv = 1U;
                    if (vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[0U]) {
                        tb_sndram__DOT__sdram__DOT__c_tk = 7U;
                    } else {
                        tb_sndram__DOT__sdram__DOT__c_tk = 4U;
                        tb_sndram__DOT__sdram__DOT__c_ti 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                        vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_v__v1 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v1 = 1U;
                        vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v1 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                        vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_t0__v1 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_t0;
                        vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_t0__v1 
                            = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
                        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__dl_wi 
                            = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi)));
                    }
                }
            }
        } else {
            tb_sndram__DOT__sdram__DOT__c_cmd = 3U;
            tb_sndram__DOT__sdram__DOT__c_ba = 3U;
            if ((((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_rd_p) 
                  | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p)) 
                 & (vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr 
                    >> 0x11U))) {
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__r 
                    = (0x00000080U | (0x0000007fU & 
                                      (vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr 
                                       >> 0x0aU)));
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__Vfuncout 
                    = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__r;
                tb_sndram__DOT__sdram__DOT__c_a = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__63__Vfuncout;
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v4 = 1U;
                vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__s_wr__v2 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p = 0U;
            } else {
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__r 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U];
                __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__Vfuncout 
                    = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__r;
                tb_sndram__DOT__sdram__DOT__c_a = __Vfunc_tb_sndram__DOT__sdram__DOT__row_a__64__Vfuncout;
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v5 = 1U;
                __Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__65__s 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U];
                vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_11__scr_next 
                    = (0x000000ffU & ((IData)(1U) + (IData)(__Vfunc_tb_sndram__DOT__sdram__DOT__scr_next__65__s)));
                vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v5 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT____VlemCall_11__scr_next;
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v5 = 1U;
            }
        }
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_cmd 
        = tb_sndram__DOT__sdram__DOT__c_cmd;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_a 
        = tb_sndram__DOT__sdram__DOT__c_a;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_ba 
        = tb_sndram__DOT__sdram__DOT__c_ba;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_dqm 
        = tb_sndram__DOT__sdram__DOT__c_dqm;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_dq 
        = tb_sndram__DOT__sdram__DOT__c_dq;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_oe 
        = tb_sndram__DOT__sdram__DOT__c_oe;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_tv 
        = tb_sndram__DOT__sdram__DOT__c_tv;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_tk 
        = tb_sndram__DOT__sdram__DOT__c_tk;
    vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_ti 
        = tb_sndram__DOT__sdram__DOT__c_ti;
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v0 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_tv;
    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v0 = 1U;
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v0 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_tk;
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v0 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_ti;
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v1 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[0U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v1 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[0U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v1 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[0U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v2 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[1U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v2 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[1U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v2 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[1U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v3 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[2U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v3 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[2U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v3 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[2U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v4 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[3U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v4 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[3U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v4 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[3U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v5 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[4U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v5 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[4U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v5 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[4U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v6 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[5U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v6 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[5U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v6 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[5U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v7 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[6U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v7 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[6U];
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v7 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[6U];
    if (vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[(7U 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (3U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))]) {
        if ((4U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
             [(7U & ((IData)(3U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
            if ((1U & (~ (vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                          [(7U & ((IData)(3U) + (3U 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))] 
                          >> 1U)))) {
                if ((1U & (~ vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                           [(7U & ((IData)(3U) + (3U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))]))) {
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_d__v0 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap;
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_d__v0 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i
                        [(7U & ((IData)(3U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))];
                    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_d__v0 = 1U;
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v2 
                        = vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i
                        [(7U & ((IData)(3U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))];
                }
            }
        } else if ((2U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                    [(7U & ((IData)(3U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
            if ((1U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                 [(7U & ((IData)(3U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
                vlSelfRef.__Vdly__tb_sndram__DOT__dout_b1 
                    = ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__dout_b1) 
                       | ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap) 
                          << 0x00000010U));
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__dout_a1 
                    = ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__dout_a1) 
                       | ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap) 
                          << 0x00000010U));
            }
        } else if ((1U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                    [(7U & ((IData)(3U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
            vlSelfRef.__Vdly__tb_sndram__DOT__dout_b0 
                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__dout_b0) 
                   | ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap) 
                      << 0x00000010U));
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__dout_a0 
                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__dout_a0) 
                   | ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap) 
                      << 0x00000010U));
        }
    }
    if (vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[(7U 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (3U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))]) {
        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                      [(7U & ((IData)(4U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))] 
                      >> 2U)))) {
            if ((2U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                 [(7U & ((IData)(4U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
                if ((1U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                     [(7U & ((IData)(4U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__dout_b1 
                        = ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__dout_b1) 
                           | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap));
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__dout_a1 
                        = ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__dout_a1) 
                           | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap));
                }
            } else if ((1U & vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k
                        [(7U & ((IData)(4U) + (3U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))))])) {
                vlSelfRef.__Vdly__tb_sndram__DOT__dout_b0 
                    = ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__dout_b0) 
                       | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap));
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__dout_a0 
                    = ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__dout_a0) 
                       | (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap));
            }
        }
    }
    if (((vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[0U] 
          & vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_ld[0U]) 
         & (0x0eU <= (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc) 
                                     - (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_t0[0U])))))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_RAM_Q 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_d[0U];
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v2 = 1U;
    }
    if (((vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[1U] 
          & vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_ld[1U]) 
         & (0x0eU <= (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc) 
                                     - (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_t0[1U])))))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_RAM_Q 
            = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_d[1U];
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v3 = 1U;
    }
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v0 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[0U];
    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v0 = 1U;
    if (((vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[0U] 
          < vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[0U]) 
         & (0xffU != (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)));
    }
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v1 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[1U];
    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v1 = 1U;
    if (((vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[1U] 
          < vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[1U]) 
         & (0xffU != (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)));
    }
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v2 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U];
    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v2 = 1U;
    if (((vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U] 
          < vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[2U]) 
         & (0xffU != (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)));
    }
    vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v3 
        = vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U];
    vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v3 = 1U;
    if (((vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U] 
          < vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[3U]) 
         & (0xffU != (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap)));
    }
    if (vlSelfRef.tb_sndram__DOT__init) {
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__icnt = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__init_done = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__dl_wi = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scsp_drop = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cyc = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v6 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v4 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v8 = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__init_done)))) {
        if ((0x07d0U > (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__icnt))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__icnt 
                = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__icnt)));
        } else if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_wait))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_wait) 
                                  - (IData)(1U)));
        } else if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__init_done = 1U;
        } else if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__init_done = 1U;
        } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step))) {
            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_a = 0x0231U;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait = 3U;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step = 4U;
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait = 0x0bU;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait = 0x0bU;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step = 2U;
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd = 2U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_a = 0x0400U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait = 3U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step = 1U;
        }
    }
}
