// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top__pch.h"

Vtb_top__Syms::Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1083);
    // Setup sub module instances
    TOP__REF_SCSP_PKG.ctor(this, "REF_SCSP_PKG");
    TOP__SCSP_PKG.ctor(this, "SCSP_PKG");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__REF_SCSP_PKG = &TOP__REF_SCSP_PKG;
    TOP.__PVT__SCSP_PKG = &TOP__SCSP_PKG;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__REF_SCSP_PKG.__Vconfigure(true);
    TOP__SCSP_PKG.__Vconfigure(true);
}

Vtb_top__Syms::~Vtb_top__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__SCSP_PKG.dtor();
    TOP__REF_SCSP_PKG.dtor();
}
