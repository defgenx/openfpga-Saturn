// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDIFF_TOP_H_
#define VERILATED_VDIFF_TOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vdiff_top__Syms;
class Vdiff_top___024root;
class Vdiff_top_REF_VDP1_PKG;
class Vdiff_top_VDP1P_PKG;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vdiff_top VL_NOT_FINAL : public VerilatedModel {
    friend class Vdiff_top__Syms;
  private:
    // Symbol table holding complete model state (owned by this class)
    Vdiff_top__Syms* const vlSymsp;
    // Evaluation loop
    VerilatedEvalLoop m_evalLoop;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&RST_N,0,0);
    VL_IN8(&CE_R,0,0);
    VL_IN8(&CE_F,0,0);
    VL_IN8(&EN,0,0);
    VL_IN8(&RES_N,0,0);
    VL_IN8(&FAST,0,0);
    VL_IN8(&BLUR_MESH,0,0);
    VL_IN8(&DBG_EXT,7,0);
    VL_IN8(&DCE_R,0,0);
    VL_IN8(&DCE_F,0,0);
    VL_IN8(&HTIM_N,0,0);
    VL_IN8(&VTIM_N,0,0);
    VL_IN8(&CS_N,0,0);
    VL_IN8(&AD_N,0,0);
    VL_IN8(&DTEN_N,0,0);
    VL_IN8(&REQ_N,0,0);
    VL_OUT8(&TAINT,0,0);
    VL_IN8(&VRAM_RDY_r,0,0);
    VL_IN8(&FB_RDY_r,0,0);
    VL_OUT8(&RDY_N_r,0,0);
    VL_OUT8(&IRQ_N_r,0,0);
    VL_OUT8(&VRAM_WE_r,1,0);
    VL_OUT8(&VRAM_RD_r,0,0);
    VL_OUT8(&FB0_WE_r,1,0);
    VL_OUT8(&FB0_RD_r,0,0);
    VL_OUT8(&FB1_WE_r,1,0);
    VL_OUT8(&FB1_RD_r,0,0);
    VL_OUT8(&FB_MODE3_r,0,0);
    VL_IN8(&VRAM_RDY_n,0,0);
    VL_IN8(&FB_RDY_n,0,0);
    VL_OUT8(&RDY_N_n,0,0);
    VL_OUT8(&IRQ_N_n,0,0);
    VL_OUT8(&VRAM_WE_n,1,0);
    VL_OUT8(&VRAM_RD_n,0,0);
    VL_OUT8(&FB0_WE_n,1,0);
    VL_OUT8(&FB0_RD_n,0,0);
    VL_OUT8(&FB1_WE_n,1,0);
    VL_OUT8(&FB1_RD_n,0,0);
    VL_OUT8(&FB_MODE3_n,0,0);
    VL_IN16(&VOUTI,15,0);
    VL_IN16(&DI,15,0);
    VL_IN16(&VRAM_Q_r,15,0);
    VL_IN16(&FB0_Q_r,15,0);
    VL_IN16(&FB1_Q_r,15,0);
    VL_OUT16(&DO_r,15,0);
    VL_OUT16(&VOUTO_r,15,0);
    VL_OUT16(&VRAM_D_r,15,0);
    VL_OUT16(&VRAM_BLEN_r,8,0);
    VL_OUT16(&FB0_D_r,15,0);
    VL_OUT16(&FB1_D_r,15,0);
    VL_IN16(&VRAM_Q_n,15,0);
    VL_IN16(&FB0_Q_n,15,0);
    VL_IN16(&FB1_Q_n,15,0);
    VL_OUT16(&DO_n,15,0);
    VL_OUT16(&VOUTO_n,15,0);
    VL_OUT16(&VRAM_D_n,15,0);
    VL_OUT16(&VRAM_BLEN_n,8,0);
    VL_OUT16(&FB0_D_n,15,0);
    VL_OUT16(&FB1_D_n,15,0);
    VL_OUT(&VRAM_A_r,18,1);
    VL_OUT(&FB0_A_r,17,1);
    VL_OUT(&FB1_A_r,17,1);
    VL_OUT(&VRAM_A_n,18,1);
    VL_OUT(&FB0_A_n,17,1);
    VL_OUT(&FB1_A_n,17,1);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vdiff_top_REF_VDP1_PKG* const __PVT__REF_VDP1_PKG;
    Vdiff_top_VDP1P_PKG* const __PVT__VDP1P_PKG;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vdiff_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vdiff_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vdiff_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vdiff_top();
  private:
    VL_UNCOPYABLE(Vdiff_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:

    // Internal functions - the model's evaluation entry points
    void evalBegin() override final;
    void evalEnd() override final;
    void evalStatic() override final;
    void evalInitial() override final;
    bool evalStl(bool firstIteration) override final;
    void evalSample() override final;
    bool evalIco(bool firstIteration) override final;
    bool evalAct() override final;
    bool evalInact() override final;
    bool evalNba() override final;
    bool evalObs() override final;
    bool evalReact() override final;
    void evalPostponed() override final;
    void evalFinal() override final;
    void dumpTriggersStl() override final;
    void dumpTriggersIco() override final;
    void dumpTriggersAct() override final;
    void dumpTriggersNba() override final;
    void dumpTriggersObs() override final;
    void dumpTriggersReact() override final;

    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
