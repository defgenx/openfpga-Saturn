// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sndram.h for the primary calling header

#include "Vtb_sndram__pch.h"


Vtb_sndram_SCSPP_PKG::Vtb_sndram_SCSPP_PKG() = default;
Vtb_sndram_SCSPP_PKG::~Vtb_sndram_SCSPP_PKG() = default;

void Vtb_sndram_SCSPP_PKG::ctor(Vtb_sndram__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_sndram_SCSPP_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_sndram_SCSPP_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
