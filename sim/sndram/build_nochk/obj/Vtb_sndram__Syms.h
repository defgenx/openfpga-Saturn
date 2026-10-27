// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SNDRAM__SYMS_H_
#define VERILATED_VTB_SNDRAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sndram.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sndram___024root.h"
#include "Vtb_sndram_SCUP2_PKG.h"
#include "Vtb_sndram_SCSPP_PKG.h"
#include "Vtb_sndram_SH2P_PKG.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_sndram__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sndram* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_sndram___024root           TOP;
    Vtb_sndram_SCSPP_PKG           TOP__SCSPP_PKG;
    Vtb_sndram_SCUP2_PKG           TOP__SCUP2_PKG;
    Vtb_sndram_SH2P_PKG            TOP__SH2P_PKG;

    // CONSTRUCTORS
    Vtb_sndram__Syms(VerilatedContext* contextp, const char* namep, Vtb_sndram* modelp);
    ~Vtb_sndram__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
