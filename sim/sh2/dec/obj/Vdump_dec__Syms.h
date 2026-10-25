// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUMP_DEC__SYMS_H_
#define VERILATED_VDUMP_DEC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdump_dec.h"

// INCLUDE MODULE CLASSES
#include "Vdump_dec___024root.h"
#include "Vdump_dec_SH2_PKG.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdump_dec__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdump_dec* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vdump_dec___024root            TOP;
    Vdump_dec_SH2_PKG              TOP__SH2_PKG;

    // CONSTRUCTORS
    Vdump_dec__Syms(VerilatedContext* contextp, const char* namep, Vdump_dec* modelp);
    ~Vdump_dec__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
