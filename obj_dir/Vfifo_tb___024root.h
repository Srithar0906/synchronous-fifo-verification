// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fifo_tb__DOT__clk;
    CData/*0:0*/ fifo_tb__DOT__rst;
    CData/*0:0*/ fifo_tb__DOT__wr_en;
    CData/*0:0*/ fifo_tb__DOT__rd_en;
    CData/*7:0*/ fifo_tb__DOT__din;
    CData/*7:0*/ fifo_tb__DOT__dout;
    CData/*0:0*/ fifo_tb__DOT__full;
    CData/*0:0*/ fifo_tb__DOT__empty;
    CData/*7:0*/ fifo_tb__DOT__rand_data;
    CData/*2:0*/ fifo_tb__DOT__uut__DOT__wr_ptr;
    CData/*2:0*/ fifo_tb__DOT__uut__DOT__rd_ptr;
    CData/*3:0*/ fifo_tb__DOT__uut__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ fifo_tb__DOT__pass_count;
    IData/*31:0*/ fifo_tb__DOT__fail_count;
    IData/*31:0*/ fifo_tb__DOT__rand_pass;
    IData/*31:0*/ fifo_tb__DOT__rand_fail;
    IData/*31:0*/ fifo_tb__DOT__sw_head;
    IData/*31:0*/ fifo_tb__DOT__sw_tail;
    IData/*31:0*/ fifo_tb__DOT__sw_count;
    IData/*31:0*/ fifo_tb__DOT__num_ops;
    IData/*31:0*/ fifo_tb__DOT__i;
    IData/*31:0*/ fifo_tb__DOT__op;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> fifo_tb__DOT__sw_queue;
    VlUnpacked<CData/*7:0*/, 8> fifo_tb__DOT__uut__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3478f92c__0;
    VlTriggerScheduler __VtrigSched_h3478f8eb__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfifo_tb___024root(Vfifo_tb__Syms* symsp, const char* v__name);
    ~Vfifo_tb___024root();
    VL_UNCOPYABLE(Vfifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
