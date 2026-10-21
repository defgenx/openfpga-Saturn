// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiff_top.h for the primary calling header

#include "Vdiff_top__pch.h"

// Parameter definitions for Vdiff_top_VDP1_PKG
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_NSPR;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_SSPR;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_DSPR;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_POLY;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_PLIN;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_LINE;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_UCLIP;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_SCLIP;
constexpr CData/*3:0*/ Vdiff_top_VDP1_PKG::CMD_LCORD;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::TVMR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::FBCR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::PTMR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::EWDR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::EWLR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::EWRR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::ENDR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::EDSR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::LOPR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::COPR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::MODR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDCTRL_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDLINK_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDPMOD_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDCOLR_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDSRCA_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDSIZE_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDCRD_MASK;
constexpr SData/*15:0*/ Vdiff_top_VDP1_PKG::CMDGRDA_MASK;
constexpr IData/*23:0*/ Vdiff_top_VDP1_PKG::COORD_NULL;
constexpr IData/*25:0*/ Vdiff_top_VDP1_PKG::VERT_NULL;
constexpr IData/*31:0*/ Vdiff_top_VDP1_PKG::SCNST_NULL;
constexpr IData/*31:0*/ Vdiff_top_VDP1_PKG::SCNINC_NULL;
constexpr IData/*31:0*/ Vdiff_top_VDP1_PKG::RC_NULL;
constexpr IData/*31:0*/ Vdiff_top_VDP1_PKG::RC_ONE;
constexpr IData/*17:0*/ Vdiff_top_VDP1_PKG::PATTERN_NULL;
constexpr QData/*43:0*/ Vdiff_top_VDP1_PKG::CLIP_NULL;



Vdiff_top_VDP1_PKG::Vdiff_top_VDP1_PKG() = default;
Vdiff_top_VDP1_PKG::~Vdiff_top_VDP1_PKG() = default;

void Vdiff_top_VDP1_PKG::ctor(Vdiff_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vdiff_top_VDP1_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdiff_top_VDP1_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
