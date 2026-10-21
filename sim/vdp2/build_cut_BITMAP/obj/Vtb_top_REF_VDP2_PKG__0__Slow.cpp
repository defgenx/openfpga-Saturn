// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_REF_VDP2_PKG___eval_static__TOP__REF_VDP2_PKG(Vtb_top_REF_VDP2_PKG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_VDP2_PKG___eval_static__TOP__REF_VDP2_PKG\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*18:0*/ NxPNAddr__Vstatic__addr;
    NxPNAddr__Vstatic__addr = 0;
    CData/*1:0*/ NxPNAddr__Vstatic__ZM_MASK;
    NxPNAddr__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ NxPNAddr__Vstatic__OFFX;
    NxPNAddr__Vstatic__OFFX = 0;
    SData/*8:0*/ NxPNAddr__Vstatic__map_addr;
    NxPNAddr__Vstatic__map_addr = 0;
    IData/*18:0*/ NxCHAddr2__Vstatic__addr;
    NxCHAddr2__Vstatic__addr = 0;
    IData/*31:0*/ NxCHAddr2__Vstatic__PN;
    NxCHAddr2__Vstatic__PN = 0;
    SData/*10:0*/ NxCHAddr2__Vstatic__OFFX;
    NxCHAddr2__Vstatic__OFFX = 0;
    CData/*4:0*/ NxCHAddr2__Vstatic__cell_offs;
    NxCHAddr2__Vstatic__cell_offs = 0;
    CData/*3:0*/ NxCHAddr2__Vstatic__x_offs;
    NxCHAddr2__Vstatic__x_offs = 0;
    CData/*3:0*/ NxCHAddr2__Vstatic__y_offs;
    NxCHAddr2__Vstatic__y_offs = 0;
    CData/*2:0*/ NxCHAddr2__Vstatic__ch_cnt;
    NxCHAddr2__Vstatic__ch_cnt = 0;
    IData/*18:0*/ RxPNAddr__Vstatic__addr;
    RxPNAddr__Vstatic__addr = 0;
    SData/*8:0*/ RxPNAddr__Vstatic__map_addr;
    RxPNAddr__Vstatic__map_addr = 0;
    IData/*18:0*/ RxCTAddr__Vstatic__addr;
    RxCTAddr__Vstatic__addr = 0;
    IData/*18:0*/ RxCTAddr__Vstatic__offs;
    RxCTAddr__Vstatic__offs = 0;
    CData/*0:0*/ RxScreenOver__Vstatic__res;
    RxScreenOver__Vstatic__res = 0;
    IData/*23:0*/ MakeDotData__Vstatic__DC;
    MakeDotData__Vstatic__DC = 0;
    CData/*2:0*/ MakeDotData__Vstatic__NTP;
    MakeDotData__Vstatic__NTP = 0;
    // Body
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__CHCN = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__CHSZ = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__BMSZ = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__BMEN = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__PLSZ = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__BMP = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__BMPR = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__BMCC = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__PNC = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
            vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__SCX = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__SCY = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__ZMX = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__ZMY = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__ZMHF = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__ZMQT = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__LSTA = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__LSCX = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__LSCY = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__LZMX = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__VCSC = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__LSS = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__MZE = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__LWTA = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__TPON = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__ON = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__CAOS = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__PRIN = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__SPRM = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__COEN = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__COSL = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__CCEN = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__CCRT = 0;
        vlSelfRef.NSxRegs__Vstatic__S[__Vi0].__PVT__SCCM = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__CHCN = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__CHSZ = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__BMSZ = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__BMEN = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__PNC = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__BMP = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__BMPR = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__BMCC = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__MZE = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__TPON = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__ON = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__CAOS = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__PRIN = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__SPRM = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__COEN = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__COSL = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__CCEN = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__CCRT = 0;
        vlSelfRef.RSxRegs__Vstatic__S[__Vi0].__PVT__SCCM = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__MP = 0;
        for (int __Vi2 = 0; __Vi2 < 16; ++__Vi2) {
            vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__MPn[__Vi2] = 0;
        }
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__KTE = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__KMD = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__KTAOS = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__KDBS = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__KLCE = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__PLSZ = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__OVR = 0;
        vlSelfRef.RPxRegs__Vstatic__S[__Vi0].__PVT__OVPNR = 0;
    }
    vlSelfRef.PNData__Vstatic__res = 0;
    NxPNAddr__Vstatic__addr = 0U;
    NxPNAddr__Vstatic__ZM_MASK = 0U;
    NxPNAddr__Vstatic__OFFX = 0U;
    NxPNAddr__Vstatic__map_addr = 0U;
    vlSelfRef.NxCHAddr__Vstatic__addr = 0U;
    vlSelfRef.NxCHAddr__Vstatic__ZM_MASK = 0U;
    vlSelfRef.NxCHAddr__Vstatic__PN = 0;
    vlSelfRef.NxCHAddr__Vstatic__OFFX = 0U;
    vlSelfRef.NxCHAddr__Vstatic__cell_offs = 0U;
    vlSelfRef.NxCHAddr__Vstatic__x_offs = 0U;
    vlSelfRef.NxCHAddr__Vstatic__y_offs = 0U;
    vlSelfRef.NxCHAddr__Vstatic__ch_cnt = 0U;
    NxCHAddr2__Vstatic__addr = 0U;
    NxCHAddr2__Vstatic__PN = 0;
    NxCHAddr2__Vstatic__OFFX = 0U;
    NxCHAddr2__Vstatic__cell_offs = 0U;
    NxCHAddr2__Vstatic__x_offs = 0U;
    NxCHAddr2__Vstatic__y_offs = 0U;
    NxCHAddr2__Vstatic__ch_cnt = 0U;
    vlSelfRef.NxBMAddr__Vstatic__addr = 0U;
    vlSelfRef.NxBMAddr__Vstatic__offs = 0U;
    vlSelfRef.NxLSTblSize__Vstatic__res = 0U;
    vlSelfRef.NxLSSMask__Vstatic__mask = 0U;
    vlSelfRef.MultRC__Vstatic__temp = 0ULL;
    RxPNAddr__Vstatic__addr = 0U;
    RxPNAddr__Vstatic__map_addr = 0U;
    vlSelfRef.RxCHAddr__Vstatic__addr = 0U;
    vlSelfRef.RxCHAddr__Vstatic__cell_offs = 0U;
    vlSelfRef.RxCHAddr__Vstatic__x_offs = 0U;
    vlSelfRef.RxCHAddr__Vstatic__y_offs = 0U;
    vlSelfRef.RxBMAddr__Vstatic__addr = 0U;
    vlSelfRef.RxBMAddr__Vstatic__offs = 0U;
    RxCTAddr__Vstatic__addr = 0U;
    RxCTAddr__Vstatic__offs = 0U;
    vlSelfRef.CTData__Vstatic__CTD = 0;
    vlSelfRef.RxScreenOver__Vstatic__mx = 0U;
    vlSelfRef.RxScreenOver__Vstatic__my = 0U;
    RxScreenOver__Vstatic__res = 0U;
    vlSelfRef.SpriteData__Vstatic__SDD = 0;
    vlSelfRef.SpriteData__Vstatic__MSB = 0U;
    vlSelfRef.SpriteData__Vstatic__NSD = 0U;
    vlSelfRef.SpriteData__Vstatic__MSD = 0U;
    vlSelfRef.SpriteData__Vstatic__TSD = 0U;
    vlSelfRef.SpriteData__Vstatic__TPEN = 0U;
    vlSelfRef.SpriteData__Vstatic__TP = 0U;
    vlSelfRef.SpriteData__Vstatic__RGB_TP = 0U;
    vlSelfRef.SpriteData__Vstatic__PAL_TP = 0U;
    vlSelfRef.SpriteData__Vstatic__PR = 0U;
    vlSelfRef.SpriteData__Vstatic__CC = 0U;
    vlSelfRef.SpriteData__Vstatic__DC = 0U;
    vlSelfRef.SpriteData__Vstatic__RGB888 = 0U;
    MakeDotData__Vstatic__DC = 0U;
    MakeDotData__Vstatic__NTP = 0U;
    vlSelfRef.MakeDotData__Vstatic__P = 0U;
    vlSelfRef.MakeDotData__Vstatic__TP = 0U;
    vlSelfRef.ColorCalcRatio__Vstatic__S = 0U;
    vlSelfRef.ColorCalc__Vstatic__TEMP = 0;
    vlSelfRef.ColorCalcExtRatio__Vstatic__S = 0U;
    vlSelfRef.ExtColorCalc__Vstatic__RTSEC = 0U;
    vlSelfRef.ExtColorCalc__Vstatic__RTTHD = 0U;
    vlSelfRef.ExtColorCalc__Vstatic__TEMP = 0;
    vlSelfRef.ColorOffset__Vstatic__CO = 0U;
    vlSelfRef.ColorOffset__Vstatic__CSUM = 0U;
    vlSelfRef.SFCMatch__Vstatic__sfcd = 0U;
    vlSelfRef.SFCMatch__Vstatic__match = 0U;
    vlSelfRef.WinTest__Vstatic__log_and = 0U;
    vlSelfRef.WinTest__Vstatic__log_or = 0U;
}
