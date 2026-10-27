// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sndram.h for the primary calling header

#include "Vtb_sndram__pch.h"

// Parameter definitions for Vtb_sndram_SCUP2_PKG
constexpr VlUnpacked<IData/*19:0*/, 3> Vtb_sndram_SCUP2_PKG::DMA_TN_MASK;



Vtb_sndram_SCUP2_PKG::Vtb_sndram_SCUP2_PKG() = default;
Vtb_sndram_SCUP2_PKG::~Vtb_sndram_SCUP2_PKG() = default;

void Vtb_sndram_SCUP2_PKG::ctor(Vtb_sndram__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_sndram_SCUP2_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_sndram_SCUP2_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
