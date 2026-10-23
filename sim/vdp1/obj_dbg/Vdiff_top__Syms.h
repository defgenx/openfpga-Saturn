// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDIFF_TOP__SYMS_H_
#define VERILATED_VDIFF_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdiff_top.h"

// INCLUDE MODULE CLASSES
#include "Vdiff_top___024root.h"
#include "Vdiff_top_REF_VDP1_PKG.h"
#include "Vdiff_top_VDP1P_PKG.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdiff_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdiff_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vdiff_top___024root            TOP;
    Vdiff_top_REF_VDP1_PKG         TOP__REF_VDP1_PKG;
    Vdiff_top_VDP1P_PKG            TOP__VDP1P_PKG;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_REF_VDP1_PKG;
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_VDP1P_PKG;
    VerilatedScope* __Vscopep_diff_top;
    VerilatedScope* __Vscopep_diff_top__u_n;
    VerilatedScope* __Vscopep_diff_top__u_n__CLT;
    VerilatedScope* __Vscopep_diff_top__u_n__CLT__altdpram0;
    VerilatedScope* __Vscopep_diff_top__u_n__EDGE;
    VerilatedScope* __Vscopep_diff_top__u_n__EDGE__ACCS;
    VerilatedScope* __Vscopep_diff_top__u_n__EDGE__ACCS__altdpram_component;
    VerilatedScope* __Vscopep_diff_top__u_n__GRD_DIV_B;
    VerilatedScope* __Vscopep_diff_top__u_n__GRD_DIV_G;
    VerilatedScope* __Vscopep_diff_top__u_n__GRD_DIV_R;
    VerilatedScope* __Vscopep_diff_top__u_n__GSTEP;
    VerilatedScope* __Vscopep_diff_top__u_n__GSTEP__altdpram_component;
    VerilatedScope* __Vscopep_diff_top__u_n__PAT_FIFO;
    VerilatedScope* __Vscopep_diff_top__u_n__PAT_FIFO__altdpram_component;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk1;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk2;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk3;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk4;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk5;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk6;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk7;
    VerilatedScope* __Vscopep_diff_top__u_n__unnamedblk8;
    VerilatedScope* __Vscopep_diff_top__u_r;
    VerilatedScope* __Vscopep_diff_top__u_r__CLT;
    VerilatedScope* __Vscopep_diff_top__u_r__CLT__altdpram0;
    VerilatedScope* __Vscopep_diff_top__u_r__GRD_DIV_B;
    VerilatedScope* __Vscopep_diff_top__u_r__GRD_DIV_B__unnamedblk1;
    VerilatedScope* __Vscopep_diff_top__u_r__GRD_DIV_G;
    VerilatedScope* __Vscopep_diff_top__u_r__GRD_DIV_G__unnamedblk1;
    VerilatedScope* __Vscopep_diff_top__u_r__GRD_DIV_R;
    VerilatedScope* __Vscopep_diff_top__u_r__GRD_DIV_R__unnamedblk1;
    VerilatedScope* __Vscopep_diff_top__u_r__PAT_FIFO;
    VerilatedScope* __Vscopep_diff_top__u_r__PAT_FIFO__altdpram_component;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk1;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk2;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk3;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk4;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk5;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk6;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk7;
    VerilatedScope* __Vscopep_diff_top__u_r__unnamedblk8;

    // CONSTRUCTORS
    Vdiff_top__Syms(VerilatedContext* contextp, const char* namep, Vdiff_top* modelp);
    ~Vdiff_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
