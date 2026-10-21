// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_top__DOT__u_dut__DOT____VlemCall_5__RxScreenOver;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT____VlemCall_4__RxScreenOver;
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
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP = 0;
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
    CData/*1:0*/ __Vfunc_RxScreenOver__18__RxOVR;
    __Vfunc_RxScreenOver__18__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__18__RxOFFX;
    __Vfunc_RxScreenOver__18__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__18__RxOFFY;
    __Vfunc_RxScreenOver__18__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__18__RxPLSZ;
    __Vfunc_RxScreenOver__18__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__18__RxBMSZ;
    __Vfunc_RxScreenOver__18__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__18__RxBMEN;
    __Vfunc_RxScreenOver__18__RxBMEN = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__19__RxOVR;
    __Vfunc_RxScreenOver__19__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__19__RxOFFX;
    __Vfunc_RxScreenOver__19__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__19__RxOFFY;
    __Vfunc_RxScreenOver__19__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__19__RxPLSZ;
    __Vfunc_RxScreenOver__19__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__19__RxBMSZ;
    __Vfunc_RxScreenOver__19__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__19__RxBMEN;
    __Vfunc_RxScreenOver__19__RxBMEN = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
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
    CData/*0:0*/ TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res = 0;
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
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__AxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1))) 
            & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
               >> 8U)) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__BxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1))) 
            & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
               >> 9U)) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LS_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LW 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LW_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RPA 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RPB 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RCTA 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RCTB 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__R0RP 
        = ((2U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
                         >> 0x00000010U))) ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__R0RPMSB)
            : vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[3U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RP_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__BS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LN 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxX[0U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxX[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxX[1U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxX[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxY[0U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxY[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxY[1U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxY[1U] 
           >> 0x00000010U);
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
    vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR = 0U;
    if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH) 
         & (((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
               .__PVT__LZMX) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                   >> 2U))) & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                               >> 0x00000010U)) 
            | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                  .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                  .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                 .__PVT__LZMX) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                  >> 2U)) & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                             >> 0x00000011U))))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR
            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                    >> 2U))];
    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH) 
                & (vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[0U] 
                   | vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[1U]))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR
            [vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS];
    } else if ((((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                      >> 0x00000014U)) & (IData)((0x00010000U 
                                                  != 
                                                  (0x00030000U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])))) 
                 | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH) 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                        >> 0x00000014U)) & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x00030000U 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U]))))) 
                | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                    | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH)) 
                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                      >> 0x00000015U)))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RxRP_ADDR;
    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH) 
                & (IData)((0U != (0x00300000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTA_ADDR;
    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH) 
                & (IData)((0U != (0x00300000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTB_ADDR;
    } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__BS_ADDR;
    } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__LN_ADDR;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (IData)(
                                                        (((4U 
                                                           == 
                                                           (6U 
                                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)) 
                                                         & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF8 = (((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4)) 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4))) 
                                                 & ((1U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                    .__PVT__ZMHF));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF8 = (((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4)) 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4))) 
                                                 & ((1U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                    .__PVT__ZMHF));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0xffffc007U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxX[0U]) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U] = 
        ((0x007fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[0U]) << 0x00000017U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0xfffffffcU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxY[0U] >> 9U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0xfe003fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxX[1U]) << 0x0000000eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0xffffe003U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[1U]) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0x01ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxX[2U]) << 0x00000019U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U] = 
        ((0x00007ff0U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U]) 
         | (0x00007fffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxX[2U] >> 7U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0xff001fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[2U]) << 0x0000000dU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U] = 
        ((0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U]) 
         | (0x00007fffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxX[3U]) 
                           << 4U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0x00ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[3U]) << 0x00000018U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0xfffffff8U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxY[3U] >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0x7fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxX[0U] << 0x0000001fU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U] = 
        ((0xfffff800U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U]) 
         | (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxX[0U] >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0xfff8007fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (0x0007ff80U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxY[0U] << 7U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffff01fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00000fe0U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                           >> 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffffefU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00000010U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                           >> 0x0000001aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffff7U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                  >> 0x0000001aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffffbU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                  >> 0x0000001aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffffeU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U] = 
        ((0xff8007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U]) 
         | (0x007ff800U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxX[1U] << 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0x8007ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (0x7ff80000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxY[1U] << 0x00000013U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffc07fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x003f8000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffbfffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00004000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffdfffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00002000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffefffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00001000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffffdU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[1U]) 
            << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0xffffffbfU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__R0RP << 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0x01ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0xfe000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           << 9U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfeffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x01000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           >> 6U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xff7fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00800000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           >> 6U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffbfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00400000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           >> 6U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffc07U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x000003f8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                           >> 0x0000000dU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffffbU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                  >> 0x0000001cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffffdU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                  >> 0x0000001cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffffeU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                  >> 0x0000001cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfff01fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x000fe000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffffefffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00001000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 0x00000012U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffff7ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00000800U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 0x00000012U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffbffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00000400U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 0x00000012U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xc07fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x3f800000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           << 7U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffbfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00400000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           >> 8U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffdfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00200000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           >> 8U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffefffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00100000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           >> 8U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xffffff01U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x000000feU & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                           >> 0x0000000fU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffffeU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                  >> 0x0000001eU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0x7fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x80000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                           << 2U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xbfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x40000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                           << 2U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffc07ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x0003f800U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 5U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffbffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00000400U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 0x00000014U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffdffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00000200U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 0x00000014U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffeffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00000100U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 0x00000014U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xf01fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x0fe00000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           << 5U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xffefffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00100000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           >> 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfff7ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00080000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           >> 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffbffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00040000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           >> 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0x7fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x80000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U] 
                           << 0x0000000fU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0xffffffc0U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (0x0000003fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U] 
                           >> 0x00000011U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xbfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x40000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xdfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x20000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xefffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x10000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA0CH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA1CH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB0CH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB1CH;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__R0RP;
    __Vfunc_RxScreenOver__18__RxBMEN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__18__RxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__18__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__18__RxOFFY = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxY[tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__18__RxOFFX = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxX[tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__18__RxOVR = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__18__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__18__RxBMEN) {
        if (__Vfunc_RxScreenOver__18__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__18__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__18__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__18__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__18__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__18__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_dut__DOT____VlemCall_4__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[0U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_4__RxScreenOver;
    __Vfunc_RxScreenOver__19__RxBMEN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__19__RxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__19__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__19__RxOFFY = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxY[1U];
    __Vfunc_RxScreenOver__19__RxOFFX = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxX[1U];
    __Vfunc_RxScreenOver__19__RxOVR = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__19__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__19__RxBMEN) {
        if (__Vfunc_RxScreenOver__19__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__19__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__19__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__19__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__19__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__19__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_dut__DOT____VlemCall_5__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[1U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_5__RxScreenOver;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA0PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA1PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB0PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB1PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB1PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB1CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB1CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB1PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB1CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxB1CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA1PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA1CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxA1CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB0PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB0CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxB0CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA0PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA0CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA0CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA0PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA0CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxA0CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D2 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4)
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                 >> 0x0000000dU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF8)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000cU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF8))
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                 >> 0x0000000cU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000dU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D3 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4)
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                 >> 0x0000000dU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF8)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000cU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF8))
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                 >> 0x0000000cU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000dU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC = 0U;
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    __VdfgRegularize_hebeb780c_0_8 = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                            | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                  | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA;
    __VdfgRegularize_hebeb780c_0_7 = ((2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))) 
                                              >> 1U) 
                                             << 1U)) 
                                      | (IData)(__VdfgRegularize_hebeb780c_0_8));
    __VdfgRegularize_hebeb780c_0_1 = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_62 = (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U] 
                                                    >> 2U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U] 
                                                    >> 2U));
    __VdfgRegularize_hebeb780c_0_66 = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                             [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL] 
                                             >> 1U));
    __VdfgRegularize_hebeb780c_0_0 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL]);
    __VdfgRegularize_hebeb780c_0_6 = ((4U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))) 
                                              >> 2U) 
                                             << 2U)) 
                                      | (IData)(__VdfgRegularize_hebeb780c_0_7));
    tb_top__DOT__u_dut__DOT__R_CSET = (1U & ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                >> 6U)));
    tb_top__DOT__u_dut__DOT__R_PSET = ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__R0RP);
    tb_top__DOT__u_dut__DOT__N_PCNT = ((IData)(__VdfgRegularize_hebeb780c_0_66)
                                        ? 0U : vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT
                                       [(1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                         [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])]);
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
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNINC = ((8U 
                                                   & (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))) 
                                                       >> 3U) 
                                                      << 3U)) 
                                                  | (IData)(__VdfgRegularize_hebeb780c_0_6));
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( CE_R)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( CE_F)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( RES_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( DI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( CS_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( AD_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( DTEN_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( REQ_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( FBDI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( PAL)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( EXLAT_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( SCRN_EN)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( DBG_EXT)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( r_RA0_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( r_RA1_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( r_RB0_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( r_RB1_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( d_RA0_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( d_RA1_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( d_RB0_Q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( d_RB1_Q)\n");
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
    vlSelf->CLK = 0;
    vlSelf->RST_N = 0;
    vlSelf->CE_R = 0;
    vlSelf->CE_F = 0;
    vlSelf->RES_N = 0;
    vlSelf->DI = 0;
    vlSelf->CS_N = 0;
    vlSelf->AD_N = 0;
    vlSelf->DTEN_N = 0;
    vlSelf->REQ_N = 0;
    vlSelf->FBDI = 0;
    vlSelf->PAL = 0;
    vlSelf->EXLAT_N = 0;
    vlSelf->SCRN_EN = 0;
    vlSelf->DBG_EXT = 0;
    vlSelf->r_RA0_Q = 0;
    vlSelf->r_RA1_Q = 0;
    vlSelf->r_RB0_Q = 0;
    vlSelf->r_RB1_Q = 0;
    vlSelf->d_RA0_Q = 0;
    vlSelf->d_RA1_Q = 0;
    vlSelf->d_RB0_Q = 0;
    vlSelf->d_RB1_Q = 0;
    VL_ZERO_RESET_W(75, vlSelf->r_misc);
    VL_ZERO_RESET_W(75, vlSelf->d_misc);
    vlSelf->r_RA0_A = 0;
    vlSelf->d_RA0_A = 0;
    vlSelf->r_RA1_A = 0;
    vlSelf->d_RA1_A = 0;
    vlSelf->r_RA_D = 0;
    vlSelf->d_RA_D = 0;
    vlSelf->r_RA_WE = 0;
    vlSelf->d_RA_WE = 0;
    vlSelf->r_RA_RD = 0;
    vlSelf->d_RA_RD = 0;
    vlSelf->r_RB0_A = 0;
    vlSelf->d_RB0_A = 0;
    vlSelf->r_RB1_A = 0;
    vlSelf->d_RB1_A = 0;
    vlSelf->r_RB_D = 0;
    vlSelf->d_RB_D = 0;
    vlSelf->r_RB_WE = 0;
    vlSelf->d_RB_WE = 0;
    vlSelf->r_RB_RD = 0;
    vlSelf->d_RB_RD = 0;
    vlSelf->cov = 0;
    vlSelf->tb_top__DOT__r_FBDO = 0;
    vlSelf->tb_top__DOT__d_FBDO = 0;
    vlSelf->tb_top__DOT__r_HRES = 0;
    vlSelf->tb_top__DOT__d_HRES = 0;
    vlSelf->tb_top__DOT__r_VRES = 0;
    vlSelf->tb_top__DOT__d_VRES = 0;
    VL_ZERO_RESET_W(2304, vlSelf->tb_top__DOT__u_dut__DOT__REGS);
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_WA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_RA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_D = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_WE = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_READ_PEND = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA0_A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB0_A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA1_A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB1_A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA_D = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB_D = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA_WE = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB_WE = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA0_RD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA1_RD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB0_RD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB1_RD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA0_Q = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMA1_Q = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB0_Q = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAMB1_Q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_CE_R = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_CE_F = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__H_CNT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HCT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__V_CNT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VCT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HCT9 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VCT0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SCRNX = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SCRNY = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SCRNX0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__MOSAIC_HCNT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__MOSAIC_VCNT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DISP = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LSMD = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxY[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxY[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA0PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA1PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB0PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB1PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA0CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA1CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB0CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB1CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA0VS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA1VS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB0VS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB1VS = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxPN_FETCH[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA0PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA1PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB0PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB1PN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA0CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA1CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB0CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB1CH = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA0CT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA1CT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB0CT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB1CT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__AxNA = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__BxNA = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LS_POS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LW = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LW_POS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RPA = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RPB = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RCTA = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RCTB = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__R0RP = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RP_POS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__BS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LN = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxPNS[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxPN_CNT[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxPN_EN[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxCH_CNT[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxCH_EN[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxVS = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__BG_PIPE[__Vi0].__PVT__NxVSS[__Vi2] = 0;
        }
    }
    VL_ZERO_RESET_W(137, vlSelf->tb_top__DOT__u_dut__DOT__VA4);
    VL_ZERO_RESET_W(80, vlSelf->tb_top__DOT__u_dut__DOT__PN4E);
    VL_ZERO_RESET_W(85, vlSelf->tb_top__DOT__u_dut__DOT__TAP2_D);
    vlSelf->tb_top__DOT__u_dut__DOT__TAP3_D = 0;
    VL_ZERO_RESET_W(239, vlSelf->tb_top__DOT__u_dut__DOT__TAP4_D);
    vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN = 0;
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[__Vi1] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH = 0;
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[__Vi1] = 0;
    }
    for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_CNT[__Vi1] = 0;
    }
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[__Vi1] = 0;
    }
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[__Vi1] = 0;
    }
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[__Vi1] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS = 0;
    for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
        vlSelf->tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVSS[__Vi1] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxPNS[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCELLX[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCT = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCTS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCT_EN[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxOVR = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NxOFFX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NxOFFY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__VS[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__CTD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__KAst[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxKA[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxCTTP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RPxLCSD[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__R0RPMSB = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOTCLK_DIV = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LAST_DOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HS_START = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VS_START = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VS_END = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VSYNC_HSTART = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VB_INT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VBLANK = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HB_INT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HBLANK = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DISP_INT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__INTERLACE_INT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__ODD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VSYNC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HSYNC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HINT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VINT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HTIM = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VTIM = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_FETCH_START = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_FETCH_END = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__IS_RENDER_LINES = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__IS_VISIBLE_LINES = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_FETCH_START_EN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CELLX = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NPN_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NCH_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NVCS_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RBG_CALC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RBG_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RCH_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LS_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LW_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RPA_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RPB_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RCTA_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RCTB_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CT_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LN_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__BACK_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__REFRESH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NOACCESS = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_FETCH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__WSCRNY = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__CHCN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__CHSZ = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__BMSZ = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__BMEN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__PLSZ = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__BMP = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__BMPR = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__BMCC = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__PNC = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__SCX = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__SCY = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__ZMX = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__ZMY = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__ZMHF = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__ZMQT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__LSTA = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__LSCX = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__LSCY = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__LZMX = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__VCSC = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__LSS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__MZE = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__LWTA = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__TPON = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__ON = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__CAOS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__PRIN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__SPRM = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__COEN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__COSL = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__CCEN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__CCRT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__NSxREG[__Vi0].__PVT__SCCM = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__CHCN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__CHSZ = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__BMSZ = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__BMEN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__PNC = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__BMP = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__BMPR = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__BMCC = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__MZE = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__TPON = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__ON = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__CAOS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__PRIN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__SPRM = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__COEN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__COSL = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__CCEN = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__CCRT = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RSxREG[__Vi0].__PVT__SCCM = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__KTE = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__KMD = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__KTAOS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__KDBS = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__KLCE = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__PLSZ = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__OVR = 0;
        vlSelf->tb_top__DOT__u_dut__DOT__RPxREG[__Vi0].__PVT__OVPNR = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__CYT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CY_WR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CYA0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CYB0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__cy_a0____pinNumber4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__cy_a1____pinNumber4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__cy_b0____pinNumber4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__cy_b1____pinNumber4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VCPA0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VCPA1 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VCPB0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VCPB1 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NxPN_CYC[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_A0VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_A1VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_B0VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NBG_B1VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RBG_A0VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RBG_A1VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RBG_B0VA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RBG_B1VA = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxSCRN_OVER[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBV[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RBV[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__USL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__USEL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber5 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NC_PN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NC_PN23[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__UO = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__UMATCH = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__HA[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__HM[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__AD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__MT = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NxLS_ADDR[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__RxRP_ADDR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxCT_ADDR[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__RxCTA_ADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RxCTB_ADDR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__LW_ADDR[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__BS_ADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LN_ADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__TBL_ACT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__TBL_ADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HVS = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__BKPN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__BKCH[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__E_PNEN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__E_CHEN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__E_BMINC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__E_PNINC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__E_CTEN = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_PN_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_PN_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_CH_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_BM_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_CH_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_CT_EN[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__LS_POS = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__LW_POS = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VS_OFFS = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RP_POS = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_BANK = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND_CLR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_RRDY = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_WRDY = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_WLOCK = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__FIFO_WRREQ = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__FIFO_RDREQ = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RA0_BUF = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RA1_BUF = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RB0_BUF = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RB1_BUF = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_BANK_2 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NSX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NVCSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NMOSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__LZMX[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__RPW_WD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RPW_WE = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RPW_WA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HPOS_PIPE = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__KAx[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__KAy[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__SUBXA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SUBXB = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SUBYA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SUBYB = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__MULXA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__MULYA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__ACCX = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__ACCY = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SUMX = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SUMY = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__ACC_X = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__ACC_Y = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__RPST_W = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__r_dx____pinNumber2 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__r_xp____pinNumber2 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__R0_RP = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__R0RP_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__WPSX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__WPEX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__LWE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__WxSX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__WxEX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__WxSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__WxEY[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__WHIT34 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__WHIT_EN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__whit33____pinNumber3 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__BACK_DC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__LINE_PAL = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_top__DOT__u_dut__DOT__PN_PIPE[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_top__DOT__u_dut__DOT__NBG_CDC[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NBG_CDP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_top__DOT__u_dut__DOT__RBG_DC[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RBG_CDP[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__NDC_PTR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP1[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP3[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP4[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP5[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP6[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCDP7[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxDC[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxCDP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NCX[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__NDC_WE = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0_HF4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0_QT4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0_HF8 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1_HF4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1_QT4 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1_HF8 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NDC_WD1 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NDC_WD2 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__NDC_WD3 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0_D0 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0_D2 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1_D1 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1_D3 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__R0DOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0DOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1DOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N2DOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N3DOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0DOTDC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1DOTDC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N2DOTDC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N3DOTDC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__R0DOTDC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N0DOTCDP = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N1DOTCDP = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N2DOTCDP = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__N3DOTCDP = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__R0DOTCDP = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SDOT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__TW0_HIT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__TW1_HIT = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__NxW_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__RxW_EN[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__SW_EN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CCW_EN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_FST = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_SEC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_THD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DOT_FTH = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__PAL_N = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CFST = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CSEC = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CCRT = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CCENFST = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__COEN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__COSL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__SDEN = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HB_INT2 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DCOL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__HB_INT3 = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__PAL_SEL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__PAL_WE = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__IO_PAL_ADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__IO_PAL_A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__pal1__WREN_B = 0;
    vlSelf->tb_top__DOT__u_dut__DOT____Vcellinp__pal2__WREN_B = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CT_CRAM_A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__CT_CRAM_Q = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_SEL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__VRAM_REQ = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__REG_SEL = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__A = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__WE_N = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__DQM = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__BURST = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__REG_DO = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__REG_RRDY = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__REG_RA = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__PAL_DO = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__REG_RD = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__PAL_RD = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_dy__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_dx__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__ab = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__fifo__DOT__WADDR = 0;
    vlSelf->tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__tap4__DOT__wpn = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_ZERO_RESET_W(239, vlSelf->tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[__Vi0]);
    }
    vlSelf->tb_top__DOT__u_dut__DOT__tap3__DOT__wpn = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_dut__DOT__tap2__DOT__wpn = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_ZERO_RESET_W(85, vlSelf->tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(2304, vlSelf->tb_top__DOT__u_ref__DOT__REGS);
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_WA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_RA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_D = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_WE = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA0_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB0_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA1_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB1_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA_D = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB_D = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA_WE = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB_WE = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA0_RD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA1_RD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB0_RD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB1_RD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA0_Q = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMA1_Q = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB0_Q = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAMB1_Q = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_CE_R = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_CE_F = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__H_CNT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HCT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__V_CNT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VCT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HCT9 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VCT0 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__SCRNX = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__SCRNY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__SCRNX0 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__MOSAIC_HCNT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__MOSAIC_VCNT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DISP = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LSMD = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxY[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxY[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA0PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA1PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB0PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB1PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA0CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA1CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB0CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB1CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA0VS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA1VS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB0VS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB1VS = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxPN_FETCH[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA0PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA1PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB0PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB1PN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA0CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA1CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB0CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB1CH = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA0CT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA1CT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB0CT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB1CT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__AxNA = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__BxNA = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LS_POS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LW = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LW_POS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RPA = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RPB = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RCTA = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RCTB = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__R0RP = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RP_POS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__BS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LN = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPNS[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPN_CNT[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPN_EN[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCH_CNT[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCH_EN[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxVS = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxVSS[__Vi2] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxPNS[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCELLX[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCT = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCTS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCT_EN[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxOVR = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxOFFX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxOFFY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__VS[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__CTD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__KAst[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxKA[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxCTTP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RPxLCSD[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__R0RPMSB = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOTCLK_DIV = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LAST_DOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HS_START = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VS_START = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VS_END = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VSYNC_HSTART = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VB_INT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VBLANK = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HB_INT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HBLANK = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DISP_INT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__INTERLACE_INT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__ODD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VSYNC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HSYNC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HINT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VINT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HTIM = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VTIM = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_FETCH_START = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_FETCH_END = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__IS_RENDER_LINES = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__IS_VISIBLE_LINES = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_FETCH_START_EN = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CELLX = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NPN_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NCH_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NVCS_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RBG_CALC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RBG_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RCH_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LS_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LW_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RPA_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RPB_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RCTA_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RCTB_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CT_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LN_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__BACK_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__REFRESH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NOACCESS = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_FETCH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__WSCRNY = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__CHCN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__CHSZ = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__BMSZ = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__BMEN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__PLSZ = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__BMP = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__BMPR = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__BMCC = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__PNC = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__SCX = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__SCY = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__ZMX = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__ZMY = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__ZMHF = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__ZMQT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__LSTA = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__LSCX = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__LSCY = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__LZMX = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__VCSC = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__LSS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__MZE = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__LWTA = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__TPON = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__ON = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__CAOS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__PRIN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__SPRM = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__COEN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__COSL = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__CCEN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__CCRT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__NSxREG[__Vi0].__PVT__SCCM = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__CHCN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__CHSZ = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__BMSZ = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__BMEN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__PNC = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__BMP = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__BMPR = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__BMCC = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__MZE = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__TPON = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__ON = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__CAOS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__PRIN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__SPRM = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__COEN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__COSL = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__CCEN = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__CCRT = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RSxREG[__Vi0].__PVT__SCCM = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__KTE = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__KMD = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__KTAOS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__KDBS = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__KLCE = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__PLSZ = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__OVR = 0;
        vlSelf->tb_top__DOT__u_ref__DOT__RPxREG[__Vi0].__PVT__OVPNR = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__VCPA0 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VCPA1 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VCPB0 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VCPB1 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxPN_CYC[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_A0VA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_A1VA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_B0VA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__NBG_B1VA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__ = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxPN_ADDR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxPN_ADDR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxCH_ADDR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxCH_ADDR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxSCRN_OVER[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__NxVS_ADDR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxLS_ADDR[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__RxRP_ADDR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxCT_ADDR[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__RxCTA_ADDR = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RxCTB_ADDR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__LW_ADDR[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__BS_ADDR = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LN_ADDR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_PN_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_PN_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_CH_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_BM_CNT[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_CH_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_CT_EN[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__LS_POS = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__LW_POS = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VS_OFFS = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_POS = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_BANK = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_RRDY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_WRDY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_WLOCK = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__FIFO_WRREQ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__FIFO_RDREQ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RA0_BUF = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RA1_BUF = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RB0_BUF = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RB1_BUF = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_BANK_2 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NSX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NVCSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NMOSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__LZMX[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__RP_Xst = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_Yst = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_Zst = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_DXst = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_DYst = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_DX = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_DY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_B = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_C = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_D = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_E = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_F = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_PX = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_PY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_PZ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_CX = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_CY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_CZ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_MX = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_MY = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RP_KX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RP_KY[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__RP_KAst = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__RP_DKAst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RP_DKAx[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__Xsp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__Ysp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__Xp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__Yp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__dX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__dY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__Xst[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__Yst[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__KAx[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__KAy[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__R0_RP = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__R0RP_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__WPSX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__WPEX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__LWE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__WxSX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__WxEX[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__WxSY[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__WxEY[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__W0_HIT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__W1_HIT = 0;
    for (int __Vi0 = 0; __Vi0 < 34; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 34; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__BACK_DC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__LINE_PAL = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_top__DOT__u_ref__DOT__PN_PIPE[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_top__DOT__u_ref__DOT__NBG_CDC[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NBG_CDP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_top__DOT__u_ref__DOT__RBG_DC[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RBG_CDP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NDC0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NDC1[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NDC2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NDC3[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP1[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP3[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP4[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP5[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP6[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCDP7[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxDC[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxCDP[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NCX[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__R0DOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N0DOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N1DOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N2DOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N3DOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N0DOTDC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N1DOTDC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N2DOTDC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N3DOTDC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__R0DOTDC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N0DOTCDP = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N1DOTCDP = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N2DOTCDP = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__N3DOTCDP = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__R0DOTCDP = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__SDOT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__TW0_HIT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__TW1_HIT = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__NxW_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__RxW_EN[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__SW_EN = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CCW_EN = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_FST = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_SEC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_THD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DOT_FTH = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__PAL_N = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CFST = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CSEC = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CCRT = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CCENFST = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__COEN = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__COSL = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__SDEN = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HB_INT2 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DCOL = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__HB_INT3 = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__PAL_SEL = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__PAL_WE = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__IO_PAL_ADDR = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__IO_PAL_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT____Vcellinp__pal1__WREN_B = 0;
    vlSelf->tb_top__DOT__u_ref__DOT____Vcellinp__pal2__WREN_B = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CT_CRAM_A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__CT_CRAM_Q = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_SEL = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__VRAM_REQ = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__REG_SEL = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__A = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__WE_N = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__DQM = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__BURST = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__REG_DO = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__REG_RRDY = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__REG_RA = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__PAL_DO = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__REG_RD = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__PAL_RD = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__ab = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__fifo__DOT__WADDR = 0;
    vlSelf->tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W = 0;
    vlSelf->__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T = 0;
    vlSelf->__Vfunc_NxBMAddr__13__NxMP = 0;
    vlSelf->__Vfunc_NxBMAddr__13__NxBM_CNT = 0;
    vlSelf->__Vfunc_NxBMAddr__13__NxOFFX = 0;
    vlSelf->__Vfunc_NxBMAddr__13__NxOFFY = 0;
    vlSelf->__Vfunc_NxBMAddr__13__NxCHCN = 0;
    vlSelf->__Vfunc_NxBMAddr__13__NxBMSZ = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxCHAddr__14__NxPN[__Vi0] = 0;
    }
    vlSelf->__Vfunc_NxCHAddr__14__NxCH_CNT = 0;
    vlSelf->__Vfunc_NxCHAddr__14__NxOFFX = 0;
    vlSelf->__Vfunc_NxCHAddr__14__NxOFFY = 0;
    vlSelf->__Vfunc_NxCHAddr__14__NxCHCN = 0;
    vlSelf->__Vfunc_NxCHAddr__14__NxCHSZ = 0;
    vlSelf->__Vfunc_NxCHAddr__14__NxZMHF = 0;
    vlSelf->__Vfunc_NxCHAddr__14__NxZMQT = 0;
    vlSelf->__Vfunc_RxBMAddr__16__RxMP = 0;
    vlSelf->__Vfunc_RxBMAddr__16__RxOFFX = 0;
    vlSelf->__Vfunc_RxBMAddr__16__RxOFFY = 0;
    vlSelf->__Vfunc_RxBMAddr__16__RxCHCN = 0;
    vlSelf->__Vfunc_RxBMAddr__16__RxBMSZ = 0;
    vlSelf->__Vfunc_RxCHAddr__17__RxPNx = 0;
    vlSelf->__Vfunc_RxCHAddr__17__RxOFFX = 0;
    vlSelf->__Vfunc_RxCHAddr__17__RxOFFY = 0;
    vlSelf->__Vfunc_RxCHAddr__17__RxCHCN = 0;
    vlSelf->__Vfunc_RxCHAddr__17__RxCHSZ = 0;
    vlSelf->__Vfunc_WinTest__104__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__104__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__104__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__104__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__104__W0E = 0;
    vlSelf->__Vfunc_WinTest__104__W1E = 0;
    vlSelf->__Vfunc_WinTest__104__SWE = 0;
    vlSelf->__Vfunc_WinTest__104__LOG = 0;
    vlSelf->__Vfunc_WinTest__105__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__105__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__105__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__105__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__105__W0E = 0;
    vlSelf->__Vfunc_WinTest__105__W1E = 0;
    vlSelf->__Vfunc_WinTest__105__SWE = 0;
    vlSelf->__Vfunc_WinTest__105__LOG = 0;
    vlSelf->__Vfunc_WinTest__106__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__106__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__106__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__106__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__106__W0E = 0;
    vlSelf->__Vfunc_WinTest__106__W1E = 0;
    vlSelf->__Vfunc_WinTest__106__SWE = 0;
    vlSelf->__Vfunc_WinTest__106__LOG = 0;
    vlSelf->__Vfunc_WinTest__107__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__107__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__107__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__107__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__107__W0E = 0;
    vlSelf->__Vfunc_WinTest__107__W1E = 0;
    vlSelf->__Vfunc_WinTest__107__SWE = 0;
    vlSelf->__Vfunc_WinTest__107__LOG = 0;
    vlSelf->__Vfunc_WinTest__108__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__108__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__108__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__108__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__108__W0E = 0;
    vlSelf->__Vfunc_WinTest__108__W1E = 0;
    vlSelf->__Vfunc_WinTest__108__SWE = 0;
    vlSelf->__Vfunc_WinTest__108__LOG = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxPNAddr__135__NxMPn[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxPNAddr__136__NxMPn[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxPNAddr__137__NxMPn[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxPNAddr__138__NxMPn[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_RxPNAddr__139__RxMPn[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_RxPNAddr__140__RxMPn[__Vi0] = 0;
    }
    vlSelf->__Vfunc_NxBMAddr__141__NxMP = 0;
    vlSelf->__Vfunc_NxBMAddr__141__NxBM_CNT = 0;
    vlSelf->__Vfunc_NxBMAddr__141__NxOFFX = 0;
    vlSelf->__Vfunc_NxBMAddr__141__NxOFFY = 0;
    vlSelf->__Vfunc_NxBMAddr__141__NxCHCN = 0;
    vlSelf->__Vfunc_NxBMAddr__141__NxBMSZ = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxCHAddr__142__NxPN[__Vi0] = 0;
    }
    vlSelf->__Vfunc_NxCHAddr__142__NxCH_CNT = 0;
    vlSelf->__Vfunc_NxCHAddr__142__NxOFFX = 0;
    vlSelf->__Vfunc_NxCHAddr__142__NxOFFY = 0;
    vlSelf->__Vfunc_NxCHAddr__142__NxCHCN = 0;
    vlSelf->__Vfunc_NxCHAddr__142__NxCHSZ = 0;
    vlSelf->__Vfunc_NxCHAddr__142__NxZMHF = 0;
    vlSelf->__Vfunc_NxCHAddr__142__NxZMQT = 0;
    vlSelf->__Vfunc_NxBMAddr__143__NxMP = 0;
    vlSelf->__Vfunc_NxBMAddr__143__NxBM_CNT = 0;
    vlSelf->__Vfunc_NxBMAddr__143__NxOFFX = 0;
    vlSelf->__Vfunc_NxBMAddr__143__NxOFFY = 0;
    vlSelf->__Vfunc_NxBMAddr__143__NxCHCN = 0;
    vlSelf->__Vfunc_NxBMAddr__143__NxBMSZ = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_NxCHAddr__144__NxPN[__Vi0] = 0;
    }
    vlSelf->__Vfunc_NxCHAddr__144__NxCH_CNT = 0;
    vlSelf->__Vfunc_NxCHAddr__144__NxOFFX = 0;
    vlSelf->__Vfunc_NxCHAddr__144__NxOFFY = 0;
    vlSelf->__Vfunc_NxCHAddr__144__NxCHCN = 0;
    vlSelf->__Vfunc_NxCHAddr__144__NxCHSZ = 0;
    vlSelf->__Vfunc_NxCHAddr__144__NxZMHF = 0;
    vlSelf->__Vfunc_NxCHAddr__144__NxZMQT = 0;
    vlSelf->__Vfunc_RxBMAddr__147__RxMP = 0;
    vlSelf->__Vfunc_RxBMAddr__147__RxOFFX = 0;
    vlSelf->__Vfunc_RxBMAddr__147__RxOFFY = 0;
    vlSelf->__Vfunc_RxBMAddr__147__RxCHCN = 0;
    vlSelf->__Vfunc_RxBMAddr__147__RxBMSZ = 0;
    vlSelf->__Vfunc_RxCHAddr__148__RxPNx = 0;
    vlSelf->__Vfunc_RxCHAddr__148__RxOFFX = 0;
    vlSelf->__Vfunc_RxCHAddr__148__RxOFFY = 0;
    vlSelf->__Vfunc_RxCHAddr__148__RxCHCN = 0;
    vlSelf->__Vfunc_RxCHAddr__148__RxCHSZ = 0;
    vlSelf->__Vfunc_WinTest__238__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__238__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__238__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__238__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__238__W0E = 0;
    vlSelf->__Vfunc_WinTest__238__W1E = 0;
    vlSelf->__Vfunc_WinTest__238__SWE = 0;
    vlSelf->__Vfunc_WinTest__238__LOG = 0;
    vlSelf->__Vfunc_WinTest__239__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__239__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__239__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__239__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__239__W0E = 0;
    vlSelf->__Vfunc_WinTest__239__W1E = 0;
    vlSelf->__Vfunc_WinTest__239__SWE = 0;
    vlSelf->__Vfunc_WinTest__239__LOG = 0;
    vlSelf->__Vfunc_WinTest__240__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__240__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__240__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__240__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__240__W0E = 0;
    vlSelf->__Vfunc_WinTest__240__W1E = 0;
    vlSelf->__Vfunc_WinTest__240__SWE = 0;
    vlSelf->__Vfunc_WinTest__240__LOG = 0;
    vlSelf->__Vfunc_WinTest__241__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__241__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__241__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__241__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__241__W0E = 0;
    vlSelf->__Vfunc_WinTest__241__W1E = 0;
    vlSelf->__Vfunc_WinTest__241__SWE = 0;
    vlSelf->__Vfunc_WinTest__241__LOG = 0;
    vlSelf->__Vfunc_WinTest__242__Vfuncout = 0;
    vlSelf->__Vfunc_WinTest__242__W0HIT = 0;
    vlSelf->__Vfunc_WinTest__242__W1HIT = 0;
    vlSelf->__Vfunc_WinTest__242__WSHIT = 0;
    vlSelf->__Vfunc_WinTest__242__W0E = 0;
    vlSelf->__Vfunc_WinTest__242__W1E = 0;
    vlSelf->__Vfunc_WinTest__242__SWE = 0;
    vlSelf->__Vfunc_WinTest__242__LOG = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_24 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_25 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_30 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_31 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_32 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_33 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_36 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_40 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_43 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_49 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_51 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_55 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_56 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_58 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_62 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_63 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_69 = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__DOTCLK_DIV = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__DOTCLK_DIV = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__HCT9 = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__HCT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VCT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VCT0 = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__ODD = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__H_CNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__DISP_INT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__CELLX = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxY[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxY[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA0VS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxA1VS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB0VS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxB1VS = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__NxPN_FETCH[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA0CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxA1CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB0CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxB1CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__AxNA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__BxNA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LS_POS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LW = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LW_POS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RPA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RPB = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RCTA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RCTB = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__R0RP = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__RP_POS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__BS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[__Vi0].__PVT__LN = 0;
    }
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VRAM_READ_PEND = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WE = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WLOCK = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RP_POS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__LS_POS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__LW_POS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__VS_OFFS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_VCNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxPNS[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCELLX[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCT = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCTS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCT_EN[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[__Vi0].__PVT__RxOVR = 0;
    }
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__NDC_PTR = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_HCNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH = 0;
    VL_ZERO_RESET_W(2304, vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__REGS);
    VL_ZERO_RESET_W(2304, vlSelf->__VdlyMask__tb_top__DOT__u_dut__DOT__REGS);
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__REG_RRDY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk37__DOT__REG_RD_DELAY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__A = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__HCT9 = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__HCT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VCT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VCT0 = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__ODD = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__H_CNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__DISP_INT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__CELLX = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxY[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxX[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxY[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA0VS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxA1VS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB0VS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxB1VS = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__NxPN_FETCH[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB0PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB1PN = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB0CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB1CH = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA0CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxA1CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB0CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxB1CT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__AxNA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__BxNA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LS_POS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LW = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LW_POS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RPA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RPB = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RCTA = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RCTB = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__R0RP = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__RP_POS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__BS = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE[__Vi0].__PVT__LN = 0;
    }
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__LS_POS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__LW_POS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_POS = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_VCNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_Xst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_Yst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_Zst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_DXst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_DYst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_DX = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_DY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_PX = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_PY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_PZ = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_CX = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_CY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_CZ = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_KAst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RP_DKAst = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPNS[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPN_CNT[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxPN_EN[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCH_CNT[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxCH_EN[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxVS = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE[__Vi0].__PVT__NxVSS[__Vi2] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxPN = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxPNS[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCH = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCHS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCELLX[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCT = 0;
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCTS[__Vi2] = 0;
        }
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCT_EN[__Vi2] = 0;
        }
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCRCT = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxCTTP = 0;
        vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE[__Vi0].__PVT__RxOVR = 0;
    }
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_HCNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH = 0;
    VL_ZERO_RESET_W(2304, vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__REGS);
    VL_ZERO_RESET_W(2304, vlSelf->__VdlyMask__tb_top__DOT__u_ref__DOT__REGS);
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__REG_RRDY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__A = 0;
    vlSelf->__Vdly__tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT = 0;
    vlSelf->__Vdly__tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__HM__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__HM__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__HM__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    VL_ZERO_RESET_W(239, vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0);
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0 = 0;
    VL_ZERO_RESET_W(85, vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0);
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NX__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NX__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NX__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NX__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NY__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NY__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__LZMX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__LZMX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__LZMX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__LZMX__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NMOSY__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NMOSY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NMOSY__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NMOSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NVCSY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NVCSY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NVCSY__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__KAst__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__KAst__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__KAst__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__KAy__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__KAy__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__KAy__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__KAx__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__KAx__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__KAx__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RxX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RxX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RPxLCSD__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RxY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RPxLCSD__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RxX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RxY__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RxCTTP__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RxCTTP__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__WxSX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__WxSX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__WxEX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__WxEX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__WxSX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__WxSX__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__WxEX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__WxEX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VS__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__VS__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v9 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v13 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v15 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v17 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v8 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v9 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v10 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v11 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v12 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v13 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v14 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v17 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v18 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v19 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v19 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v20 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v20 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v21 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v21 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v22 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v23 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v23 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v24 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v24 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v25 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v25 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v26 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v26 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v27 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v27 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v28 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v28 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v29 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v29 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v30 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v31 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v31 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v32 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v32 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v33 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v33 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v34 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v34 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v35 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v35 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v36 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v36 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v37 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v37 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v38 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v39 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v40 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v40 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v41 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v42 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v42 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v43 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v43 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v44 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v44 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v45 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v46 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v46 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v47 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v47 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v48 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v48 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v49 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v49 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v50 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v50 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v51 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v51 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v52 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v52 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v53 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v54 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v54 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v55 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v55 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v56 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v56 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v57 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v57 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v58 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v58 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v59 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v59 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v60 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v60 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v61 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v62 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v63 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v63 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v64 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v65 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v65 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v66 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v66 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v67 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v67 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v68 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v69 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v69 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v70 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v70 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v71 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v71 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v72 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v72 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v73 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v73 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v74 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v74 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v75 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v75 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v76 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v77 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v77 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v78 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v78 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v79 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v79 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v80 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v80 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v81 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v81 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v82 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v82 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v83 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v83 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v9 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v10 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v11 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v12 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v13 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP0__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP0__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP0__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP6__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP6__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP6__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP1__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP1__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP1__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP2__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP2__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP2__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP3__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP3__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP3__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP4__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP4__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP4__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP5__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP5__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP5__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP7__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCDP7__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP7__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3 = 0;
    vlSelf->__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v12 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v12 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v16 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NX__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NX__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NX__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NX__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NY__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NY__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__LZMX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__LZMX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__LZMX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__LZMX__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NMOSY__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NMOSY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NMOSY__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NMOSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NVCSY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NVCSY__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NVCSY__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RP_KX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RP_KY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__dX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__dY__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Ysp__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Xp__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Yp__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__KAst__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RxX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RxCTTP__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__WxSX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__WxSX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__WxEX__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__WxEX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__WxSX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__WxSX__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__WxEX__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__WxEX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v18 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v19 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v20 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v21 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v22 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v23 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v24 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v25 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v26 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v27 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v28 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v29 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v30 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v31 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v32 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v33 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v18 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v19 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v20 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v21 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v22 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v23 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v24 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v25 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v26 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v27 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v28 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v29 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v30 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v31 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v32 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v33 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VS__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__VS__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v2 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v4 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v5 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v6 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v8 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v9 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v10 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v11 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v12 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v13 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v14 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v17 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v18 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v19 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v19 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v20 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v20 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v21 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v21 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v22 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v23 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v23 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v24 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v24 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v25 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v25 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v26 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v26 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v27 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v27 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v28 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v28 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v29 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v29 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v30 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v31 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v31 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v32 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v32 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v33 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v33 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v34 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v34 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v35 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v35 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v36 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v36 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v37 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v37 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v38 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v39 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v40 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v40 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v41 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v42 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v42 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v43 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v43 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v44 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v44 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v45 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v46 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v46 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v47 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v47 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v48 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v48 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v49 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v49 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v50 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v50 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v51 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v51 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v52 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v52 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v53 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v54 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v54 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v55 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v55 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v56 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v56 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v57 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v57 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v58 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v58 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v59 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v59 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v60 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v60 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v7 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v61 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v62 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v63 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v63 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v64 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v65 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v65 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v66 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v66 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v67 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v67 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v68 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v69 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v69 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v70 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v70 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v71 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v71 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v72 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v72 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v73 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v73 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v74 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v74 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v75 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v75 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v76 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v77 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v77 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v78 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v78 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v79 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v79 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v80 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v80 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v81 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v81 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v82 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v82 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v83 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v83 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v9 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v10 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v11 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v12 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v13 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v18 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v19 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v20 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v21 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v22 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v23 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v24 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v25 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v26 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v27 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v28 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v29 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v30 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v31 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v32 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v33 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v34 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v35 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v9 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v13 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v15 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v16 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v17 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v17 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NDC0__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP4__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP4__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP4__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NDC1__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NDC2__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP0__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP0__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP0__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NDC3__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v11 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v12 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v13 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v14 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v15 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP5__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP5__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP5__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP2__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP2__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP2__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP1__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP1__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP1__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP3__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP3__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP3__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP6__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP6__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP6__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP7__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCDP7__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP7__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v1 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v2 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v3 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v4 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v4 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v5 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v6 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v7 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v8 = 0;
    vlSelf->__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v8 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v9 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v10 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v11 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RST_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE_R__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE_F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RES_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DI__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CS_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__AD_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DTEN_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__REQ_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FBDI__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__PAL__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXLAT_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SCRN_EN__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DBG_EXT__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__r_RA0_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__r_RA1_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__r_RB0_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__r_RB1_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__d_RA0_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__d_RA1_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__d_RB0_Q__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__d_RB1_Q__0 = 0;
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
