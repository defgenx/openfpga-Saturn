// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__SSH__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__IDI = ((IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS)
                             ? 0U : vlSymsp->TOP.tb_top__DOT__dut__DOT__SSHDI);
}
