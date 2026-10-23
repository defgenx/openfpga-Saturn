// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdump_dec.h for the primary calling header

#include "Vdump_dec__pch.h"

VL_ATTR_COLD void Vdump_dec_SH2_PKG___eval_static__TOP__SH2_PKG(Vdump_dec_SH2_PKG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdump_dec_SH2_PKG___eval_static__TOP__SH2_PKG\n"); );
    Vdump_dec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ZERO_RESET_W(80, vlSelfRef.Decode__Vstatic__DECI);
    vlSelfRef.Decode__Vstatic__RAN = 0U;
    vlSelfRef.Decode__Vstatic__RBN = 0U;
    vlSelfRef.Decode__Vstatic__BC = 0U;
}
