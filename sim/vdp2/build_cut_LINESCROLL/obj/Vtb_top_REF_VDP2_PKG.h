// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_REF_VDP2_PKG_H_
#define VERILATED_VTB_TOP_REF_VDP2_PKG_H_  // guard

#include "verilated.h"
#include "Vtb_top_REF_VDP2_PKG.h"


class Vtb_top__Syms;
struct Vtb_top_VDP2NSRegs_t__struct__0 {
    CData/*2:0*/ __PVT__CHCN;
    CData/*0:0*/ __PVT__CHSZ;
    CData/*1:0*/ __PVT__BMSZ;
    CData/*0:0*/ __PVT__BMEN;
    CData/*1:0*/ __PVT__PLSZ;
    CData/*2:0*/ __PVT__BMP;
    CData/*0:0*/ __PVT__BMPR;
    CData/*0:0*/ __PVT__BMCC;
    SData/*15:0*/ __PVT__PNC;
    CData/*2:0*/ __PVT__MP;
    VlUnpacked<CData/*5:0*/, 4> __PVT__MPn;
    IData/*18:0*/ __PVT__SCX;
    IData/*18:0*/ __PVT__SCY;
    SData/*10:0*/ __PVT__ZMX;
    SData/*10:0*/ __PVT__ZMY;
    CData/*0:0*/ __PVT__ZMHF;
    CData/*0:0*/ __PVT__ZMQT;
    IData/*17:0*/ __PVT__LSTA;
    CData/*0:0*/ __PVT__LSCX;
    CData/*0:0*/ __PVT__LSCY;
    CData/*0:0*/ __PVT__LZMX;
    CData/*0:0*/ __PVT__VCSC;
    CData/*1:0*/ __PVT__LSS;
    CData/*0:0*/ __PVT__MZE;
    IData/*17:0*/ __PVT__LWTA;
    CData/*0:0*/ __PVT__TPON;
    CData/*0:0*/ __PVT__ON;
    CData/*2:0*/ __PVT__CAOS;
    CData/*2:0*/ __PVT__PRIN;
    CData/*1:0*/ __PVT__SPRM;
    CData/*0:0*/ __PVT__COEN;
    CData/*0:0*/ __PVT__COSL;
    CData/*0:0*/ __PVT__CCEN;
    CData/*4:0*/ __PVT__CCRT;
    CData/*1:0*/ __PVT__SCCM;

