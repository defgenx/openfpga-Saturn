// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__dut__DOT__MSH(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__ref0__DOT__MSH(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__dut__DOT__MSH((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__dut__DOT__MSH((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__ref0__DOT__MSH((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__ref0__DOT__MSH((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
}

void Vtb_top___024root___eval_sample(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_sample\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_top___024root___eval_ico(Vtb_top___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_top__DOT__RST_N)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__RST_N__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_top__DOT__CLK) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__CLK__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__CLK__0 
            = vlSelfRef.tb_top__DOT__CLK;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__RST_N__0 
            = vlSelfRef.tb_top__DOT__RST_N;
    }
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_inact(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_inact\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_top.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

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

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_top__DOT____VlemExpr_4;
    IData/*31:0*/ tb_top__DOT____VlemExpr_3;
    IData/*31:0*/ tb_top__DOT____VlemExpr_2;
    IData/*31:0*/ tb_top__DOT____VlemExpr_1;
    IData/*31:0*/ tb_top__DOT____VlemExpr_0;
    // Body
    tb_top__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INI(32, "cycles=%d"s, 
                                                     vlSelfRef.tb_top__DOT__ncycles);
    if ((! tb_top__DOT____VlemExpr_0)) {
        vlSelfRef.tb_top__DOT__ncycles = 0x00030d40U;
    }
    tb_top__DOT____VlemExpr_1 = VL_VALUEPLUSARGS_INN(64, "name=%s"s, 
                                                     vlSelfRef.tb_top__DOT__name);
    if ((! tb_top__DOT____VlemExpr_1)) {
        vlSelfRef.tb_top__DOT__name = "test"s;
    }
    tb_top__DOT____VlemExpr_2 = VL_VALUEPLUSARGS_INI(32, "verbose=%d"s, 
                                                     vlSelfRef.tb_top__DOT__verbose);
    if ((! tb_top__DOT____VlemExpr_2)) {
        vlSelfRef.tb_top__DOT__verbose = 0U;
    }
    tb_top__DOT____VlemExpr_3 = VL_VALUEPLUSARGS_INI(32, "watchlo=%h"s, 
                                                     vlSelfRef.tb_top__DOT__watch_lo);
    if ((! tb_top__DOT____VlemExpr_3)) {
        vlSelfRef.tb_top__DOT__watch_lo = 0U;
    }
    tb_top__DOT____VlemExpr_4 = VL_VALUEPLUSARGS_INI(32, "watchhi=%h"s, 
                                                     vlSelfRef.tb_top__DOT__watch_hi);
    if ((! tb_top__DOT____VlemExpr_4)) {
        vlSelfRef.tb_top__DOT__watch_hi = 0U;
    }
    vlSelfRef.tb_top__DOT__cyc = 0U;
    vlSelfRef.tb_top__DOT__nvec = 0U;
    vlSelfRef.tb_top__DOT__nown_s = 0U;
    vlSelfRef.tb_top__DOT__nwrite = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000002aULL, 
                                         nullptr, "tb/tb_top.sv", 
                                         32);
    vlSelfRef.tb_top__DOT__RST_N = 1U;
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_top.sv", 
                                             5);
        vlSelfRef.tb_top__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__CLK)));
    }
    co_return;
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
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
    } while ((1U > n));
    return (0U);
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
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__0__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__0__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__0__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__0__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__0__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__0__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__1__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__1__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__1__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__1__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__1__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__1__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__2__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__2__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__2__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__2__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__2__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__2__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__3__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__3__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__3__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__3__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__3__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__3__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__4__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__4__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__4__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__4__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__4__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__4__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__5__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__5__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__5__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__5__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__5__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__5__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__6__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__6__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__6__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__6__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__6__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__6__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__7__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__7__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__7__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__7__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__7__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__7__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__8__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__8__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__8__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__8__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__8__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__8__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__9__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__9__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__9__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__9__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__9__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__9__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__10__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__10__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__10__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__10__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__10__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__10__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__11__old;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__11__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__11__d;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__11__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__ref0__DOT__merge__11__n;
    __Vfunc_tb_top__DOT__ref0__DOT__merge__11__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__12__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__12__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__12__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__12__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__12__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__12__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__13__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__13__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__13__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__13__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__13__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__13__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__14__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__14__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__14__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__14__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__14__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__14__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__15__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__15__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__15__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__15__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__15__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__15__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__16__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__16__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__16__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__16__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__16__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__16__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__17__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__17__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__17__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__17__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__17__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__17__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__18__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__18__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__18__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__18__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__18__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__18__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__19__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__19__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__19__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__19__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__19__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__19__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__20__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__20__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__20__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__20__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__20__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__20__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__21__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__21__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__21__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__21__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__21__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__21__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__22__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__22__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__22__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__22__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__22__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__22__n = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__23__old;
    __Vfunc_tb_top__DOT__dut__DOT__merge__23__old = 0;
    IData/*31:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__23__d;
    __Vfunc_tb_top__DOT__dut__DOT__merge__23__d = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__dut__DOT__merge__23__n;
    __Vfunc_tb_top__DOT__dut__DOT__merge__23__n = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cyc;
    __Vdly__tb_top__DOT__cyc = 0;
    IData/*31:0*/ __VdlyMask__tb_top__DOT__cyc;
    __VdlyMask__tb_top__DOT__cyc = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__seen_m;
    __Vdly__tb_top__DOT__seen_m = 0;
    SData/*15:0*/ __Vdly__tb_top__DOT__seen_s;
    __Vdly__tb_top__DOT__seen_s = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__nown_s;
    __Vdly__tb_top__DOT__nown_s = 0;
    IData/*31:0*/ __VdlyMask__tb_top__DOT__nown_s;
    __VdlyMask__tb_top__DOT__nown_s = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__nwrite;
    __Vdly__tb_top__DOT__nwrite = 0;
    IData/*31:0*/ __VdlyMask__tb_top__DOT__nwrite;
    __VdlyMask__tb_top__DOT__nwrite = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__nvec;
    __Vdly__tb_top__DOT__nvec = 0;
    IData/*31:0*/ __VdlyMask__tb_top__DOT__nvec;
    __VdlyMask__tb_top__DOT__nvec = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__ref0__DOT__lfsr;
    __Vdly__tb_top__DOT__ref0__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__ref0__DOT__lvlS;
    __Vdly__tb_top__DOT__ref0__DOT__lvlS = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__ref0__DOT__ageS;
    __Vdly__tb_top__DOT__ref0__DOT__ageS = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__ref0__DOT__lvlM;
    __Vdly__tb_top__DOT__ref0__DOT__lvlM = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__ref0__DOT__ageM;
    __Vdly__tb_top__DOT__ref0__DOT__ageM = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__dut__DOT__lfsr;
    __Vdly__tb_top__DOT__dut__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__dut__DOT__lvlS;
    __Vdly__tb_top__DOT__dut__DOT__lvlS = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__ageS;
    __Vdly__tb_top__DOT__dut__DOT__ageS = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__dut__DOT__lvlM;
    __Vdly__tb_top__DOT__dut__DOT__lvlM = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__ageM;
    __Vdly__tb_top__DOT__dut__DOT__ageM = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__wraml__v0;
    __VdlyVal__tb_top__DOT__ref0__DOT__wraml__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__wraml__v0;
    __VdlyDim0__tb_top__DOT__ref0__DOT__wraml__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__wraml__v0;
    __VdlySet__tb_top__DOT__ref0__DOT__wraml__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v0;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v0;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v0;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v1;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v1;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v1;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v2;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v2;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v2;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v3;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v3;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v3;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v4;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v4 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v4;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v4;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v5;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v5 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v5;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v5;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v6;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v6 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v6;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v6;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__scr__v7;
    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v7 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v7;
    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__scr__v7;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__abus__v0;
    __VdlyVal__tb_top__DOT__ref0__DOT__abus__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__abus__v0;
    __VdlyDim0__tb_top__DOT__ref0__DOT__abus__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__abus__v0;
    __VdlySet__tb_top__DOT__ref0__DOT__abus__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__ref0__DOT__wramh__v0;
    __VdlyVal__tb_top__DOT__ref0__DOT__wramh__v0 = 0;
    SData/*15:0*/ __VdlyDim0__tb_top__DOT__ref0__DOT__wramh__v0;
    __VdlyDim0__tb_top__DOT__ref0__DOT__wramh__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__ref0__DOT__wramh__v0;
    __VdlySet__tb_top__DOT__ref0__DOT__wramh__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__wraml__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__wraml__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__wraml__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__wraml__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__wraml__v0;
    __VdlySet__tb_top__DOT__dut__DOT__wraml__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v0;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v1;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v1;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v1;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v2;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v2;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v2;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v3;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v3;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v3;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v4;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v4 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v4;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v4;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v5;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v5 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v5;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v5;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v6;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v6 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v6;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v6;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__scr__v7;
    __VdlyVal__tb_top__DOT__dut__DOT__scr__v7 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__scr__v7;
    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__scr__v7;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__abus__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__abus__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__abus__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__abus__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__abus__v0;
    __VdlySet__tb_top__DOT__dut__DOT__abus__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__wramh__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__wramh__v0 = 0;
    SData/*15:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__wramh__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__wramh__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__wramh__v0;
    __VdlySet__tb_top__DOT__dut__DOT__wramh__v0 = 0;
    // Body
    __Vdly__tb_top__DOT__ref0__DOT__lfsr = vlSelfRef.tb_top__DOT__ref0__DOT__lfsr;
    __Vdly__tb_top__DOT__dut__DOT__lfsr = vlSelfRef.tb_top__DOT__dut__DOT__lfsr;
    __VdlySet__tb_top__DOT__ref0__DOT__abus__v0 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__abus__v0 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__wramh__v0 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__wramh__v0 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__wraml__v0 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__wraml__v0 = 0U;
    vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__mfti_cnt 
        = vlSelfRef.tb_top__DOT__ref0__DOT__mfti_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__sfti_cnt 
        = vlSelfRef.tb_top__DOT__ref0__DOT__sfti_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__mfti_cnt 
        = vlSelfRef.tb_top__DOT__dut__DOT__mfti_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sfti_cnt 
        = vlSelfRef.tb_top__DOT__dut__DOT__sfti_cnt;
    __Vdly__tb_top__DOT__dut__DOT__ageS = vlSelfRef.tb_top__DOT__dut__DOT__ageS;
    __Vdly__tb_top__DOT__dut__DOT__ageM = vlSelfRef.tb_top__DOT__dut__DOT__ageM;
    __Vdly__tb_top__DOT__ref0__DOT__ageS = vlSelfRef.tb_top__DOT__ref0__DOT__ageS;
    __Vdly__tb_top__DOT__ref0__DOT__ageM = vlSelfRef.tb_top__DOT__ref0__DOT__ageM;
    __Vdly__tb_top__DOT__dut__DOT__lvlS = vlSelfRef.tb_top__DOT__dut__DOT__lvlS;
    __Vdly__tb_top__DOT__dut__DOT__lvlM = vlSelfRef.tb_top__DOT__dut__DOT__lvlM;
    __Vdly__tb_top__DOT__ref0__DOT__lvlS = vlSelfRef.tb_top__DOT__ref0__DOT__lvlS;
    __Vdly__tb_top__DOT__ref0__DOT__lvlM = vlSelfRef.tb_top__DOT__ref0__DOT__lvlM;
    vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__snmi_cnt 
        = vlSelfRef.tb_top__DOT__ref0__DOT__snmi_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__nmi_cnt 
        = vlSelfRef.tb_top__DOT__ref0__DOT__nmi_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__nmi_cnt 
        = vlSelfRef.tb_top__DOT__dut__DOT__nmi_cnt;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__snmi_cnt 
        = vlSelfRef.tb_top__DOT__dut__DOT__snmi_cnt;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v0 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v1 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v2 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v3 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v4 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v5 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v6 = 0U;
    __VdlySet__tb_top__DOT__ref0__DOT__scr__v7 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v0 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v1 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v2 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v3 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v4 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v5 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v6 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__scr__v7 = 0U;
    __Vdly__tb_top__DOT__seen_m = vlSelfRef.tb_top__DOT__seen_m;
    __Vdly__tb_top__DOT__seen_s = vlSelfRef.tb_top__DOT__seen_s;
    __Vdly__tb_top__DOT__ref0__DOT__lfsr = ((vlSelfRef.tb_top__DOT__ref0__DOT__lfsr 
                                             << 1U) 
                                            | (1U & 
                                               VL_REDXOR_32(
                                                            (0x80200003U 
                                                             & vlSelfRef.tb_top__DOT__ref0__DOT__lfsr))));
    __Vdly__tb_top__DOT__dut__DOT__lfsr = ((vlSelfRef.tb_top__DOT__dut__DOT__lfsr 
                                            << 1U) 
                                           | (1U & 
                                              VL_REDXOR_32(
                                                           (0x80200003U 
                                                            & vlSelfRef.tb_top__DOT__dut__DOT__lfsr))));
    if ((IData)(((((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                       >> 8U)) & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                     >> 3U))) & (0x0100000000000000ULL 
                                                 == 
                                                 (0x0180000000000000ULL 
                                                  & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))) 
                 & ((~ (0x0000000fU == (0x0000000fU 
                                        & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2)))) 
                    & (~ (0x0000000fU == (0x0000000fU 
                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                             >> 2U)))))))) {
        vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__mfti_cnt = 6U;
    }
    if ((IData)(((((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                       >> 8U)) & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                     >> 3U))) & (0x0180000000000000ULL 
                                                 == 
                                                 (0x0180000000000000ULL 
                                                  & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))) 
                 & ((~ (0x0000000fU == (0x0000000fU 
                                        & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2)))) 
                    & (~ (0x0000000fU == (0x0000000fU 
                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                             >> 2U)))))))) {
        vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__sfti_cnt = 6U;
    }
    if ((IData)(((((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                       >> 8U)) & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                     >> 3U))) & (0x0100000000000000ULL 
                                                 == 
                                                 (0x0180000000000000ULL 
                                                  & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))) 
                 & ((~ (0x0000000fU == (0x0000000fU 
                                        & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4)))) 
                    & (~ (0x0000000fU == (0x0000000fU 
                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                             >> 2U)))))))) {
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__mfti_cnt = 6U;
    }
    if ((IData)(((((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                       >> 8U)) & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                     >> 3U))) & (0x0180000000000000ULL 
                                                 == 
                                                 (0x0180000000000000ULL 
                                                  & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))) 
                 & ((~ (0x0000000fU == (0x0000000fU 
                                        & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4)))) 
                    & (~ (0x0000000fU == (0x0000000fU 
                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                             >> 2U)))))))) {
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sfti_cnt = 6U;
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__mfti_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__mfti_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref0__DOT__mfti_cnt) 
                                  - (IData)(1U)));
        }
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__sfti_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__sfti_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref0__DOT__sfti_cnt) 
                                  - (IData)(1U)));
        }
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__mfti_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__mfti_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__mfti_cnt) 
                                  - (IData)(1U)));
        }
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__sfti_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sfti_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sfti_cnt) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__mfti_cnt = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__sfti_cnt = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__mfti_cnt = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sfti_cnt = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                          >> 2U)))) {
                __Vfunc_tb_top__DOT__dut__DOT__merge__23__n 
                    = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U));
                __Vfunc_tb_top__DOT__dut__DOT__merge__23__d 
                    = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                __Vfunc_tb_top__DOT__dut__DOT__merge__23__old 
                    = vlSelfRef.tb_top__DOT__dut__DOT__abus
                    [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                             >> 0x00000022U)))];
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_9__merge 
                    = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__23__n))
                                           ? (__Vfunc_tb_top__DOT__dut__DOT__merge__23__old 
                                              >> 0x18U)
                                           : (__Vfunc_tb_top__DOT__dut__DOT__merge__23__d 
                                              >> 0x18U)) 
                                         << 8U)) | 
                         (0x000000ffU & ((4U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__23__n))
                                          ? (__Vfunc_tb_top__DOT__dut__DOT__merge__23__old 
                                             >> 0x10U)
                                          : (__Vfunc_tb_top__DOT__dut__DOT__merge__23__d 
                                             >> 0x10U)))) 
                        << 0x00000010U) | ((0x0000ff00U 
                                            & (((2U 
                                                 & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__23__n))
                                                 ? 
                                                (__Vfunc_tb_top__DOT__dut__DOT__merge__23__old 
                                                 >> 8U)
                                                 : 
                                                (__Vfunc_tb_top__DOT__dut__DOT__merge__23__d 
                                                 >> 8U)) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__23__n))
                                                  ? __Vfunc_tb_top__DOT__dut__DOT__merge__23__old
                                                  : __Vfunc_tb_top__DOT__dut__DOT__merge__23__d))));
                __VdlyVal__tb_top__DOT__dut__DOT__abus__v0 
                    = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_9__merge;
                __VdlyDim0__tb_top__DOT__dut__DOT__abus__v0 
                    = (0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000022U)));
                __VdlySet__tb_top__DOT__dut__DOT__abus__v0 = 1U;
            }
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tbr)))) {
                    if ((2U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4)))) {
                            __Vfunc_tb_top__DOT__dut__DOT__merge__21__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__dut__DOT__merge__21__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                            __Vfunc_tb_top__DOT__dut__DOT__merge__21__old 
                                = vlSelfRef.tb_top__DOT__dut__DOT__wramh
                                [(0x0000ffffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_7__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__21__n))
                                         ? (__Vfunc_tb_top__DOT__dut__DOT__merge__21__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__dut__DOT__merge__21__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__21__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__21__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__21__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__21__n))
                                            ? (__Vfunc_tb_top__DOT__dut__DOT__merge__21__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__dut__DOT__merge__21__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__21__n))
                                           ? __Vfunc_tb_top__DOT__dut__DOT__merge__21__old
                                           : __Vfunc_tb_top__DOT__dut__DOT__merge__21__d))));
                            __VdlyVal__tb_top__DOT__dut__DOT__wramh__v0 
                                = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_7__merge;
                            __VdlyDim0__tb_top__DOT__dut__DOT__wramh__v0 
                                = (0x0000ffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__dut__DOT__wramh__v0 = 1U;
                        }
                    }
                }
                if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000024U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                   >> 0x00000023U)))) {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                       >> 0x00000022U)))) {
                                        __Vdly__tb_top__DOT__dut__DOT__lvlS 
                                            = (0x0000000fU 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__is_wraml) {
            if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                               >> 0x00000021U)))) {
                __Vfunc_tb_top__DOT__dut__DOT__merge__12__n 
                    = (0x0000000cU | (3U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                            >> 2U)));
                __Vfunc_tb_top__DOT__dut__DOT__merge__12__d 
                    = (0x0000ffffU & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1));
                __Vfunc_tb_top__DOT__dut__DOT__merge__12__old 
                    = vlSelfRef.tb_top__DOT__dut__DOT__wraml
                    [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                             >> 0x00000022U)))];
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_5__merge 
                    = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__12__n))
                                           ? (__Vfunc_tb_top__DOT__dut__DOT__merge__12__old 
                                              >> 0x18U)
                                           : (__Vfunc_tb_top__DOT__dut__DOT__merge__12__d 
                                              >> 0x18U)) 
                                         << 8U)) | 
                         (0x000000ffU & ((4U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__12__n))
                                          ? (__Vfunc_tb_top__DOT__dut__DOT__merge__12__old 
                                             >> 0x10U)
                                          : (__Vfunc_tb_top__DOT__dut__DOT__merge__12__d 
                                             >> 0x10U)))) 
                        << 0x00000010U) | ((0x0000ff00U 
                                            & (((2U 
                                                 & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__12__n))
                                                 ? 
                                                (__Vfunc_tb_top__DOT__dut__DOT__merge__12__old 
                                                 >> 8U)
                                                 : 
                                                (__Vfunc_tb_top__DOT__dut__DOT__merge__12__d 
                                                 >> 8U)) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__12__n))
                                                  ? __Vfunc_tb_top__DOT__dut__DOT__merge__12__old
                                                  : __Vfunc_tb_top__DOT__dut__DOT__merge__12__d))));
            } else {
                __Vfunc_tb_top__DOT__dut__DOT__merge__13__n 
                    = (3U | (0x0000000cU & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7)));
                __Vfunc_tb_top__DOT__dut__DOT__merge__13__d 
                    = ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1) 
                       << 0x00000010U);
                __Vfunc_tb_top__DOT__dut__DOT__merge__13__old 
                    = vlSelfRef.tb_top__DOT__dut__DOT__wraml
                    [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                             >> 0x00000022U)))];
                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_5__merge 
                    = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__13__n))
                                           ? (__Vfunc_tb_top__DOT__dut__DOT__merge__13__old 
                                              >> 0x18U)
                                           : (__Vfunc_tb_top__DOT__dut__DOT__merge__13__d 
                                              >> 0x18U)) 
                                         << 8U)) | 
                         (0x000000ffU & ((4U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__13__n))
                                          ? (__Vfunc_tb_top__DOT__dut__DOT__merge__13__old 
                                             >> 0x10U)
                                          : (__Vfunc_tb_top__DOT__dut__DOT__merge__13__d 
                                             >> 0x10U)))) 
                        << 0x00000010U) | ((0x0000ff00U 
                                            & (((2U 
                                                 & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__13__n))
                                                 ? 
                                                (__Vfunc_tb_top__DOT__dut__DOT__merge__13__old 
                                                 >> 8U)
                                                 : 
                                                (__Vfunc_tb_top__DOT__dut__DOT__merge__13__d 
                                                 >> 8U)) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__13__n))
                                                  ? __Vfunc_tb_top__DOT__dut__DOT__merge__13__old
                                                  : __Vfunc_tb_top__DOT__dut__DOT__merge__13__d))));
            }
            __VdlyVal__tb_top__DOT__dut__DOT__wraml__v0 
                = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_5__merge;
            __VdlyDim0__tb_top__DOT__dut__DOT__wraml__v0 
                = (0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000022U)));
            __VdlySet__tb_top__DOT__dut__DOT__wraml__v0 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        __Vdly__tb_top__DOT__dut__DOT__ageS = ((0U 
                                                == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__lvlS))
                                                ? 0U
                                                : (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ageS))));
        if ((0x0258U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ageS))) {
            __Vdly__tb_top__DOT__dut__DOT__lvlS = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7)) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV))))) {
            if (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__bsc__DOT__BGR) {
                __Vdly__tb_top__DOT__dut__DOT__lvlS = 0U;
            }
        }
        if ((((0U != vlSelfRef.tb_top__DOT__dut__DOT__irq_mode) 
              & ((0x00000fffU & vlSelfRef.tb_top__DOT__dut__DOT__cyc) 
                 == (0x000000ffU & vlSelfRef.tb_top__DOT__dut__DOT__lfsr))) 
             & ((0x0000000fU & (vlSelfRef.tb_top__DOT__dut__DOT__lfsr 
                                >> 0x0cU)) < (0x0000000fU 
                                              & vlSelfRef.tb_top__DOT__dut__DOT__irq_mode)))) {
            if ((1U & (~ (vlSelfRef.tb_top__DOT__dut__DOT__lfsr 
                          >> 0x10U)))) {
                __Vdly__tb_top__DOT__dut__DOT__lvlS 
                    = (1U | (1U & (vlSelfRef.tb_top__DOT__dut__DOT__lfsr 
                                   >> 0x11U)));
            }
        }
    } else {
        __Vdly__tb_top__DOT__dut__DOT__lvlS = 0U;
        __Vdly__tb_top__DOT__dut__DOT__ageS = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000024U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                   >> 0x00000023U)))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000022U))))) {
                                        __Vdly__tb_top__DOT__dut__DOT__lvlM 
                                            = (0x0000000fU 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        __Vdly__tb_top__DOT__dut__DOT__ageM = ((0U 
                                                == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__lvlM))
                                                ? 0U
                                                : (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ageM))));
        if ((0x0258U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ageM))) {
            __Vdly__tb_top__DOT__dut__DOT__lvlM = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7)) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV))))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__bsc__DOT__BGR)))) {
                __Vdly__tb_top__DOT__dut__DOT__lvlM = 0U;
            }
        }
        if ((((0U != vlSelfRef.tb_top__DOT__dut__DOT__irq_mode) 
              & ((0x00000fffU & vlSelfRef.tb_top__DOT__dut__DOT__cyc) 
                 == (0x000000ffU & vlSelfRef.tb_top__DOT__dut__DOT__lfsr))) 
             & ((0x0000000fU & (vlSelfRef.tb_top__DOT__dut__DOT__lfsr 
                                >> 0x0cU)) < (0x0000000fU 
                                              & vlSelfRef.tb_top__DOT__dut__DOT__irq_mode)))) {
            if ((0x00010000U & vlSelfRef.tb_top__DOT__dut__DOT__lfsr)) {
                __Vdly__tb_top__DOT__dut__DOT__lvlM 
                    = (0x0000000fU & (1U | (vlSelfRef.tb_top__DOT__dut__DOT__lfsr 
                                            >> 0x11U)));
            }
        }
    } else {
        __Vdly__tb_top__DOT__dut__DOT__lvlM = 0U;
        __Vdly__tb_top__DOT__dut__DOT__ageM = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                          >> 2U)))) {
                __Vfunc_tb_top__DOT__ref0__DOT__merge__11__n 
                    = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U));
                __Vfunc_tb_top__DOT__ref0__DOT__merge__11__d 
                    = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                __Vfunc_tb_top__DOT__ref0__DOT__merge__11__old 
                    = vlSelfRef.tb_top__DOT__ref0__DOT__abus
                    [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                             >> 0x00000022U)))];
                vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_9__merge 
                    = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__11__n))
                                           ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__11__old 
                                              >> 0x18U)
                                           : (__Vfunc_tb_top__DOT__ref0__DOT__merge__11__d 
                                              >> 0x18U)) 
                                         << 8U)) | 
                         (0x000000ffU & ((4U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__11__n))
                                          ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__11__old 
                                             >> 0x10U)
                                          : (__Vfunc_tb_top__DOT__ref0__DOT__merge__11__d 
                                             >> 0x10U)))) 
                        << 0x00000010U) | ((0x0000ff00U 
                                            & (((2U 
                                                 & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__11__n))
                                                 ? 
                                                (__Vfunc_tb_top__DOT__ref0__DOT__merge__11__old 
                                                 >> 8U)
                                                 : 
                                                (__Vfunc_tb_top__DOT__ref0__DOT__merge__11__d 
                                                 >> 8U)) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__11__n))
                                                  ? __Vfunc_tb_top__DOT__ref0__DOT__merge__11__old
                                                  : __Vfunc_tb_top__DOT__ref0__DOT__merge__11__d))));
                __VdlyVal__tb_top__DOT__ref0__DOT__abus__v0 
                    = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_9__merge;
                __VdlyDim0__tb_top__DOT__ref0__DOT__abus__v0 
                    = (0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000022U)));
                __VdlySet__tb_top__DOT__ref0__DOT__abus__v0 = 1U;
            }
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__tbr)))) {
                    if ((2U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2)))) {
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__9__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__9__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__9__old 
                                = vlSelfRef.tb_top__DOT__ref0__DOT__wramh
                                [(0x0000ffffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_7__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__9__n))
                                         ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__9__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__ref0__DOT__merge__9__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__9__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__9__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__9__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__9__n))
                                            ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__9__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__ref0__DOT__merge__9__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__9__n))
                                           ? __Vfunc_tb_top__DOT__ref0__DOT__merge__9__old
                                           : __Vfunc_tb_top__DOT__ref0__DOT__merge__9__d))));
                            __VdlyVal__tb_top__DOT__ref0__DOT__wramh__v0 
                                = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_7__merge;
                            __VdlyDim0__tb_top__DOT__ref0__DOT__wramh__v0 
                                = (0x0000ffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__ref0__DOT__wramh__v0 = 1U;
                        }
                    }
                }
                if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000024U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                   >> 0x00000023U)))) {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                       >> 0x00000022U)))) {
                                        __Vdly__tb_top__DOT__ref0__DOT__lvlS 
                                            = (0x0000000fU 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml) {
            if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                               >> 0x00000021U)))) {
                __Vfunc_tb_top__DOT__ref0__DOT__merge__0__n 
                    = (0x0000000cU | (3U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                            >> 2U)));
                __Vfunc_tb_top__DOT__ref0__DOT__merge__0__d 
                    = (0x0000ffffU & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0));
                __Vfunc_tb_top__DOT__ref0__DOT__merge__0__old 
                    = vlSelfRef.tb_top__DOT__ref0__DOT__wraml
                    [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                             >> 0x00000022U)))];
                vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_5__merge 
                    = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__0__n))
                                           ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__0__old 
                                              >> 0x18U)
                                           : (__Vfunc_tb_top__DOT__ref0__DOT__merge__0__d 
                                              >> 0x18U)) 
                                         << 8U)) | 
                         (0x000000ffU & ((4U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__0__n))
                                          ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__0__old 
                                             >> 0x10U)
                                          : (__Vfunc_tb_top__DOT__ref0__DOT__merge__0__d 
                                             >> 0x10U)))) 
                        << 0x00000010U) | ((0x0000ff00U 
                                            & (((2U 
                                                 & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__0__n))
                                                 ? 
                                                (__Vfunc_tb_top__DOT__ref0__DOT__merge__0__old 
                                                 >> 8U)
                                                 : 
                                                (__Vfunc_tb_top__DOT__ref0__DOT__merge__0__d 
                                                 >> 8U)) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__0__n))
                                                  ? __Vfunc_tb_top__DOT__ref0__DOT__merge__0__old
                                                  : __Vfunc_tb_top__DOT__ref0__DOT__merge__0__d))));
            } else {
                __Vfunc_tb_top__DOT__ref0__DOT__merge__1__n 
                    = (3U | (0x0000000cU & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6)));
                __Vfunc_tb_top__DOT__ref0__DOT__merge__1__d 
                    = ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0) 
                       << 0x00000010U);
                __Vfunc_tb_top__DOT__ref0__DOT__merge__1__old 
                    = vlSelfRef.tb_top__DOT__ref0__DOT__wraml
                    [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                             >> 0x00000022U)))];
                vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_5__merge 
                    = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__1__n))
                                           ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__1__old 
                                              >> 0x18U)
                                           : (__Vfunc_tb_top__DOT__ref0__DOT__merge__1__d 
                                              >> 0x18U)) 
                                         << 8U)) | 
                         (0x000000ffU & ((4U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__1__n))
                                          ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__1__old 
                                             >> 0x10U)
                                          : (__Vfunc_tb_top__DOT__ref0__DOT__merge__1__d 
                                             >> 0x10U)))) 
                        << 0x00000010U) | ((0x0000ff00U 
                                            & (((2U 
                                                 & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__1__n))
                                                 ? 
                                                (__Vfunc_tb_top__DOT__ref0__DOT__merge__1__old 
                                                 >> 8U)
                                                 : 
                                                (__Vfunc_tb_top__DOT__ref0__DOT__merge__1__d 
                                                 >> 8U)) 
                                               << 8U)) 
                                           | (0x000000ffU 
                                              & ((1U 
                                                  & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__1__n))
                                                  ? __Vfunc_tb_top__DOT__ref0__DOT__merge__1__old
                                                  : __Vfunc_tb_top__DOT__ref0__DOT__merge__1__d))));
            }
            __VdlyVal__tb_top__DOT__ref0__DOT__wraml__v0 
                = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_5__merge;
            __VdlyDim0__tb_top__DOT__ref0__DOT__wraml__v0 
                = (0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                          >> 0x00000022U)));
            __VdlySet__tb_top__DOT__ref0__DOT__wraml__v0 = 1U;
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        __Vdly__tb_top__DOT__ref0__DOT__ageS = ((0U 
                                                 == (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__lvlS))
                                                 ? 0U
                                                 : 
                                                (0x000003ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__ageS))));
        if ((0x0258U == (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__ageS))) {
            __Vdly__tb_top__DOT__ref0__DOT__lvlS = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6)) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__MCLK_DIV))))) {
            if (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR) {
                __Vdly__tb_top__DOT__ref0__DOT__lvlS = 0U;
            }
        }
        if ((((0U != vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode) 
              & ((0x00000fffU & vlSelfRef.tb_top__DOT__ref0__DOT__cyc) 
                 == (0x000000ffU & vlSelfRef.tb_top__DOT__ref0__DOT__lfsr))) 
             & ((0x0000000fU & (vlSelfRef.tb_top__DOT__ref0__DOT__lfsr 
                                >> 0x0cU)) < (0x0000000fU 
                                              & vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode)))) {
            if ((1U & (~ (vlSelfRef.tb_top__DOT__ref0__DOT__lfsr 
                          >> 0x10U)))) {
                __Vdly__tb_top__DOT__ref0__DOT__lvlS 
                    = (1U | (1U & (vlSelfRef.tb_top__DOT__ref0__DOT__lfsr 
                                   >> 0x11U)));
            }
        }
    } else {
        __Vdly__tb_top__DOT__ref0__DOT__lvlS = 0U;
        __Vdly__tb_top__DOT__ref0__DOT__ageS = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000024U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                   >> 0x00000023U)))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000022U))))) {
                                        __Vdly__tb_top__DOT__ref0__DOT__lvlM 
                                            = (0x0000000fU 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        __Vdly__tb_top__DOT__ref0__DOT__ageM = ((0U 
                                                 == (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__lvlM))
                                                 ? 0U
                                                 : 
                                                (0x000003ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__ageM))));
        if ((0x0258U == (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__ageM))) {
            __Vdly__tb_top__DOT__ref0__DOT__lvlM = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6)) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__MCLK_DIV))))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR)))) {
                __Vdly__tb_top__DOT__ref0__DOT__lvlM = 0U;
            }
        }
        if ((((0U != vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode) 
              & ((0x00000fffU & vlSelfRef.tb_top__DOT__ref0__DOT__cyc) 
                 == (0x000000ffU & vlSelfRef.tb_top__DOT__ref0__DOT__lfsr))) 
             & ((0x0000000fU & (vlSelfRef.tb_top__DOT__ref0__DOT__lfsr 
                                >> 0x0cU)) < (0x0000000fU 
                                              & vlSelfRef.tb_top__DOT__ref0__DOT__irq_mode)))) {
            if ((0x00010000U & vlSelfRef.tb_top__DOT__ref0__DOT__lfsr)) {
                __Vdly__tb_top__DOT__ref0__DOT__lvlM 
                    = (0x0000000fU & (1U | (vlSelfRef.tb_top__DOT__ref0__DOT__lfsr 
                                            >> 0x11U)));
            }
        }
    } else {
        __Vdly__tb_top__DOT__ref0__DOT__lvlM = 0U;
        __Vdly__tb_top__DOT__ref0__DOT__ageM = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000025U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                   >> 0x00000024U)))) {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                       >> 0x00000023U)))) {
                                        if ((1U & (IData)(
                                                          (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                           >> 0x00000022U)))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__snmi_cnt = 8U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__snmi_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__snmi_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref0__DOT__snmi_cnt) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__snmi_cnt = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000025U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                   >> 0x00000024U)))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000023U))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                              >> 0x00000022U))))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__nmi_cnt = 8U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__nmi_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__nmi_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref0__DOT__nmi_cnt) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__nmi_cnt = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000025U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                   >> 0x00000024U)))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000023U))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                              >> 0x00000022U))))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__nmi_cnt = 8U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__nmi_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__nmi_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__nmi_cnt) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__nmi_cnt = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000026U))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000025U))))) {
                                if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                   >> 0x00000024U)))) {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                       >> 0x00000023U)))) {
                                        if ((1U & (IData)(
                                                          (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                           >> 0x00000022U)))) {
                                            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__snmi_cnt = 8U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snmi_cnt))) {
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__snmi_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__snmi_cnt) 
                                  - (IData)(1U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__snmi_cnt = 0U;
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                    if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                       >> 0x00000027U)))) {
                        __Vfunc_tb_top__DOT__ref0__DOT__merge__2__n 
                            = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                              >> 2U));
                        __Vfunc_tb_top__DOT__ref0__DOT__merge__2__d 
                            = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                        __Vfunc_tb_top__DOT__ref0__DOT__merge__2__old 
                            = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                            [(0x00003fffU & (IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                     >> 0x00000022U)))];
                        vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                            = ((((0x0000ff00U & (((8U 
                                                   & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__2__n))
                                                   ? 
                                                  (__Vfunc_tb_top__DOT__ref0__DOT__merge__2__old 
                                                   >> 0x18U)
                                                   : 
                                                  (__Vfunc_tb_top__DOT__ref0__DOT__merge__2__d 
                                                   >> 0x18U)) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (4U 
                                                    & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__2__n))
                                                    ? 
                                                   (__Vfunc_tb_top__DOT__ref0__DOT__merge__2__old 
                                                    >> 0x10U)
                                                    : 
                                                   (__Vfunc_tb_top__DOT__ref0__DOT__merge__2__d 
                                                    >> 0x10U)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((2U 
                                                         & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__2__n))
                                                         ? 
                                                        (__Vfunc_tb_top__DOT__ref0__DOT__merge__2__old 
                                                         >> 8U)
                                                         : 
                                                        (__Vfunc_tb_top__DOT__ref0__DOT__merge__2__d 
                                                         >> 8U)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((1U 
                                                          & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__2__n))
                                                          ? __Vfunc_tb_top__DOT__ref0__DOT__merge__2__old
                                                          : __Vfunc_tb_top__DOT__ref0__DOT__merge__2__d))));
                        __VdlyVal__tb_top__DOT__ref0__DOT__scr__v0 
                            = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                        __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v0 
                            = (0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                      >> 0x00000022U)));
                        __VdlySet__tb_top__DOT__ref0__DOT__scr__v0 = 1U;
                    } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000026U)))) {
                        __Vfunc_tb_top__DOT__ref0__DOT__merge__3__n 
                            = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                              >> 2U));
                        __Vfunc_tb_top__DOT__ref0__DOT__merge__3__d 
                            = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                        __Vfunc_tb_top__DOT__ref0__DOT__merge__3__old 
                            = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                            [(0x00003fffU & (IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                     >> 0x00000022U)))];
                        vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                            = ((((0x0000ff00U & (((8U 
                                                   & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__3__n))
                                                   ? 
                                                  (__Vfunc_tb_top__DOT__ref0__DOT__merge__3__old 
                                                   >> 0x18U)
                                                   : 
                                                  (__Vfunc_tb_top__DOT__ref0__DOT__merge__3__d 
                                                   >> 0x18U)) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (4U 
                                                    & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__3__n))
                                                    ? 
                                                   (__Vfunc_tb_top__DOT__ref0__DOT__merge__3__old 
                                                    >> 0x10U)
                                                    : 
                                                   (__Vfunc_tb_top__DOT__ref0__DOT__merge__3__d 
                                                    >> 0x10U)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((2U 
                                                         & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__3__n))
                                                         ? 
                                                        (__Vfunc_tb_top__DOT__ref0__DOT__merge__3__old 
                                                         >> 8U)
                                                         : 
                                                        (__Vfunc_tb_top__DOT__ref0__DOT__merge__3__d 
                                                         >> 8U)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((1U 
                                                          & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__3__n))
                                                          ? __Vfunc_tb_top__DOT__ref0__DOT__merge__3__old
                                                          : __Vfunc_tb_top__DOT__ref0__DOT__merge__3__d))));
                        __VdlyVal__tb_top__DOT__ref0__DOT__scr__v1 
                            = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                        __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v1 
                            = (0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                      >> 0x00000022U)));
                        __VdlySet__tb_top__DOT__ref0__DOT__scr__v1 = 1U;
                    } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000025U)))) {
                        if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                           >> 0x00000024U)))) {
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__4__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__4__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__4__old 
                                = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                                [(0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__4__n))
                                         ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__4__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__ref0__DOT__merge__4__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__4__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__4__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__4__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__4__n))
                                            ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__4__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__ref0__DOT__merge__4__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__4__n))
                                           ? __Vfunc_tb_top__DOT__ref0__DOT__merge__4__old
                                           : __Vfunc_tb_top__DOT__ref0__DOT__merge__4__d))));
                            __VdlyVal__tb_top__DOT__ref0__DOT__scr__v2 
                                = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                            __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v2 
                                = (0x00003fffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__ref0__DOT__scr__v2 = 1U;
                        } else if ((1U & (~ (IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                     >> 0x00000023U))))) {
                            if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                               >> 0x00000022U)))) {
                                __Vfunc_tb_top__DOT__ref0__DOT__merge__5__n 
                                    = (0x0000000fU 
                                       & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                          >> 2U));
                                __Vfunc_tb_top__DOT__ref0__DOT__merge__5__d 
                                    = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                                __Vfunc_tb_top__DOT__ref0__DOT__merge__5__old 
                                    = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                                    [(0x00003fffU & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                             >> 0x00000022U)))];
                                vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                                    = ((((0x0000ff00U 
                                          & (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__5__n))
                                               ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__5__old 
                                                  >> 0x18U)
                                               : (__Vfunc_tb_top__DOT__ref0__DOT__merge__5__d 
                                                  >> 0x18U)) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__5__n))
                                                ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__5__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_top__DOT__ref0__DOT__merge__5__d 
                                                   >> 0x10U)))) 
                                        << 0x00000010U) 
                                       | ((0x0000ff00U 
                                           & (((2U 
                                                & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__5__n))
                                                ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__5__old 
                                                   >> 8U)
                                                : (__Vfunc_tb_top__DOT__ref0__DOT__merge__5__d 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & ((1U 
                                                 & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__5__n))
                                                 ? __Vfunc_tb_top__DOT__ref0__DOT__merge__5__old
                                                 : __Vfunc_tb_top__DOT__ref0__DOT__merge__5__d))));
                                __VdlyVal__tb_top__DOT__ref0__DOT__scr__v3 
                                    = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                                __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v3 
                                    = (0x00003fffU 
                                       & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000022U)));
                                __VdlySet__tb_top__DOT__ref0__DOT__scr__v3 = 1U;
                            }
                        }
                    } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000024U)))) {
                        if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                           >> 0x00000023U)))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000022U))))) {
                                __Vfunc_tb_top__DOT__ref0__DOT__merge__6__n 
                                    = (0x0000000fU 
                                       & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                          >> 2U));
                                __Vfunc_tb_top__DOT__ref0__DOT__merge__6__d 
                                    = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                                __Vfunc_tb_top__DOT__ref0__DOT__merge__6__old 
                                    = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                                    [(0x00003fffU & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                             >> 0x00000022U)))];
                                vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                                    = ((((0x0000ff00U 
                                          & (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__6__n))
                                               ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__6__old 
                                                  >> 0x18U)
                                               : (__Vfunc_tb_top__DOT__ref0__DOT__merge__6__d 
                                                  >> 0x18U)) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__6__n))
                                                ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__6__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_top__DOT__ref0__DOT__merge__6__d 
                                                   >> 0x10U)))) 
                                        << 0x00000010U) 
                                       | ((0x0000ff00U 
                                           & (((2U 
                                                & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__6__n))
                                                ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__6__old 
                                                   >> 8U)
                                                : (__Vfunc_tb_top__DOT__ref0__DOT__merge__6__d 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & ((1U 
                                                 & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__6__n))
                                                 ? __Vfunc_tb_top__DOT__ref0__DOT__merge__6__old
                                                 : __Vfunc_tb_top__DOT__ref0__DOT__merge__6__d))));
                                __VdlyVal__tb_top__DOT__ref0__DOT__scr__v4 
                                    = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                                __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v4 
                                    = (0x00003fffU 
                                       & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000022U)));
                                __VdlySet__tb_top__DOT__ref0__DOT__scr__v4 = 1U;
                            }
                        } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000022U)))) {
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__7__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__7__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__7__old 
                                = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                                [(0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__7__n))
                                         ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__7__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__ref0__DOT__merge__7__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__7__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__7__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__7__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__7__n))
                                            ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__7__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__ref0__DOT__merge__7__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__7__n))
                                           ? __Vfunc_tb_top__DOT__ref0__DOT__merge__7__old
                                           : __Vfunc_tb_top__DOT__ref0__DOT__merge__7__d))));
                            __VdlyVal__tb_top__DOT__ref0__DOT__scr__v5 
                                = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                            __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v5 
                                = (0x00003fffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__ref0__DOT__scr__v5 = 1U;
                        }
                    } else if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                 >> 0x00000023U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000022U))))) {
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__8__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__8__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                            __Vfunc_tb_top__DOT__ref0__DOT__merge__8__old 
                                = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                                [(0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__8__n))
                                         ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__8__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__ref0__DOT__merge__8__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__8__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__8__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__ref0__DOT__merge__8__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__8__n))
                                            ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__8__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__ref0__DOT__merge__8__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__8__n))
                                           ? __Vfunc_tb_top__DOT__ref0__DOT__merge__8__old
                                           : __Vfunc_tb_top__DOT__ref0__DOT__merge__8__d))));
                            __VdlyVal__tb_top__DOT__ref0__DOT__scr__v6 
                                = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_6__merge;
                            __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v6 
                                = (0x00003fffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__ref0__DOT__scr__v6 = 1U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                     >> 1U)))) {
                    __Vfunc_tb_top__DOT__ref0__DOT__merge__10__n 
                        = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                          >> 2U));
                    __Vfunc_tb_top__DOT__ref0__DOT__merge__10__d 
                        = (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0);
                    __Vfunc_tb_top__DOT__ref0__DOT__merge__10__old 
                        = vlSelfRef.tb_top__DOT__ref0__DOT__scr
                        [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                 >> 0x00000022U)))];
                    vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_8__merge 
                        = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__10__n))
                                               ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__10__old 
                                                  >> 0x18U)
                                               : (__Vfunc_tb_top__DOT__ref0__DOT__merge__10__d 
                                                  >> 0x18U)) 
                                             << 8U)) 
                             | (0x000000ffU & ((4U 
                                                & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__10__n))
                                                ? (__Vfunc_tb_top__DOT__ref0__DOT__merge__10__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_top__DOT__ref0__DOT__merge__10__d 
                                                   >> 0x10U)))) 
                            << 0x00000010U) | ((0x0000ff00U 
                                                & (((2U 
                                                     & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__10__n))
                                                     ? 
                                                    (__Vfunc_tb_top__DOT__ref0__DOT__merge__10__old 
                                                     >> 8U)
                                                     : 
                                                    (__Vfunc_tb_top__DOT__ref0__DOT__merge__10__d 
                                                     >> 8U)) 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & ((1U 
                                                      & (IData)(__Vfunc_tb_top__DOT__ref0__DOT__merge__10__n))
                                                      ? __Vfunc_tb_top__DOT__ref0__DOT__merge__10__old
                                                      : __Vfunc_tb_top__DOT__ref0__DOT__merge__10__d))));
                    __VdlyVal__tb_top__DOT__ref0__DOT__scr__v7 
                        = vlSelfRef.tb_top__DOT__ref0__DOT____VlemCall_8__merge;
                    __VdlyDim0__tb_top__DOT__ref0__DOT__scr__v7 
                        = (0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000022U)));
                    __VdlySet__tb_top__DOT__ref0__DOT__scr__v7 = 1U;
                }
            }
        }
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                    if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                       >> 0x00000027U)))) {
                        __Vfunc_tb_top__DOT__dut__DOT__merge__14__n 
                            = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                              >> 2U));
                        __Vfunc_tb_top__DOT__dut__DOT__merge__14__d 
                            = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                        __Vfunc_tb_top__DOT__dut__DOT__merge__14__old 
                            = vlSelfRef.tb_top__DOT__dut__DOT__scr
                            [(0x00003fffU & (IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000022U)))];
                        vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                            = ((((0x0000ff00U & (((8U 
                                                   & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__14__n))
                                                   ? 
                                                  (__Vfunc_tb_top__DOT__dut__DOT__merge__14__old 
                                                   >> 0x18U)
                                                   : 
                                                  (__Vfunc_tb_top__DOT__dut__DOT__merge__14__d 
                                                   >> 0x18U)) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (4U 
                                                    & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__14__n))
                                                    ? 
                                                   (__Vfunc_tb_top__DOT__dut__DOT__merge__14__old 
                                                    >> 0x10U)
                                                    : 
                                                   (__Vfunc_tb_top__DOT__dut__DOT__merge__14__d 
                                                    >> 0x10U)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((2U 
                                                         & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__14__n))
                                                         ? 
                                                        (__Vfunc_tb_top__DOT__dut__DOT__merge__14__old 
                                                         >> 8U)
                                                         : 
                                                        (__Vfunc_tb_top__DOT__dut__DOT__merge__14__d 
                                                         >> 8U)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((1U 
                                                          & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__14__n))
                                                          ? __Vfunc_tb_top__DOT__dut__DOT__merge__14__old
                                                          : __Vfunc_tb_top__DOT__dut__DOT__merge__14__d))));
                        __VdlyVal__tb_top__DOT__dut__DOT__scr__v0 
                            = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                        __VdlyDim0__tb_top__DOT__dut__DOT__scr__v0 
                            = (0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000022U)));
                        __VdlySet__tb_top__DOT__dut__DOT__scr__v0 = 1U;
                    } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000026U)))) {
                        __Vfunc_tb_top__DOT__dut__DOT__merge__15__n 
                            = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                              >> 2U));
                        __Vfunc_tb_top__DOT__dut__DOT__merge__15__d 
                            = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                        __Vfunc_tb_top__DOT__dut__DOT__merge__15__old 
                            = vlSelfRef.tb_top__DOT__dut__DOT__scr
                            [(0x00003fffU & (IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000022U)))];
                        vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                            = ((((0x0000ff00U & (((8U 
                                                   & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__15__n))
                                                   ? 
                                                  (__Vfunc_tb_top__DOT__dut__DOT__merge__15__old 
                                                   >> 0x18U)
                                                   : 
                                                  (__Vfunc_tb_top__DOT__dut__DOT__merge__15__d 
                                                   >> 0x18U)) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (4U 
                                                    & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__15__n))
                                                    ? 
                                                   (__Vfunc_tb_top__DOT__dut__DOT__merge__15__old 
                                                    >> 0x10U)
                                                    : 
                                                   (__Vfunc_tb_top__DOT__dut__DOT__merge__15__d 
                                                    >> 0x10U)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((2U 
                                                         & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__15__n))
                                                         ? 
                                                        (__Vfunc_tb_top__DOT__dut__DOT__merge__15__old 
                                                         >> 8U)
                                                         : 
                                                        (__Vfunc_tb_top__DOT__dut__DOT__merge__15__d 
                                                         >> 8U)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((1U 
                                                          & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__15__n))
                                                          ? __Vfunc_tb_top__DOT__dut__DOT__merge__15__old
                                                          : __Vfunc_tb_top__DOT__dut__DOT__merge__15__d))));
                        __VdlyVal__tb_top__DOT__dut__DOT__scr__v1 
                            = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                        __VdlyDim0__tb_top__DOT__dut__DOT__scr__v1 
                            = (0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000022U)));
                        __VdlySet__tb_top__DOT__dut__DOT__scr__v1 = 1U;
                    } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000025U)))) {
                        if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                           >> 0x00000024U)))) {
                            __Vfunc_tb_top__DOT__dut__DOT__merge__16__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__dut__DOT__merge__16__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                            __Vfunc_tb_top__DOT__dut__DOT__merge__16__old 
                                = vlSelfRef.tb_top__DOT__dut__DOT__scr
                                [(0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__16__n))
                                         ? (__Vfunc_tb_top__DOT__dut__DOT__merge__16__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__dut__DOT__merge__16__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__16__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__16__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__16__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__16__n))
                                            ? (__Vfunc_tb_top__DOT__dut__DOT__merge__16__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__dut__DOT__merge__16__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__16__n))
                                           ? __Vfunc_tb_top__DOT__dut__DOT__merge__16__old
                                           : __Vfunc_tb_top__DOT__dut__DOT__merge__16__d))));
                            __VdlyVal__tb_top__DOT__dut__DOT__scr__v2 
                                = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                            __VdlyDim0__tb_top__DOT__dut__DOT__scr__v2 
                                = (0x00003fffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__dut__DOT__scr__v2 = 1U;
                        } else if ((1U & (~ (IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000023U))))) {
                            if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                               >> 0x00000022U)))) {
                                __Vfunc_tb_top__DOT__dut__DOT__merge__17__n 
                                    = (0x0000000fU 
                                       & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                          >> 2U));
                                __Vfunc_tb_top__DOT__dut__DOT__merge__17__d 
                                    = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                                __Vfunc_tb_top__DOT__dut__DOT__merge__17__old 
                                    = vlSelfRef.tb_top__DOT__dut__DOT__scr
                                    [(0x00003fffU & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                             >> 0x00000022U)))];
                                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                                    = ((((0x0000ff00U 
                                          & (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__17__n))
                                               ? (__Vfunc_tb_top__DOT__dut__DOT__merge__17__old 
                                                  >> 0x18U)
                                               : (__Vfunc_tb_top__DOT__dut__DOT__merge__17__d 
                                                  >> 0x18U)) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__17__n))
                                                ? (__Vfunc_tb_top__DOT__dut__DOT__merge__17__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_top__DOT__dut__DOT__merge__17__d 
                                                   >> 0x10U)))) 
                                        << 0x00000010U) 
                                       | ((0x0000ff00U 
                                           & (((2U 
                                                & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__17__n))
                                                ? (__Vfunc_tb_top__DOT__dut__DOT__merge__17__old 
                                                   >> 8U)
                                                : (__Vfunc_tb_top__DOT__dut__DOT__merge__17__d 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & ((1U 
                                                 & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__17__n))
                                                 ? __Vfunc_tb_top__DOT__dut__DOT__merge__17__old
                                                 : __Vfunc_tb_top__DOT__dut__DOT__merge__17__d))));
                                __VdlyVal__tb_top__DOT__dut__DOT__scr__v3 
                                    = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                                __VdlyDim0__tb_top__DOT__dut__DOT__scr__v3 
                                    = (0x00003fffU 
                                       & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000022U)));
                                __VdlySet__tb_top__DOT__dut__DOT__scr__v3 = 1U;
                            }
                        }
                    } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000024U)))) {
                        if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                           >> 0x00000023U)))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000022U))))) {
                                __Vfunc_tb_top__DOT__dut__DOT__merge__18__n 
                                    = (0x0000000fU 
                                       & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                          >> 2U));
                                __Vfunc_tb_top__DOT__dut__DOT__merge__18__d 
                                    = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                                __Vfunc_tb_top__DOT__dut__DOT__merge__18__old 
                                    = vlSelfRef.tb_top__DOT__dut__DOT__scr
                                    [(0x00003fffU & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                             >> 0x00000022U)))];
                                vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                                    = ((((0x0000ff00U 
                                          & (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__18__n))
                                               ? (__Vfunc_tb_top__DOT__dut__DOT__merge__18__old 
                                                  >> 0x18U)
                                               : (__Vfunc_tb_top__DOT__dut__DOT__merge__18__d 
                                                  >> 0x18U)) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__18__n))
                                                ? (__Vfunc_tb_top__DOT__dut__DOT__merge__18__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_top__DOT__dut__DOT__merge__18__d 
                                                   >> 0x10U)))) 
                                        << 0x00000010U) 
                                       | ((0x0000ff00U 
                                           & (((2U 
                                                & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__18__n))
                                                ? (__Vfunc_tb_top__DOT__dut__DOT__merge__18__old 
                                                   >> 8U)
                                                : (__Vfunc_tb_top__DOT__dut__DOT__merge__18__d 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & ((1U 
                                                 & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__18__n))
                                                 ? __Vfunc_tb_top__DOT__dut__DOT__merge__18__old
                                                 : __Vfunc_tb_top__DOT__dut__DOT__merge__18__d))));
                                __VdlyVal__tb_top__DOT__dut__DOT__scr__v4 
                                    = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                                __VdlyDim0__tb_top__DOT__dut__DOT__scr__v4 
                                    = (0x00003fffU 
                                       & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000022U)));
                                __VdlySet__tb_top__DOT__dut__DOT__scr__v4 = 1U;
                            }
                        } else if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000022U)))) {
                            __Vfunc_tb_top__DOT__dut__DOT__merge__19__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__dut__DOT__merge__19__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                            __Vfunc_tb_top__DOT__dut__DOT__merge__19__old 
                                = vlSelfRef.tb_top__DOT__dut__DOT__scr
                                [(0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__19__n))
                                         ? (__Vfunc_tb_top__DOT__dut__DOT__merge__19__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__dut__DOT__merge__19__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__19__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__19__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__19__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__19__n))
                                            ? (__Vfunc_tb_top__DOT__dut__DOT__merge__19__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__dut__DOT__merge__19__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__19__n))
                                           ? __Vfunc_tb_top__DOT__dut__DOT__merge__19__old
                                           : __Vfunc_tb_top__DOT__dut__DOT__merge__19__d))));
                            __VdlyVal__tb_top__DOT__dut__DOT__scr__v5 
                                = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                            __VdlyDim0__tb_top__DOT__dut__DOT__scr__v5 
                                = (0x00003fffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__dut__DOT__scr__v5 = 1U;
                        }
                    } else if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                 >> 0x00000023U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000022U))))) {
                            __Vfunc_tb_top__DOT__dut__DOT__merge__20__n 
                                = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                  >> 2U));
                            __Vfunc_tb_top__DOT__dut__DOT__merge__20__d 
                                = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                            __Vfunc_tb_top__DOT__dut__DOT__merge__20__old 
                                = vlSelfRef.tb_top__DOT__dut__DOT__scr
                                [(0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                         >> 0x00000022U)))];
                            vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge 
                                = ((((0x0000ff00U & 
                                      (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__20__n))
                                         ? (__Vfunc_tb_top__DOT__dut__DOT__merge__20__old 
                                            >> 0x18U)
                                         : (__Vfunc_tb_top__DOT__dut__DOT__merge__20__d 
                                            >> 0x18U)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((4U 
                                                      & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__20__n))
                                                      ? 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__20__old 
                                                      >> 0x10U)
                                                      : 
                                                     (__Vfunc_tb_top__DOT__dut__DOT__merge__20__d 
                                                      >> 0x10U)))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (((2U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__20__n))
                                            ? (__Vfunc_tb_top__DOT__dut__DOT__merge__20__old 
                                               >> 8U)
                                            : (__Vfunc_tb_top__DOT__dut__DOT__merge__20__d 
                                               >> 8U)) 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & ((1U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__20__n))
                                           ? __Vfunc_tb_top__DOT__dut__DOT__merge__20__old
                                           : __Vfunc_tb_top__DOT__dut__DOT__merge__20__d))));
                            __VdlyVal__tb_top__DOT__dut__DOT__scr__v6 
                                = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_6__merge;
                            __VdlyDim0__tb_top__DOT__dut__DOT__scr__v6 
                                = (0x00003fffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000022U)));
                            __VdlySet__tb_top__DOT__dut__DOT__scr__v6 = 1U;
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                     >> 1U)))) {
                    __Vfunc_tb_top__DOT__dut__DOT__merge__22__n 
                        = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                          >> 2U));
                    __Vfunc_tb_top__DOT__dut__DOT__merge__22__d 
                        = (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1);
                    __Vfunc_tb_top__DOT__dut__DOT__merge__22__old 
                        = vlSelfRef.tb_top__DOT__dut__DOT__scr
                        [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                 >> 0x00000022U)))];
                    vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_8__merge 
                        = ((((0x0000ff00U & (((8U & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__22__n))
                                               ? (__Vfunc_tb_top__DOT__dut__DOT__merge__22__old 
                                                  >> 0x18U)
                                               : (__Vfunc_tb_top__DOT__dut__DOT__merge__22__d 
                                                  >> 0x18U)) 
                                             << 8U)) 
                             | (0x000000ffU & ((4U 
                                                & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__22__n))
                                                ? (__Vfunc_tb_top__DOT__dut__DOT__merge__22__old 
                                                   >> 0x10U)
                                                : (__Vfunc_tb_top__DOT__dut__DOT__merge__22__d 
                                                   >> 0x10U)))) 
                            << 0x00000010U) | ((0x0000ff00U 
                                                & (((2U 
                                                     & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__22__n))
                                                     ? 
                                                    (__Vfunc_tb_top__DOT__dut__DOT__merge__22__old 
                                                     >> 8U)
                                                     : 
                                                    (__Vfunc_tb_top__DOT__dut__DOT__merge__22__d 
                                                     >> 8U)) 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & ((1U 
                                                      & (IData)(__Vfunc_tb_top__DOT__dut__DOT__merge__22__n))
                                                      ? __Vfunc_tb_top__DOT__dut__DOT__merge__22__old
                                                      : __Vfunc_tb_top__DOT__dut__DOT__merge__22__d))));
                    __VdlyVal__tb_top__DOT__dut__DOT__scr__v7 
                        = vlSelfRef.tb_top__DOT__dut__DOT____VlemCall_8__merge;
                    __VdlyDim0__tb_top__DOT__dut__DOT__scr__v7 
                        = (0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000022U)));
                    __VdlySet__tb_top__DOT__dut__DOT__scr__v7 = 1U;
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__RST_N) {
        __Vdly__tb_top__DOT__cyc = ((IData)(1U) + vlSelfRef.tb_top__DOT__cyc);
        __VdlyMask__tb_top__DOT__cyc = 0xffffffffU;
        if (VL_UNLIKELY(((0U != ((((((((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_12) 
                                       << 0x0000000dU) 
                                      | ((((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_5) 
                                           << 8U) | 
                                          (0x00000080U 
                                           & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_13) 
                                              >> 1U))) 
                                         | ((0x0000007cU 
                                             & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_13) 
                                                << 1U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__PVT__bsc__DOT__BREQ)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & vlSelfRef.tb_top__DOT__dut__DOT__SSHDI))))) 
                                     ^ (((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_9) 
                                         << 0x0000000dU) 
                                        | ((((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_3) 
                                             << 8U) 
                                            | (0x00000080U 
                                               & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_10) 
                                                  >> 1U))) 
                                           | ((0x0000007cU 
                                               & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_10) 
                                                  << 1U)) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & vlSelfRef.tb_top__DOT__ref0__DOT__SSHDI)))))) 
                                    | ((((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_12) 
                                         >> 0x00000013U) 
                                        | ((IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_12 
                                                    >> 0x00000020U)) 
                                           << 0x0000000dU)) 
                                       ^ (((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_9) 
                                           >> 0x00000013U) 
                                          | ((IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_9 
                                                      >> 0x00000020U)) 
                                             << 0x0000000dU)))) 
                                   | (((((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1) 
                                         << 0x00000016U) 
                                        | (((((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                              << 9U) 
                                             | (0x00000100U 
                                                & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7))) 
                                            | ((0x000000fcU 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                   << 2U)) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.RFS) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__bsc__DOT__BGR)))))) 
                                           << 8U)) 
                                       | ((IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_12 
                                                   >> 0x00000020U)) 
                                          >> 0x00000013U)) 
                                      ^ ((((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0) 
                                           << 0x00000016U) 
                                          | (((((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                                << 9U) 
                                               | (0x00000100U 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6))) 
                                              | ((0x000000fcU 
                                                  & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                     << 2U)) 
                                                 | (((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.RFS) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR)))))) 
                                             << 8U)) 
                                         | ((IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_9 
                                                     >> 0x00000020U)) 
                                            >> 0x00000013U)))) 
                                  | ((((0x000000ffU 
                                        & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1) 
                                           >> 0x0000000aU)) 
                                       | (((((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                             << 9U) 
                                            | (0x00000100U 
                                               & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7))) 
                                           | ((0x000000fcU 
                                               & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.RFS) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__bsc__DOT__BGR)))))) 
                                          >> 0x00000018U)) 
                                      | ((0x003fff00U 
                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1) 
                                             >> 0x0000000aU)) 
                                         | ((IData)(
                                                    (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000020U)) 
                                            << 0x00000016U))) 
                                     ^ (((0x000000ffU 
                                          & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0) 
                                             >> 0x0000000aU)) 
                                         | (((((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                               << 9U) 
                                              | (0x00000100U 
                                                 & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6))) 
                                             | ((0x000000fcU 
                                                 & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                    << 2U)) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.RFS) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR)))))) 
                                            >> 0x00000018U)) 
                                        | ((0x003fff00U 
                                            & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0) 
                                               >> 0x0000000aU)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                       >> 0x00000020U)) 
                                              << 0x00000016U))))) 
                                 | (((0x000000ffU & 
                                      ((IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                >> 0x00000020U)) 
                                       >> 0x0000000aU)) 
                                     | (0x003fff00U 
                                        & ((IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                    >> 0x00000020U)) 
                                           >> 0x0000000aU))) 
                                    ^ ((0x000000ffU 
                                        & ((IData)(
                                                   (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                    >> 0x00000020U)) 
                                           >> 0x0000000aU)) 
                                       | (0x003fff00U 
                                          & ((IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                      >> 0x00000020U)) 
                                             >> 0x0000000aU))))))))) {
            VL_WRITEF_NX("MISMATCH %s at clk %0d (t=%0t)\n  ref  MSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b IVEC=%b RFS=%b BGR=%b\n  dut  MSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b IVEC=%b RFS=%b BGR=%b\n  ref  SSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b BREQ=%b\n  dut  SSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b BREQ=%b\nFAIL %s\n",53, 'T',-12
                         , 'S',&(vlSelfRef.tb_top__DOT__name)
                         , '#',32,vlSelfRef.tb_top__DOT__cyc
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',27,(0x07ffffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000020U)))
                         , '#',32,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0)
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                        >> 4U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                >> 3U)), '#',1,(1U 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                                   >> 2U))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                        >> 1U)), '#',1,
                         (1U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                        >> 8U)), '#',4,
                         (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                         >> 2U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                >> 1U)), '#',1,(1U 
                                                & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6))
                         , '#',1,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.RFS)
                         , '#',1,(1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR)))
                         , '#',27,(0x07ffffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000020U)))
                         , '#',32,(IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1)
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                        >> 4U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                >> 3U)), '#',1,(1U 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                                   >> 2U))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                        >> 1U)), '#',1,
                         (1U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                        >> 8U)), '#',4,
                         (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                         >> 2U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                >> 1U)), '#',1,(1U 
                                                & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7))
                         , '#',1,(IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.RFS)
                         , '#',1,(1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__bsc__DOT__BGR)))
                         , '#',27,(0x07ffffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_9 
                                                          >> 0x00000020U)))
                         , '#',32,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_9)
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_3) 
                                        >> 4U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_3) 
                                >> 3U)), '#',1,(1U 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_3) 
                                                   >> 2U))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_3) 
                                        >> 1U)), '#',1,
                         (1U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_3))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_10) 
                                        >> 8U)), '#',4,
                         (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_10) 
                                         >> 2U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__VdfgRegularize_hebeb780c_0_10) 
                                >> 1U)), '#',1,(1U 
                                                & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ)))
                         , '#',27,(0x07ffffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_12 
                                                          >> 0x00000020U)))
                         , '#',32,(IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_12)
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_5) 
                                        >> 4U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_5) 
                                >> 3U)), '#',1,(1U 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_5) 
                                                   >> 2U))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_5) 
                                        >> 1U)), '#',1,
                         (1U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_5))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_13) 
                                        >> 8U)), '#',4,
                         (0x0000000fU & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_13) 
                                         >> 2U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_13) 
                                >> 1U)), '#',1,(1U 
                                                & (~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__PVT__bsc__DOT__BREQ)))
                         , 'S',&(vlSelfRef.tb_top__DOT__name));
            VL_FINISH_MT("tb/tb_top.sv", 49, "");
        }
        if (VL_UNLIKELY((((0U != vlSelfRef.tb_top__DOT__verbose) 
                          & (vlSelfRef.tb_top__DOT__cyc 
                             < vlSelfRef.tb_top__DOT__verbose))))) {
            VL_WRITEF_NX("%0d MSH A=%07h BS=%b CS=%b%b%b%b RW=%b RD=%b DQM=%b DO=%08h DI=%08h WAIT=%b | PC=%08h  SSHres=%b BGR=%b ST=%0d RFS=%b BREQ=%b SPC=%08h\n",20
                         , '#',32,vlSelfRef.tb_top__DOT__cyc
                         , '#',27,(0x07ffffffU & (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000020U)))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                        >> 4U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                >> 3U)), '#',1,(1U 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                                   >> 2U))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                        >> 1U)), '#',1,
                         (1U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))
                         , '#',1,(1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                        >> 8U)), '#',1,
                         (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                >> 1U)), '#',4,(0x0000000fU 
                                                & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                   >> 2U))
                         , '#',32,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0)
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.DI
                         , '#',1,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.WAIT_N)
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__PC
                         , '#',1,(IData)(vlSelfRef.tb_top__DOT__ref0__DOT__SSHRES_N)
                         , '#',1,(1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR)))
                         , '#',4,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.bsc__DOT__BUS_STATE)
                         , '#',1,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.RFS
                         , '#',1,(1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ)))
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC);
        }
        if (VL_UNLIKELY((((((0U != vlSelfRef.tb_top__DOT__watch_hi) 
                            & (~ (IData)(vlSelfRef.tb_top__DOT__watch_hit))) 
                           & (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__PC 
                              >= vlSelfRef.tb_top__DOT__watch_lo)) 
                          & (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__PC 
                             < vlSelfRef.tb_top__DOT__watch_hi))))) {
            VL_WRITEF_NX("WATCH hit at clk %0d: MSH PC=%08h SR=%08h (SSH PC=%08h)\n",4
                         , '#',32,vlSelfRef.tb_top__DOT__cyc
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__PC
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__SR
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC);
            vlSelfRef.tb_top__DOT__watch_hit = 1U;
        }
        if (VL_UNLIKELY((((((0U != vlSelfRef.tb_top__DOT__watch_hi) 
                            & (~ (IData)(vlSelfRef.tb_top__DOT__watch_hit_s))) 
                           & (vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC 
                              >= vlSelfRef.tb_top__DOT__watch_lo)) 
                          & (vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC 
                             < vlSelfRef.tb_top__DOT__watch_hi))))) {
            VL_WRITEF_NX("WATCH hit at clk %0d: SSH PC=%08h SR=%08h SP=%08h stacked PC=%08h SR=%08h\n",6
                         , '#',32,vlSelfRef.tb_top__DOT__cyc
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__SR
                         , '#',32,vlSelfRef.tb_top__DOT__ref0__DOT__wramh[0U]
                         , '#',32,vlSelfRef.tb_top__DOT__ref0__DOT__wramh[61436U]
                         , '#',32,vlSelfRef.tb_top__DOT__ref0__DOT__wramh[61440U]);
            vlSelfRef.tb_top__DOT__watch_hit_s = 1U;
        }
        if (VL_UNLIKELY(((((VL_TESTPLUSARGS_I("intdbg"s) 
                            && (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.INT_ACK)) 
                           & (~ (IData)(vlSelfRef.tb_top__DOT__ack_prev))) 
                          & VL_GTS_III(32, 8U, vlSelfRef.tb_top__DOT__n_ack))))) {
            vlSelfRef.tb_top__DOT__n_ack = ((IData)(1U) 
                                            + vlSelfRef.tb_top__DOT__n_ack);
            VL_WRITEF_NX("INT_ACK clk %0d: SSH LVL=%0d VEC=%02h PC=%08h\n",4
                         , '#',32,vlSelfRef.tb_top__DOT__cyc
                         , '#',4,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.INT_LVL)
                         , '#',8,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.INT_VEC
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC);
        }
        __Vdly__tb_top__DOT__seen_m = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__seen_m) 
                                          | ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.bsc__DOT__BUS_STATE))));
        __Vdly__tb_top__DOT__seen_s = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__seen_s) 
                                          | ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.bsc__DOT__BUS_STATE))));
        vlSelfRef.tb_top__DOT__ack_prev = vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.INT_ACK;
        if ((1U & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                      >> 4U)))) {
            if (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__PVT__bsc__DOT__BGR) {
                __Vdly__tb_top__DOT__nown_s = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__nown_s);
                __VdlyMask__tb_top__DOT__nown_s = 0xffffffffU;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                          >> 8U)))) {
                __Vdly__tb_top__DOT__nwrite = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__nwrite);
                __VdlyMask__tb_top__DOT__nwrite = 0xffffffffU;
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6)))) {
            __Vdly__tb_top__DOT__nvec = ((IData)(1U) 
                                         + vlSelfRef.tb_top__DOT__nvec);
            __VdlyMask__tb_top__DOT__nvec = 0xffffffffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_top__DOT__cyc 
                          >= vlSelfRef.tb_top__DOT__ncycles)))) {
            vlSelfRef.tb_top__DOT__chk_r = 0U;
            vlSelfRef.tb_top__DOT__chk_d = 0U;
            vlSelfRef.tb_top__DOT__nz = 0U;
            vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00010000U, vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i)) {
                vlSelfRef.tb_top__DOT__chk_r = (((IData)(0x00000021U) 
                                                 * vlSelfRef.tb_top__DOT__chk_r) 
                                                + vlSelfRef.tb_top__DOT__ref0__DOT__wramh
                                                [(0x0000ffffU 
                                                  & vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i)]);
                vlSelfRef.tb_top__DOT__chk_d = (((IData)(0x00000021U) 
                                                 * vlSelfRef.tb_top__DOT__chk_d) 
                                                + vlSelfRef.tb_top__DOT__dut__DOT__wramh
                                                [(0x0000ffffU 
                                                  & vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i)]);
                if ((0U != vlSelfRef.tb_top__DOT__ref0__DOT__wramh
                     [(0x0000ffffU & vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i)])) {
                    vlSelfRef.tb_top__DOT__nz = ((IData)(1U) 
                                                 + vlSelfRef.tb_top__DOT__nz);
                }
                vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__unnamedblk1__DOT__i);
            }
            vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00004000U, vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)) {
                vlSelfRef.tb_top__DOT__chk_r = (((((IData)(0x00000021U) 
                                                   * vlSelfRef.tb_top__DOT__chk_r) 
                                                  + vlSelfRef.tb_top__DOT__ref0__DOT__wraml
                                                  [
                                                  (0x00003fffU 
                                                   & vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)]) 
                                                 + vlSelfRef.tb_top__DOT__ref0__DOT__scr
                                                 [(0x00003fffU 
                                                   & vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)]) 
                                                + vlSelfRef.tb_top__DOT__ref0__DOT__abus
                                                [(0x00003fffU 
                                                  & vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)]);
                vlSelfRef.tb_top__DOT__chk_d = (((((IData)(0x00000021U) 
                                                   * vlSelfRef.tb_top__DOT__chk_d) 
                                                  + vlSelfRef.tb_top__DOT__dut__DOT__wraml
                                                  [
                                                  (0x00003fffU 
                                                   & vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)]) 
                                                 + vlSelfRef.tb_top__DOT__dut__DOT__scr
                                                 [(0x00003fffU 
                                                   & vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)]) 
                                                + vlSelfRef.tb_top__DOT__dut__DOT__abus
                                                [(0x00003fffU 
                                                  & vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i)]);
                vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i);
            }
            if (VL_UNLIKELY(((vlSelfRef.tb_top__DOT__chk_r 
                              != vlSelfRef.tb_top__DOT__chk_d)))) {
                VL_WRITEF_NX("MISMATCH memory contents %s\nFAIL %s\n",2
                             , 'S',&(vlSelfRef.tb_top__DOT__name)
                             , 'S',&(vlSelfRef.tb_top__DOT__name));
                VL_FINISH_MT("tb/tb_top.sv", 84, "");
            }
            vlSelfRef.tb_top__DOT____VlemExpr_5 = VL_VALUEPLUSARGS_INI(32, "peek=%h"s, 
                                                                       vlSelfRef.tb_top__DOT__peek);
            if (VL_UNLIKELY((vlSelfRef.tb_top__DOT____VlemExpr_5))) {
                VL_WRITEF_NX("  peek wramh[%08h]=%08h\n",2
                             , '#',32,vlSelfRef.tb_top__DOT__peek
                             , '#',32,vlSelfRef.tb_top__DOT__ref0__DOT__wramh
                             [(0x0000ffffU & (vlSelfRef.tb_top__DOT__peek 
                                              >> 2U))]);
            }
            vlSelfRef.tb_top__DOT____VlemExpr_6 = VL_VALUEPLUSARGS_INI(32, "peek2=%h"s, 
                                                                       vlSelfRef.tb_top__DOT__peek);
            if (VL_UNLIKELY((vlSelfRef.tb_top__DOT____VlemExpr_6))) {
                VL_WRITEF_NX("  peek wramh[%08h]=%08h\n",2
                             , '#',32,vlSelfRef.tb_top__DOT__peek
                             , '#',32,vlSelfRef.tb_top__DOT__ref0__DOT__wramh
                             [(0x0000ffffU & (vlSelfRef.tb_top__DOT__peek 
                                              >> 2U))]);
            }
            if (VL_UNLIKELY((VL_TESTPLUSARGS_I("frtdbg"s)))) {
                VL_WRITEF_NX("  MSH frt: FRC=%h OCRA=%h OCRB=%h TIER=%h FTCSR=%h TCR=%h TOCR=%h | IPRB=%h VCRC=%h SR=%h\n",10
                             , '#',16,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__FRC
                             , '#',16,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__OCRA)
                             , '#',16,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__OCRB
                             , '#',8,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__TIER)
                             , '#',8,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__FTCSR
                             , '#',8,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__TCR)
                             , '#',8,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.frt__DOT__TOCR
                             , '#',16,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.intc__DOT__IPRB)
                             , '#',16,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.intc__DOT__VCRC
                             , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__SR);
                VL_WRITEF_NX("  SSH frt: FRC=%h OCRA=%h OCRB=%h TIER=%h FTCSR=%h TCR=%h TOCR=%h ICR=%h | IPRB=%h VCRC=%h SR=%h\n",11
                             , '#',16,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__FRC
                             , '#',16,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__OCRA)
                             , '#',16,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__OCRB
                             , '#',8,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__TIER)
                             , '#',8,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__FTCSR
                             , '#',8,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__TCR)
                             , '#',8,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__TOCR
                             , '#',16,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.frt__DOT__ICR)
                             , '#',16,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.intc__DOT__IPRB
                             , '#',16,(IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.intc__DOT__VCRC)
                             , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__SR);
            }
            VL_WRITEF_NX("  PC msh=%08h ssh=%08h  wramh nonzero words=%0d  mem-checksum=%08h\n  BSC states seen (T0,T1,T2,TW,TRAS,TWCAS,TRCAS,TRD,TWNOP,TRFS1,TRFS2,TV1,TV2 from the right): msh=%b ssh=%b\nPASS %s: %0d clk compared; bus-active clk: total-ssh-own=%0d, writes=%0d, vector-fetch clk=%0d, SSH released=%0d\n",12
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.core__DOT__PC
                         , '#',32,vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.core__DOT__PC
                         , '~',32,vlSelfRef.tb_top__DOT__nz
                         , '#',32,vlSelfRef.tb_top__DOT__chk_r
                         , '#',13,(0x00001fffU & (IData)(vlSelfRef.tb_top__DOT__seen_m))
                         , '#',13,(0x00001fffU & (IData)(vlSelfRef.tb_top__DOT__seen_s))
                         , 'S',&(vlSelfRef.tb_top__DOT__name)
                         , '#',32,vlSelfRef.tb_top__DOT__cyc
                         , '#',32,vlSelfRef.tb_top__DOT__nown_s
                         , '#',32,vlSelfRef.tb_top__DOT__nwrite
                         , '#',32,vlSelfRef.tb_top__DOT__nvec
                         , '#',1,(IData)(vlSelfRef.tb_top__DOT__ref0__DOT__SSHRES_N));
            VL_FINISH_MT("tb/tb_top.sv", 92, "");
        }
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000026U))))) {
                            if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                               >> 0x00000025U)))) {
                                if ((1U & (~ (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000024U))))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000023U))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                              >> 0x00000022U))))) {
                                            vlSelfRef.tb_top__DOT__dut__DOT__wait_mode_r 
                                                = (7U 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                    >> 8U)) & (~ (0x0000000fU == (0x0000000fU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
               & (~ (0x0000000fU == (0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                      >> 2U))))))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
            if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                          >> 0x00000027U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                              >> 0x00000026U))))) {
                            if ((1U & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                               >> 0x00000025U)))) {
                                if ((1U & (~ (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                      >> 0x00000024U))))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000023U))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                              >> 0x00000022U))))) {
                                            vlSelfRef.tb_top__DOT__ref0__DOT__wait_mode_r 
                                                = (7U 
                                                   & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__RST_N)))) {
        vlSelfRef.tb_top__DOT__ref0__DOT__wait_mode_r 
            = (7U & vlSelfRef.tb_top__DOT__ref0__DOT__wait_mode);
        vlSelfRef.tb_top__DOT__dut__DOT__wait_mode_r 
            = (7U & vlSelfRef.tb_top__DOT__dut__DOT__wait_mode);
    }
    vlSelfRef.tb_top__DOT__dut__DOT__ageS = __Vdly__tb_top__DOT__dut__DOT__ageS;
    vlSelfRef.tb_top__DOT__dut__DOT__lvlS = __Vdly__tb_top__DOT__dut__DOT__lvlS;
    vlSelfRef.tb_top__DOT__dut__DOT__ageM = __Vdly__tb_top__DOT__dut__DOT__ageM;
    vlSelfRef.tb_top__DOT__dut__DOT__lvlM = __Vdly__tb_top__DOT__dut__DOT__lvlM;
    vlSelfRef.tb_top__DOT__dut__DOT__lfsr = __Vdly__tb_top__DOT__dut__DOT__lfsr;
    vlSelfRef.tb_top__DOT__ref0__DOT__ageS = __Vdly__tb_top__DOT__ref0__DOT__ageS;
    vlSelfRef.tb_top__DOT__ref0__DOT__lvlS = __Vdly__tb_top__DOT__ref0__DOT__lvlS;
    vlSelfRef.tb_top__DOT__ref0__DOT__ageM = __Vdly__tb_top__DOT__ref0__DOT__ageM;
    vlSelfRef.tb_top__DOT__ref0__DOT__lvlM = __Vdly__tb_top__DOT__ref0__DOT__lvlM;
    vlSelfRef.tb_top__DOT__ref0__DOT__lfsr = __Vdly__tb_top__DOT__ref0__DOT__lfsr;
    vlSelfRef.tb_top__DOT__seen_m = __Vdly__tb_top__DOT__seen_m;
    vlSelfRef.tb_top__DOT__seen_s = __Vdly__tb_top__DOT__seen_s;
    vlSelfRef.tb_top__DOT__cyc = ((__Vdly__tb_top__DOT__cyc 
                                   & __VdlyMask__tb_top__DOT__cyc) 
                                  | (vlSelfRef.tb_top__DOT__cyc 
                                     & (~ __VdlyMask__tb_top__DOT__cyc)));
    __VdlyMask__tb_top__DOT__cyc = 0U;
    vlSelfRef.tb_top__DOT__nown_s = ((__Vdly__tb_top__DOT__nown_s 
                                      & __VdlyMask__tb_top__DOT__nown_s) 
                                     | (vlSelfRef.tb_top__DOT__nown_s 
                                        & (~ __VdlyMask__tb_top__DOT__nown_s)));
    __VdlyMask__tb_top__DOT__nown_s = 0U;
    vlSelfRef.tb_top__DOT__nwrite = ((__Vdly__tb_top__DOT__nwrite 
                                      & __VdlyMask__tb_top__DOT__nwrite) 
                                     | (vlSelfRef.tb_top__DOT__nwrite 
                                        & (~ __VdlyMask__tb_top__DOT__nwrite)));
    __VdlyMask__tb_top__DOT__nwrite = 0U;
    vlSelfRef.tb_top__DOT__nvec = ((__Vdly__tb_top__DOT__nvec 
                                    & __VdlyMask__tb_top__DOT__nvec) 
                                   | (vlSelfRef.tb_top__DOT__nvec 
                                      & (~ __VdlyMask__tb_top__DOT__nvec)));
    __VdlyMask__tb_top__DOT__nvec = 0U;
    if (__VdlySet__tb_top__DOT__ref0__DOT__wramh__v0) {
        vlSelfRef.tb_top__DOT__ref0__DOT__wramh[__VdlyDim0__tb_top__DOT__ref0__DOT__wramh__v0] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__wramh__v0;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__wramh__v0) {
        vlSelfRef.tb_top__DOT__dut__DOT__wramh[__VdlyDim0__tb_top__DOT__dut__DOT__wramh__v0] 
            = __VdlyVal__tb_top__DOT__dut__DOT__wramh__v0;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__abus__v0) {
        vlSelfRef.tb_top__DOT__ref0__DOT__abus[__VdlyDim0__tb_top__DOT__ref0__DOT__abus__v0] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__abus__v0;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__abus__v0) {
        vlSelfRef.tb_top__DOT__dut__DOT__abus[__VdlyDim0__tb_top__DOT__dut__DOT__abus__v0] 
            = __VdlyVal__tb_top__DOT__dut__DOT__abus__v0;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v0) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v0] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v0;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v1) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v1] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v1;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v2) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v2] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v2;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v3) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v3] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v3;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v4) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v4] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v4;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v5) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v5] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v5;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v6) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v6] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v6;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__scr__v7) {
        vlSelfRef.tb_top__DOT__ref0__DOT__scr[__VdlyDim0__tb_top__DOT__ref0__DOT__scr__v7] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__scr__v7;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v0) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v0] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v0;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v1) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v1] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v1;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v2) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v2] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v2;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v3) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v3] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v3;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v4) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v4] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v4;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v5) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v5] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v5;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v6) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v6] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v6;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__scr__v7) {
        vlSelfRef.tb_top__DOT__dut__DOT__scr[__VdlyDim0__tb_top__DOT__dut__DOT__scr__v7] 
            = __VdlyVal__tb_top__DOT__dut__DOT__scr__v7;
    }
    if (__VdlySet__tb_top__DOT__ref0__DOT__wraml__v0) {
        vlSelfRef.tb_top__DOT__ref0__DOT__wraml[__VdlyDim0__tb_top__DOT__ref0__DOT__wraml__v0] 
            = __VdlyVal__tb_top__DOT__ref0__DOT__wraml__v0;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__wraml__v0) {
        vlSelfRef.tb_top__DOT__dut__DOT__wraml[__VdlyDim0__tb_top__DOT__dut__DOT__wraml__v0] 
            = __VdlyVal__tb_top__DOT__dut__DOT__wraml__v0;
    }
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__0(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__1(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__1(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__2(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__3(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__3(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__2(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__0(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__0(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__4(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__3(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__4(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__3(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__5(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__5(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__4(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__4(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__6(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__5(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__6(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__5(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__1(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__SSH__1(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__7(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__7(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__2(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__3(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__3(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);
void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__SSH__2(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);

void Vtb_top___024root___eval_body__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_body__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__cyc 
                = vlSelfRef.tb_top__DOT__ref0__DOT__cyc;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__cyc 
                = vlSelfRef.tb_top__DOT__dut__DOT__cyc;
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__MCLK_DIV 
                = vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV;
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__MCLK_DIV 
                = vlSelfRef.tb_top__DOT__ref0__DOT__MCLK_DIV;
            if (vlSelfRef.tb_top__DOT__RST_N) {
                vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__cyc 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__ref0__DOT__cyc);
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__cyc 
                    = ((IData)(1U) + vlSelfRef.tb_top__DOT__dut__DOT__cyc);
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__cyc = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__cyc = 0U;
            }
            vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__MCLK_DIV 
                = ((IData)(vlSelfRef.tb_top__DOT__RST_N) 
                   && (1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV))));
            vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__MCLK_DIV 
                = ((IData)(vlSelfRef.tb_top__DOT__RST_N) 
                   && (1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__MCLK_DIV))));
        }
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__1((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__1((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__1((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__1((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__2((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__2((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__3((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.tb_top__DOT__dut__DOT__nmi_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__nmi_cnt;
            vlSelfRef.tb_top__DOT__dut__DOT__mfti_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__mfti_cnt;
            vlSelfRef.tb_top__DOT__dut__DOT__snmi_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__snmi_cnt;
            vlSelfRef.tb_top__DOT__dut__DOT__sfti_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sfti_cnt;
            vlSelfRef.tb_top__DOT__ref0__DOT__nmi_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__nmi_cnt;
            vlSelfRef.tb_top__DOT__ref0__DOT__mfti_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__mfti_cnt;
            vlSelfRef.tb_top__DOT__ref0__DOT__snmi_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__snmi_cnt;
            vlSelfRef.tb_top__DOT__ref0__DOT__sfti_cnt 
                = vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__sfti_cnt;
        }
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__2((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__3((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__2((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__0((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__4((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__3((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__4((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__3((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.tb_top__DOT__dut__DOT__MCLK_DIV 
                = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__MCLK_DIV;
            vlSelfRef.tb_top__DOT__ref0__DOT__MCLK_DIV 
                = vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__MCLK_DIV;
            if (vlSelfRef.tb_top__DOT__RST_N) {
                if ((0x00000020U < vlSelfRef.tb_top__DOT__dut__DOT__cyc)) {
                    vlSelfRef.tb_top__DOT__dut__DOT__MSHRES_N = 1U;
                }
                if (vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel) {
                    if ((0x28U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel_dly))) {
                        vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel_dly 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel_dly)));
                    } else {
                        vlSelfRef.tb_top__DOT__dut__DOT__SSHRES_N = 1U;
                    }
                }
                if ((0x00000020U < vlSelfRef.tb_top__DOT__ref0__DOT__cyc)) {
                    vlSelfRef.tb_top__DOT__ref0__DOT__MSHRES_N = 1U;
                }
                if (vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel) {
                    if ((0x28U != (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel_dly))) {
                        vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel_dly 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel_dly)));
                    } else {
                        vlSelfRef.tb_top__DOT__ref0__DOT__SSHRES_N = 1U;
                    }
                }
            } else {
                vlSelfRef.tb_top__DOT__dut__DOT__MSHRES_N = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__SSHRES_N = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel_dly = 0U;
                vlSelfRef.tb_top__DOT__ref0__DOT__MSHRES_N = 0U;
                vlSelfRef.tb_top__DOT__ref0__DOT__SSHRES_N = 0U;
                vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel_dly = 0U;
            }
            vlSelfRef.tb_top__DOT__dut__DOT__cyc = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__cyc;
            vlSelfRef.tb_top__DOT__ref0__DOT__cyc = vlSelfRef.__Vdly__tb_top__DOT__ref0__DOT__cyc;
        }
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__5((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__5((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__4((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__4((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__6((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__5((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__6((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__SSH__5((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                            >> 8U)) & (~ (0x0000000fU 
                                          == (0x0000000fU 
                                              & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))))) 
                       & (~ (0x0000000fU == (0x0000000fU 
                                             & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_7) 
                                                >> 2U))))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_wraml)))) {
                    if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4))) {
                        if (vlSelfRef.tb_top__DOT__dut__DOT__tbr) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                  >> 0x00000027U))))) {
                                if ((1U & (~ (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                      >> 0x00000026U))))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                          >> 0x00000025U))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                              >> 0x00000024U))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                               >> 0x00000023U))))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                                                >> 0x00000022U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))) {
                                                        vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                            >> 8U)) & (~ (0x0000000fU 
                                          == (0x0000000fU 
                                              & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))))) 
                       & (~ (0x0000000fU == (0x0000000fU 
                                             & ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_6) 
                                                >> 2U))))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml)))) {
                    if ((4U & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2))) {
                        if (vlSelfRef.tb_top__DOT__ref0__DOT__tbr) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                  >> 0x00000027U))))) {
                                if ((1U & (~ (IData)(
                                                     (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                      >> 0x00000026U))))) {
                                    if ((1U & (~ (IData)(
                                                         (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                          >> 0x00000025U))))) {
                                        if ((1U & (~ (IData)(
                                                             (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                              >> 0x00000024U))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                               >> 0x00000023U))))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                                                >> 0x00000022U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))) {
                                                        vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__RST_N)))) {
                vlSelfRef.tb_top__DOT__dut__DOT__ssh_rel = 0U;
                vlSelfRef.tb_top__DOT__ref0__DOT__ssh_rel = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__1((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__1((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__1((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__SSH__1((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__7((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__7((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb_top__DOT__dut__DOT__tbr = (IData)(
                                                           ((~ 
                                                             ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                                                              >> 1U)) 
                                                            & (0x0000f00000000000ULL 
                                                               == 
                                                               (0x0000f00000000000ULL 
                                                                & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))));
            vlSelfRef.tb_top__DOT__dut__DOT__is_wraml 
                = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                               >> 3U)) & (0x0020000000000000ULL 
                                          == (0x01f0000000000000ULL 
                                              & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))));
            vlSelfRef.tb_top__DOT__dut__DOT__is_rom 
                = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_4) 
                               >> 3U)) & (0ULL == (0x01ff000000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1))));
            vlSelfRef.tb_top__DOT__ref0__DOT__tbr = (IData)(
                                                            ((~ 
                                                              ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                                                               >> 1U)) 
                                                             & (0x0000f00000000000ULL 
                                                                == 
                                                                (0x0000f00000000000ULL 
                                                                 & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))));
            vlSelfRef.tb_top__DOT__ref0__DOT__is_wraml 
                = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                               >> 3U)) & (0x0020000000000000ULL 
                                          == (0x01f0000000000000ULL 
                                              & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))));
            vlSelfRef.tb_top__DOT__ref0__DOT__is_rom 
                = (IData)(((~ ((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_2) 
                               >> 3U)) & (0ULL == (0x01ff000000000000ULL 
                                                   & vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0))));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__2((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__2((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_top__DOT__dut__DOT__cs0w = 
                ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__is_rom)
                  ? vlSelfRef.tb_top__DOT__dut__DOT__rom
                 [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000022U)))]
                  : vlSelfRef.tb_top__DOT__dut__DOT__wraml
                 [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000022U)))]);
            vlSelfRef.tb_top__DOT__ref0__DOT__cs0w 
                = ((IData)(vlSelfRef.tb_top__DOT__ref0__DOT__is_rom)
                    ? vlSelfRef.tb_top__DOT__ref0__DOT__rom
                   [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                            >> 0x00000022U)))]
                    : vlSelfRef.tb_top__DOT__ref0__DOT__wraml
                   [(0x00003fffU & (IData)((vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.__VdfgRegularize_hebeb780c_0_0 
                                            >> 0x00000022U)))]);
        }
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__3((&vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__3((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH));
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.tb_top__DOT__dut__DOT__SSHDI 
                = vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.DI;
            vlSelfRef.tb_top__DOT__ref0__DOT__SSHDI 
                = vlSymsp->TOP__tb_top__DOT__ref0__DOT__MSH.DI;
        }
        Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__2((&vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH));
        Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__SSH__2((&vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH));
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
