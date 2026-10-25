// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdump_dec.h for the primary calling header

#include "Vdump_dec__pch.h"

void Vdump_dec___024root___eval_sample(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_sample\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdump_dec___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdump_dec___024root___eval_ico(Vdump_dec___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_ico\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdump_dec___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

bool Vdump_dec___024root___eval_act(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_act\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdump_dec___024root___eval_inact(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_inact\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdump_dec___024root___eval_nba(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_nba\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdump_dec___024root___eval_obs(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_obs\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdump_dec___024root___eval_react(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_react\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vdump_dec___024root___eval_postponed(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_postponed\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vdump_dec___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___trigger_anySet__ico\n"); );
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

#ifdef VL_DEBUG
void Vdump_dec___024root___eval_debug_assertions(Vdump_dec___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdump_dec___024root___eval_debug_assertions\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
