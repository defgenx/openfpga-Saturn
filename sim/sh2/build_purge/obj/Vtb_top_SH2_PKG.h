// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_SH2_PKG_H_
#define VERILATED_VTB_TOP_SH2_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "Vtb_top_SH2_PKG.h"


class Vtb_top__Syms;
struct Vtb_top_IFtoID_t__struct__1 {
    SData/*15:0*/ __PVT__IR;
    IData/*31:0*/ __PVT__PC;

    bool operator==(const Vtb_top_IFtoID_t__struct__1& rhs) const {
        return __PVT__IR == rhs.__PVT__IR
            && __PVT__PC == rhs.__PVT__PC;
    }
    bool operator!=(const Vtb_top_IFtoID_t__struct__1& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_IFtoID_t__struct__1& rhs) const {
        if (__PVT__IR < rhs.__PVT__IR) return true;
        if (rhs.__PVT__IR < __PVT__IR) return false;
        if (__PVT__PC < rhs.__PVT__PC) return true;
        if (rhs.__PVT__PC < __PVT__PC) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_IFtoID_t__struct__1> : public std::true_type {};
struct Vtb_top_IDtoEX_t__struct__1 {
    SData/*15:0*/ __PVT__IR;
    VlWide<3>/*79:0*/ __PVT__DI;
    IData/*31:0*/ __PVT__PC;
    CData/*0:0*/ __PVT__BC;
    IData/*31:0*/ __PVT__RA;
    IData/*31:0*/ __PVT__RB;
    IData/*31:0*/ __PVT__R0;

    bool operator==(const Vtb_top_IDtoEX_t__struct__1& rhs) const {
        return __PVT__IR == rhs.__PVT__IR
            && __PVT__DI == rhs.__PVT__DI
            && __PVT__PC == rhs.__PVT__PC
            && __PVT__BC == rhs.__PVT__BC
            && __PVT__RA == rhs.__PVT__RA
            && __PVT__RB == rhs.__PVT__RB
            && __PVT__R0 == rhs.__PVT__R0;
    }
    bool operator!=(const Vtb_top_IDtoEX_t__struct__1& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_IDtoEX_t__struct__1& rhs) const {
        if (__PVT__IR < rhs.__PVT__IR) return true;
        if (rhs.__PVT__IR < __PVT__IR) return false;
        if (__PVT__DI < rhs.__PVT__DI) return true;
        if (rhs.__PVT__DI < __PVT__DI) return false;
        if (__PVT__PC < rhs.__PVT__PC) return true;
        if (rhs.__PVT__PC < __PVT__PC) return false;
        if (__PVT__BC < rhs.__PVT__BC) return true;
        if (rhs.__PVT__BC < __PVT__BC) return false;
        if (__PVT__RA < rhs.__PVT__RA) return true;
        if (rhs.__PVT__RA < __PVT__RA) return false;
        if (__PVT__RB < rhs.__PVT__RB) return true;
        if (rhs.__PVT__RB < __PVT__RB) return false;
        if (__PVT__R0 < rhs.__PVT__R0) return true;
        if (rhs.__PVT__R0 < __PVT__R0) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_IDtoEX_t__struct__1> : public std::true_type {};
struct Vtb_top_EXtoMA_t__struct__1 {
    SData/*15:0*/ __PVT__IR;
    VlWide<3>/*79:0*/ __PVT__DI;
    IData/*31:0*/ __PVT__PC;
    CData/*0:0*/ __PVT__BC;
    IData/*31:0*/ __PVT__RES;
    IData/*31:0*/ __PVT__ADDR;
    IData/*31:0*/ __PVT__WD;

    bool operator==(const Vtb_top_EXtoMA_t__struct__1& rhs) const {
        return __PVT__IR == rhs.__PVT__IR
            && __PVT__DI == rhs.__PVT__DI
            && __PVT__PC == rhs.__PVT__PC
            && __PVT__BC == rhs.__PVT__BC
            && __PVT__RES == rhs.__PVT__RES
            && __PVT__ADDR == rhs.__PVT__ADDR
            && __PVT__WD == rhs.__PVT__WD;
    }
    bool operator!=(const Vtb_top_EXtoMA_t__struct__1& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_EXtoMA_t__struct__1& rhs) const {
        if (__PVT__IR < rhs.__PVT__IR) return true;
        if (rhs.__PVT__IR < __PVT__IR) return false;
        if (__PVT__DI < rhs.__PVT__DI) return true;
        if (rhs.__PVT__DI < __PVT__DI) return false;
        if (__PVT__PC < rhs.__PVT__PC) return true;
        if (rhs.__PVT__PC < __PVT__PC) return false;
        if (__PVT__BC < rhs.__PVT__BC) return true;
        if (rhs.__PVT__BC < __PVT__BC) return false;
        if (__PVT__RES < rhs.__PVT__RES) return true;
        if (rhs.__PVT__RES < __PVT__RES) return false;
        if (__PVT__ADDR < rhs.__PVT__ADDR) return true;
        if (rhs.__PVT__ADDR < __PVT__ADDR) return false;
        if (__PVT__WD < rhs.__PVT__WD) return true;
        if (rhs.__PVT__WD < __PVT__WD) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_EXtoMA_t__struct__1> : public std::true_type {};
struct Vtb_top_MAtoWB_t__struct__1 {
    SData/*15:0*/ __PVT__IR;
    VlWide<3>/*79:0*/ __PVT__DI;
    IData/*31:0*/ __PVT__PC;
    IData/*31:0*/ __PVT__RES;
    IData/*31:0*/ __PVT__RD;
    CData/*0:0*/ __PVT__LOCK;

    bool operator==(const Vtb_top_MAtoWB_t__struct__1& rhs) const {
        return __PVT__IR == rhs.__PVT__IR
            && __PVT__DI == rhs.__PVT__DI
            && __PVT__PC == rhs.__PVT__PC
            && __PVT__RES == rhs.__PVT__RES
            && __PVT__RD == rhs.__PVT__RD
            && __PVT__LOCK == rhs.__PVT__LOCK;
    }
    bool operator!=(const Vtb_top_MAtoWB_t__struct__1& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_MAtoWB_t__struct__1& rhs) const {
        if (__PVT__IR < rhs.__PVT__IR) return true;
        if (rhs.__PVT__IR < __PVT__IR) return false;
        if (__PVT__DI < rhs.__PVT__DI) return true;
        if (rhs.__PVT__DI < __PVT__DI) return false;
        if (__PVT__PC < rhs.__PVT__PC) return true;
        if (rhs.__PVT__PC < __PVT__PC) return false;
        if (__PVT__RES < rhs.__PVT__RES) return true;
        if (rhs.__PVT__RES < __PVT__RES) return false;
        if (__PVT__RD < rhs.__PVT__RD) return true;
        if (rhs.__PVT__RD < __PVT__RD) return false;
        if (__PVT__LOCK < rhs.__PVT__LOCK) return true;
        if (rhs.__PVT__LOCK < __PVT__LOCK) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_MAtoWB_t__struct__1> : public std::true_type {};
struct Vtb_top_WB_t__struct__1 {
    SData/*15:0*/ __PVT__IR;
    VlWide<3>/*79:0*/ __PVT__DI;
    IData/*31:0*/ __PVT__PC;
    IData/*31:0*/ __PVT__RESA;
    IData/*31:0*/ __PVT__RESB;
    CData/*0:0*/ __PVT__LOCK;

    bool operator==(const Vtb_top_WB_t__struct__1& rhs) const {
        return __PVT__IR == rhs.__PVT__IR
            && __PVT__DI == rhs.__PVT__DI
            && __PVT__PC == rhs.__PVT__PC
            && __PVT__RESA == rhs.__PVT__RESA
            && __PVT__RESB == rhs.__PVT__RESB
            && __PVT__LOCK == rhs.__PVT__LOCK;
    }
    bool operator!=(const Vtb_top_WB_t__struct__1& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_WB_t__struct__1& rhs) const {
        if (__PVT__IR < rhs.__PVT__IR) return true;
        if (rhs.__PVT__IR < __PVT__IR) return false;
        if (__PVT__DI < rhs.__PVT__DI) return true;
        if (rhs.__PVT__DI < __PVT__DI) return false;
        if (__PVT__PC < rhs.__PVT__PC) return true;
        if (rhs.__PVT__PC < __PVT__PC) return false;
        if (__PVT__RESA < rhs.__PVT__RESA) return true;
        if (rhs.__PVT__RESA < __PVT__RESA) return false;
        if (__PVT__RESB < rhs.__PVT__RESB) return true;
        if (rhs.__PVT__RESB < __PVT__RESB) return false;
        if (__PVT__LOCK < rhs.__PVT__LOCK) return true;
        if (rhs.__PVT__LOCK < __PVT__LOCK) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_WB_t__struct__1> : public std::true_type {};





struct Vtb_top_PipelineState_t__struct__1 {
    Vtb_top_IFtoID_t__struct__1 __PVT__ID;
    Vtb_top_IDtoEX_t__struct__1 __PVT__EX;
    Vtb_top_EXtoMA_t__struct__1 __PVT__MA;
    Vtb_top_MAtoWB_t__struct__1 __PVT__WB;
    Vtb_top_WB_t__struct__1 __PVT__WB2;

    bool operator==(const Vtb_top_PipelineState_t__struct__1& rhs) const {
        return __PVT__ID == rhs.__PVT__ID
            && __PVT__EX == rhs.__PVT__EX
            && __PVT__MA == rhs.__PVT__MA
            && __PVT__WB == rhs.__PVT__WB
            && __PVT__WB2 == rhs.__PVT__WB2;
    }
    bool operator!=(const Vtb_top_PipelineState_t__struct__1& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_top_PipelineState_t__struct__1& rhs) const {
        if (__PVT__ID < rhs.__PVT__ID) return true;
        if (rhs.__PVT__ID < __PVT__ID) return false;
        if (__PVT__EX < rhs.__PVT__EX) return true;
        if (rhs.__PVT__EX < __PVT__EX) return false;
        if (__PVT__MA < rhs.__PVT__MA) return true;
        if (rhs.__PVT__MA < __PVT__MA) return false;
        if (__PVT__WB < rhs.__PVT__WB) return true;
        if (rhs.__PVT__WB < __PVT__WB) return false;
        if (__PVT__WB2 < rhs.__PVT__WB2) return true;
        if (rhs.__PVT__WB2 < __PVT__WB2) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vtb_top_PipelineState_t__struct__1> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_SH2_PKG final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_SH2_PKG();
    ~Vtb_top_SH2_PKG();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top_SH2_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
