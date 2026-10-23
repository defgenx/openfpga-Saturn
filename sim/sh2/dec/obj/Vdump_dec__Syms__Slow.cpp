// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdump_dec__pch.h"

Vdump_dec__Syms::Vdump_dec__Syms(VerilatedContext* contextp, const char* namep, Vdump_dec* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(107);
    // Setup sub module instances
    TOP__SH2_PKG.ctor(this, "SH2_PKG");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__SH2_PKG = &TOP__SH2_PKG;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__SH2_PKG.__Vconfigure(true);
}

Vdump_dec__Syms::~Vdump_dec__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__SH2_PKG.dtor();
}
