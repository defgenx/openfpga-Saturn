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
#include "Vtb_top_SCSP_PKG.h"
#include "Vtb_top_REF_SCSP_PKG.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_top___024root              TOP;
    Vtb_top_REF_SCSP_PKG           TOP__REF_SCSP_PKG;
    Vtb_top_SCSP_PKG               TOP__SCSP_PKG;

    // CONSTRUCTORS
    Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp);
    ~Vtb_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
