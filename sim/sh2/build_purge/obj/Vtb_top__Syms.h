// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TOP__SYMS_H_
#define VERILATED_VTB_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_top___024root.h"
#include "Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1.h"
#include "Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1.h"
#include "Vtb_top_REF_SH2_PKG.h"
#include "Vtb_top_SH2_PKG.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_top___024root              TOP;
    Vtb_top_REF_SH2_PKG            TOP__REF_SH2_PKG;
    Vtb_top_SH2_PKG                TOP__SH2_PKG;
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1 TOP__tb_top__DOT__dut__DOT__MSH;
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1 TOP__tb_top__DOT__dut__DOT__SSH;
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1 TOP__tb_top__DOT__ref0__DOT__MSH;
    Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1 TOP__tb_top__DOT__ref0__DOT__SSH;

    // CONSTRUCTORS
    Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp);
    ~Vtb_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
