// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

extern const VlUnpacked<SData/*9:0*/, 64> Vtb_top__ConstPool__TABLE_h33db5abf_0;
extern const VlUnpacked<SData/*8:0*/, 8> Vtb_top__ConstPool__TABLE_hc127657e_0;
extern const VlUnpacked<SData/*8:0*/, 8> Vtb_top__ConstPool__TABLE_ha0a88702_0;
extern const VlUnpacked<SData/*8:0*/, 8> Vtb_top__ConstPool__TABLE_h9f73c1b5_0;
extern const VlUnpacked<SData/*9:0*/, 128> Vtb_top__ConstPool__TABLE_ha349bcba_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vtb_top__ConstPool__TABLE_h6a8f4be2_0;
extern const VlUnpacked<SData/*8:0*/, 8> Vtb_top__ConstPool__TABLE_he42dc177_0;

void Vtb_top___024root___nba_sequent__TOP__5(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_NxLSSMask__27__NxLSS;
    __Vfunc_NxLSSMask__27__NxLSS = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__28__LSCX;
    __Vfunc_NxLSTblSize__28__LSCX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__28__LSCY;
    __Vfunc_NxLSTblSize__28__LSCY = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__28__LZMX;
    __Vfunc_NxLSTblSize__28__LZMX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__28__DI;
    __Vfunc_NxLSTblSize__28__DI = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__29__LSCX;
    __Vfunc_NxLSTblSize__29__LSCX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__29__LSCY;
    __Vfunc_NxLSTblSize__29__LSCY = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__29__LZMX;
    __Vfunc_NxLSTblSize__29__LZMX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__30__LSCX;
    __Vfunc_NxLSTblSize__30__LSCX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__30__LSCY;
    __Vfunc_NxLSTblSize__30__LSCY = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__30__LZMX;
    __Vfunc_NxLSTblSize__30__LZMX = 0;
    CData/*1:0*/ __Vfunc_NxLSSMask__159__NxLSS;
    __Vfunc_NxLSSMask__159__NxLSS = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__160__LSCX;
    __Vfunc_NxLSTblSize__160__LSCX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__160__LSCY;
    __Vfunc_NxLSTblSize__160__LSCY = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__160__LZMX;
    __Vfunc_NxLSTblSize__160__LZMX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__160__DI;
    __Vfunc_NxLSTblSize__160__DI = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__161__LSCX;
    __Vfunc_NxLSTblSize__161__LSCX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__161__LSCY;
    __Vfunc_NxLSTblSize__161__LSCY = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__161__LZMX;
    __Vfunc_NxLSTblSize__161__LZMX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__162__LSCX;
    __Vfunc_NxLSTblSize__162__LSCX = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__162__LSCY;
    __Vfunc_NxLSTblSize__162__LSCY = 0;
    CData/*0:0*/ __Vfunc_NxLSTblSize__162__LZMX;
    __Vfunc_NxLSTblSize__162__LZMX = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2 = 0;
    IData/*18:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v0;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_dut__DOT__LW_ADDR__v0;
    __VdlyDim0__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v1;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v1 = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2 = 0;
    IData/*18:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v1;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v1 = 0;
    IData/*18:0*/ __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v2;
    __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4;
    __VdlyVal__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4 = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2 = 0;
    IData/*18:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__LW_ADDR__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v1 = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2 = 0;
    IData/*18:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v1 = 0;
    IData/*18:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v2;
    __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v2 = 0;
    // Body
    if (vlSelfRef.RST_N) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR = 0U;
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_WE = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_WE = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 0U;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v0 = 1U;
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH) 
                 & (((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                       .__PVT__LZMX) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                           >> 2U))) 
                     & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                        >> 0x00000010U)) | ((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                               .__PVT__LSCX 
                                               | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                               .__PVT__LSCY) 
                                              | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                              .__PVT__LZMX) 
                                             & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                                >> 2U)) 
                                            & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                                               >> 0x00000011U))))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                       [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                               >> 2U))]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                       [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                               >> 2U))]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                       [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                               >> 2U))]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                       [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                               >> 2U))]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                                [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                        >> 2U))] >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                                [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                        >> 2U))] >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                             [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                     >> 2U))] >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                             [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                     >> 2U))] >> 0x11U));
            } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH) 
                        & (vlSelfRef.tb_top__DOT__u_ref__DOT__LWE[0U] 
                           | vlSelfRef.tb_top__DOT__u_ref__DOT__LWE[1U]))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                       [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                       [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                       [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                       [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                                [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS] 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                                [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS] 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                             [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS] 
                             >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                             [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS] 
                             >> 0x11U));
            } else if ((((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH) 
                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                              >> 0x00000014U)) & (IData)(
                                                         (0x00010000U 
                                                          != 
                                                          (0x00030000U 
                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U])))) 
                         | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH) 
                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                                >> 0x00000014U)) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U]))))) 
                        | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH) 
                            | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH)) 
                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                              >> 0x00000015U)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR 
                             >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR 
                             >> 0x11U));
            } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH) 
                        & (IData)((0U != (0x00300000U 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U]))))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR 
                             >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR 
                             >> 0x11U));
            } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH) 
                        & (IData)((0U != (0x00300000U 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U]))))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR 
                             >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR 
                             >> 0x11U));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                             >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                             >> 0x11U));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                    = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                                >> 0x11U)));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                             >> 0x11U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                    = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                             >> 0x11U));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH)))) {
                if ((1U & ((((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT)) 
                             | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT)) 
                            | (IData)((0U == (0x003f0000U 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U])))) 
                           | (~ ((((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH) 
                                     | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                    | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                   | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)))))) {
                    if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR = 1U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0001fffeU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000fffeU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0001fffeU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000fffeU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_D 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_D 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_WE 
                            = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE) 
                               & (- (IData)((1U & (~ 
                                                   (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                                                    >> 0x11U))))));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_WE 
                            = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE) 
                               & (- (IData)((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                                                   >> 0x11U)))));
                    } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                            = (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                            >> 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                            = (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                            >> 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                            = (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                            >> 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                            = (3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                            >> 0x00000010U)));
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0U;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v1 = 1U;
                    }
                } else {
                    if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                          >> 4U) & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                 [(3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                 >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 1U;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0 
                            = (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0 = 1U;
                    }
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                           >> 3U) & (0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                  >> 0x10U)))) 
                         & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                             .__PVT__NxPN_FETCH[(3U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                             [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]) 
                            | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]
                            .__PVT__BMEN))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 1U;
                    }
                    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                                  >> 2U) & (0U == (0x00030000U 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA0PN) & (0U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA0CH) & (0U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA0CT) & (0U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 1U;
                    }
                    if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                          >> 4U) & (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                 [(3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                 >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 1U;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1 
                            = (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1 = 1U;
                    }
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                           >> 3U) & (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                  >> 0x10U)))) 
                         & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                             .__PVT__NxPN_FETCH[(3U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                             [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]) 
                            | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]
                            .__PVT__BMEN))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 1U;
                    }
                    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                                  >> 2U) & (0x00010000U 
                                            == (0x00030000U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA1PN) & (1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA1CH) & (1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA1CT) & (1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 1U;
                    }
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW = 0U;
                    if ((IData)((((0U == (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))) 
                                  & (0U == (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)))) 
                                 & (((((((~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0PN)) 
                                         & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CH))) 
                                        & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                              .__PVT__RxA0CT))) 
                                       & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1PN))) 
                                      & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxA1CH))) 
                                     & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxA1CT))) 
                                    & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__AxNA))))) {
                        if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND) 
                               & ((0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                >> 0x00000010U))) 
                                  | (1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                  >> 0x00000010U))))) 
                              | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND) 
                                 & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                                       >> 0x11U)))) 
                             & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW) 
                                 | (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                       >> 8U))) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[1U]
                                .__PVT__AxNA))) {
                            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND) {
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR = 1U;
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                                    = (0x0001fffeU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA);
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_D 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D;
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_WE 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE;
                            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND) {
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A 
                                    = (0x0000ffffU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A 
                                    = (0x0000ffffU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD 
                                    = (0U == (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                               >> 0x00000010U)));
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD 
                                    = (1U == (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                               >> 0x00000010U)));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v2 = 1U;
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0U;
                            }
                        }
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW = 1U;
                    }
                    if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                          >> 4U) & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                 [(3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                 >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 1U;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2 
                            = (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2 = 1U;
                    }
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                           >> 3U) & (2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                  >> 0x10U)))) 
                         & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                             .__PVT__NxPN_FETCH[(3U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                             [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]) 
                            | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]
                            .__PVT__BMEN))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 1U;
                    }
                    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                                  >> 2U) & (0x00020000U 
                                            == (0x00030000U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxB0PN) & (2U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxB0CH) & (2U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxB0CT) & (2U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 1U;
                    }
                    if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                          >> 4U) & (3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                 [(3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                                                 >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 1U;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3 
                            = (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3 = 1U;
                    }
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                           >> 3U) & (3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                  [
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                                                  >> 0x10U)))) 
                         & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                             .__PVT__NxPN_FETCH[(3U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                             [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]) 
                            | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]
                            .__PVT__BMEN))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                               [(3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 1U;
                    }
                    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                                  >> 2U) & (0x00030000U 
                                            == (0x00030000U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxB1PN) & (3U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxB1CH) & (3U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 1U;
                    }
                    if (((0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxB1CT) & (3U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__] 
                                               >> 0x10U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 1U;
                    }
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW = 0U;
                    if ((IData)((((0U == (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))) 
                                  & (0U == (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)))) 
                                 & (((((((~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxB0PN)) 
                                         & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                               .__PVT__RxB0CH))) 
                                        & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CT))) 
                                       & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1PN))) 
                                      & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                            .__PVT__RxB1CH))) 
                                     & (~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CT))) 
                                    & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                       .__PVT__BxNA))))) {
                        if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND) 
                               & ((2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                >> 0x00000010U))) 
                                  | (3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                  >> 0x00000010U))))) 
                              | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND) 
                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                                    >> 0x11U))) & (
                                                   ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW) 
                                                    | (~ 
                                                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                        >> 9U))) 
                                                   | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[1U]
                                                   .__PVT__BxNA))) {
                            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND) {
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR = 1U;
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                                    = (0x0001fffeU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA);
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_D 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D;
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_D 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D;
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_WE 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE;
                            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND) {
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A 
                                    = (0x0000ffffU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A 
                                    = (0x0000ffffU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA);
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD 
                                    = (2U == (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                               >> 0x00000010U)));
                                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD 
                                    = (3U == (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                               >> 0x00000010U)));
                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v3 = 1U;
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0U;
                            }
                        }
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW = 1U;
                    }
                }
            }
            __VdlyVal__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[0U];
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4 = 1U;
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF 
                = vlSelfRef.r_RB1_Q;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF 
                = vlSelfRef.r_RB0_Q;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF 
                = vlSelfRef.r_RA1_Q;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF 
                = vlSelfRef.r_RA0_Q;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK;
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR
                             [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                     >> 2U))] >> 0x10U));
                __Vfunc_NxLSSMask__159__NxLSS = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                    [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                            >> 2U))].__PVT__LSS;
                vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask 
                    = (7U & (0x0ec8U >> ((IData)(3U) 
                                         * (IData)(__Vfunc_NxLSSMask__159__NxLSS))));
                vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_18__NxLSSMask 
                    = vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask;
                if ((0U == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_18__NxLSSMask)) 
                            & (6U | (3U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)))))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)))) {
                        __Vfunc_NxLSTblSize__160__DI 
                            = ((~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                   [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                           >> 2U))]
                                   .__PVT__LSS)) & 
                               (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)));
                        __Vfunc_NxLSTblSize__160__LZMX 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                    >> 2U))].__PVT__LZMX;
                        __Vfunc_NxLSTblSize__160__LSCY 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCY;
                        __Vfunc_NxLSTblSize__160__LSCX 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCX;
                        vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res 
                            = (7U & (0x00691448U >> 
                                     ((IData)(3U) * 
                                      (((IData)(__Vfunc_NxLSTblSize__160__LZMX) 
                                        << 2U) | (((IData)(__Vfunc_NxLSTblSize__160__LSCY) 
                                                   << 1U) 
                                                  | (IData)(__Vfunc_NxLSTblSize__160__LSCX))))));
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_19__NxLSTblSize 
                            = (7U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res) 
                                     << (IData)(__Vfunc_NxLSTblSize__160__DI)));
                        __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 
                            = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS
                                                      [
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                                          >> 2U))]) 
                                              + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_19__NxLSTblSize)));
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 
                            = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                     >> 2U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0 = 1U;
                    }
                    if ((0U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)))) {
                        if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCX) {
                            __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS
                                                   [
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                                       >> 2U))])));
                            __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 
                                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                         >> 2U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0 = 1U;
                        }
                    } else if ((1U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)))) {
                        if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCY) {
                            __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS
                                                   [
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                                       >> 2U))])));
                            __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 
                                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                         >> 2U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1 = 1U;
                        }
                    } else if ((2U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)))) {
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2 
                            = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS) 
                                     >> 2U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2 = 1U;
                    }
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LS_POS 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)));
                if ((2U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LS_POS 
                        = (7U & ((IData)(2U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS)));
                }
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                             [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS] 
                             >> 0x10U));
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LW_POS 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS)));
                __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR
                                      [vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS] 
                                      + ((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))
                                          ? 4U : 2U)));
                __VdlyDim0__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v0 = 1U;
            } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH) 
                        | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR 
                             >> 0x10U));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR 
                             >> 0x10U));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR 
                             >> 0x10U));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                             >> 0x10U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                                      + ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[28U] 
                                          >> 0x0000001fU)
                                          ? 1U : 0U)));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                             >> 0x10U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                                      + ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[29U] 
                                          >> 0x0000001fU)
                                          ? 1U : 0U)));
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[1U]) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v5 = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY = 1U;
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_Q 
                    = (vlSelfRef.r_RA0_Q >> 0x10U);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_Q 
                    = (vlSelfRef.r_RA1_Q >> 0x10U);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_Q 
                    = (vlSelfRef.r_RB0_Q >> 0x10U);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_Q 
                    = (vlSelfRef.r_RB1_Q >> 0x10U);
            }
            if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                  == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                        ? 0x019dU : 0x0181U) - (IData)(2U))) 
                 & (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v3 = 1U;
                if ((((~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                          .__PVT__LSS)) & (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)))) {
                    __Vfunc_NxLSTblSize__161__LZMX 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__LZMX;
                    __Vfunc_NxLSTblSize__161__LSCY 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__LSCY;
                    __Vfunc_NxLSTblSize__161__LSCX 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__LSCX;
                    vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res 
                        = (7U & (0x00691448U >> ((IData)(3U) 
                                                 * 
                                                 (((IData)(__Vfunc_NxLSTblSize__161__LZMX) 
                                                   << 2U) 
                                                  | (((IData)(__Vfunc_NxLSTblSize__161__LSCY) 
                                                      << 1U) 
                                                     | (IData)(__Vfunc_NxLSTblSize__161__LSCX))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_20__NxLSTblSize 
                        = vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res;
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_21 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_20__NxLSTblSize;
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_21 = 0U;
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LS_POS = 0U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v4 = 1U;
                __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_21;
                if ((((~ (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                          .__PVT__LSS)) & (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)))) {
                    __Vfunc_NxLSTblSize__162__LZMX 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                        .__PVT__LZMX;
                    __Vfunc_NxLSTblSize__162__LSCY 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                        .__PVT__LSCY;
                    __Vfunc_NxLSTblSize__162__LSCX 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                        .__PVT__LSCX;
                    vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res 
                        = (7U & (0x00691448U >> ((IData)(3U) 
                                                 * 
                                                 (((IData)(__Vfunc_NxLSTblSize__162__LZMX) 
                                                   << 2U) 
                                                  | (((IData)(__Vfunc_NxLSTblSize__162__LSCY) 
                                                      << 1U) 
                                                     | (IData)(__Vfunc_NxLSTblSize__162__LSCX))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_22__NxLSTblSize 
                        = vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res;
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_23 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_22__NxLSTblSize;
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_23 = 0U;
                }
                __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCond_23;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2 = 1U;
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT) 
                 & (0x01feU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__BS_ADDR 
                    = (0x0007ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[28U]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__LN_ADDR 
                    = (0x0007ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[29U]);
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v4 = 1U;
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LW_POS = 0U;
                __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v1 
                    = (0x0007ffffU & ((0x0007fffeU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[17U]) 
                                      + (((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                          & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)))
                                          ? 2U : 0U)));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v1 = 1U;
                __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v2 
                    = (0x0007ffffU & ((0x0007fffeU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[16U]) 
                                      + (((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                          & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)))
                                          ? 2U : 0U)));
            }
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF 
                = vlSelfRef.d_RB1_Q;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF 
                = vlSelfRef.d_RB0_Q;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF 
                = vlSelfRef.d_RA1_Q;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF 
                = vlSelfRef.d_RA0_Q;
            vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK;
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR
                             [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                     >> 2U))] >> 0x10U));
                __Vfunc_NxLSSMask__27__NxLSS = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                    [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                            >> 2U))].__PVT__LSS;
                vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask 
                    = (7U & (0x0ec8U >> ((IData)(3U) 
                                         * (IData)(__Vfunc_NxLSSMask__27__NxLSS))));
                vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_10__NxLSSMask 
                    = vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask;
                if ((0U == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                             & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_10__NxLSSMask)) 
                            & (6U | (3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)))))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)))) {
                        __Vfunc_NxLSTblSize__28__DI 
                            = ((~ (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                   [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                           >> 2U))]
                                   .__PVT__LSS)) & 
                               (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)));
                        __Vfunc_NxLSTblSize__28__LZMX 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                    >> 2U))].__PVT__LZMX;
                        __Vfunc_NxLSTblSize__28__LSCY 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCY;
                        __Vfunc_NxLSTblSize__28__LSCX 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCX;
                        vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res 
                            = (7U & (0x00691448U >> 
                                     ((IData)(3U) * 
                                      (((IData)(__Vfunc_NxLSTblSize__28__LZMX) 
                                        << 2U) | (((IData)(__Vfunc_NxLSTblSize__28__LSCY) 
                                                   << 1U) 
                                                  | (IData)(__Vfunc_NxLSTblSize__28__LSCX))))));
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_11__NxLSTblSize 
                            = (7U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res) 
                                     << (IData)(__Vfunc_NxLSTblSize__28__DI)));
                        __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 
                            = (0x000007ffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS
                                                      [
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                                          >> 2U))]) 
                                              + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_11__NxLSTblSize)));
                        __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 
                            = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                     >> 2U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0 = 1U;
                    }
                    if ((0U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)))) {
                        if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCX) {
                            __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS
                                                   [
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                                       >> 2U))])));
                            __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 
                                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                         >> 2U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0 = 1U;
                        }
                    } else if ((1U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)))) {
                        if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                    >> 2U))].__PVT__LSCY) {
                            __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS
                                                   [
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                                       >> 2U))])));
                            __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 
                                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                         >> 2U));
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1 = 1U;
                        }
                    } else if ((2U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)))) {
                        __VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2 
                            = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                     >> 2U));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2 = 1U;
                    }
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LS_POS 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)));
                if ((2U == (3U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LS_POS 
                        = (7U & ((IData)(2U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS)));
                }
            } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR
                             [vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS] 
                             >> 0x10U));
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LW_POS 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS)));
                __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS] 
                                      + ((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))
                                          ? 4U : 2U)));
                __VdlyDim0__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v0 = 1U;
            } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                        | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RxRP_ADDR 
                             >> 0x10U));
            } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTA_ADDR 
                             >> 0x10U));
            } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTB_ADDR 
                             >> 0x10U));
            } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__BS_ADDR 
                             >> 0x10U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__BS_ADDR 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__BS_ADDR 
                                      + ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[28U] 
                                          >> 0x0000001fU)
                                          ? 1U : 0U)));
            } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__LN_ADDR 
                             >> 0x10U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__LN_ADDR 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__LN_ADDR 
                                      + ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[29U] 
                                          >> 0x0000001fU)
                                          ? 1U : 0U)));
            }
            if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                  == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                        ? 0x019dU : 0x0181U) - (IData)(2U))) 
                 & (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v3 = 1U;
                if ((((~ (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                          .__PVT__LSS)) & (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)))) {
                    __Vfunc_NxLSTblSize__29__LZMX = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__LZMX;
                    __Vfunc_NxLSTblSize__29__LSCY = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__LSCY;
                    __Vfunc_NxLSTblSize__29__LSCX = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__LSCX;
                    vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res 
                        = (7U & (0x00691448U >> ((IData)(3U) 
                                                 * 
                                                 (((IData)(__Vfunc_NxLSTblSize__29__LZMX) 
                                                   << 2U) 
                                                  | (((IData)(__Vfunc_NxLSTblSize__29__LSCY) 
                                                      << 1U) 
                                                     | (IData)(__Vfunc_NxLSTblSize__29__LSCX))))));
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_12__NxLSTblSize 
                        = vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res;
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_13 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_12__NxLSTblSize;
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_13 = 0U;
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LS_POS = 0U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v4 = 1U;
                __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_13;
                if ((((~ (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                          .__PVT__LSS)) & (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)))) {
                    __Vfunc_NxLSTblSize__30__LZMX = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__LZMX;
                    __Vfunc_NxLSTblSize__30__LSCY = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__LSCY;
                    __Vfunc_NxLSTblSize__30__LSCX = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__LSCX;
                    vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res 
                        = (7U & (0x00691448U >> ((IData)(3U) 
                                                 * 
                                                 (((IData)(__Vfunc_NxLSTblSize__30__LZMX) 
                                                   << 2U) 
                                                  | (((IData)(__Vfunc_NxLSTblSize__30__LSCY) 
                                                      << 1U) 
                                                     | (IData)(__Vfunc_NxLSTblSize__30__LSCX))))));
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_14__NxLSTblSize 
                        = vlSymsp->TOP__REF_VDP2_PKG.NxLSTblSize__Vstatic__res;
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_15 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_14__NxLSTblSize;
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_15 = 0U;
                }
                __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_15;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2 = 1U;
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT) 
                 & (0x01feU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__BS_ADDR 
                    = (0x0007ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[28U]);
                vlSelfRef.tb_top__DOT__u_dut__DOT__LN_ADDR 
                    = (0x0007ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[29U]);
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LW_POS = 0U;
                __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v1 
                    = (0x0007ffffU & ((0x0007fffeU 
                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[17U]) 
                                      + (((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                          & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)))
                                          ? 2U : 0U)));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v1 = 1U;
                __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v2 
                    = (0x0007ffffU & ((0x0007fffeU 
                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[16U]) 
                                      + (((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                          & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)))
                                          ? 2U : 0U)));
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ) 
             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                = (0x0003ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR) {
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRDY = 1U;
        }
        if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ) 
               & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N))) 
              & (~ (IData)(vlSelfRef.DTEN_N))) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST)))) {
            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                        = ((0xffffffffffff0000ULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                           | (IData)((IData)(vlSelfRef.DI)));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                        = ((0xfcU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                           | (3U & ((~ (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)))) 
                                    & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DQM)))));
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                        = ((0xffffffff0000ffffULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                           | ((QData)((IData)(vlSelfRef.DI)) 
                              << 0x00000010U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                        = ((0xf3U & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                           | (0x0000000cU & (((~ (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)))) 
                                              & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DQM))) 
                                             << 2U)));
                }
            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                    = (0x0003ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                    = ((0xffff0000ffffffffULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                       | ((QData)((IData)(vlSelfRef.DI)) 
                          << 0x00000020U));
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                    = ((0xcfU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                       | (0x00000030U & (((~ (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)))) 
                                          & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DQM))) 
                                         << 4U)));
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                    = (0x0003ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                    = ((0x0000ffffffffffffULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                       | ((QData)((IData)(vlSelfRef.DI)) 
                          << 0x00000030U));
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                    = ((0x3fU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                       | (0x000000c0U & (((~ (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)))) 
                                          & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DQM))) 
                                         << 6U)));
            }
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 1U;
        }
        if ((((IData)(vlSelfRef.DTEN_N) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__DTEN_N_OLD))) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST)))) {
            if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRDY = 0U;
            }
        }
        if (vlSelfRef.RES_N) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
                if (((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_VISIBLE_LINES))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH = 1U;
                } else if ((0x0161U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == ((IData)(3U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((IData)(4U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_END)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START) 
                            - (IData)(1U)) - (IData)(8U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_END))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START_EN) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_END))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x01acU : 0x0190U) - (IData)(1U))) 
                     | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                        == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                              ? 0x0162U : 0x0142U) 
                            - (IData)(1U))))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH = 1U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                             == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                  ? 0x01b0U : 0x0194U)) 
                            | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                               == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                    ? 0x0165U : 0x0145U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x01a7U : 0x018bU) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                 ? 0x01a7U : 0x018bU))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x01a8U : 0x018cU) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                 ? 0x01a8U : 0x018cU))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH = 0U;
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH 
                    = ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                         == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                               ? 0x01a6U : 0x018aU) 
                             - (IData)(1U))) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT));
                vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH 
                    = ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                         == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                               ? 0x01a5U : 0x0189U) 
                             - (IData)(1U))) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT));
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x01c1U : 0x01a5U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                 ? 0x0161U : 0x0141U))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == ((IData)(3U) + ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                           ? 0x01c1U
                                           : 0x01a5U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                 ? 0x0161U : 0x0141U))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == ((((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                              ? 0x01c1U : 0x01a5U) 
                            - (IData)(1U)) - (IData)(4U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                  ? 0x0161U : 0x0141U) 
                                - (IData)(4U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x019dU : 0x0181U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((IData)(5U) + ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                                ? 0x019dU
                                                : 0x0181U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x01a3U : 0x0187U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((IData)(1U) + ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                                ? 0x01a3U
                                                : 0x0187U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x0185U : 0x0169U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((IData)(0x00000017U) 
                                + ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                    ? 0x0185U : 0x0169U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x016dU : 0x0151U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((IData)(0x00000017U) 
                                + ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                    ? 0x016dU : 0x0151U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH = 0U;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT) 
                        == (0x000001ffU & (((IData)(Vtb_top__ConstPool__TABLE_h33db5abf_0
                                                    [
                                                    (((IData)(vlSelfRef.PAL) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))]) 
                                            - (IData)(1U)) 
                                           >> 1U))))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT) 
                            & (0x01feU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT = 0U;
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT9 
                    = (1U & (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                                << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                              + ((4U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                  ? 2U : 1U)) >> 9U));
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT 
                    = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                        + ((4U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 2U : 1U)) & (0x000001feU 
                                           | (1U & 
                                              (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                  >> 2U)))));
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                       << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                     == Vtb_top__ConstPool__TABLE_hc127657e_0
                     [vlSelfRef.tb_top__DOT__r_HRES])) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT9 
                        = (1U & (((IData)((5U == (5U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__r_HRES))))
                                   ? 0x03d0U : 0x03b0U) 
                                 >> 9U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT 
                        = ((IData)((5U == (5U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))))
                            ? 0x000001d0U : 0x000001b0U);
                }
                if ((((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                        << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                      == Vtb_top__ConstPool__TABLE_ha0a88702_0
                      [vlSelfRef.tb_top__DOT__r_HRES]) 
                     | ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                          << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                        == Vtb_top__ConstPool__TABLE_h9f73c1b5_0
                        [vlSelfRef.tb_top__DOT__r_HRES]))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT 
                        = (0x000001ffU & (((IData)(1U) 
                                           + (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0))) 
                                          >> 1U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)));
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)) 
                         == Vtb_top__ConstPool__TABLE_ha349bcba_0
                         [(((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                            << 6U) | (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                       << 4U) | (((IData)(vlSelfRef.PAL) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__r_HRES))))])) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT 
                            = (0x000001ffU & (Vtb_top__ConstPool__TABLE_h6a8f4be2_0
                                              [((((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                                  << 6U) 
                                                 | (((IData)(vlSelfRef.PAL) 
                                                     << 5U) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD) 
                                                       << 4U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))] 
                                              >> 1U));
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0 
                            = (1U & Vtb_top__ConstPool__TABLE_h6a8f4be2_0
                               [((((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                   << 6U) | (((IData)(vlSelfRef.PAL) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD) 
                                                << 4U))) 
                                 | (((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                     << 3U) | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))]);
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__ODD 
                            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)));
                    } else if ((0x03ffU == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT = 0U;
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0 = 0U;
                    }
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)) 
                         == (0x000003ffU & ((IData)(Vtb_top__ConstPool__TABLE_h33db5abf_0
                                                    [
                                                    (((IData)(vlSelfRef.PAL) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))]) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK = 1U;
                    } else if ((0x03ffU == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK = 0U;
                    }
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__H_CNT 
                    = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                        + ((4U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 2U : 1U)) & (0x000001feU 
                                           | (1U & 
                                              (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                  >> 2U)))));
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__H_CNT = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__VCT;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                     == (0x000001ffU & ((IData)(Vtb_top__ConstPool__TABLE_he42dc177_0
                                                [vlSelfRef.tb_top__DOT__r_HRES]) 
                                        - ((4U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                            ? 2U : 1U))))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HBLANK = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                            == ((4U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                 ? 6U : 3U))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HBLANK = 0U;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                     == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HS_START) 
                         - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HSYNC = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((0x000001ffU & ((IData)(0x0020U) 
                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HS_START))) 
                                - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HSYNC = 0U;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                     == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC_HSTART) 
                         - (IData)(1U)))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                         == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_START) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC = 1U;
                    } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_END) 
                                                   - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC = 0U;
                    }
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                     == ((0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                           ? 0x0163U
                                           : 0x0143U) 
                                         - (1U & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43)))))))) 
                         - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43)
                                 ? 2U : 1U))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                       << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                     == Vtb_top__ConstPool__TABLE_h9f73c1b5_0
                     [vlSelfRef.tb_top__DOT__r_HRES])) {
                    if ((0x03fdU == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                      << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)))) {
                        if ((0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                          >> 0x00000016U)))) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__ODD = 1U;
                        }
                        vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD 
                            = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                     >> 0x00000016U));
                        if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__F) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__INTERLACE_INT 
                                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                         >> 0x00000017U));
                        }
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__F 
                            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__F)));
                    }
                }
                vlSelfRef.tb_top__DOT__r_VRES = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__VRES_LATCH1;
                vlSelfRef.tb_top__DOT__r_HRES = (7U 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                    >> 0x00000010U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__VRES_LATCH1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__VRES_LATCH0;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__VRES_LATCH0 
                    = (((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                         << 0x0000000cU) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                            >> 0x00000014U)) 
                       & (1U | ((IData)(vlSelfRef.PAL) 
                                << 1U)));
            } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) {
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                        == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC_HSTART) 
                            - (IData)(1U))))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                         == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_START) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC = 1U;
                    } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_END) 
                                                   - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC = 0U;
                    }
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
                if (((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_VISIBLE_LINES))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FETCH = 1U;
                } else if ((0x0161U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x01a7U : 0x018bU) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                 ? 0x01a7U : 0x018bU))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x01a8U : 0x018cU) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                 ? 0x01a8U : 0x018cU))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH = 0U;
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH 
                    = ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                         == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                               ? 0x01a6U : 0x018aU) 
                             - (IData)(1U))) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT));
                vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH 
                    = ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                         == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                               ? 0x01a5U : 0x0189U) 
                             - (IData)(1U))) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT));
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x019dU : 0x0181U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((IData)(5U) + ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                                ? 0x019dU
                                                : 0x0181U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x01a3U : 0x0187U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((IData)(1U) + ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                                ? 0x01a3U
                                                : 0x0187U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x0185U : 0x0169U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((IData)(0x00000017U) 
                                + ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                    ? 0x0185U : 0x0169U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x016dU : 0x0151U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((IData)(0x00000017U) 
                                + ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                    ? 0x016dU : 0x0151U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH = 0U;
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT9 
                    = (1U & (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                                << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                              + ((4U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                  ? 2U : 1U)) >> 9U));
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT 
                    = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                        + ((4U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 2U : 1U)) & (0x000001feU 
                                           | (1U & 
                                              (~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                  >> 2U)))));
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                       << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                     == Vtb_top__ConstPool__TABLE_hc127657e_0
                     [vlSelfRef.tb_top__DOT__d_HRES])) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT9 
                        = (1U & (((IData)((5U == (5U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__d_HRES))))
                                   ? 0x03d0U : 0x03b0U) 
                                 >> 9U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT 
                        = ((IData)((5U == (5U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))))
                            ? 0x000001d0U : 0x000001b0U);
                }
                if ((((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                        << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                      == Vtb_top__ConstPool__TABLE_ha0a88702_0
                      [vlSelfRef.tb_top__DOT__d_HRES]) 
                     | ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                          << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                        == Vtb_top__ConstPool__TABLE_h9f73c1b5_0
                        [vlSelfRef.tb_top__DOT__d_HRES]))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT 
                        = (0x000001ffU & (((IData)(1U) 
                                           + (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0))) 
                                          >> 1U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)));
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)) 
                         == Vtb_top__ConstPool__TABLE_ha349bcba_0
                         [(((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                            << 6U) | (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                       << 4U) | (((IData)(vlSelfRef.PAL) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__d_HRES))))])) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT 
                            = (0x000001ffU & (Vtb_top__ConstPool__TABLE_h6a8f4be2_0
                                              [((((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                                  << 6U) 
                                                 | (((IData)(vlSelfRef.PAL) 
                                                     << 5U) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD) 
                                                       << 4U))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))] 
                                              >> 1U));
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0 
                            = (1U & Vtb_top__ConstPool__TABLE_h6a8f4be2_0
                               [((((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                   << 6U) | (((IData)(vlSelfRef.PAL) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD) 
                                                << 4U))) 
                                 | (((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                     << 3U) | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))]);
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__ODD 
                            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)));
                    } else if ((0x03ffU == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT = 0U;
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0 = 0U;
                    }
                    if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)) 
                         == (0x000003ffU & ((IData)(Vtb_top__ConstPool__TABLE_h33db5abf_0
                                                    [
                                                    (((IData)(vlSelfRef.PAL) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))]) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK = 1U;
                    } else if ((0x03ffU == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK = 0U;
                    }
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__H_CNT 
                    = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                        + ((4U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 2U : 1U)) & (0x000001feU 
                                           | (1U & 
                                              (~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                  >> 2U)))));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__H_CNT = 0U;
                    vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__VCT;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                     == (0x000001ffU & ((IData)(Vtb_top__ConstPool__TABLE_he42dc177_0
                                                [vlSelfRef.tb_top__DOT__d_HRES]) 
                                        - ((4U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                            ? 2U : 1U))))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HBLANK = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                            == ((4U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                 ? 6U : 3U))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HBLANK = 0U;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                     == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HS_START) 
                         - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HSYNC = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((0x000001ffU & ((IData)(0x0020U) 
                                                + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HS_START))) 
                                - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HSYNC = 0U;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                     == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC_HSTART) 
                         - (IData)(1U)))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                         == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_START) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC = 1U;
                    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_END) 
                                                   - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC = 0U;
                    }
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                     == ((0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                           ? 0x0163U
                                           : 0x0143U) 
                                         - (1U & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)))))))) 
                         - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)
                                 ? 2U : 1U))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                       << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                     == Vtb_top__ConstPool__TABLE_h9f73c1b5_0
                     [vlSelfRef.tb_top__DOT__d_HRES])) {
                    if ((0x03fdU == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                      << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)))) {
                        if ((0U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                          >> 0x00000016U)))) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__ODD = 1U;
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD 
                            = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                     >> 0x00000016U));
                        if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__F) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__INTERLACE_INT 
                                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                         >> 0x00000017U));
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__F 
                            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__F)));
                    }
                }
                vlSelfRef.tb_top__DOT__d_VRES = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__VRES_LATCH1;
                vlSelfRef.tb_top__DOT__d_HRES = (7U 
                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                    >> 0x00000010U));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__VRES_LATCH1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__VRES_LATCH0;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__VRES_LATCH0 
                    = (((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                         << 0x0000000cU) | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                            >> 0x00000014U)) 
                       & (1U | ((IData)(vlSelfRef.PAL) 
                                << 1U)));
            } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) {
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                        == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC_HSTART) 
                            - (IData)(1U))))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                         == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_START) 
                                            - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC = 1U;
                    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                == (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_END) 
                                                   - (IData)(1U))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC = 0U;
                    }
                }
            }
            if (((((~ (IData)(vlSelfRef.CS_N)) & (IData)(vlSelfRef.DTEN_N)) 
                  & (IData)(vlSelfRef.AD_N)) & (IData)(vlSelfRef.CE_R))) {
                if ((0x00008000U & (IData)(vlSelfRef.DI))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__DQM 
                        = (3U & ((IData)(vlSelfRef.DI) 
                                 >> 0x0cU));
                }
                if ((1U & (~ ((IData)(vlSelfRef.DI) 
                              >> 0x0fU)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__BURST 
                        = (1U & ((IData)(vlSelfRef.DI) 
                                 >> 0x0dU));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N 
                        = (1U & ((IData)(vlSelfRef.DI) 
                                 >> 0x0eU));
                }
            }
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__DQM = 3U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__BURST = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__ODD = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__F = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT9 = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT = 0x01b0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT = 0x01e6U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0 = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__H_CNT = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT = 0x01e6U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__HBLANK = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__HSYNC = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__ODD = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__F = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT9 = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT = 0x01b0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT = 0x01e6U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0 = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__H_CNT = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT = 0x01e6U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__HBLANK = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__HSYNC = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC = 1U;
        }
        if (((0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT)) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND)))) {
            if ((2U & vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) {
                if ((1U & vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                        = ((0xffffffffffff0000ULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                           | (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                        = ((0xfcU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                           | (3U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24))));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 1U;
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                        = ((0xffffffff0000ffffULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                           | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
                              << 0x00000010U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                        = ((0xf3U & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                           | (0x0000000cU & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)) 
                                             << 2U)));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND 
                        = (1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT));
                }
            } else {
                if ((1U & vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                        = ((0xffff0000ffffffffULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                           | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
                              << 0x00000020U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                        = ((0xcfU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                           | (0x00000030U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)) 
                                             << 4U)));
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WA 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_4;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D 
                        = ((0x0000ffffffffffffULL & vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_D) 
                           | ((QData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
                              << 0x00000030U));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE 
                        = ((0x3fU & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE)) 
                           | (0x000000c0U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)) 
                                             << 6U)));
                }
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND 
                    = (1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT));
            }
        }
        if (((IData)(vlSelfRef.CS_N) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__CS_N_OLD)))) {
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK 
                = (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT));
        }
        if ((((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT))) 
              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND_CLR)) 
             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WLOCK))) {
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.RES_N)))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRDY = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK = 0U;
        }
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__CS_N_OLD 
            = vlSelfRef.CS_N;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__DTEN_N_OLD 
            = vlSelfRef.DTEN_N;
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FETCH = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_WE = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_WE = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LS_POS = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRDY = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LS_POS = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__ODD = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk1__DOT__F = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT9 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0 = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__H_CNT = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__HBLANK = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__HSYNC = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__ODD = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk1__DOT__F = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT9 = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0 = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__H_CNT = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__HBLANK = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__HSYNC = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC = 0U;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WD = ((0U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                                                  ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                                                    ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF
                                                    : vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PEND 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_READ_PEND;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMA_ALLOW;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk3__DOT__VRAMB_ALLOW;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WE = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WE;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_READ_PIPE[1U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[0U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[0U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[1U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[1U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[2U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[2U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC[3U] 
        = (0U != vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[3U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WLOCK = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VRAM_WLOCK;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[__VdlyDim0__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LS_TBL_OFFS__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[__VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[__VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[__VdlyDim0__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v2] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LS_VAL_OFFS__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[1U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LS_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__LW_POS;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR[__VdlyDim0__tb_top__DOT__u_ref__DOT__LW_ADDR__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v0] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v1] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v2] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v3] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_FETCH__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LW_ADDR__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__LW_ADDR[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__LW_ADDR__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VA_PIPE;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR[__VdlyDim0__tb_top__DOT__u_dut__DOT__LW_ADDR__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LW_ADDR__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR[0U] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR[1U] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LW_ADDR__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[__VdlyDim0__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[0U] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[1U] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LS_TBL_OFFS__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[__VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[__VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1] 
            = __VdlyVal__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[__VdlyDim0__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v2] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LS_VAL_OFFS__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[1U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LW_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__LS_POS;
    vlSelfRef.r_RA_WE = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_WE;
    vlSelfRef.r_RB_WE = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_WE;
    vlSelfRef.r_RA0_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_A;
    vlSelfRef.r_RA1_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_A;
    vlSelfRef.r_RB0_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_A;
    vlSelfRef.r_RB1_A = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_A;
    vlSelfRef.r_RA_D = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA_D;
    vlSelfRef.r_RB_D = vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB_D;
    vlSelfRef.r_RA_RD = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_RD));
    vlSelfRef.r_RB_RD = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_RD));
    vlSelfRef.tb_top__DOT__u_ref__DOT__A = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__A;
    vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DISP_INT;
    vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DISP_INT;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0 = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT0;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCT = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VCT;
    vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9 = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT9;
    vlSelfRef.tb_top__DOT__u_dut__DOT__HCT = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HCT;
    vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__H_CNT;
    vlSelfRef.tb_top__DOT__u_dut__DOT__ODD = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__ODD;
    vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x000c0000U 
                                                     == 
                                                     (0x000e0000U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__A)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR 
        = (0x000007ffU & ((IData)(vlSelfRef.AD_N) ? 
                          ((0x00000700U & vlSelfRef.tb_top__DOT__u_ref__DOT__A) 
                           | (0x000000ffU & (IData)(vlSelfRef.DI)))
                           : vlSelfRef.tb_top__DOT__u_ref__DOT__A));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.CS_N) 
                                                       | ((IData)(vlSelfRef.AD_N) 
                                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                                             >> 0x00000013U)))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x00080000U 
                                                     == 
                                                     (0x000c0000U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__A)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY = ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))
                                                  ? 
                                                 ((0x000001feU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD))))
                                                  : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ = (
                                                   (~ (IData)(vlSelfRef.REQ_N)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0 = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT0;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VCT = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VCT;
    vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9 = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT9;
    vlSelfRef.tb_top__DOT__u_ref__DOT__HCT = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__HCT;
    vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__H_CNT;
    vlSelfRef.tb_top__DOT__u_ref__DOT__ODD = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__ODD;
    vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ = 
        ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_REQ) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
            & ((~ (IData)(vlSelfRef.DTEN_N)) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_WE = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL) 
                                                 & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY = ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))
                                                  ? 
                                                 ((0x000001feU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD))))
                                                  : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNY));
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
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_END 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x0151U : 0x0131U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                  >> 1U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = (IData)(
                                                        (2U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__d_HRES))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                                                   == 
                                                   (0x000001ffU 
                                                    & (0x01feU 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                                         >> 2U))))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x01b1U : 0x0195U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                  >> 1U)))))));
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
    vlSelfRef.tb_top__DOT__u_dut__DOT__HS_START = (0x000001ffU 
                                                   & (((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                                        ? 0x017cU
                                                        : 0x015eU) 
                                                      - 
                                                      (4U 
                                                       & (- (IData)((IData)(vlSelfRef.PAL))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[0U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[0U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[1U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[1U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX0) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                       >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__CYT = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                                              & (3U 
                                                 | (4U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                         >> 1U)) 
                                                       << 2U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START_EN 
        = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START) 
            - (IData)(1U)) == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT));
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
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_END 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x0151U : 0x0131U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                  >> 1U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_43 = (IData)(
                                                        (2U 
                                                         != 
                                                         (6U 
                                                          & (IData)(vlSelfRef.tb_top__DOT__r_HRES))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__LAST_DOT = ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                                                   == 
                                                   (0x000001ffU 
                                                    & (0x01feU 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                                         >> 2U))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START 
        = (0x000001ffU & (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x01b1U : 0x0195U) + 
                          (8U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                  >> 1U)))))));
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
    vlSelfRef.tb_top__DOT__u_ref__DOT__HS_START = (0x000001ffU 
                                                   & (((1U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                                        ? 0x017cU
                                                        : 0x015eU) 
                                                      - 
                                                      (4U 
                                                       & (- (IData)((IData)(vlSelfRef.PAL))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_32 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[0U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[0U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = ((0x000003feU 
                                                  & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[1U] 
                                                      >> 1U) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                        >> 1U) 
                                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[1U])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX0) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                       >> 1U)));
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[32U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[32U];
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[33U];
        vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT 
            = vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[33U];
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START_EN 
        = (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START) 
            - (IData)(1U)) == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT));
}

extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_hb568d580_0;
extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_h1f995f22_0;

void Vtb_top___024root___nba_sequent__TOP__6(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__6\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__HM__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__HM__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__g_ml__DOT__mem__v0;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__lcsd_tap__DOT__wp;
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[4U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][4U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[5U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][5U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[6U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][6U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[7U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn) 
                - (IData)(4U)))][7U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wpn) 
                - (IData)(3U)))];
    vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__ab 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A;
    vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__ab 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A;
    vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa 
        = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_N));
    vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa 
        = (0x000003ffU & ((0x00008000U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                           ? ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_A) 
                              + (1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)))
                           : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_N)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa 
        = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_N));
    vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa 
        = (0x000003ffU & ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U])
                           ? ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_A) 
                              + (1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)))
                           : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_N)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wpn) 
                - (IData)(2U)))][0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wpn) 
                - (IData)(2U)))][1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem
        [(7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wpn) 
                - (IData)(2U)))][2U];
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[0U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[1U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[2U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[3U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[4U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[5U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[6U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0][7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__mem__v0[7U];
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__mem__v0;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__DOTCLK_DIV;
    vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DOTCLK_DIV;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0[0U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0[1U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__mem__v0[2U];
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[0U] = (
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[1U] 
                                                    << 0x0000000aU) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[0U] 
                                                      >> 0x00000016U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[1U] = (
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[2U] 
                                                    << 0x0000000aU) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[1U] 
                                                      >> 0x00000016U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PN4E[2U] = (0x0000ffffU 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                       << 0x0000000aU) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[2U] 
                                                         >> 0x00000016U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[0U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[4U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[1U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[5U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[4U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[2U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[6U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[5U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[3U] = ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[7U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[6U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[4U] = (0x000001ffU 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[7U] 
                                                     >> 6U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F = ((IData)(vlSelfRef.CE_R) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F = ((IData)(vlSelfRef.CE_R) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WA = (0x0000001fU 
                                                 & ((0x13U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                            >> 0x0000001eU))))
                                                     ? 
                                                    (0x00000018U 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                            >> 3U))))
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                             >> 0x0000001eU))))
                                                      ? 
                                                     (0x0000001aU 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                             >> 3U))))
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                            << 2U) 
                                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                              >> 0x0000001eU))))
                                                       ? 
                                                      (0x0000001cU 
                                                       | (1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                              >> 3U))))
                                                       : 
                                                      ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                          >> 0x0000001eU))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = (1U 
                                                 & ((~ vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U]) 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                       >> 0x0000001eU)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_55 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                                 [
                                                                 (0x0000001fU 
                                                                  & Vtb_top__ConstPool__CONST_hb568d580_0
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((0x07fffffcU 
                                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                                          << 2U)) 
                                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                                         >> 0x0000001eU)))])] 
                                                                 >> 0x0000001cU)))) 
                                                  << 0x0000001dU) 
                                                 | (0x1fffffc0U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                    [
                                                    (0x0000001fU 
                                                     & Vtb_top__ConstPool__CONST_hb568d580_0
                                                     [
                                                     (0x0000001fU 
                                                      & ((0x07fffffcU 
                                                          & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                             << 2U)) 
                                                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                            >> 0x0000001eU)))])]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                                                 [
                                                                 (0x0000001fU 
                                                                  & Vtb_top__ConstPool__CONST_h1f995f22_0
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((0x07fffffcU 
                                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                                          << 2U)) 
                                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                                         >> 0x0000001eU)))])] 
                                                                 >> 0x00000012U)))) 
                                                  << 0x00000013U) 
                                                 | (0x0007ffc0U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                                    [
                                                    (0x0000001fU 
                                                     & Vtb_top__ConstPool__CONST_h1f995f22_0
                                                     [
                                                     (0x0000001fU 
                                                      & ((0x07fffffcU 
                                                          & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                             << 2U)) 
                                                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                            >> 0x0000001eU)))])]));
}

void Vtb_top___024root___nba_comb__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT 
            = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem
               [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp) 
                                - (IData)(0x21U)))]);
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT 
            = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__g_ml__DOT__mem
                     [(0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit33__DOT__wp) 
                                      - (IData)(0x21U)))] 
                     >> 1U));
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT34));
        vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT 
            = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT34) 
                     >> 1U));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__CYB0 = ((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld) 
                                                   >> 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                       >> 2U))))
                                                ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__g_ml__DOT__mem
                                               [(1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                    >> 2U))]
                                                : 0U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__CYA0 = ((1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld) 
                                                   >> 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                       >> 2U))))
                                                ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__g_ml__DOT__mem
                                               [(1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                                    >> 2U))]
                                                : 0U);
    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                  >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                               >> 1U))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH));
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC));
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_N = (0x000007ffU 
                                                & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__CAOS) 
                                                    << 8U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk22__DOT__PAL)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_X = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40));
    vlSelfRef.tb_top__DOT__u_dut__DOT__ACC_Y = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40));
    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                  >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                               >> 1U))))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH));
        } else {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__CAOS 
                = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                                 >> 0x00000025U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__PAL 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC));
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__CAOS 
            = (7U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                             >> 0x00000025U)));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__PAL 
            = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_N = (0x000007ffU 
                                                & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__CAOS) 
                                                    << 8U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk34__DOT__PAL)));
}

extern const VlWide<72>/*2303:0*/ Vtb_top__ConstPool__CONST_h522daad2_0;

void Vtb_top___024root___nba_sequent__TOP__8(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__8\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_7__NxLSAddr;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_6__NxLSAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_17__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_16__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_15__NxLSAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_14__NxLSAddr;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT____VlemCall_13__RxScreenOver;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT____VlemCall_12__RxScreenOver;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_11__RxCHAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_9__NxCHAddr2;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_8__NxCHAddr2;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_5__RxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_4__RxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_3__NxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_2__NxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_1__NxPNAddr;
    IData/*18:0*/ tb_top__DOT__u_ref__DOT____VlemCall_0__NxPNAddr;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSA0;
    tb_top__DOT__u_ref__DOT__RDBSA0 = 0;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSA1;
    tb_top__DOT__u_ref__DOT__RDBSA1 = 0;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSB0;
    tb_top__DOT__u_ref__DOT__RDBSB0 = 0;
    CData/*1:0*/ tb_top__DOT__u_ref__DOT__RDBSB1;
    tb_top__DOT__u_ref__DOT__RDBSB1 = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__RPW_EN;
    tb_top__DOT__u_ref__DOT__RPW_EN = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP = 0;
    VlUnpacked<Vtb_top_VDP2NSRegs_t__struct__0, 4> __Vfunc_NSxRegs__0__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SCX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SCY = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMY = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMHF = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ZMQT = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSTA = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSCX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSCY = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LZMX = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__VCSC = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LSS = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__LWTA = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_NSxRegs__0__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_NSxRegs__0__REGS;
    VL_ZERO_W(2304, __Vfunc_NSxRegs__0__REGS);
    VlUnpacked<Vtb_top_VDP2RSRegs_t__struct__0, 2> __Vfunc_RSxRegs__1__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_RSxRegs__1__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RSxRegs__1__REGS;
    VL_ZERO_W(2304, __Vfunc_RSxRegs__1__REGS);
    VlUnpacked<Vtb_top_VDP2RPRegs_t__struct__0, 2> __Vfunc_RPxRegs__2__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KTE = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KMD = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KTAOS = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KDBS = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__KLCE = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__OVR = 0;
        __Vfunc_RPxRegs__2__Vfuncout[__Vi0].__PVT__OVPNR = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RPxRegs__2__REGS;
    VL_ZERO_W(2304, __Vfunc_RPxRegs__2__REGS);
    IData/*17:0*/ __Vfunc_NxLSAddr__20__NxLSTA;
    __Vfunc_NxLSAddr__20__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__20__TBL_OFFS;
    __Vfunc_NxLSAddr__20__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__20__VAL_OFFS;
    __Vfunc_NxLSAddr__20__VAL_OFFS = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__21__NxLSTA;
    __Vfunc_NxLSAddr__21__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__21__TBL_OFFS;
    __Vfunc_NxLSAddr__21__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__21__VAL_OFFS;
    __Vfunc_NxLSAddr__21__VAL_OFFS = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__98__Vfuncout;
    __Vfunc_MakeDotData__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__98__DCC;
    __Vfunc_MakeDotData__98__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__98__CDP;
    __Vfunc_MakeDotData__98__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__98__CHCN;
    __Vfunc_MakeDotData__98__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__98__TPON;
    __Vfunc_MakeDotData__98__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__99__Vfuncout;
    __Vfunc_MakeDotData__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__99__DCC;
    __Vfunc_MakeDotData__99__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__99__CDP;
    __Vfunc_MakeDotData__99__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__99__CHCN;
    __Vfunc_MakeDotData__99__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__99__TPON;
    __Vfunc_MakeDotData__99__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__100__Vfuncout;
    __Vfunc_MakeDotData__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__100__DCC;
    __Vfunc_MakeDotData__100__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__100__CDP;
    __Vfunc_MakeDotData__100__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__100__CHCN;
    __Vfunc_MakeDotData__100__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__100__TPON;
    __Vfunc_MakeDotData__100__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__101__Vfuncout;
    __Vfunc_MakeDotData__101__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__101__DCC;
    __Vfunc_MakeDotData__101__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__101__CDP;
    __Vfunc_MakeDotData__101__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__101__CHCN;
    __Vfunc_MakeDotData__101__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__101__TPON;
    __Vfunc_MakeDotData__101__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__102__Vfuncout;
    __Vfunc_MakeDotData__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__102__DCC;
    __Vfunc_MakeDotData__102__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__102__CDP;
    __Vfunc_MakeDotData__102__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__102__CHCN;
    __Vfunc_MakeDotData__102__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__102__TPON;
    __Vfunc_MakeDotData__102__TPON = 0;
    VlUnpacked<Vtb_top_VDP2NSRegs_t__struct__0, 4> __Vfunc_NSxRegs__132__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SCX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SCY = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMY = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMHF = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ZMQT = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSTA = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSCX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSCY = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LZMX = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__VCSC = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LSS = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__LWTA = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_NSxRegs__132__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_NSxRegs__132__REGS;
    VL_ZERO_W(2304, __Vfunc_NSxRegs__132__REGS);
    VlUnpacked<Vtb_top_VDP2RSRegs_t__struct__0, 2> __Vfunc_RSxRegs__133__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CHCN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CHSZ = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMSZ = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMEN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__PNC = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMP = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMPR = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__BMCC = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__MZE = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__TPON = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__ON = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CAOS = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__PRIN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__SPRM = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__COEN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__COSL = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CCEN = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__CCRT = 0;
        __Vfunc_RSxRegs__133__Vfuncout[__Vi0].__PVT__SCCM = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RSxRegs__133__REGS;
    VL_ZERO_W(2304, __Vfunc_RSxRegs__133__REGS);
    VlUnpacked<Vtb_top_VDP2RPRegs_t__struct__0, 2> __Vfunc_RPxRegs__134__Vfuncout;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KTE = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KMD = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KTAOS = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KDBS = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__KLCE = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__PLSZ = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__OVR = 0;
        __Vfunc_RPxRegs__134__Vfuncout[__Vi0].__PVT__OVPNR = 0;
    }
    VlWide<72>/*2303:0*/ __Vfunc_RPxRegs__134__REGS;
    VL_ZERO_W(2304, __Vfunc_RPxRegs__134__REGS);
    CData/*1:0*/ __Vfunc_NxPNAddr__135__NxPN_CNT;
    __Vfunc_NxPNAddr__135__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__135__NxOFFX;
    __Vfunc_NxPNAddr__135__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__135__NxOFFY;
    __Vfunc_NxPNAddr__135__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__135__NxMP;
    __Vfunc_NxPNAddr__135__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__135__NxPLSZ;
    __Vfunc_NxPNAddr__135__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxCHSZ;
    __Vfunc_NxPNAddr__135__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxPNB;
    __Vfunc_NxPNAddr__135__NxPNB = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxZMHF;
    __Vfunc_NxPNAddr__135__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__135__NxZMQT;
    __Vfunc_NxPNAddr__135__NxZMQT = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__136__NxPN_CNT;
    __Vfunc_NxPNAddr__136__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__136__NxOFFX;
    __Vfunc_NxPNAddr__136__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__136__NxOFFY;
    __Vfunc_NxPNAddr__136__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__136__NxMP;
    __Vfunc_NxPNAddr__136__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__136__NxPLSZ;
    __Vfunc_NxPNAddr__136__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxCHSZ;
    __Vfunc_NxPNAddr__136__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxPNB;
    __Vfunc_NxPNAddr__136__NxPNB = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxZMHF;
    __Vfunc_NxPNAddr__136__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__136__NxZMQT;
    __Vfunc_NxPNAddr__136__NxZMQT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__137__NxOFFX;
    __Vfunc_NxPNAddr__137__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__137__NxOFFY;
    __Vfunc_NxPNAddr__137__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__137__NxMP;
    __Vfunc_NxPNAddr__137__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__137__NxPLSZ;
    __Vfunc_NxPNAddr__137__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__137__NxCHSZ;
    __Vfunc_NxPNAddr__137__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__137__NxPNB;
    __Vfunc_NxPNAddr__137__NxPNB = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__138__NxOFFX;
    __Vfunc_NxPNAddr__138__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr__138__NxOFFY;
    __Vfunc_NxPNAddr__138__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr__138__NxMP;
    __Vfunc_NxPNAddr__138__NxMP = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr__138__NxPLSZ;
    __Vfunc_NxPNAddr__138__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__138__NxCHSZ;
    __Vfunc_NxPNAddr__138__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr__138__NxPNB;
    __Vfunc_NxPNAddr__138__NxPNB = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__139__RxOFFX;
    __Vfunc_RxPNAddr__139__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__139__RxOFFY;
    __Vfunc_RxPNAddr__139__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxPNAddr__139__RxMP;
    __Vfunc_RxPNAddr__139__RxMP = 0;
    CData/*1:0*/ __Vfunc_RxPNAddr__139__RxPLSZ;
    __Vfunc_RxPNAddr__139__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__139__RxCHSZ;
    __Vfunc_RxPNAddr__139__RxCHSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__139__RxPNB;
    __Vfunc_RxPNAddr__139__RxPNB = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__140__RxOFFX;
    __Vfunc_RxPNAddr__140__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr__140__RxOFFY;
    __Vfunc_RxPNAddr__140__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxPNAddr__140__RxMP;
    __Vfunc_RxPNAddr__140__RxMP = 0;
    CData/*1:0*/ __Vfunc_RxPNAddr__140__RxPLSZ;
    __Vfunc_RxPNAddr__140__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__140__RxCHSZ;
    __Vfunc_RxPNAddr__140__RxCHSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr__140__RxPNB;
    __Vfunc_RxPNAddr__140__RxPNB = 0;
    VlUnpacked<IData/*31:0*/, 2> __Vfunc_NxCHAddr2__145__NxPN;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_NxCHAddr2__145__NxPN[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_NxCHAddr2__145__NxCH_CNT;
    __Vfunc_NxCHAddr2__145__NxCH_CNT = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__145__NxOFFX;
    __Vfunc_NxCHAddr2__145__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__145__NxOFFY;
    __Vfunc_NxCHAddr2__145__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxCHAddr2__145__NxCHCN;
    __Vfunc_NxCHAddr2__145__NxCHCN = 0;
    CData/*0:0*/ __Vfunc_NxCHAddr2__145__NxCHSZ;
    __Vfunc_NxCHAddr2__145__NxCHSZ = 0;
    VlUnpacked<IData/*31:0*/, 2> __Vfunc_NxCHAddr2__146__NxPN;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_NxCHAddr2__146__NxPN[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_NxCHAddr2__146__NxCH_CNT;
    __Vfunc_NxCHAddr2__146__NxCH_CNT = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__146__NxOFFX;
    __Vfunc_NxCHAddr2__146__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__146__NxOFFY;
    __Vfunc_NxCHAddr2__146__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxCHAddr2__146__NxCHCN;
    __Vfunc_NxCHAddr2__146__NxCHCN = 0;
    CData/*0:0*/ __Vfunc_NxCHAddr2__146__NxCHSZ;
    __Vfunc_NxCHAddr2__146__NxCHSZ = 0;
    IData/*31:0*/ __Vfunc_RxCHAddr__149__RxPNx;
    __Vfunc_RxCHAddr__149__RxPNx = 0;
    SData/*11:0*/ __Vfunc_RxCHAddr__149__RxOFFX;
    __Vfunc_RxCHAddr__149__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxCHAddr__149__RxOFFY;
    __Vfunc_RxCHAddr__149__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxCHAddr__149__RxCHCN;
    __Vfunc_RxCHAddr__149__RxCHCN = 0;
    CData/*0:0*/ __Vfunc_RxCHAddr__149__RxCHSZ;
    __Vfunc_RxCHAddr__149__RxCHSZ = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__150__RxOVR;
    __Vfunc_RxScreenOver__150__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__150__RxOFFX;
    __Vfunc_RxScreenOver__150__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__150__RxOFFY;
    __Vfunc_RxScreenOver__150__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__150__RxPLSZ;
    __Vfunc_RxScreenOver__150__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__150__RxBMSZ;
    __Vfunc_RxScreenOver__150__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__150__RxBMEN;
    __Vfunc_RxScreenOver__150__RxBMEN = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__151__RxOVR;
    __Vfunc_RxScreenOver__151__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__151__RxOFFX;
    __Vfunc_RxScreenOver__151__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__151__RxOFFY;
    __Vfunc_RxScreenOver__151__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__151__RxPLSZ;
    __Vfunc_RxScreenOver__151__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__151__RxBMSZ;
    __Vfunc_RxScreenOver__151__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__151__RxBMEN;
    __Vfunc_RxScreenOver__151__RxBMEN = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__152__NxLSTA;
    __Vfunc_NxLSAddr__152__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__152__TBL_OFFS;
    __Vfunc_NxLSAddr__152__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__152__VAL_OFFS;
    __Vfunc_NxLSAddr__152__VAL_OFFS = 0;
    IData/*17:0*/ __Vfunc_NxLSAddr__153__NxLSTA;
    __Vfunc_NxLSAddr__153__NxLSTA = 0;
    SData/*10:0*/ __Vfunc_NxLSAddr__153__TBL_OFFS;
    __Vfunc_NxLSAddr__153__TBL_OFFS = 0;
    CData/*1:0*/ __Vfunc_NxLSAddr__153__VAL_OFFS;
    __Vfunc_NxLSAddr__153__VAL_OFFS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__155__RxKAst;
    __Vfunc_RxCTAddr__155__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__155__RxKA;
    __Vfunc_RxCTAddr__155__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__155__RxKTAOS;
    __Vfunc_RxCTAddr__155__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__155__RxKDBS;
    __Vfunc_RxCTAddr__155__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__156__RxKAst;
    __Vfunc_RxCTAddr__156__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__156__RxKA;
    __Vfunc_RxCTAddr__156__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__156__RxKTAOS;
    __Vfunc_RxCTAddr__156__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__156__RxKDBS;
    __Vfunc_RxCTAddr__156__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__157__Vfuncout;
    __Vfunc_RxCTAddr__157__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__157__RxKAst;
    __Vfunc_RxCTAddr__157__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__157__RxKA;
    __Vfunc_RxCTAddr__157__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__157__RxKTAOS;
    __Vfunc_RxCTAddr__157__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__157__RxKDBS;
    __Vfunc_RxCTAddr__157__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__158__Vfuncout;
    __Vfunc_RxCTAddr__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__158__RxKAst;
    __Vfunc_RxCTAddr__158__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__158__RxKA;
    __Vfunc_RxCTAddr__158__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__158__RxKTAOS;
    __Vfunc_RxCTAddr__158__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__158__RxKDBS;
    __Vfunc_RxCTAddr__158__RxKDBS = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__Vfuncout;
    __Vfunc_WinTest__226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W0HIT;
    __Vfunc_WinTest__226__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W1HIT;
    __Vfunc_WinTest__226__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W0E;
    __Vfunc_WinTest__226__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__W1E;
    __Vfunc_WinTest__226__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__226__LOG;
    __Vfunc_WinTest__226__LOG = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__232__Vfuncout;
    __Vfunc_MakeDotData__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__232__DCC;
    __Vfunc_MakeDotData__232__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__232__CDP;
    __Vfunc_MakeDotData__232__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__232__CHCN;
    __Vfunc_MakeDotData__232__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__232__TPON;
    __Vfunc_MakeDotData__232__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__233__Vfuncout;
    __Vfunc_MakeDotData__233__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__233__DCC;
    __Vfunc_MakeDotData__233__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__233__CDP;
    __Vfunc_MakeDotData__233__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__233__CHCN;
    __Vfunc_MakeDotData__233__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__233__TPON;
    __Vfunc_MakeDotData__233__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__234__Vfuncout;
    __Vfunc_MakeDotData__234__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__234__DCC;
    __Vfunc_MakeDotData__234__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__234__CDP;
    __Vfunc_MakeDotData__234__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__234__CHCN;
    __Vfunc_MakeDotData__234__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__234__TPON;
    __Vfunc_MakeDotData__234__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__235__Vfuncout;
    __Vfunc_MakeDotData__235__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__235__DCC;
    __Vfunc_MakeDotData__235__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__235__CDP;
    __Vfunc_MakeDotData__235__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__235__CHCN;
    __Vfunc_MakeDotData__235__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__235__TPON;
    __Vfunc_MakeDotData__235__TPON = 0;
    IData/*27:0*/ __Vfunc_MakeDotData__236__Vfuncout;
    __Vfunc_MakeDotData__236__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MakeDotData__236__DCC;
    __Vfunc_MakeDotData__236__DCC = 0;
    SData/*9:0*/ __Vfunc_MakeDotData__236__CDP;
    __Vfunc_MakeDotData__236__CDP = 0;
    CData/*2:0*/ __Vfunc_MakeDotData__236__CHCN;
    __Vfunc_MakeDotData__236__CHCN = 0;
    CData/*0:0*/ __Vfunc_MakeDotData__236__TPON;
    __Vfunc_MakeDotData__236__TPON = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__Vfuncout;
    __Vfunc_WinTest__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W0HIT;
    __Vfunc_WinTest__243__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W1HIT;
    __Vfunc_WinTest__243__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__WSHIT;
    __Vfunc_WinTest__243__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W0E;
    __Vfunc_WinTest__243__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__W1E;
    __Vfunc_WinTest__243__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__SWE;
    __Vfunc_WinTest__243__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__243__LOG;
    __Vfunc_WinTest__243__LOG = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__Vfuncout;
    __Vfunc_WinTest__244__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W0HIT;
    __Vfunc_WinTest__244__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W1HIT;
    __Vfunc_WinTest__244__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__WSHIT;
    __Vfunc_WinTest__244__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W0E;
    __Vfunc_WinTest__244__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__W1E;
    __Vfunc_WinTest__244__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__SWE;
    __Vfunc_WinTest__244__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__244__LOG;
    __Vfunc_WinTest__244__LOG = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_26;
    __VdfgRegularize_hebeb780c_0_26 = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr = 0;
    CData/*1:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX = 0;
    SData/*8:0*/ TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr = 0;
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
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr = 0;
    SData/*8:0*/ TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr;
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs;
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs = 0;
    CData/*0:0*/ TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res = 0;
    IData/*23:0*/ TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC = 0;
    CData/*2:0*/ TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    // Body
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[0U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[0U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[0U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[1U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[1U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[1U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[2U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[2U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[2U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[3U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[3U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[3U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[3U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[3U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[4U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[4U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[4U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[4U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[4U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[5U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[5U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[5U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[5U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[5U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[6U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[6U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[6U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[7U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[7U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[7U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[8U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[8U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[8U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[8U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[8U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[9U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[9U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[9U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[9U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[9U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[10U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[10U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[10U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[11U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[11U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[11U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[12U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[12U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[12U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[13U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[13U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[13U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[14U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[14U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[14U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[14U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[14U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[15U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[15U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[15U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[16U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[16U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[16U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[16U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[16U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[17U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[17U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[17U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[17U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[17U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[18U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[18U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[18U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[19U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[19U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[19U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[20U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[20U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[20U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[20U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[20U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[21U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[21U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[21U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[21U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[21U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[22U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[22U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[22U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[22U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[22U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[23U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[23U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[23U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[23U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[23U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[24U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[24U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[24U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[24U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[24U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[25U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[25U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[25U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[25U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[25U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[26U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[26U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[26U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[26U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[26U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[27U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[27U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[27U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[28U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[28U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[28U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[28U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[28U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[29U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[29U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[29U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[29U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[29U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[30U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[30U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[30U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[30U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[30U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[31U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[31U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[31U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[31U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[31U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[32U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[32U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[32U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[32U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[32U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[33U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[33U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[33U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[33U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[33U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[34U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[34U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[34U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[34U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[34U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[35U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[35U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[35U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[35U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[35U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[36U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[36U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[36U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[36U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[36U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[37U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[37U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[37U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[37U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[37U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[38U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[38U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[38U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[38U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[38U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[39U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[39U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[39U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[39U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[39U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[40U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[40U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[40U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[40U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[40U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[41U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[41U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[41U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[41U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[41U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[42U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[42U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[42U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[42U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[42U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[43U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[43U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[43U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[43U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[43U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[44U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[44U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[44U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[44U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[44U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[45U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[45U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[45U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[45U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[45U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[46U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[46U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[46U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[46U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[46U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[47U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[47U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[47U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[47U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[47U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[48U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[48U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[48U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[48U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[48U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[49U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[49U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[49U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[49U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[49U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[50U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[50U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[50U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[50U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[50U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[51U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[51U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[51U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[51U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[51U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[52U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[52U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[52U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[52U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[52U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[53U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[53U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[53U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[53U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[53U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[54U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[54U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[54U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[54U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[54U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[55U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[55U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[55U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[55U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[55U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[56U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[56U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[56U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[56U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[56U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[57U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[57U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[57U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[57U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[57U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[58U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[58U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[58U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[58U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[58U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[59U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[59U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[59U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[59U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[59U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[60U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[60U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[60U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[60U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[60U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[61U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[61U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[61U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[61U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[61U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[62U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[62U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[62U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[63U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[63U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[63U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[64U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[64U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[64U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[65U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[65U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[65U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[66U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[66U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[66U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[67U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[67U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[67U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[68U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[68U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[68U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[69U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[69U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[69U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[70U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[70U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[71U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U]) 
         | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U])));
    VL_ASSIGN_W(2304, vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS, Vtb_top__ConstPool__CONST_h522daad2_0);
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[0U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[0U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[0U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[1U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[1U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[1U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[2U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[2U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[2U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[3U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[3U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[3U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[3U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[3U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[4U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[4U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[4U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[4U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[4U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[5U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[5U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[5U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[5U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[5U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[6U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[6U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[6U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[7U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[7U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[7U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[8U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[8U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[8U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[8U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[8U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[9U] = (
                                                   (vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[9U] 
                                                    & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[9U]) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[9U] 
                                                      & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[9U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[10U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[10U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[10U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[11U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[11U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[11U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[12U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[12U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[12U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[13U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[13U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[13U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[14U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[14U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[14U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[14U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[14U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[15U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[15U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[15U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[16U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[16U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[16U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[16U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[16U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[17U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[17U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[17U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[17U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[17U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[18U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[18U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[18U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[19U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[19U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[19U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[20U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[20U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[20U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[20U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[20U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[21U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[21U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[21U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[21U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[21U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[22U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[22U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[22U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[22U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[22U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[23U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[23U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[23U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[23U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[23U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[24U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[24U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[24U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[24U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[24U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[25U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[25U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[25U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[25U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[25U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[26U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[26U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[26U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[26U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[26U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[27U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[27U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[27U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[28U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[28U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[28U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[28U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[28U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[29U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[29U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[29U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[29U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[29U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[30U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[30U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[30U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[30U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[30U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[31U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[31U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[31U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[31U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[31U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[32U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[32U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[32U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[32U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[32U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[33U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[33U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[33U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[33U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[33U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[34U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[34U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[34U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[34U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[34U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[35U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[35U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[35U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[35U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[35U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[36U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[36U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[36U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[36U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[36U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[37U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[37U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[37U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[37U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[37U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[38U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[38U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[38U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[38U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[38U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[39U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[39U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[39U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[39U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[39U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[40U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[40U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[40U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[40U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[40U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[41U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[41U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[41U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[41U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[41U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[42U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[42U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[42U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[42U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[42U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[43U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[43U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[43U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[43U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[43U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[44U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[44U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[44U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[44U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[44U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[45U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[45U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[45U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[45U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[45U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[46U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[46U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[46U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[46U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[46U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[47U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[47U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[47U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[47U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[47U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[48U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[48U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[48U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[48U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[48U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[49U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[49U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[49U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[49U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[49U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[50U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[50U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[50U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[50U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[50U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[51U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[51U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[51U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[51U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[51U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[52U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[52U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[52U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[52U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[52U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[53U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[53U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[53U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[53U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[53U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[54U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[54U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[54U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[54U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[54U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[55U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[55U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[55U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[55U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[55U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[56U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[56U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[56U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[56U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[56U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[57U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[57U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[57U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[57U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[57U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[58U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[58U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[58U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[58U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[58U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[59U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[59U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[59U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[59U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[59U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[60U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[60U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[60U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[60U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[60U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[61U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[61U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[61U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[61U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[61U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[62U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[62U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[62U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[63U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[63U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[63U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[64U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[64U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[64U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[64U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[64U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[65U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[65U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[65U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[65U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[65U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[66U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[66U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[66U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[66U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[66U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[67U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[67U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[67U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[67U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[67U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[68U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[68U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[68U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[69U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[69U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[69U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[70U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[70U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] = 
        ((vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[71U] 
          & vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
            & (~ vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U])));
    VL_ASSIGN_W(2304, vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS, Vtb_top__ConstPool__CONST_h522daad2_0);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPSX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[23U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPSX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[21U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPEX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[22U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__WPEX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[20U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__LWE[0U] = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[17U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_ref__DOT__LWE[1U] = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[16U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxRP_ADDR = 
        (0x0007ffffU & (((0x00000040U & ((~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS) 
                                             >> 5U)) 
                                         << 6U)) | 
                         (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS) 
                                         << 1U))) + 
                        (0x0007ffbeU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[24U])));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR = 
        (0x0007ffffU & ((0x0007fffeU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[32U]) 
                        + ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS) 
                           << 1U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_A = (0x000003ffU 
                                                   & ((2U 
                                                       <= 
                                                       (3U 
                                                        & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR) 
                                                       >> 1U)
                                                       : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IO_PAL_ADDR)));
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
    vlSelfRef.cov = ((0xfdffU & (IData)(vlSelfRef.cov)) 
                     | ((3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                      >> 0x0000000cU))) 
                        << 9U));
    __VdfgRegularize_hebeb780c_0_26 = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                              >> 0x0000001aU) 
                                             & (IData)(
                                                       (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                                        >> 0x00000024U))));
    if (vlSelfRef.RST_N) {
        if ((vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
             .__PVT__RxCRCT & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_A 
                = (0x000003ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR[0U]);
        }
        if (((vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[0U]
              .__PVT__RxCRCT >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_A 
                = (0x000003ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR[1U]);
        }
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__242__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__242__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__242__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__242__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__242__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__242__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__242__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__242__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__242__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__242__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__242__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__242__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__242__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__242__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__242__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__242__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__242__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__242__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__242__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__242__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__242__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__242__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxW_EN[1U] = 0U;
    __Vfunc_WinTest__243__LOG = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                 >> 0x0000001fU);
    __Vfunc_WinTest__243__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        >> 0x0000001dU) 
                                       & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__243__W1E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x0000001bU));
    __Vfunc_WinTest__243__W0E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x00000019U));
    __Vfunc_WinTest__243__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000001cU)));
    __Vfunc_WinTest__243__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000001aU)));
    __Vfunc_WinTest__243__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x00000018U)));
    if (__Vfunc_WinTest__243__SWE) {
        if (__Vfunc_WinTest__243__W1E) {
            if (__Vfunc_WinTest__243__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__243__WSHIT) 
                        & (IData)(__Vfunc_WinTest__243__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__243__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__243__WSHIT) 
                        | (IData)(__Vfunc_WinTest__243__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__243__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                       & (IData)(__Vfunc_WinTest__243__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                       | (IData)(__Vfunc_WinTest__243__W1HIT));
            }
        } else if (__Vfunc_WinTest__243__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                   & (IData)(__Vfunc_WinTest__243__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__243__WSHIT) 
                   | (IData)(__Vfunc_WinTest__243__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__243__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__243__WSHIT;
        }
    } else if (__Vfunc_WinTest__243__W1E) {
        if (__Vfunc_WinTest__243__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__243__W1HIT) 
                   & (IData)(__Vfunc_WinTest__243__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__243__W1HIT) 
                   | (IData)(__Vfunc_WinTest__243__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__243__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__243__W1HIT;
        }
    } else if (__Vfunc_WinTest__243__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__243__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__243__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__243__Vfuncout = ((IData)(__Vfunc_WinTest__243__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_ref__DOT__SW_EN = __Vfunc_WinTest__243__Vfuncout;
    __Vfunc_WinTest__244__LOG = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x0000000fU));
    __Vfunc_WinTest__244__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        >> 0x0000000dU) 
                                       & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__244__W1E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 0x0000000bU));
    __Vfunc_WinTest__244__W0E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 9U));
    __Vfunc_WinTest__244__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000000cU)));
    __Vfunc_WinTest__244__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 0x0000000aU)));
    __Vfunc_WinTest__244__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 8U)));
    if (__Vfunc_WinTest__244__SWE) {
        if (__Vfunc_WinTest__244__W1E) {
            if (__Vfunc_WinTest__244__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__244__WSHIT) 
                        & (IData)(__Vfunc_WinTest__244__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__244__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__244__WSHIT) 
                        | (IData)(__Vfunc_WinTest__244__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__244__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                       & (IData)(__Vfunc_WinTest__244__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                       | (IData)(__Vfunc_WinTest__244__W1HIT));
            }
        } else if (__Vfunc_WinTest__244__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                   & (IData)(__Vfunc_WinTest__244__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__244__WSHIT) 
                   | (IData)(__Vfunc_WinTest__244__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__244__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__244__WSHIT;
        }
    } else if (__Vfunc_WinTest__244__W1E) {
        if (__Vfunc_WinTest__244__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__244__W1HIT) 
                   & (IData)(__Vfunc_WinTest__244__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__244__W1HIT) 
                   | (IData)(__Vfunc_WinTest__244__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__244__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__244__W1HIT;
        }
    } else if (__Vfunc_WinTest__244__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__244__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__244__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__244__Vfuncout = ((IData)(__Vfunc_WinTest__244__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN = __Vfunc_WinTest__244__Vfuncout;
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[23U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[21U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[22U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[20U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__238__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__238__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__238__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__238__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__238__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__238__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__238__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__238__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__238__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__238__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__238__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__238__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__238__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__238__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__238__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__238__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__238__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__238__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__238__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__238__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__238__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__238__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[1U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__239__LOG = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                   >> 0x0000001fU);
            vlSelfRef.__Vfunc_WinTest__239__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 0x0000001dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__239__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x0000001bU));
            vlSelfRef.__Vfunc_WinTest__239__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x00000019U));
            vlSelfRef.__Vfunc_WinTest__239__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 0x0000001cU)));
            vlSelfRef.__Vfunc_WinTest__239__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x0000001aU)));
            vlSelfRef.__Vfunc_WinTest__239__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x00000018U)));
            if (vlSelfRef.__Vfunc_WinTest__239__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__239__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__239__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__239__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__239__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__239__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__239__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__239__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__239__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__239__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__239__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__239__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__239__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__239__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__239__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[2U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__240__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 7U));
            vlSelfRef.__Vfunc_WinTest__240__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 5U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__240__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 3U));
            vlSelfRef.__Vfunc_WinTest__240__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 1U));
            vlSelfRef.__Vfunc_WinTest__240__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 4U)));
            vlSelfRef.__Vfunc_WinTest__240__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 2U)));
            vlSelfRef.__Vfunc_WinTest__240__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U]));
            if (vlSelfRef.__Vfunc_WinTest__240__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__240__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__240__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__240__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__240__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__240__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__240__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__240__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__240__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__240__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__240__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__240__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__240__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__240__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__240__Vfuncout));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[3U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__241__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x0000000fU));
            vlSelfRef.__Vfunc_WinTest__241__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                       >> 0x0000000dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__241__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 0x0000000bU));
            vlSelfRef.__Vfunc_WinTest__241__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                                                      >> 9U));
            vlSelfRef.__Vfunc_WinTest__241__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                        >> 0x0000000cU)));
            vlSelfRef.__Vfunc_WinTest__241__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 0x0000000aU)));
            vlSelfRef.__Vfunc_WinTest__241__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[19U] 
                          >> 8U)));
            if (vlSelfRef.__Vfunc_WinTest__241__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__241__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__241__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__241__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__241__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__241__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__241__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__241__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__241__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__241__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__241__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__241__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__241__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__241__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__241__Vfuncout));
    if (vlSelfRef.RST_N) {
        if ((vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
             .__PVT__RxCRCT & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_A 
                = (0x000003ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR[0U]);
        }
        if (((vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
              .__PVT__RxCRCT >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_A 
                = (0x000003ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR[1U]);
        }
    }
    __Vfunc_WinTest__226__LOG = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 7U));
    __Vfunc_WinTest__226__W1E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 3U));
    __Vfunc_WinTest__226__W0E = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                       >> 1U));
    __Vfunc_WinTest__226__W1HIT = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[7U] 
                                         ^ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U] 
                                            >> 2U)));
    __Vfunc_WinTest__226__W0HIT = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[7U] 
                                         ^ vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[18U]));
    if (__Vfunc_WinTest__226__W1E) {
        if (__Vfunc_WinTest__226__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__226__W1HIT) 
                   & (IData)(__Vfunc_WinTest__226__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__226__W1HIT) 
                   | (IData)(__Vfunc_WinTest__226__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__226__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__226__W1HIT;
        }
    } else if (__Vfunc_WinTest__226__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__226__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__226__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__226__Vfuncout = ((IData)(__Vfunc_WinTest__226__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    tb_top__DOT__u_ref__DOT__RPW_EN = __Vfunc_WinTest__226__Vfuncout;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000047U)) {
        __Vfunc_RPxRegs__134__REGS[__Vilp1] = vlSelfRef.tb_top__DOT__u_ref__DOT__REGS
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & __Vfunc_RPxRegs__134__REGS[56U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_RPxRegs__134__REGS[56U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[51U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[47U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[51U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[47U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[51U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[47U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[51U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[47U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[50U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[46U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[50U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[46U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[50U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[46U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[50U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[46U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[49U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[45U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[49U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[45U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[49U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[45U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[49U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[45U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[48U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[44U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[48U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[44U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[48U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__134__REGS[44U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[48U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__134__REGS[44U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTAOS 
        = (7U & __Vfunc_RPxRegs__134__REGS[26U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTAOS 
        = (7U & (__Vfunc_RPxRegs__134__REGS[26U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__134__REGS[26U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__134__REGS[57U] >> 0x0000000eU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVPNR 
        = (__Vfunc_RPxRegs__134__REGS[25U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVPNR 
        = (0x0000ffffU & __Vfunc_RPxRegs__134__REGS[25U]);
    __Vfunc_RPxRegs__134__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG = __Vfunc_RPxRegs__134__Vfuncout;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x00000047U)) {
        __Vfunc_RSxRegs__133__REGS[__Vilp2] = vlSelfRef.tb_top__DOT__u_ref__DOT__REGS
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[61U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_RSxRegs__133__REGS[57U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (__Vfunc_RSxRegs__133__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & __Vfunc_RSxRegs__133__REGS[60U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_RSxRegs__133__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__133__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & __Vfunc_RSxRegs__133__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__133__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & __Vfunc_RSxRegs__133__REGS[14U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_RSxRegs__133__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[8U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__133__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & (__Vfunc_RSxRegs__133__REGS[13U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & __Vfunc_RSxRegs__133__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[3U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & (__Vfunc_RSxRegs__133__REGS[3U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & __Vfunc_RSxRegs__133__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[12U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__133__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__133__REGS[4U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__133__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & (__Vfunc_RSxRegs__133__REGS[12U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & __Vfunc_RSxRegs__133__REGS[12U]);
    __Vfunc_RSxRegs__133__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG = __Vfunc_RSxRegs__133__Vfuncout;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x00000047U)) {
        __Vfunc_NSxRegs__132__REGS[__Vilp3] = vlSelfRef.tb_top__DOT__u_ref__DOT__REGS
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (3U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHSZ 
        = (1U & __Vfunc_NSxRegs__132__REGS[61U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[61U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & __Vfunc_NSxRegs__132__REGS[57U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[57U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[57U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__132__REGS[57U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x0000001dU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__132__REGS[60U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_NSxRegs__132__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__132__REGS[59U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PNC 
        = (__Vfunc_NSxRegs__132__REGS[58U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__132__REGS[58U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__132__REGS[56U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[55U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[54U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[53U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[52U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[55U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[54U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[53U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[52U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[55U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[54U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[53U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__132__REGS[52U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[55U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[54U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[53U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__132__REGS[52U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[43U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[39U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[35U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[34U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[42U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__132__REGS[38U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[35U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__132__REGS[34U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[41U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[37U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[40U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__132__REGS[36U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[31U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[30U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__VCSC 
        = (1U & __Vfunc_NSxRegs__132__REGS[33U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__VCSC 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x0000000bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__132__REGS[33U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__132__REGS[33U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & __Vfunc_NSxRegs__132__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[17U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__132__REGS[16U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x0000001bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__132__REGS[63U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__132__REGS[14U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[9U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PRIN 
        = (7U & __Vfunc_NSxRegs__132__REGS[9U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__132__REGS[9U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & __Vfunc_NSxRegs__132__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[13U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[13U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[13U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & __Vfunc_NSxRegs__132__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__132__REGS[3U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__132__REGS[12U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__132__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__132__REGS[5U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCRT 
        = (0x0000001fU & __Vfunc_NSxRegs__132__REGS[5U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__132__REGS[5U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & __Vfunc_NSxRegs__132__REGS[12U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[12U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[12U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__132__REGS[12U] >> 6U));
    __Vfunc_NSxRegs__132__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG = __Vfunc_NSxRegs__132__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPSX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[23U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPSX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[21U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPEX[0U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[22U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__WPEX[1U] = (0x000003ffU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[20U] 
                                                      >> 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_A = (0x000003ffU 
                                                   & ((2U 
                                                       <= 
                                                       (3U 
                                                        & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                           >> 0x0000000cU)))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR) 
                                                       >> 1U)
                                                       : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR)));
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
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[23U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[21U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[22U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U] = (0x000001ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[20U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxRP_ADDR = 
        (0x0007ffffU & (((0x00000040U & ((~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS) 
                                             >> 5U)) 
                                         << 6U)) | 
                         (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS) 
                                         << 1U))) + 
                        (0x0007ffbeU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[24U])));
    vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[0U] = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[17U] 
                                                  >> 0x0000001fU);
    vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[1U] = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[16U] 
                                                  >> 0x0000001fU);
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x00000047U)) {
        __Vfunc_RPxRegs__2__REGS[__Vilp4] = vlSelfRef.tb_top__DOT__u_dut__DOT__REGS
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & __Vfunc_RPxRegs__2__REGS[56U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_RPxRegs__2__REGS[56U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[51U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[47U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[51U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[47U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[51U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[47U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[51U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[47U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[50U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[4U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[46U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[50U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[5U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[46U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[50U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[6U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[46U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[50U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[7U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[46U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[49U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[8U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[45U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[49U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[9U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[45U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[49U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[10U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[45U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[49U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[11U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[45U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[48U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[12U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[44U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[48U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[13U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[44U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[48U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[14U] 
        = (0x0000003fU & __Vfunc_RPxRegs__2__REGS[44U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[48U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__MPn[15U] 
        = (0x0000003fU & (__Vfunc_RPxRegs__2__REGS[44U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KMD 
        = (3U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KTAOS 
        = (7U & __Vfunc_RPxRegs__2__REGS[26U]);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KTAOS 
        = (7U & (__Vfunc_RPxRegs__2__REGS[26U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KDBS 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__KLCE 
        = (1U & (__Vfunc_RPxRegs__2__REGS[26U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVR 
        = (3U & (__Vfunc_RPxRegs__2__REGS[57U] >> 0x0000000eU));
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[0U].__PVT__OVPNR 
        = (__Vfunc_RPxRegs__2__REGS[25U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S[1U].__PVT__OVPNR 
        = (0x0000ffffU & __Vfunc_RPxRegs__2__REGS[25U]);
    __Vfunc_RPxRegs__2__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RPxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG = __Vfunc_RPxRegs__2__Vfuncout;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x00000047U)) {
        __Vfunc_RSxRegs__1__REGS[__Vilp5] = vlSelfRef.tb_top__DOT__u_dut__DOT__REGS
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[61U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_RSxRegs__1__REGS[57U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (__Vfunc_RSxRegs__1__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & __Vfunc_RSxRegs__1__REGS[60U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_RSxRegs__1__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_RSxRegs__1__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & __Vfunc_RSxRegs__1__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_RSxRegs__1__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & __Vfunc_RSxRegs__1__REGS[14U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_RSxRegs__1__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[8U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_RSxRegs__1__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & (__Vfunc_RSxRegs__1__REGS[13U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & __Vfunc_RSxRegs__1__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[3U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & (__Vfunc_RSxRegs__1__REGS[3U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & __Vfunc_RSxRegs__1__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[12U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_RSxRegs__1__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__1__REGS[4U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_RSxRegs__1__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & (__Vfunc_RSxRegs__1__REGS[12U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & __Vfunc_RSxRegs__1__REGS[12U]);
    __Vfunc_RSxRegs__1__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.RSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG = __Vfunc_RSxRegs__1__Vfuncout;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x00000047U)) {
        __Vfunc_NSxRegs__0__REGS[__Vilp6] = vlSelfRef.tb_top__DOT__u_dut__DOT__REGS
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHCN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHCN 
        = (3U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHCN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 5U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CHSZ 
        = (1U & __Vfunc_NSxRegs__0__REGS[61U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CHSZ 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMSZ = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[61U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMEN = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PLSZ 
        = (3U & __Vfunc_NSxRegs__0__REGS[57U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[57U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[57U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PLSZ 
        = (3U & (__Vfunc_NSxRegs__0__REGS[57U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMP = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000015U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMPR 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x0000001dU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMPR = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__BMCC 
        = (1U & (__Vfunc_NSxRegs__0__REGS[60U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__BMCC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PNC 
        = (__Vfunc_NSxRegs__0__REGS[59U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__0__REGS[59U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PNC 
        = (__Vfunc_NSxRegs__0__REGS[58U] >> 0x00000010U);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PNC 
        = (0x0000ffffU & __Vfunc_NSxRegs__0__REGS[58U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MP 
        = (7U & (__Vfunc_NSxRegs__0__REGS[56U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[55U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[54U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[53U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[0U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[52U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[55U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[54U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[53U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[1U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[52U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[55U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[54U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[53U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[2U] 
        = (0x0000003fU & __Vfunc_NSxRegs__0__REGS[52U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[55U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[54U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[53U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MPn[3U] 
        = (0x0000003fU & (__Vfunc_NSxRegs__0__REGS[52U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[43U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCX 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[39U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[35U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCX 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[34U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[42U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCY 
        = (0x0007ffffU & (__Vfunc_NSxRegs__0__REGS[38U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[35U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCY 
        = (0x0007ff00U & (__Vfunc_NSxRegs__0__REGS[34U] 
                          << 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[41U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMX 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[37U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[40U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMY 
        = (0x000007ffU & (__Vfunc_NSxRegs__0__REGS[36U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMHF 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMHF = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ZMQT 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ZMQT = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[31U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[30U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__VCSC 
        = (1U & __Vfunc_NSxRegs__0__REGS[33U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__VCSC 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__VCSC = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 9U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSCY 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x0000000aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSCY = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LZMX 
        = (1U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x0000000bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LZMX = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__0__REGS[33U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LSS 
        = (3U & (__Vfunc_NSxRegs__0__REGS[33U] >> 0x0000000cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LSS = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__MZE 
        = (1U & __Vfunc_NSxRegs__0__REGS[63U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__MZE 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[17U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__LWTA 
        = (0x0003ffffU & (__Vfunc_NSxRegs__0__REGS[16U] 
                          >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__LWTA = 0U;
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000019U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x0000001aU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__TPON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x0000001bU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__ON 
        = (1U & (__Vfunc_NSxRegs__0__REGS[63U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x00000014U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CAOS 
        = (7U & (__Vfunc_NSxRegs__0__REGS[14U] >> 0x0000001cU));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[9U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[9U] >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__PRIN 
        = (7U & __Vfunc_NSxRegs__0__REGS[9U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__PRIN 
        = (7U & (__Vfunc_NSxRegs__0__REGS[9U] >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SPRM 
        = (3U & __Vfunc_NSxRegs__0__REGS[13U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[13U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[13U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SPRM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[13U] >> 6U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__COSL 
        = (1U & __Vfunc_NSxRegs__0__REGS[3U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 1U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__COSL 
        = (1U & (__Vfunc_NSxRegs__0__REGS[3U] >> 3U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000011U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000012U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCEN 
        = (1U & (__Vfunc_NSxRegs__0__REGS[12U] >> 0x00000013U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__0__REGS[5U] 
                          >> 0x00000010U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__0__REGS[5U] 
                          >> 0x00000018U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__CCRT 
        = (0x0000001fU & __Vfunc_NSxRegs__0__REGS[5U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__CCRT 
        = (0x0000001fU & (__Vfunc_NSxRegs__0__REGS[5U] 
                          >> 8U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[0U].__PVT__SCCM 
        = (3U & __Vfunc_NSxRegs__0__REGS[12U]);
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[1U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[12U] >> 2U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[2U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[12U] >> 4U));
    vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S[3U].__PVT__SCCM 
        = (3U & (__Vfunc_NSxRegs__0__REGS[12U] >> 6U));
    __Vfunc_NSxRegs__0__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.NSxRegs__Vstatic__S;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG = __Vfunc_NSxRegs__0__Vfuncout;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RBG_PIPE;
    vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                                                   >= 
                                                   ((0x000003feU 
                                                     & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[0U] 
                                                         >> 1U) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                           >> 1U) 
                                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[0U])))) 
                                                  | (0x0360U 
                                                     <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[0U])) 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                                                     <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32)) 
                                                    & ((0x0360U 
                                                        > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32)) 
                                                       & ((0x02ecU 
                                                           != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32)) 
                                                          & (((3U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                                              & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U] 
                                                                  >= 
                                                                  ((0U 
                                                                    == (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                                    ? 0x00f0U
                                                                    : 0x0100U)) 
                                                                 & (0x01edU 
                                                                    >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U]))) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                 >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[0U]) 
                                                                & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                    <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U]) 
                                                                   & ((0x01feU 
                                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[0U]) 
                                                                      & (0x01feU 
                                                                         > vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[0U])))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                                                   >= 
                                                   ((0x000003feU 
                                                     & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[1U] 
                                                         >> 1U) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                           >> 1U) 
                                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[1U])))) 
                                                  | (0x0360U 
                                                     <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[1U])) 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                                                     <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33)) 
                                                    & ((0x0360U 
                                                        > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33)) 
                                                       & ((0x02ecU 
                                                           != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33)) 
                                                          & (((3U 
                                                               != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                                              & ((vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U] 
                                                                  >= 
                                                                  ((0U 
                                                                    == (IData)(vlSelfRef.tb_top__DOT__r_VRES))
                                                                    ? 0x00f0U
                                                                    : 0x0100U)) 
                                                                 & (0x01edU 
                                                                    >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U]))) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                 >= vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[1U]) 
                                                                & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                                                                    <= vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U]) 
                                                                   & ((0x01feU 
                                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__WxSY[1U]) 
                                                                      & (0x01feU 
                                                                         > vlSelfRef.tb_top__DOT__u_ref__DOT__WxEY[1U])))))))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP = (1U 
                                                & ((0x00020000U 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U])
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_ref__DOT__RPW_EN) 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
                                                    >> 0x00000010U)));
    __Vfunc_MakeDotData__232__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__232__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__232__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOTCDP;
    __Vfunc_MakeDotData__232__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__232__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__232__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__232__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__232__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                     | (~ ((__Vfunc_MakeDotData__232__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__232__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__232__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__232__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__232__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((__Vfunc_MakeDotData__232__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__232__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__232__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__232__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__232__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__232__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__232__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__232__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__232__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__232__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__232__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT = __Vfunc_MakeDotData__232__Vfuncout;
    vlSelfRef.cov = ((0xff7fU & (IData)(vlSelfRef.cov)) 
                     | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__LSCY) << 7U));
    vlSelfRef.cov = ((0xfeffU & (IData)(vlSelfRef.cov)) 
                     | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__MZE & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__ON) << 8U));
    vlSelfRef.cov = ((0xfbffU & (IData)(vlSelfRef.cov)) 
                     | ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__BMEN & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                         .__PVT__ON) << 0x0000000aU));
    __Vfunc_NxLSAddr__152__VAL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[0U];
    __Vfunc_NxLSAddr__152__TBL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[0U];
    __Vfunc_NxLSAddr__152__NxLSTA = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__LSTA;
    tb_top__DOT__u_ref__DOT____VlemCall_14__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__152__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__152__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__152__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_14__NxLSAddr;
    __Vfunc_NxLSAddr__153__VAL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_VAL_OFFS[1U];
    __Vfunc_NxLSAddr__153__TBL_OFFS = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_TBL_OFFS[1U];
    __Vfunc_NxLSAddr__153__NxLSTA = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__LSTA;
    tb_top__DOT__u_ref__DOT____VlemCall_15__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__153__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__153__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__153__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxLS_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_15__NxLSAddr;
    __Vfunc_MakeDotData__235__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__235__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__235__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOTCDP;
    __Vfunc_MakeDotData__235__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__235__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__235__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__235__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__235__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                     | (~ ((__Vfunc_MakeDotData__235__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__235__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__235__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__235__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__235__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((__Vfunc_MakeDotData__235__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__235__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__235__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__235__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__235__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__235__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__235__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__235__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__235__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__235__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__235__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT = __Vfunc_MakeDotData__235__Vfuncout;
    __Vfunc_MakeDotData__236__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__236__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__236__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOTCDP;
    __Vfunc_MakeDotData__236__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__236__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__236__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__236__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__236__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                     | (~ ((__Vfunc_MakeDotData__236__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__236__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__236__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__236__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__236__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((__Vfunc_MakeDotData__236__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__236__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__236__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__236__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__236__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__236__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__236__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__236__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__236__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__236__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__236__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT = __Vfunc_MakeDotData__236__Vfuncout;
    __Vfunc_MakeDotData__233__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__233__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__233__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP;
    __Vfunc_MakeDotData__233__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__233__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__233__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__233__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__233__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                     | (~ ((__Vfunc_MakeDotData__233__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__233__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__233__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__233__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__233__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((__Vfunc_MakeDotData__233__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__233__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__233__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__233__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__233__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__233__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__233__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__233__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__233__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__233__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__233__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT = __Vfunc_MakeDotData__233__Vfuncout;
    __Vfunc_MakeDotData__234__TPON = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__234__CHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__234__CDP = vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP;
    __Vfunc_MakeDotData__234__DCC = vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__234__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__234__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__234__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__234__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                     | (~ ((__Vfunc_MakeDotData__234__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__234__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__234__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__234__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__234__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((__Vfunc_MakeDotData__234__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__234__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__234__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__234__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__234__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__234__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__234__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__234__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__234__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__234__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__234__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT = __Vfunc_MakeDotData__234__Vfuncout;
    if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                  >> 2U) & (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                               >> 1U))))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                    = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                    = (0x0000000fU & ((0x00000100U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U]
                                       : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U]));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                    = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U]);
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                    = (0x0000000fU & ((0x00000200U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U]
                                       : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U]));
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                    = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                      >> 4U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                    = (0x0000000fU & ((0x00000100U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                             >> 4U))
                                       : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                             >> 4U))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                    = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                      >> 4U));
                vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                    = (0x0000000fU & ((0x00000200U 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                       ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                             >> 4U))
                                       : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                           << 0x0000001cU) 
                                          | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                             >> 4U))));
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 8U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                      >> 8U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 8U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                      >> 8U))));
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 0x0000000cU));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 0x0000000cU))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                         >> 0x0000000cU))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 0x0000000cU));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 0x0000000cU))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                         >> 0x0000000cU))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                         >> 0x00000010U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 0x00000010U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                         >> 0x00000010U))));
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                  >> 0x00000014U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 
                = (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                         >> 0x00000014U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                         >> 0x00000014U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                  >> 0x00000014U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 
                = (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                   ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                         >> 0x00000014U))
                                   : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                         >> 0x00000014U))));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 = 
            (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                            >> 0x00000018U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 = 
            (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                           >> 0x00000018U))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                           >> 0x00000018U))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 = 
            (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                            >> 0x00000018U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 = 
            (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                           >> 0x00000018U))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                 << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                           >> 0x00000018U))));
    } else {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0 = 
            (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
             >> 0x0000001cU);
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1 = 
            (0x0000000fU & ((0x00000100U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[66U] 
                                           >> 0x0000001cU))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[67U] 
                                           >> 0x0000001cU))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0 = 
            (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
             >> 0x0000001cU);
        vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1 = 
            (0x0000000fU & ((0x00000200U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                             ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[64U] 
                                           >> 0x0000001cU))
                             : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                 << 4U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[65U] 
                                           >> 0x0000001cU))));
    }
    tb_top__DOT__u_ref__DOT__RDBSA0 = (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U]);
    tb_top__DOT__u_ref__DOT__RDBSA1 = (3U & ((0x00000100U 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                              ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                    >> 2U))
                                              : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U]));
    tb_top__DOT__u_ref__DOT__RDBSB0 = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                             >> 4U));
    tb_top__DOT__u_ref__DOT__RDBSB1 = (3U & ((0x00000200U 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                              ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                  << 0x0000001aU) 
                                                 | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                    >> 6U))
                                              : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                    >> 4U))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1)) 
                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[0U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[0U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[1U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[1U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[2U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[2U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[3U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_FETCH[3U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA0PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA1PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((2U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA0PN);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA1PN);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB0PN);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA0CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA1CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1CH) | (((3U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA0CH);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA1CH);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB1CH);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA0CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxA1CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB0CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxB1CT) | (((1U == (IData)(tb_top__DOT__u_ref__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA0CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxA1CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB0CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxB1CT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCRCT 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxCRCT) | (((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                 >> 0x0000000fU) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCRCT 
        = (1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
           .__PVT__RxCRCT);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCTTP 
        = ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxCTTP) | vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTTP[0U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxCTTP 
        = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
            .__PVT__RxCTTP) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTTP[1U]) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__AxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPA1))) 
            & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
               >> 8U)) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__BxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCPB1))) 
            & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
               >> 9U)) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LS_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LS_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LW 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LW_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LW_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RPA 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RPB 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RCTA 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RCTB 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__R0RP 
        = ((2U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U] 
                         >> 0x00000010U))) ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__R0RPMSB)
            : vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[3U]);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RP_POS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__BS 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__LN 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxX[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__NxY[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxX[0U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxX[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxX[1U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxX[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxY[0U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxY[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U].__PVT__RxY[1U] 
        = (vlSelfRef.tb_top__DOT__u_ref__DOT__RxY[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE;
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__whit33____pinNumber3 
        = ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
               >= ((0x000003feU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[1U] 
                                    >> 1U) << 1U)) 
                   | (1U & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                             >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[1U])))) 
              | (0x0360U <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[1U])) 
             & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                 <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)) 
                & ((0x0360U > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)) 
                   & ((0x02ecU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)) 
                      & (((3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                          & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U] 
                              >= ((0U == (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                   ? 0x00f0U : 0x0100U)) 
                             & (0x01edU >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U]))) 
                         | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                             >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[1U]) 
                            & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                                <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U]) 
                               & ((0x01feU != vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[1U]) 
                                  & (0x01feU > vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[1U]))))))))) 
            << 1U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                        >= ((0x000003feU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[0U] 
                                             >> 1U) 
                                            << 1U)) 
                            | (1U & (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                      >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[0U])))) 
                       | (0x0360U <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[0U])) 
                      & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                          <= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)) 
                         & ((0x0360U > (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)) 
                            & ((0x02ecU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)) 
                               & (((3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U] 
                                       >= ((0U == (IData)(vlSelfRef.tb_top__DOT__d_VRES))
                                            ? 0x00f0U
                                            : 0x0100U)) 
                                      & (0x01edU >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U]))) 
                                  | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                                      >= vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[0U]) 
                                     & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                                         <= vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U]) 
                                        & ((0x01feU 
                                            != vlSelfRef.tb_top__DOT__u_dut__DOT__WxSY[0U]) 
                                           & (0x01feU 
                                              > vlSelfRef.tb_top__DOT__u_dut__DOT__WxEY[0U]))))))))));
    __Vfunc_MakeDotData__98__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__98__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__98__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOTCDP;
    __Vfunc_MakeDotData__98__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__98__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__98__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__98__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__98__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                     | (~ ((__Vfunc_MakeDotData__98__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__98__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__98__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__98__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__98__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((__Vfunc_MakeDotData__98__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__98__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__98__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__98__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__98__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__98__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__98__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__98__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__98__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__98__Vfuncout = ((0x0c000000U 
                                          & ((IData)(__Vfunc_MakeDotData__98__CDP) 
                                             << 0x00000012U)) 
                                         | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                             << 0x00000019U) 
                                            | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                << 0x00000018U) 
                                               | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT = __Vfunc_MakeDotData__98__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ACT = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH) 
                  & (((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                         .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                         .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__LZMX) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                            >> 2U))) 
                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                         >> 0x00000010U)) | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                .__PVT__LSCX 
                                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                .__PVT__LSCY) 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                               .__PVT__LZMX) 
                                              & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                                 >> 2U)) 
                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                                >> 0x00000011U))))))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH) 
                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[0U] 
                         | vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[1U]))))) {
            if ((1U & (~ (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                >> 0x00000014U)) & (IData)(
                                                           (0x00010000U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])))) 
                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH) 
                               & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                  >> 0x00000014U)) 
                              & (IData)((0U != (0x00030000U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U]))))) 
                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                              | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH)) 
                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                >> 0x00000015U)))))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH) 
                              & (IData)((0U != (0x00300000U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH) 
                                  & (IData)((0U != 
                                             (0x00300000U 
                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH)))) {
                                vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ACT = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_NxLSAddr__20__VAL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[0U];
    __Vfunc_NxLSAddr__20__TBL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[0U];
    __Vfunc_NxLSAddr__20__NxLSTA = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
        .__PVT__LSTA;
    tb_top__DOT__u_dut__DOT____VlemCall_6__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__20__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__20__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__20__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR[0U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_6__NxLSAddr;
    __Vfunc_NxLSAddr__21__VAL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_VAL_OFFS[1U];
    __Vfunc_NxLSAddr__21__TBL_OFFS = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_TBL_OFFS[1U];
    __Vfunc_NxLSAddr__21__NxLSTA = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
        .__PVT__LSTA;
    tb_top__DOT__u_dut__DOT____VlemCall_7__NxLSAddr 
        = (0x0007ffffU & (((__Vfunc_NxLSAddr__21__NxLSTA 
                            << 1U) + ((IData)(__Vfunc_NxLSAddr__21__TBL_OFFS) 
                                      << 1U)) + ((IData)(__Vfunc_NxLSAddr__21__VAL_OFFS) 
                                                 << 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR[1U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_7__NxLSAddr;
    __Vfunc_MakeDotData__99__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__99__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__99__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP;
    __Vfunc_MakeDotData__99__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__99__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__99__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__99__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__99__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                     | (~ ((__Vfunc_MakeDotData__99__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__99__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__99__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__99__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__99__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((__Vfunc_MakeDotData__99__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__99__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__99__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__99__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__99__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__99__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__99__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__99__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__99__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__99__Vfuncout = ((0x0c000000U 
                                          & ((IData)(__Vfunc_MakeDotData__99__CDP) 
                                             << 0x00000012U)) 
                                         | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                             << 0x00000019U) 
                                            | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                << 0x00000018U) 
                                               | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT = __Vfunc_MakeDotData__99__Vfuncout;
    __Vfunc_MakeDotData__100__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__100__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__100__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP;
    __Vfunc_MakeDotData__100__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__100__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__100__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__100__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__100__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                     | (~ ((__Vfunc_MakeDotData__100__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__100__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__100__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__100__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__100__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((__Vfunc_MakeDotData__100__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__100__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__100__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__100__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__100__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__100__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__100__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__100__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__100__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__100__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__100__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT = __Vfunc_MakeDotData__100__Vfuncout;
    __Vfunc_MakeDotData__101__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__101__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__101__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOTCDP;
    __Vfunc_MakeDotData__101__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__101__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__101__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__101__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__101__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                     | (~ ((__Vfunc_MakeDotData__101__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__101__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__101__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__101__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__101__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((__Vfunc_MakeDotData__101__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__101__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__101__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__101__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__101__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__101__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__101__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__101__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__101__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__101__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__101__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT = __Vfunc_MakeDotData__101__Vfuncout;
    __Vfunc_MakeDotData__102__TPON = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
        .__PVT__TPON;
    __Vfunc_MakeDotData__102__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
        .__PVT__CHCN;
    __Vfunc_MakeDotData__102__CDP = vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOTCDP;
    __Vfunc_MakeDotData__102__DCC = vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOTDC;
    TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP 
        = (((0U != (7U & (__Vfunc_MakeDotData__102__DCC 
                          >> 8U))) << 2U) | (((0U != 
                                               (0x0000000fU 
                                                & (__Vfunc_MakeDotData__102__DCC 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & __Vfunc_MakeDotData__102__DCC))));
    if ((4U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
        TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
            = (0x00ffffffU & __Vfunc_MakeDotData__102__DCC);
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
            = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                     | (~ ((__Vfunc_MakeDotData__102__DCC 
                            >> 0x1fU) | (IData)(__Vfunc_MakeDotData__102__TPON)))));
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
    } else if ((2U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
        if ((1U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00f80000U & (__Vfunc_MakeDotData__102__DCC 
                                                  << 9U)) 
                                  | ((0x0000f800U & 
                                      (__Vfunc_MakeDotData__102__DCC 
                                       << 6U)) | (0x000000f8U 
                                                  & (__Vfunc_MakeDotData__102__DCC 
                                                     << 3U)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((__Vfunc_MakeDotData__102__DCC 
                                >> 0x0fU) | (IData)(__Vfunc_MakeDotData__102__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 0U;
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & (0x000007ffU & __Vfunc_MakeDotData__102__DCC));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((0U != (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP)) 
                               | (IData)(__Vfunc_MakeDotData__102__TPON)))));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
        }
    } else {
        if ((1U & (IData)(__Vfunc_MakeDotData__102__CHCN))) {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x00000700U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                                                  << 3U)) 
                                  | (0x000000ffU & __Vfunc_MakeDotData__102__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((0U != (3U & (IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP))) 
                               | (IData)(__Vfunc_MakeDotData__102__TPON)))));
        } else {
            TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC 
                = (0x00ffffffU & ((0x000007f0U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                                                  << 3U)) 
                                  | (0x0000000fU & __Vfunc_MakeDotData__102__DCC)));
            vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP 
                = (1U & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                         | (~ ((IData)(TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__NTP) 
                               | (IData)(__Vfunc_MakeDotData__102__TPON)))));
        }
        vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P = 1U;
    }
    __Vfunc_MakeDotData__102__Vfuncout = ((0x0c000000U 
                                           & ((IData)(__Vfunc_MakeDotData__102__CDP) 
                                              << 0x00000012U)) 
                                          | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__P) 
                                              << 0x00000019U) 
                                             | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.MakeDotData__Vstatic__TP) 
                                                 << 0x00000018U) 
                                                | TOP__REF_VDP2_PKG__DOT__MakeDotData__Vstatic__DC)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT = __Vfunc_MakeDotData__102__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4 = ((0U 
                                                  == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                  .__PVT__CHCN) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                 .__PVT__ZMHF);
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4 = ((0U 
                                                  == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                  .__PVT__CHCN) 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                 .__PVT__ZMHF);
    vlSelfRef.cov = ((0xff80U & (IData)(vlSelfRef.cov)) 
                     | (((((0x00001ffeU & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC) 
                                            << 1U) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                                              >> 0x00000013U))) 
                           | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT) 
                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT))) 
                          << 5U) | (((IData)((0x0000000100000000ULL 
                                              != (0x0000000300000000ULL 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT))) 
                                     << 4U) | (8U & 
                                               ((IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                         >> 0x0000001bU)) 
                                                << 3U)))) 
                        | ((4U & (((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                            >> 0x00000024U)) 
                                   & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                              >> 0x00000018U))) 
                                  << 2U)) | ((((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                   >> 1U)) 
                                               & (IData)(__VdfgRegularize_hebeb780c_0_26)) 
                                              << 1U) 
                                             | ((IData)(__VdfgRegularize_hebeb780c_0_26) 
                                                & ((IData)(
                                                           (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                            >> 0x00000019U)) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                                        >> 1U)) 
                                                      & (IData)(
                                                                (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                                 >> 0x00000024U)))))))));
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__R0_RP;
    __Vfunc_RxCTAddr__155__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__155__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__155__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP];
    __Vfunc_RxCTAddr__155__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CT_RP];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__155__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__155__RxKAst))) 
                                      + __Vfunc_RxCTAddr__155__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__155__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_ref__DOT____VlemCall_16__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_16__RxCTAddr;
    __Vfunc_RxCTAddr__156__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__156__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__156__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__156__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__156__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__156__RxKAst))) 
                                      + __Vfunc_RxCTAddr__156__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__156__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_ref__DOT____VlemCall_17__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_17__RxCTAddr;
    __Vfunc_RxCTAddr__157__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__157__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__157__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[0U];
    __Vfunc_RxCTAddr__157__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[0U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__157__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__157__RxKAst))) 
                                      + __Vfunc_RxCTAddr__157__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__157__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__157__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTA_ADDR = __Vfunc_RxCTAddr__157__Vfuncout;
    __Vfunc_RxCTAddr__158__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__158__RxKTAOS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__158__RxKA = vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__158__RxKAst = vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__158__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__158__RxKAst))) 
                                      + __Vfunc_RxCTAddr__158__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__158__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__158__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTB_ADDR = __Vfunc_RxCTAddr__158__Vfuncout;
    vlSelfRef.cov = ((0x07ffU & (IData)(vlSelfRef.cov)) 
                     | ((((((IData)(__VdfgRegularize_hebeb780c_0_26) 
                            & ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                        >> 0x00000024U)) 
                               & ((~ (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                       >> 1U) | ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                                  >> 0x0000001fU) 
                                                 | ((IData)(
                                                            (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                             >> 0x00000019U)) 
                                                    | ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                            >> 0x0000000cU))) 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                                  >> 0x00000018U))))))) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCENFST)))) 
                           << 4U) | (((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                              ^ vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT) 
                                             >> 0x00000017U)) 
                                      | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                               >> 0x00000017U))) 
                                     << 2U)) | ((2U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__r_HRES)) 
                                                | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                                   >> 0x0000001fU))) 
                        << 0x0000000bU));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxA0CT) >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxB1CT) >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA1PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxA1CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxA1CT) >> 1U));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__ 
        = (1U & (((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB0PN | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                   .__PVT__RxB0CH) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                  .__PVT__RxB0CT) >> 1U));
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__R0RP;
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_RxBMAddr__147__RxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFY = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxY
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFX = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxX
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxBMAddr__147__RxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
            [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
            = ((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxBMSZ)
                ? ((0x0003fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFX)))
                : ((0x0001fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxOFFX))));
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                             << 0x00000010U) 
                                            + (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                   ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                       << 0x00000010U) 
                                      + (0x0003fffeU 
                                         & vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxCHCN))
                                       ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0001fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 1U)))
                                       : (((IData)(vlSelfRef.__Vfunc_RxBMAddr__147__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0000fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 2U)))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_10__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_RxCHAddr__148__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFY = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxY
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFX = (0x00000fffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                                   .__PVT__RxX
                                                   [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__CH_RP]);
        vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][0U];
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFX) 
                              ^ (- (IData)((1U & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxOFFY) 
                              ^ (- (IData)((vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                            ? 0U : 
                                           ((0x0007fff0U 
                                             & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                                << 4U)) 
                                            + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                                << 4U) 
                                               | (0x0000000eU 
                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                     << 1U))))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                   ? ((0x0007fff0U 
                                       & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                          << 4U)) + 
                                      (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                        << 3U) | (6U 
                                                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs))))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__148__RxCHCN))
                                       ? ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                              << 4U)) 
                                          + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                              << 2U) 
                                             | (2U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                   >> 1U))))
                                       : ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__148__RxPNx 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_10__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR[0U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_10__RxBMAddr;
    __Vfunc_RxCHAddr__149__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__CHSZ;
    __Vfunc_RxCHAddr__149__RxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__CHCN;
    __Vfunc_RxCHAddr__149__RxOFFY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                     .__PVT__RxY[1U]);
    __Vfunc_RxCHAddr__149__RxOFFX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
                                     .__PVT__RxX[1U]);
    __Vfunc_RxCHAddr__149__RxPNx = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][1U];
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(__Vfunc_RxCHAddr__149__RxOFFX) 
                          ^ (- (IData)((1U & (__Vfunc_RxCHAddr__149__RxPNx 
                                              >> 0x0000001eU))))));
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_RxCHAddr__149__RxOFFY) 
                          ^ (- (IData)((__Vfunc_RxCHAddr__149__RxPNx 
                                        >> 0x0000001fU)))));
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs 
        = ((IData)(__Vfunc_RxCHAddr__149__RxCHSZ) ? 
           ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs)) 
                                       | (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs))))
            : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs)));
    vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                           ? ((2U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                                        ? 0U : ((0x0007fff0U 
                                                 & (__Vfunc_RxCHAddr__149__RxPNx 
                                                    << 4U)) 
                                                + (
                                                   ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                                    << 4U) 
                                                   | (0x0000000eU 
                                                      & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                         << 1U))))))
                           : ((2U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                               ? ((0x0007fff0U & (__Vfunc_RxCHAddr__149__RxPNx 
                                                  << 4U)) 
                                  + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                      << 3U) | (6U 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs))))
                               : ((1U & (IData)(__Vfunc_RxCHAddr__149__RxCHCN))
                                   ? ((0x0007fff0U 
                                       & (__Vfunc_RxCHAddr__149__RxPNx 
                                          << 4U)) + 
                                      (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                        << 2U) | (2U 
                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                     >> 1U))))
                                   : ((0x0007fff0U 
                                       & (__Vfunc_RxCHAddr__149__RxPNx 
                                          << 4U)) + 
                                      ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                       << 1U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_11__RxCHAddr 
        = vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCH_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_11__RxCHAddr;
    tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP 
        = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__R0RP;
    __Vfunc_RxPNAddr__139__RxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_RxPNAddr__139__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__CHSZ;
    __Vfunc_RxPNAddr__139__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[3U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[4U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[4U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[5U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[5U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[6U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[6U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[7U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[7U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[8U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[8U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[9U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[9U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[10U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[10U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[11U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[11U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[12U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[12U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[13U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[13U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[14U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[14U];
    vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn[15U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MPn[15U];
    __Vfunc_RxPNAddr__139__RxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__MP;
    __Vfunc_RxPNAddr__139__RxOFFY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxY[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]);
    __Vfunc_RxPNAddr__139__RxOFFX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxX[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]);
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_RxPNAddr__139__RxPLSZ))
            ? (((IData)(__Vfunc_RxPNAddr__139__RxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn
                                           [((0x0000000cU 
                                              & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                                 >> 8U)) 
                                             | (3U 
                                                & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_RxPNAddr__139__RxPLSZ))
                ? (((IData)(__Vfunc_RxPNAddr__139__RxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn
                                               [((0x0000000cU 
                                                  & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                                     >> 7U)) 
                                                 | (3U 
                                                    & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_RxPNAddr__139__RxMP) 
                 << 6U) | vlSelfRef.__Vfunc_RxPNAddr__139__RxMPn
                [((0x0000000cU & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                  >> 7U)) | (3U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                   >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxPNAddr__139__RxPNB) ? 
           ((IData)(__Vfunc_RxPNAddr__139__RxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_RxPNAddr__139__RxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_RxPNAddr__139__RxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__139__RxOFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_4__RxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_4__RxPNAddr;
    __Vfunc_RxPNAddr__140__RxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_RxPNAddr__140__RxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__CHSZ;
    __Vfunc_RxPNAddr__140__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[3U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[4U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[4U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[5U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[5U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[6U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[6U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[7U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[7U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[8U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[8U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[9U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[9U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[10U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[10U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[11U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[11U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[12U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[12U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[13U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[13U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[14U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[14U];
    vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn[15U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MPn[15U];
    __Vfunc_RxPNAddr__140__RxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__MP;
    __Vfunc_RxPNAddr__140__RxOFFY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxY[1U]);
    __Vfunc_RxPNAddr__140__RxOFFX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                     .__PVT__RxX[1U]);
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_RxPNAddr__140__RxPLSZ))
            ? (((IData)(__Vfunc_RxPNAddr__140__RxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn
                                           [((0x0000000cU 
                                              & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                                 >> 8U)) 
                                             | (3U 
                                                & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_RxPNAddr__140__RxPLSZ))
                ? (((IData)(__Vfunc_RxPNAddr__140__RxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn
                                               [((0x0000000cU 
                                                  & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                                     >> 7U)) 
                                                 | (3U 
                                                    & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_RxPNAddr__140__RxMP) 
                 << 6U) | vlSelfRef.__Vfunc_RxPNAddr__140__RxMPn
                [((0x0000000cU & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                  >> 7U)) | (3U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                   >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxPNAddr__140__RxPNB) ? 
           ((IData)(__Vfunc_RxPNAddr__140__RxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_RxPNAddr__140__RxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_RxPNAddr__140__RxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(__Vfunc_RxPNAddr__140__RxOFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_5__RxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__RxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxPN_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_5__RxPNAddr;
    __Vfunc_RxScreenOver__150__RxBMEN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__150__RxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__150__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__150__RxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxY[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__150__RxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxX[tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__150__RxOVR = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
        [tb_top__DOT__u_ref__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__150__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__150__RxBMEN) {
        if (__Vfunc_RxScreenOver__150__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__150__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__150__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__150__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__150__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__150__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_ref__DOT____VlemCall_12__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxSCRN_OVER[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_12__RxScreenOver;
    __Vfunc_RxScreenOver__151__RxBMEN = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__151__RxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__151__RxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__151__RxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxY[1U];
    __Vfunc_RxScreenOver__151__RxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__RxX[1U];
    __Vfunc_RxScreenOver__151__RxOVR = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__151__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__151__RxBMEN) {
        if (__Vfunc_RxScreenOver__151__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__151__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__151__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__151__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__151__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__151__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_ref__DOT____VlemCall_13__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxSCRN_OVER[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_13__RxScreenOver;
    __Vfunc_NxPNAddr__135__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__ZMQT;
    __Vfunc_NxPNAddr__135__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__ZMHF;
    __Vfunc_NxPNAddr__135__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__135__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__135__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__135__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__135__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[0U];
    __Vfunc_NxPNAddr__135__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[0U];
    __Vfunc_NxPNAddr__135__NxPN_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[0U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNAddr__135__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNAddr__135__NxZMQT) 
                      | (IData)(__Vfunc_NxPNAddr__135__NxZMHF)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = (0x000007ffU & ((IData)(__Vfunc_NxPNAddr__135__NxOFFX) 
                          + (((IData)(__Vfunc_NxPNAddr__135__NxPN_CNT) 
                              & (IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK)) 
                             << 3U)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__135__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__135__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__135__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__135__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__135__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__135__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__135__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__135__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__135__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__135__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_0__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[0U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_0__NxPNAddr;
    __Vfunc_NxPNAddr__136__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__ZMQT;
    __Vfunc_NxPNAddr__136__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__ZMHF;
    __Vfunc_NxPNAddr__136__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__136__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__136__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__136__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__136__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[1U];
    __Vfunc_NxPNAddr__136__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[1U];
    __Vfunc_NxPNAddr__136__NxPN_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[1U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNAddr__136__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNAddr__136__NxZMQT) 
                      | (IData)(__Vfunc_NxPNAddr__136__NxZMHF)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = (0x000007ffU & ((IData)(__Vfunc_NxPNAddr__136__NxOFFX) 
                          + (((IData)(__Vfunc_NxPNAddr__136__NxPN_CNT) 
                              & (IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK)) 
                             << 3U)));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__136__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__136__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__136__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__136__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__136__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__136__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__136__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__136__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__136__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__136__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_1__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[1U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_1__NxPNAddr;
    __Vfunc_NxPNAddr__137__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__137__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__137__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__137__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__137__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[2U];
    __Vfunc_NxPNAddr__137__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[2U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = __Vfunc_NxPNAddr__137__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__137__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__137__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__137__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__137__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__137__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__137__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__137__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__137__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__137__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__137__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_2__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[2U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_2__NxPNAddr;
    __Vfunc_NxPNAddr__138__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr__138__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHSZ;
    __Vfunc_NxPNAddr__138__NxPLSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__PLSZ;
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[0U];
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[1U];
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[2U];
    vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MPn[3U];
    __Vfunc_NxPNAddr__138__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__MP;
    __Vfunc_NxPNAddr__138__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxY[3U];
    __Vfunc_NxPNAddr__138__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
        .__PVT__NxX[3U];
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__ZM_MASK = 0U;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX 
        = __Vfunc_NxPNAddr__138__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr__138__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr__138__NxMP) 
                << 6U) | ((0x0000003cU & ((vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn
                                           [((2U & 
                                              ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 0x0aU)))] 
                                           >> 2U) << 2U)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr__138__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr__138__NxMP) 
                    << 6U) | ((0x0000003eU & ((vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn
                                               [((2U 
                                                  & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                       >> 0x0aU)))] 
                                               >> 1U) 
                                              << 1U)) 
                              | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr__138__NxMP) 
                 << 6U) | vlSelfRef.__Vfunc_NxPNAddr__138__NxMPn
                [((2U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                         >> 8U)) | (1U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                          >> 9U)))])));
    TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr 
        = ((IData)(__Vfunc_NxPNAddr__138__NxPNB) ? 
           ((IData)(__Vfunc_NxPNAddr__138__NxCHSZ) ? 
            (((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
              << 0x0000000aU) | ((0x000003e0U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                                 << 1U)) 
                                 | (0x0000001fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                   >> 4U))))
             : ((0x0007f000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                << 0x0000000cU)) | 
                ((0x00000fc0U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                 << 3U)) | (0x0000003fU 
                                            & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                               >> 3U)))))
            : ((IData)(__Vfunc_NxPNAddr__138__NxCHSZ)
                ? ((0x0007f800U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000bU)) 
                   | ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                      << 2U)) | (0x0000003eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 3U))))
                : ((0x0007e000U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__map_addr) 
                                   << 0x0000000dU)) 
                   | ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr__138__NxOFFY) 
                                      << 4U)) | (0x0000007eU 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__OFFX) 
                                                    >> 2U))))));
    tb_top__DOT__u_ref__DOT____VlemCall_3__NxPNAddr 
        = TOP__REF_VDP2_PKG__DOT__NxPNAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR[3U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_3__NxPNAddr;
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[0U];
        vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[0U];
        vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[0U];
        vlSelfRef.__Vfunc_NxBMAddr__141__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs 
            = ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ))
                ? ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ))
                    ? ((0x0000ff80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00007f80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U))))
                : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBMSZ))
                    ? ((0x00007fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00003fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxOFFX) 
                                                     >> 3U)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                            ? 0U : 
                                           ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                              << 0x00000010U) 
                                             + (0x0007fff0U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                                   << 4U))) 
                                            + ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                   ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                        << 0x00000010U) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxCHCN))
                                       ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 2U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                                   << 1U)))
                                       : ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 1U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__141__NxBM_CNT) 
                                                   << 1U)))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_6__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_NxCHAddr__142__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__ZMQT;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__ZMHF;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][0U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][4U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][2U];
        vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][6U];
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK 
            = (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxZMQT) 
                << 1U) | ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxZMQT) 
                          | (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxZMHF)));
        if ((0U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__142__NxPN
                [((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX) 
                                  + (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                                      & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)) 
                                     << 3U)));
        } else if ((1U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__142__NxPN
                [(1U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                         >> 1U) & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX) 
                                  + (8U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK) 
                                              << 3U)))));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__142__NxPN[0U];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFX));
        }
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX) 
                              ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxOFFY) 
                              ^ (- (IData)((vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt 
            = (7U & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCH_CNT) 
                     ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                         >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                            ? 0U : 
                                           (((0x0007fff0U 
                                              & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                 << 4U)) 
                                             + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                                << 4U)) 
                                            + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__142__NxCHCN))
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
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_6__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[0U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_6__NxBMAddr;
    if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[1U];
        vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[1U];
        vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[1U];
        vlSelfRef.__Vfunc_NxBMAddr__143__NxMP = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs 
            = ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ))
                ? ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ))
                    ? ((0x0000ff80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00007f80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U))))
                : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBMSZ))
                    ? ((0x00007fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00003fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxOFFX) 
                                                     >> 3U)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                            ? 0U : 
                                           ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                              << 0x00000010U) 
                                             + (0x0007fff0U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                                   << 4U))) 
                                            + ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                   ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                        << 0x00000010U) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxCHCN))
                                       ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 2U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                                   << 1U)))
                                       : ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 1U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__143__NxBM_CNT) 
                                                   << 1U)))))));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_7__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_NxCHAddr__144__NxZMQT = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__ZMQT;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxZMHF = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__ZMHF;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxY[1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
            .__PVT__NxX[1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][1U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][5U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][3U];
        vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][7U];
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK 
            = (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxZMQT) 
                << 1U) | ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxZMQT) 
                          | (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxZMHF)));
        if ((0U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__144__NxPN
                [((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX) 
                                  + (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                                      & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)) 
                                     << 3U)));
        } else if ((1U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__144__NxPN
                [(1U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                         >> 1U) & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX) 
                                  + (8U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK) 
                                              << 3U)))));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__144__NxPN[0U];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFX));
        }
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX) 
                              ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxOFFY) 
                              ^ (- (IData)((vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt 
            = (7U & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCH_CNT) 
                     ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                         >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                            ? 0U : 
                                           (((0x0007fff0U 
                                              & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                 << 4U)) 
                                             + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                                << 4U)) 
                                            + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__144__NxCHCN))
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
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_7__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[1U] 
        = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_7__NxBMAddr;
    __Vfunc_NxCHAddr2__145__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHSZ;
    __Vfunc_NxCHAddr2__145__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
        .__PVT__CHCN;
    __Vfunc_NxCHAddr2__145__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxY[2U];
    __Vfunc_NxCHAddr2__145__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxX[2U];
    __Vfunc_NxCHAddr2__145__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[2U];
    __Vfunc_NxCHAddr2__145__NxPN = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
        = ((0U == (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
            ? __Vfunc_NxCHAddr2__145__NxPN[0U] : ((1U 
                                                   == (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                                                   ? __Vfunc_NxCHAddr2__145__NxPN
                                                  [
                                                  (1U 
                                                   & (IData)(__Vfunc_NxCHAddr2__145__NxCH_CNT))]
                                                   : __Vfunc_NxCHAddr2__145__NxPN[0U]));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX 
        = __Vfunc_NxCHAddr2__145__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX) 
                          ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                              >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_NxCHAddr2__145__NxOFFY) 
                          ^ (- (IData)((TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                        >> 0x0000001fU)))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt 
        = (7U & ((IData)(__Vfunc_NxCHAddr2__145__NxCH_CNT) 
                 ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                     >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs 
        = ((IData)(__Vfunc_NxCHAddr2__145__NxCHSZ) ? 
           ((0x00000010U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs)) 
                                       | (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs))))
            : (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs)));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                           ? ((2U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                                        ? 0U : (((0x0007fff0U 
                                                  & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                     << 4U)) 
                                                 + 
                                                 ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                                  << 4U)) 
                                                + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                   << 1U))))
                           : ((2U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
                               ? (((0x0007fff0U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                   << 4U)) 
                                   + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                      << 3U)) + (6U 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                    << 1U)))
                               : ((1U & (IData)(__Vfunc_NxCHAddr2__145__NxCHCN))
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
    tb_top__DOT__u_ref__DOT____VlemCall_8__NxCHAddr2 
        = TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[2U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_8__NxCHAddr2;
    __Vfunc_NxCHAddr2__146__NxCHSZ = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHSZ;
    __Vfunc_NxCHAddr2__146__NxCHCN = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
        .__PVT__CHCN;
    __Vfunc_NxCHAddr2__146__NxOFFY = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxY[3U];
    __Vfunc_NxCHAddr2__146__NxOFFX = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[4U]
        .__PVT__NxX[3U];
    __Vfunc_NxCHAddr2__146__NxCH_CNT = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[3U];
    __Vfunc_NxCHAddr2__146__NxPN = vlSelfRef.tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
        = ((0U == (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
            ? __Vfunc_NxCHAddr2__146__NxPN[0U] : ((1U 
                                                   == (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                                                   ? __Vfunc_NxCHAddr2__146__NxPN
                                                  [
                                                  (1U 
                                                   & (IData)(__Vfunc_NxCHAddr2__146__NxCH_CNT))]
                                                   : __Vfunc_NxCHAddr2__146__NxPN[0U]));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX 
        = __Vfunc_NxCHAddr2__146__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX) 
                          ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                              >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_NxCHAddr2__146__NxOFFY) 
                          ^ (- (IData)((TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                        >> 0x0000001fU)))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt 
        = (7U & ((IData)(__Vfunc_NxCHAddr2__146__NxCH_CNT) 
                 ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                     >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs 
        = ((IData)(__Vfunc_NxCHAddr2__146__NxCHSZ) ? 
           ((0x00000010U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs)) 
                                       | (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs))))
            : (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs)));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                           ? ((2U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                                        ? 0U : (((0x0007fff0U 
                                                  & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                     << 4U)) 
                                                 + 
                                                 ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                                  << 4U)) 
                                                + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                   << 1U))))
                           : ((2U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
                               ? (((0x0007fff0U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                   << 4U)) 
                                   + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                      << 3U)) + (6U 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                    << 1U)))
                               : ((1U & (IData)(__Vfunc_NxCHAddr2__146__NxCHCN))
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
    tb_top__DOT__u_ref__DOT____VlemCall_9__NxCHAddr2 
        = TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR[3U] 
        = tb_top__DOT__u_ref__DOT____VlemCall_9__NxCHAddr2;
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4)) 
                                                 & ((0U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                    .__PVT__ZMQT));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4)) 
                                                 & ((0U 
                                                     == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                     .__PVT__CHCN) 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                                    .__PVT__ZMQT));
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
}
