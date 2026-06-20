// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo_tb__Syms.h"


VL_ATTR_COLD void Vfifo_tb___024root__trace_init_sub__TOP__0(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("fifo_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"rand_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"rand_fail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"sw_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"sw_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+11,0,"sw_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+12,0,"num_ops",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("sw_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+15+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+23,0,"rand_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+35,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_init_top(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfifo_tb___024root__trace_register(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfifo_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfifo_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfifo_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_const_0\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_full_0\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfifo_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_full_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.fifo_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.fifo_tb__DOT__wr_en));
    bufp->fullBit(oldp+3,(vlSelfRef.fifo_tb__DOT__rd_en));
    bufp->fullCData(oldp+4,(vlSelfRef.fifo_tb__DOT__din),8);
    bufp->fullIData(oldp+5,(vlSelfRef.fifo_tb__DOT__pass_count),32);
    bufp->fullIData(oldp+6,(vlSelfRef.fifo_tb__DOT__fail_count),32);
    bufp->fullIData(oldp+7,(vlSelfRef.fifo_tb__DOT__rand_pass),32);
    bufp->fullIData(oldp+8,(vlSelfRef.fifo_tb__DOT__rand_fail),32);
    bufp->fullIData(oldp+9,(vlSelfRef.fifo_tb__DOT__sw_head),32);
    bufp->fullIData(oldp+10,(vlSelfRef.fifo_tb__DOT__sw_tail),32);
    bufp->fullIData(oldp+11,(vlSelfRef.fifo_tb__DOT__sw_count),32);
    bufp->fullIData(oldp+12,(vlSelfRef.fifo_tb__DOT__num_ops),32);
    bufp->fullIData(oldp+13,(vlSelfRef.fifo_tb__DOT__i),32);
    bufp->fullIData(oldp+14,(vlSelfRef.fifo_tb__DOT__op),32);
    bufp->fullCData(oldp+15,(vlSelfRef.fifo_tb__DOT__sw_queue[0]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.fifo_tb__DOT__sw_queue[1]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.fifo_tb__DOT__sw_queue[2]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.fifo_tb__DOT__sw_queue[3]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.fifo_tb__DOT__sw_queue[4]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.fifo_tb__DOT__sw_queue[5]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.fifo_tb__DOT__sw_queue[6]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.fifo_tb__DOT__sw_queue[7]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.fifo_tb__DOT__rand_data),8);
    bufp->fullCData(oldp+24,(vlSelfRef.fifo_tb__DOT__dout),8);
    bufp->fullBit(oldp+25,((8U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count))));
    bufp->fullBit(oldp+26,((0U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count))));
    bufp->fullCData(oldp+27,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[0]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[1]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[2]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[3]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[4]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[5]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[6]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[7]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr),3);
    bufp->fullCData(oldp+36,(vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr),3);
    bufp->fullCData(oldp+37,(vlSelfRef.fifo_tb__DOT__uut__DOT__count),4);
    bufp->fullBit(oldp+38,(vlSelfRef.fifo_tb__DOT__clk));
}