    bool operator==(const Vtb_top_VDP2NSRegs_t__struct__0& rhs) const {
        return __PVT__CHCN == rhs.__PVT__CHCN
            && __PVT__CHSZ == rhs.__PVT__CHSZ
            && __PVT__BMSZ == rhs.__PVT__BMSZ
            && __PVT__BMEN == rhs.__PVT__BMEN
            && __PVT__PLSZ == rhs.__PVT__PLSZ
            && __PVT__BMP == rhs.__PVT__BMP
            && __PVT__BMPR == rhs.__PVT__BMPR
            && __PVT__BMCC == rhs.__PVT__BMCC
            && __PVT__PNC == rhs.__PVT__PNC
            && __PVT__MP == rhs.__PVT__MP
            && __PVT__MPn == rhs.__PVT__MPn
            && __PVT__SCX == rhs.__PVT__SCX
            && __PVT__SCY == rhs.__PVT__SCY
            && __PVT__ZMX == rhs.__PVT__ZMX
            && __PVT__ZMY == rhs.__PVT__ZMY
            && __PVT__ZMHF == rhs.__PVT__ZMHF
            && __PVT__ZMQT == rhs.__PVT__ZMQT
            && __PVT__LSTA == rhs.__PVT__LSTA
            && __PVT__LSCX == rhs.__PVT__LSCX
            && __PVT__LSCY == rhs.__PVT__LSCY
            && __PVT__LZMX == rhs.__PVT__LZMX
            && __PVT__VCSC == rhs.__PVT__VCSC
            && __PVT__LSS == rhs.__PVT__LSS
            && __PVT__MZE == rhs.__PVT__MZE
            && __PVT__LWTA == rhs.__PVT__LWTA
            && __PVT__TPON == rhs.__PVT__TPON
            && __PVT__ON == rhs.__PVT__ON
            && __PVT__CAOS == rhs.__PVT__CAOS
            && __PVT__PRIN == rhs.__PVT__PRIN
            && __PVT__SPRM == rhs.__PVT__SPRM
            && __PVT__COEN == rhs.__PVT__COEN
            && __PVT__COSL == rhs.__PVT__COSL
            && __PVT__CCEN == rhs.__PVT__CCEN
            && __PVT__CCRT == rhs.__PVT__CCRT
            && __PVT__SCCM == rhs.__PVT__SCCM;
    }
    bool operator!=(const Vtb_top_VDP2NSRegs_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_VDP2NSRegs_t__struct__0& rhs) const {
        if (__PVT__CHCN < rhs.__PVT__CHCN) return true;
        if (rhs.__PVT__CHCN < __PVT__CHCN) return false;
        if (__PVT__CHSZ < rhs.__PVT__CHSZ) return true;
        if (rhs.__PVT__CHSZ < __PVT__CHSZ) return false;
        if (__PVT__BMSZ < rhs.__PVT__BMSZ) return true;
        if (rhs.__PVT__BMSZ < __PVT__BMSZ) return false;
        if (__PVT__BMEN < rhs.__PVT__BMEN) return true;
        if (rhs.__PVT__BMEN < __PVT__BMEN) return false;
        if (__PVT__PLSZ < rhs.__PVT__PLSZ) return true;
        if (rhs.__PVT__PLSZ < __PVT__PLSZ) return false;
        if (__PVT__BMP < rhs.__PVT__BMP) return true;
        if (rhs.__PVT__BMP < __PVT__BMP) return false;
        if (__PVT__BMPR < rhs.__PVT__BMPR) return true;
        if (rhs.__PVT__BMPR < __PVT__BMPR) return false;
        if (__PVT__BMCC < rhs.__PVT__BMCC) return true;
        if (rhs.__PVT__BMCC < __PVT__BMCC) return false;
        if (__PVT__PNC < rhs.__PVT__PNC) return true;
        if (rhs.__PVT__PNC < __PVT__PNC) return false;
        if (__PVT__MP < rhs.__PVT__MP) return true;
        if (rhs.__PVT__MP < __PVT__MP) return false;
        if (__PVT__MPn < rhs.__PVT__MPn) return true;
        if (rhs.__PVT__MPn < __PVT__MPn) return false;
        if (__PVT__SCX < rhs.__PVT__SCX) return true;
        if (rhs.__PVT__SCX < __PVT__SCX) return false;
        if (__PVT__SCY < rhs.__PVT__SCY) return true;
        if (rhs.__PVT__SCY < __PVT__SCY) return false;
        if (__PVT__ZMX < rhs.__PVT__ZMX) return true;
        if (rhs.__PVT__ZMX < __PVT__ZMX) return false;
        if (__PVT__ZMY < rhs.__PVT__ZMY) return true;
        if (rhs.__PVT__ZMY < __PVT__ZMY) return false;
        if (__PVT__ZMHF < rhs.__PVT__ZMHF) return true;
        if (rhs.__PVT__ZMHF < __PVT__ZMHF) return false;
        if (__PVT__ZMQT < rhs.__PVT__ZMQT) return true;
        if (rhs.__PVT__ZMQT < __PVT__ZMQT) return false;
        if (__PVT__LSTA < rhs.__PVT__LSTA) return true;
        if (rhs.__PVT__LSTA < __PVT__LSTA) return false;
        if (__PVT__LSCX < rhs.__PVT__LSCX) return true;
        if (rhs.__PVT__LSCX < __PVT__LSCX) return false;
        if (__PVT__LSCY < rhs.__PVT__LSCY) return true;
        if (rhs.__PVT__LSCY < __PVT__LSCY) return false;
        if (__PVT__LZMX < rhs.__PVT__LZMX) return true;
        if (rhs.__PVT__LZMX < __PVT__LZMX) return false;
        if (__PVT__VCSC < rhs.__PVT__VCSC) return true;
        if (rhs.__PVT__VCSC < __PVT__VCSC) return false;
        if (__PVT__LSS < rhs.__PVT__LSS) return true;
        if (rhs.__PVT__LSS < __PVT__LSS) return false;
        if (__PVT__MZE < rhs.__PVT__MZE) return true;
        if (rhs.__PVT__MZE < __PVT__MZE) return false;
        if (__PVT__LWTA < rhs.__PVT__LWTA) return true;
        if (rhs.__PVT__LWTA < __PVT__LWTA) return false;
        if (__PVT__TPON < rhs.__PVT__TPON) return true;
        if (rhs.__PVT__TPON < __PVT__TPON) return false;
        if (__PVT__ON < rhs.__PVT__ON) return true;
        if (rhs.__PVT__ON < __PVT__ON) return false;
        if (__PVT__CAOS < rhs.__PVT__CAOS) return true;
        if (rhs.__PVT__CAOS < __PVT__CAOS) return false;
        if (__PVT__PRIN < rhs.__PVT__PRIN) return true;
        if (rhs.__PVT__PRIN < __PVT__PRIN) return false;
        if (__PVT__SPRM < rhs.__PVT__SPRM) return true;
        if (rhs.__PVT__SPRM < __PVT__SPRM) return false;
        if (__PVT__COEN < rhs.__PVT__COEN) return true;
        if (rhs.__PVT__COEN < __PVT__COEN) return false;
        if (__PVT__COSL < rhs.__PVT__COSL) return true;
        if (rhs.__PVT__COSL < __PVT__COSL) return false;
        if (__PVT__CCEN < rhs.__PVT__CCEN) return true;
        if (rhs.__PVT__CCEN < __PVT__CCEN) return false;
        if (__PVT__CCRT < rhs.__PVT__CCRT) return true;
        if (rhs.__PVT__CCRT < __PVT__CCRT) return false;
        if (__PVT__SCCM < rhs.__PVT__SCCM) return true;
        if (rhs.__PVT__SCCM < __PVT__SCCM) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_VDP2NSRegs_t__struct__0> : public std::true_type {};
struct Vtb_top_VDP2RSRegs_t__struct__0 {
    CData/*2:0*/ __PVT__CHCN;
    CData/*0:0*/ __PVT__CHSZ;
    CData/*0:0*/ __PVT__BMSZ;
    CData/*0:0*/ __PVT__BMEN;
    SData/*15:0*/ __PVT__PNC;
    CData/*2:0*/ __PVT__BMP;
    CData/*0:0*/ __PVT__BMPR;
    CData/*0:0*/ __PVT__BMCC;
    CData/*0:0*/ __PVT__MZE;
    CData/*0:0*/ __PVT__TPON;
    CData/*0:0*/ __PVT__ON;
    CData/*2:0*/ __PVT__CAOS;
    CData/*2:0*/ __PVT__PRIN;
    CData/*1:0*/ __PVT__SPRM;
    CData/*0:0*/ __PVT__COEN;
    CData/*0:0*/ __PVT__COSL;
    CData/*0:0*/ __PVT__CCEN;
    CData/*4:0*/ __PVT__CCRT;
    CData/*1:0*/ __PVT__SCCM;

    bool operator==(const Vtb_top_VDP2RSRegs_t__struct__0& rhs) const {
        return __PVT__CHCN == rhs.__PVT__CHCN
            && __PVT__CHSZ == rhs.__PVT__CHSZ
            && __PVT__BMSZ == rhs.__PVT__BMSZ
            && __PVT__BMEN == rhs.__PVT__BMEN
            && __PVT__PNC == rhs.__PVT__PNC
            && __PVT__BMP == rhs.__PVT__BMP
            && __PVT__BMPR == rhs.__PVT__BMPR
            && __PVT__BMCC == rhs.__PVT__BMCC
            && __PVT__MZE == rhs.__PVT__MZE
            && __PVT__TPON == rhs.__PVT__TPON
            && __PVT__ON == rhs.__PVT__ON
            && __PVT__CAOS == rhs.__PVT__CAOS
            && __PVT__PRIN == rhs.__PVT__PRIN
            && __PVT__SPRM == rhs.__PVT__SPRM
            && __PVT__COEN == rhs.__PVT__COEN
            && __PVT__COSL == rhs.__PVT__COSL
            && __PVT__CCEN == rhs.__PVT__CCEN
            && __PVT__CCRT == rhs.__PVT__CCRT
            && __PVT__SCCM == rhs.__PVT__SCCM;
    }
    bool operator!=(const Vtb_top_VDP2RSRegs_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_VDP2RSRegs_t__struct__0& rhs) const {
        if (__PVT__CHCN < rhs.__PVT__CHCN) return true;
        if (rhs.__PVT__CHCN < __PVT__CHCN) return false;
        if (__PVT__CHSZ < rhs.__PVT__CHSZ) return true;
        if (rhs.__PVT__CHSZ < __PVT__CHSZ) return false;
        if (__PVT__BMSZ < rhs.__PVT__BMSZ) return true;
        if (rhs.__PVT__BMSZ < __PVT__BMSZ) return false;
        if (__PVT__BMEN < rhs.__PVT__BMEN) return true;
        if (rhs.__PVT__BMEN < __PVT__BMEN) return false;
        if (__PVT__PNC < rhs.__PVT__PNC) return true;
        if (rhs.__PVT__PNC < __PVT__PNC) return false;
        if (__PVT__BMP < rhs.__PVT__BMP) return true;
        if (rhs.__PVT__BMP < __PVT__BMP) return false;
        if (__PVT__BMPR < rhs.__PVT__BMPR) return true;
        if (rhs.__PVT__BMPR < __PVT__BMPR) return false;
        if (__PVT__BMCC < rhs.__PVT__BMCC) return true;
        if (rhs.__PVT__BMCC < __PVT__BMCC) return false;
        if (__PVT__MZE < rhs.__PVT__MZE) return true;
        if (rhs.__PVT__MZE < __PVT__MZE) return false;
        if (__PVT__TPON < rhs.__PVT__TPON) return true;
        if (rhs.__PVT__TPON < __PVT__TPON) return false;
        if (__PVT__ON < rhs.__PVT__ON) return true;
        if (rhs.__PVT__ON < __PVT__ON) return false;
        if (__PVT__CAOS < rhs.__PVT__CAOS) return true;
        if (rhs.__PVT__CAOS < __PVT__CAOS) return false;
        if (__PVT__PRIN < rhs.__PVT__PRIN) return true;
        if (rhs.__PVT__PRIN < __PVT__PRIN) return false;
        if (__PVT__SPRM < rhs.__PVT__SPRM) return true;
        if (rhs.__PVT__SPRM < __PVT__SPRM) return false;
        if (__PVT__COEN < rhs.__PVT__COEN) return true;
        if (rhs.__PVT__COEN < __PVT__COEN) return false;
        if (__PVT__COSL < rhs.__PVT__COSL) return true;
        if (rhs.__PVT__COSL < __PVT__COSL) return false;
        if (__PVT__CCEN < rhs.__PVT__CCEN) return true;
        if (rhs.__PVT__CCEN < __PVT__CCEN) return false;
        if (__PVT__CCRT < rhs.__PVT__CCRT) return true;
        if (rhs.__PVT__CCRT < __PVT__CCRT) return false;
        if (__PVT__SCCM < rhs.__PVT__SCCM) return true;
        if (rhs.__PVT__SCCM < __PVT__SCCM) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_VDP2RSRegs_t__struct__0> : public std::true_type {};
struct Vtb_top_VDP2RPRegs_t__struct__0 {
    CData/*2:0*/ __PVT__MP;
    VlUnpacked<CData/*5:0*/, 16> __PVT__MPn;
    CData/*0:0*/ __PVT__KTE;
    CData/*1:0*/ __PVT__KMD;
    CData/*2:0*/ __PVT__KTAOS;
    CData/*0:0*/ __PVT__KDBS;
    CData/*0:0*/ __PVT__KLCE;
    CData/*1:0*/ __PVT__PLSZ;
    CData/*1:0*/ __PVT__OVR;
    SData/*15:0*/ __PVT__OVPNR;

    bool operator==(const Vtb_top_VDP2RPRegs_t__struct__0& rhs) const {
        return __PVT__MP == rhs.__PVT__MP
            && __PVT__MPn == rhs.__PVT__MPn
            && __PVT__KTE == rhs.__PVT__KTE
            && __PVT__KMD == rhs.__PVT__KMD
            && __PVT__KTAOS == rhs.__PVT__KTAOS
            && __PVT__KDBS == rhs.__PVT__KDBS
            && __PVT__KLCE == rhs.__PVT__KLCE
            && __PVT__PLSZ == rhs.__PVT__PLSZ
            && __PVT__OVR == rhs.__PVT__OVR
            && __PVT__OVPNR == rhs.__PVT__OVPNR;
    }
    bool operator!=(const Vtb_top_VDP2RPRegs_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_VDP2RPRegs_t__struct__0& rhs) const {
        if (__PVT__MP < rhs.__PVT__MP) return true;
        if (rhs.__PVT__MP < __PVT__MP) return false;
        if (__PVT__MPn < rhs.__PVT__MPn) return true;
        if (rhs.__PVT__MPn < __PVT__MPn) return false;
        if (__PVT__KTE < rhs.__PVT__KTE) return true;
        if (rhs.__PVT__KTE < __PVT__KTE) return false;
        if (__PVT__KMD < rhs.__PVT__KMD) return true;
        if (rhs.__PVT__KMD < __PVT__KMD) return false;
        if (__PVT__KTAOS < rhs.__PVT__KTAOS) return true;
        if (rhs.__PVT__KTAOS < __PVT__KTAOS) return false;
        if (__PVT__KDBS < rhs.__PVT__KDBS) return true;
        if (rhs.__PVT__KDBS < __PVT__KDBS) return false;
        if (__PVT__KLCE < rhs.__PVT__KLCE) return true;
        if (rhs.__PVT__KLCE < __PVT__KLCE) return false;
        if (__PVT__PLSZ < rhs.__PVT__PLSZ) return true;
        if (rhs.__PVT__PLSZ < __PVT__PLSZ) return false;
        if (__PVT__OVR < rhs.__PVT__OVR) return true;
        if (rhs.__PVT__OVR < __PVT__OVR) return false;
        if (__PVT__OVPNR < rhs.__PVT__OVPNR) return true;
        if (rhs.__PVT__OVPNR < __PVT__OVPNR) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_VDP2RPRegs_t__struct__0> : public std::true_type {};
struct Vtb_top_VRAMAccessState_t__struct__0 {
    VlUnpacked<SData/*10:0*/, 4> __PVT__NxX;
    VlUnpacked<SData/*10:0*/, 4> __PVT__NxY;
    VlUnpacked<SData/*15:0*/, 2> __PVT__RxX;
    VlUnpacked<SData/*15:0*/, 2> __PVT__RxY;
    CData/*3:0*/ __PVT__NxA0PN;
    CData/*3:0*/ __PVT__NxA1PN;
    CData/*3:0*/ __PVT__NxB0PN;
    CData/*3:0*/ __PVT__NxB1PN;
    CData/*3:0*/ __PVT__NxA0CH;
    CData/*3:0*/ __PVT__NxA1CH;
    CData/*3:0*/ __PVT__NxB0CH;
    CData/*3:0*/ __PVT__NxB1CH;
    CData/*1:0*/ __PVT__NxA0VS;
    CData/*1:0*/ __PVT__NxA1VS;
    CData/*1:0*/ __PVT__NxB0VS;
    CData/*1:0*/ __PVT__NxB1VS;
    VlUnpacked<CData/*0:0*/, 4> __PVT__NxPN_FETCH;
    CData/*1:0*/ __PVT__RxA0PN;
    CData/*1:0*/ __PVT__RxA1PN;
    CData/*1:0*/ __PVT__RxB0PN;
    CData/*1:0*/ __PVT__RxB1PN;
    CData/*1:0*/ __PVT__RxA0CH;
    CData/*1:0*/ __PVT__RxA1CH;
    CData/*1:0*/ __PVT__RxB0CH;
    CData/*1:0*/ __PVT__RxB1CH;
    CData/*1:0*/ __PVT__RxA0CT;
    CData/*1:0*/ __PVT__RxA1CT;
    CData/*1:0*/ __PVT__RxB0CT;
    CData/*1:0*/ __PVT__RxB1CT;
    CData/*1:0*/ __PVT__RxCRCT;
    CData/*1:0*/ __PVT__RxCTTP;
    CData/*0:0*/ __PVT__AxNA;
    CData/*0:0*/ __PVT__BxNA;
    CData/*0:0*/ __PVT__LS;
    CData/*2:0*/ __PVT__LS_POS;
    CData/*0:0*/ __PVT__LW;
    CData/*0:0*/ __PVT__LW_POS;
    CData/*0:0*/ __PVT__RPA;
    CData/*0:0*/ __PVT__RPB;
    CData/*0:0*/ __PVT__RCTA;
    CData/*0:0*/ __PVT__RCTB;
    CData/*0:0*/ __PVT__R0RP;
    CData/*5:0*/ __PVT__RP_POS;
    CData/*0:0*/ __PVT__BS;
    CData/*0:0*/ __PVT__LN;

    bool operator==(const Vtb_top_VRAMAccessState_t__struct__0& rhs) const {
        return __PVT__NxX == rhs.__PVT__NxX
            && __PVT__NxY == rhs.__PVT__NxY
            && __PVT__RxX == rhs.__PVT__RxX
            && __PVT__RxY == rhs.__PVT__RxY
            && __PVT__NxA0PN == rhs.__PVT__NxA0PN
            && __PVT__NxA1PN == rhs.__PVT__NxA1PN
            && __PVT__NxB0PN == rhs.__PVT__NxB0PN
            && __PVT__NxB1PN == rhs.__PVT__NxB1PN
            && __PVT__NxA0CH == rhs.__PVT__NxA0CH
            && __PVT__NxA1CH == rhs.__PVT__NxA1CH
            && __PVT__NxB0CH == rhs.__PVT__NxB0CH
            && __PVT__NxB1CH == rhs.__PVT__NxB1CH
            && __PVT__NxA0VS == rhs.__PVT__NxA0VS
            && __PVT__NxA1VS == rhs.__PVT__NxA1VS
            && __PVT__NxB0VS == rhs.__PVT__NxB0VS
            && __PVT__NxB1VS == rhs.__PVT__NxB1VS
            && __PVT__NxPN_FETCH == rhs.__PVT__NxPN_FETCH
            && __PVT__RxA0PN == rhs.__PVT__RxA0PN
            && __PVT__RxA1PN == rhs.__PVT__RxA1PN
            && __PVT__RxB0PN == rhs.__PVT__RxB0PN
            && __PVT__RxB1PN == rhs.__PVT__RxB1PN
            && __PVT__RxA0CH == rhs.__PVT__RxA0CH
            && __PVT__RxA1CH == rhs.__PVT__RxA1CH
            && __PVT__RxB0CH == rhs.__PVT__RxB0CH
            && __PVT__RxB1CH == rhs.__PVT__RxB1CH
            && __PVT__RxA0CT == rhs.__PVT__RxA0CT
            && __PVT__RxA1CT == rhs.__PVT__RxA1CT
            && __PVT__RxB0CT == rhs.__PVT__RxB0CT
            && __PVT__RxB1CT == rhs.__PVT__RxB1CT
            && __PVT__RxCRCT == rhs.__PVT__RxCRCT
            && __PVT__RxCTTP == rhs.__PVT__RxCTTP
            && __PVT__AxNA == rhs.__PVT__AxNA
            && __PVT__BxNA == rhs.__PVT__BxNA
            && __PVT__LS == rhs.__PVT__LS
            && __PVT__LS_POS == rhs.__PVT__LS_POS
            && __PVT__LW == rhs.__PVT__LW
            && __PVT__LW_POS == rhs.__PVT__LW_POS
            && __PVT__RPA == rhs.__PVT__RPA
            && __PVT__RPB == rhs.__PVT__RPB
            && __PVT__RCTA == rhs.__PVT__RCTA
            && __PVT__RCTB == rhs.__PVT__RCTB
            && __PVT__R0RP == rhs.__PVT__R0RP
            && __PVT__RP_POS == rhs.__PVT__RP_POS
            && __PVT__BS == rhs.__PVT__BS
            && __PVT__LN == rhs.__PVT__LN;
    }
    bool operator!=(const Vtb_top_VRAMAccessState_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_VRAMAccessState_t__struct__0& rhs) const {
        if (__PVT__NxX < rhs.__PVT__NxX) return true;
        if (rhs.__PVT__NxX < __PVT__NxX) return false;
        if (__PVT__NxY < rhs.__PVT__NxY) return true;
        if (rhs.__PVT__NxY < __PVT__NxY) return false;
        if (__PVT__RxX < rhs.__PVT__RxX) return true;
        if (rhs.__PVT__RxX < __PVT__RxX) return false;
        if (__PVT__RxY < rhs.__PVT__RxY) return true;
        if (rhs.__PVT__RxY < __PVT__RxY) return false;
        if (__PVT__NxA0PN < rhs.__PVT__NxA0PN) return true;
        if (rhs.__PVT__NxA0PN < __PVT__NxA0PN) return false;
        if (__PVT__NxA1PN < rhs.__PVT__NxA1PN) return true;
        if (rhs.__PVT__NxA1PN < __PVT__NxA1PN) return false;
        if (__PVT__NxB0PN < rhs.__PVT__NxB0PN) return true;
        if (rhs.__PVT__NxB0PN < __PVT__NxB0PN) return false;
        if (__PVT__NxB1PN < rhs.__PVT__NxB1PN) return true;
        if (rhs.__PVT__NxB1PN < __PVT__NxB1PN) return false;
        if (__PVT__NxA0CH < rhs.__PVT__NxA0CH) return true;
        if (rhs.__PVT__NxA0CH < __PVT__NxA0CH) return false;
        if (__PVT__NxA1CH < rhs.__PVT__NxA1CH) return true;
        if (rhs.__PVT__NxA1CH < __PVT__NxA1CH) return false;
        if (__PVT__NxB0CH < rhs.__PVT__NxB0CH) return true;
        if (rhs.__PVT__NxB0CH < __PVT__NxB0CH) return false;
        if (__PVT__NxB1CH < rhs.__PVT__NxB1CH) return true;
        if (rhs.__PVT__NxB1CH < __PVT__NxB1CH) return false;
        if (__PVT__NxA0VS < rhs.__PVT__NxA0VS) return true;
        if (rhs.__PVT__NxA0VS < __PVT__NxA0VS) return false;
        if (__PVT__NxA1VS < rhs.__PVT__NxA1VS) return true;
        if (rhs.__PVT__NxA1VS < __PVT__NxA1VS) return false;
        if (__PVT__NxB0VS < rhs.__PVT__NxB0VS) return true;
        if (rhs.__PVT__NxB0VS < __PVT__NxB0VS) return false;
        if (__PVT__NxB1VS < rhs.__PVT__NxB1VS) return true;
        if (rhs.__PVT__NxB1VS < __PVT__NxB1VS) return false;
        if (__PVT__NxPN_FETCH < rhs.__PVT__NxPN_FETCH) return true;
        if (rhs.__PVT__NxPN_FETCH < __PVT__NxPN_FETCH) return false;
        if (__PVT__RxA0PN < rhs.__PVT__RxA0PN) return true;
        if (rhs.__PVT__RxA0PN < __PVT__RxA0PN) return false;
        if (__PVT__RxA1PN < rhs.__PVT__RxA1PN) return true;
        if (rhs.__PVT__RxA1PN < __PVT__RxA1PN) return false;
        if (__PVT__RxB0PN < rhs.__PVT__RxB0PN) return true;
        if (rhs.__PVT__RxB0PN < __PVT__RxB0PN) return false;
        if (__PVT__RxB1PN < rhs.__PVT__RxB1PN) return true;
        if (rhs.__PVT__RxB1PN < __PVT__RxB1PN) return false;
        if (__PVT__RxA0CH < rhs.__PVT__RxA0CH) return true;
        if (rhs.__PVT__RxA0CH < __PVT__RxA0CH) return false;
        if (__PVT__RxA1CH < rhs.__PVT__RxA1CH) return true;
        if (rhs.__PVT__RxA1CH < __PVT__RxA1CH) return false;
        if (__PVT__RxB0CH < rhs.__PVT__RxB0CH) return true;
        if (rhs.__PVT__RxB0CH < __PVT__RxB0CH) return false;
        if (__PVT__RxB1CH < rhs.__PVT__RxB1CH) return true;
        if (rhs.__PVT__RxB1CH < __PVT__RxB1CH) return false;
        if (__PVT__RxA0CT < rhs.__PVT__RxA0CT) return true;
        if (rhs.__PVT__RxA0CT < __PVT__RxA0CT) return false;
        if (__PVT__RxA1CT < rhs.__PVT__RxA1CT) return true;
        if (rhs.__PVT__RxA1CT < __PVT__RxA1CT) return false;
        if (__PVT__RxB0CT < rhs.__PVT__RxB0CT) return true;
        if (rhs.__PVT__RxB0CT < __PVT__RxB0CT) return false;
        if (__PVT__RxB1CT < rhs.__PVT__RxB1CT) return true;
        if (rhs.__PVT__RxB1CT < __PVT__RxB1CT) return false;
        if (__PVT__RxCRCT < rhs.__PVT__RxCRCT) return true;
        if (rhs.__PVT__RxCRCT < __PVT__RxCRCT) return false;
        if (__PVT__RxCTTP < rhs.__PVT__RxCTTP) return true;
        if (rhs.__PVT__RxCTTP < __PVT__RxCTTP) return false;
        if (__PVT__AxNA < rhs.__PVT__AxNA) return true;
        if (rhs.__PVT__AxNA < __PVT__AxNA) return false;
        if (__PVT__BxNA < rhs.__PVT__BxNA) return true;
        if (rhs.__PVT__BxNA < __PVT__BxNA) return false;
        if (__PVT__LS < rhs.__PVT__LS) return true;
        if (rhs.__PVT__LS < __PVT__LS) return false;
        if (__PVT__LS_POS < rhs.__PVT__LS_POS) return true;
        if (rhs.__PVT__LS_POS < __PVT__LS_POS) return false;
        if (__PVT__LW < rhs.__PVT__LW) return true;
        if (rhs.__PVT__LW < __PVT__LW) return false;
        if (__PVT__LW_POS < rhs.__PVT__LW_POS) return true;
        if (rhs.__PVT__LW_POS < __PVT__LW_POS) return false;
        if (__PVT__RPA < rhs.__PVT__RPA) return true;
        if (rhs.__PVT__RPA < __PVT__RPA) return false;
        if (__PVT__RPB < rhs.__PVT__RPB) return true;
        if (rhs.__PVT__RPB < __PVT__RPB) return false;
        if (__PVT__RCTA < rhs.__PVT__RCTA) return true;
        if (rhs.__PVT__RCTA < __PVT__RCTA) return false;
        if (__PVT__RCTB < rhs.__PVT__RCTB) return true;
        if (rhs.__PVT__RCTB < __PVT__RCTB) return false;
        if (__PVT__R0RP < rhs.__PVT__R0RP) return true;
        if (rhs.__PVT__R0RP < __PVT__R0RP) return false;
        if (__PVT__RP_POS < rhs.__PVT__RP_POS) return true;
        if (rhs.__PVT__RP_POS < __PVT__RP_POS) return false;
        if (__PVT__BS < rhs.__PVT__BS) return true;
        if (rhs.__PVT__BS < __PVT__BS) return false;
        if (__PVT__LN < rhs.__PVT__LN) return true;
        if (rhs.__PVT__LN < __PVT__LN) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_VRAMAccessState_t__struct__0> : public std::true_type {};
struct Vtb_top_NBGState_t__struct__0 {
    CData/*3:0*/ __PVT__NxPN;
    VlUnpacked<CData/*1:0*/, 4> __PVT__NxPNS;
    CData/*3:0*/ __PVT__NxCH;
    VlUnpacked<CData/*1:0*/, 4> __PVT__NxCHS;
    VlUnpacked<CData/*1:0*/, 2> __PVT__NxPN_CNT;
    VlUnpacked<CData/*0:0*/, 4> __PVT__NxPN_EN;
    VlUnpacked<CData/*2:0*/, 4> __PVT__NxCH_CNT;
    VlUnpacked<CData/*0:0*/, 4> __PVT__NxCH_EN;
    CData/*1:0*/ __PVT__NxVS;
    VlUnpacked<CData/*1:0*/, 2> __PVT__NxVSS;

    bool operator==(const Vtb_top_NBGState_t__struct__0& rhs) const {
        return __PVT__NxPN == rhs.__PVT__NxPN
            && __PVT__NxPNS == rhs.__PVT__NxPNS
            && __PVT__NxCH == rhs.__PVT__NxCH
            && __PVT__NxCHS == rhs.__PVT__NxCHS
            && __PVT__NxPN_CNT == rhs.__PVT__NxPN_CNT
            && __PVT__NxPN_EN == rhs.__PVT__NxPN_EN
            && __PVT__NxCH_CNT == rhs.__PVT__NxCH_CNT
            && __PVT__NxCH_EN == rhs.__PVT__NxCH_EN
            && __PVT__NxVS == rhs.__PVT__NxVS
            && __PVT__NxVSS == rhs.__PVT__NxVSS;
    }
    bool operator!=(const Vtb_top_NBGState_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_NBGState_t__struct__0& rhs) const {
        if (__PVT__NxPN < rhs.__PVT__NxPN) return true;
        if (rhs.__PVT__NxPN < __PVT__NxPN) return false;
        if (__PVT__NxPNS < rhs.__PVT__NxPNS) return true;
        if (rhs.__PVT__NxPNS < __PVT__NxPNS) return false;
        if (__PVT__NxCH < rhs.__PVT__NxCH) return true;
        if (rhs.__PVT__NxCH < __PVT__NxCH) return false;
        if (__PVT__NxCHS < rhs.__PVT__NxCHS) return true;
        if (rhs.__PVT__NxCHS < __PVT__NxCHS) return false;
        if (__PVT__NxPN_CNT < rhs.__PVT__NxPN_CNT) return true;
        if (rhs.__PVT__NxPN_CNT < __PVT__NxPN_CNT) return false;
        if (__PVT__NxPN_EN < rhs.__PVT__NxPN_EN) return true;
        if (rhs.__PVT__NxPN_EN < __PVT__NxPN_EN) return false;
        if (__PVT__NxCH_CNT < rhs.__PVT__NxCH_CNT) return true;
        if (rhs.__PVT__NxCH_CNT < __PVT__NxCH_CNT) return false;
        if (__PVT__NxCH_EN < rhs.__PVT__NxCH_EN) return true;
        if (rhs.__PVT__NxCH_EN < __PVT__NxCH_EN) return false;
        if (__PVT__NxVS < rhs.__PVT__NxVS) return true;
        if (rhs.__PVT__NxVS < __PVT__NxVS) return false;
        if (__PVT__NxVSS < rhs.__PVT__NxVSS) return true;
        if (rhs.__PVT__NxVSS < __PVT__NxVSS) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_NBGState_t__struct__0> : public std::true_type {};
struct Vtb_top_RBGState_t__struct__0 {
    CData/*1:0*/ __PVT__RxPN;
    VlUnpacked<CData/*1:0*/, 2> __PVT__RxPNS;
    CData/*1:0*/ __PVT__RxCH;
    VlUnpacked<CData/*1:0*/, 2> __PVT__RxCHS;
    VlUnpacked<CData/*2:0*/, 2> __PVT__RxCELLX;
    CData/*1:0*/ __PVT__RxCT;
    VlUnpacked<CData/*1:0*/, 2> __PVT__RxCTS;
    VlUnpacked<CData/*0:0*/, 2> __PVT__RxCT_EN;
    CData/*1:0*/ __PVT__RxCRCT;
    CData/*1:0*/ __PVT__RxCTTP;
    CData/*1:0*/ __PVT__RxOVR;

    bool operator==(const Vtb_top_RBGState_t__struct__0& rhs) const {
        return __PVT__RxPN == rhs.__PVT__RxPN
            && __PVT__RxPNS == rhs.__PVT__RxPNS
            && __PVT__RxCH == rhs.__PVT__RxCH
            && __PVT__RxCHS == rhs.__PVT__RxCHS
            && __PVT__RxCELLX == rhs.__PVT__RxCELLX
            && __PVT__RxCT == rhs.__PVT__RxCT
            && __PVT__RxCTS == rhs.__PVT__RxCTS
            && __PVT__RxCT_EN == rhs.__PVT__RxCT_EN
            && __PVT__RxCRCT == rhs.__PVT__RxCRCT
            && __PVT__RxCTTP == rhs.__PVT__RxCTTP
            && __PVT__RxOVR == rhs.__PVT__RxOVR;
    }
    bool operator!=(const Vtb_top_RBGState_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_RBGState_t__struct__0& rhs) const {
        if (__PVT__RxPN < rhs.__PVT__RxPN) return true;
        if (rhs.__PVT__RxPN < __PVT__RxPN) return false;
        if (__PVT__RxPNS < rhs.__PVT__RxPNS) return true;
        if (rhs.__PVT__RxPNS < __PVT__RxPNS) return false;
        if (__PVT__RxCH < rhs.__PVT__RxCH) return true;
        if (rhs.__PVT__RxCH < __PVT__RxCH) return false;
        if (__PVT__RxCHS < rhs.__PVT__RxCHS) return true;
        if (rhs.__PVT__RxCHS < __PVT__RxCHS) return false;
        if (__PVT__RxCELLX < rhs.__PVT__RxCELLX) return true;
        if (rhs.__PVT__RxCELLX < __PVT__RxCELLX) return false;
        if (__PVT__RxCT < rhs.__PVT__RxCT) return true;
        if (rhs.__PVT__RxCT < __PVT__RxCT) return false;
        if (__PVT__RxCTS < rhs.__PVT__RxCTS) return true;
        if (rhs.__PVT__RxCTS < __PVT__RxCTS) return false;
        if (__PVT__RxCT_EN < rhs.__PVT__RxCT_EN) return true;
        if (rhs.__PVT__RxCT_EN < __PVT__RxCT_EN) return false;
        if (__PVT__RxCRCT < rhs.__PVT__RxCRCT) return true;
        if (rhs.__PVT__RxCRCT < __PVT__RxCRCT) return false;
        if (__PVT__RxCTTP < rhs.__PVT__RxCTTP) return true;
        if (rhs.__PVT__RxCTTP < __PVT__RxCTTP) return false;
        if (__PVT__RxOVR < rhs.__PVT__RxOVR) return true;
        if (rhs.__PVT__RxOVR < __PVT__RxOVR) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_RBGState_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_REF_VDP2_PKG final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ NxCHAddr__Vstatic__ZM_MASK;
    CData/*4:0*/ NxCHAddr__Vstatic__cell_offs;
    CData/*3:0*/ NxCHAddr__Vstatic__x_offs;
    CData/*3:0*/ NxCHAddr__Vstatic__y_offs;
    CData/*2:0*/ NxCHAddr__Vstatic__ch_cnt;
    CData/*2:0*/ NxLSTblSize__Vstatic__res;
    CData/*2:0*/ NxLSSMask__Vstatic__mask;
    CData/*4:0*/ RxCHAddr__Vstatic__cell_offs;
    CData/*3:0*/ RxCHAddr__Vstatic__x_offs;
    CData/*3:0*/ RxCHAddr__Vstatic__y_offs;
    CData/*0:0*/ SpriteData__Vstatic__MSB;
    CData/*0:0*/ SpriteData__Vstatic__NSD;
    CData/*0:0*/ SpriteData__Vstatic__MSD;
    CData/*0:0*/ SpriteData__Vstatic__TSD;
    CData/*0:0*/ SpriteData__Vstatic__TPEN;
    CData/*0:0*/ SpriteData__Vstatic__TP;
    CData/*0:0*/ SpriteData__Vstatic__RGB_TP;
    CData/*0:0*/ SpriteData__Vstatic__PAL_TP;
    CData/*2:0*/ SpriteData__Vstatic__PR;
    CData/*2:0*/ SpriteData__Vstatic__CC;
    CData/*0:0*/ MakeDotData__Vstatic__P;
    CData/*0:0*/ MakeDotData__Vstatic__TP;
    CData/*7:0*/ ColorCalcExtRatio__Vstatic__S;
    CData/*0:0*/ ExtColorCalc__Vstatic__RTSEC;
    CData/*0:0*/ ExtColorCalc__Vstatic__RTTHD;
    CData/*7:0*/ SFCMatch__Vstatic__sfcd;
    CData/*7:0*/ SFCMatch__Vstatic__match;
    CData/*0:0*/ WinTest__Vstatic__log_and;
    CData/*0:0*/ WinTest__Vstatic__log_or;
    SData/*10:0*/ NxCHAddr__Vstatic__OFFX;
    SData/*15:0*/ NxBMAddr__Vstatic__offs;
    SData/*15:0*/ RxScreenOver__Vstatic__mx;
    SData/*15:0*/ RxScreenOver__Vstatic__my;
    SData/*10:0*/ SpriteData__Vstatic__DC;
    SData/*13:0*/ ColorCalcRatio__Vstatic__S;
    SData/*8:0*/ ColorOffset__Vstatic__CO;
    SData/*8:0*/ ColorOffset__Vstatic__CSUM;
    IData/*31:0*/ PNData__Vstatic__res;
    IData/*18:0*/ NxCHAddr__Vstatic__addr;
    IData/*31:0*/ NxCHAddr__Vstatic__PN;
    IData/*18:0*/ NxBMAddr__Vstatic__addr;
    IData/*18:0*/ RxCHAddr__Vstatic__addr;
    IData/*18:0*/ RxBMAddr__Vstatic__addr;
    IData/*17:0*/ RxBMAddr__Vstatic__offs;
    IData/*23:0*/ SpriteData__Vstatic__RGB888;
    IData/*23:0*/ ColorCalc__Vstatic__TEMP;
    IData/*23:0*/ ExtColorCalc__Vstatic__TEMP;
    QData/*63:0*/ MultRC__Vstatic__temp;
    QData/*39:0*/ CTData__Vstatic__CTD;
    QData/*33:0*/ SpriteData__Vstatic__SDD;
    VlUnpacked<Vtb_top_VDP2NSRegs_t__struct__0, 4> NSxRegs__Vstatic__S;
    VlUnpacked<Vtb_top_VDP2RSRegs_t__struct__0, 2> RSxRegs__Vstatic__S;
    VlUnpacked<Vtb_top_VDP2RPRegs_t__struct__0, 2> RPxRegs__Vstatic__S;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_REF_VDP2_PKG();
    ~Vtb_top_REF_VDP2_PKG();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top_REF_VDP2_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
