# Synchronous FIFO with Functional Verification

A fully verified 8-bit deep Synchronous FIFO (First In First Out) buffer designed in Verilog, with a self-checking testbench featuring directed and random verification.

---

## Description

A Synchronous FIFO is a memory buffer where data is written and read using the same clock. It follows the First In First Out principle — the first data written is the first data read out.

FIFOs are used whenever two components run at different speeds or different clock frequencies — the FIFO sits between them as a buffer, smoothing out the speed difference.

Each clock pulse advances the write or read pointer by one slot. The FIFO has two key flags — Full and Empty — that prevent overflow and underflow.
0
---

## FIFO States

| State | Condition | Behavior |
|-------|-----------|----------|
| EMPTY | count = 0, WR = RD | Reading not allowed |
| OK | 0 < count < 8 | Both read and write allowed |
| FULL | count = 8 | Writing not allowed |

---

## Port Description

| Port | Direction | Width | Description |
|------|-----------|-------|-------------|
| `clk` | input | 1-bit | Clock |
| `rst` | input | 1-bit | Reset (active high) |
| `wr_en` | input | 1-bit | Write enable |
| `rd_en` | input | 1-bit | Read enable |
| `din` | input | 8-bit | Data input |
| `dout` | output | 8-bit | Data output |
| `full` | output | 1-bit | Full flag |
| `empty` | output | 1-bit | Empty flag |

---

## Project Structure

```
synchronous-fifo-verification/
├── rtl/
│   └── fifo.sv              # FIFO RTL design
├── tb/
│   └── fifo_tb.sv           # Verilog testbench
├── sim/
│   └── waveform.vcd        # GTKWave dump
├── synth/
│   └── synth.ys            # Yosys synthesis script
├── docs/
│   └── waveforms/          # GTKWave screenshots
└── README.md
```

---

## Tools Used

| Tool | Purpose |
|------|---------|
| SystemVerilog | RTL Design & Testbench |
| Verilator | Simulation |
| GTKWave | Waveform Viewer |
| Yosys | Logic Synthesis |

---

## Results

| Metric | Result |
|--------|--------|
| Directed tests | ⏳ In progress |
| Random tests | ⏳ In progress |
| Synthesis | ⏳ In progress |

---

## Academic Context

**Course:** BE.EE (VLSI Design and Technology)
**Institution:** Anna University Regional Campus Coimbatore
**Tools:** Open-source EDA (Yosys, Verilator, GTKWave)

---

## License

MIT License — feel free to fork and build on this!
