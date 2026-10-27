// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sndram__pch.h"

Vtb_sndram__Syms::Vtb_sndram__Syms(VerilatedContext* contextp, const char* namep, Vtb_sndram* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1795);
    // Setup sub module instances
    TOP__SCSPP_PKG.ctor(this, "SCSPP_PKG");
    TOP__SCUP2_PKG.ctor(this, "SCUP2_PKG");
    TOP__SH2P_PKG.ctor(this, "SH2P_PKG");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__SCSPP_PKG = &TOP__SCSPP_PKG;
    TOP.__PVT__SCUP2_PKG = &TOP__SCUP2_PKG;
    TOP.__PVT__SH2P_PKG = &TOP__SH2P_PKG;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__SCSPP_PKG.__Vconfigure(true);
    TOP__SCUP2_PKG.__Vconfigure(true);
    TOP__SH2P_PKG.__Vconfigure(true);
}

Vtb_sndram__Syms::~Vtb_sndram__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__SH2P_PKG.dtor();
    TOP__SCUP2_PKG.dtor();
    TOP__SCSPP_PKG.dtor();
}
