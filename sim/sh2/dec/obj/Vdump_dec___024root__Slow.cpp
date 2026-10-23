// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdump_dec.h for the primary calling header

#include "Vdump_dec__pch.h"

void Vdump_dec___024root___ctor_var_reset(Vdump_dec___024root* vlSelf);

Vdump_dec___024root::Vdump_dec___024root(Vdump_dec__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdump_dec___024root___ctor_var_reset(this);
}

void Vdump_dec___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdump_dec___024root::~Vdump_dec___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
