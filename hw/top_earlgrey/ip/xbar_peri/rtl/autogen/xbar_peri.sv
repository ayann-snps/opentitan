// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// xbar_peri module generated by `tlgen.py` tool
// all reset signals should be generated from one reset signal to not make any deadlock
//
// Interconnect
// main
//   -> s1n_7
//     -> uart
//     -> gpio
//     -> spi_device
//     -> rv_timer
//     -> i2c
//     -> pattgen

module xbar_peri (
  input clk_peri_i,
  input rst_peri_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t tl_main_i,
  output tlul_pkg::tl_d2h_t tl_main_o,

  // Device interfaces
  output tlul_pkg::tl_h2d_t tl_uart_o,
  input  tlul_pkg::tl_d2h_t tl_uart_i,
  output tlul_pkg::tl_h2d_t tl_gpio_o,
  input  tlul_pkg::tl_d2h_t tl_gpio_i,
  output tlul_pkg::tl_h2d_t tl_spi_device_o,
  input  tlul_pkg::tl_d2h_t tl_spi_device_i,
  output tlul_pkg::tl_h2d_t tl_rv_timer_o,
  input  tlul_pkg::tl_d2h_t tl_rv_timer_i,
  output tlul_pkg::tl_h2d_t tl_i2c_o,
  input  tlul_pkg::tl_d2h_t tl_i2c_i,
  output tlul_pkg::tl_h2d_t tl_pattgen_o,
  input  tlul_pkg::tl_d2h_t tl_pattgen_i,

  input scanmode_i
);

  import tlul_pkg::*;
  import tl_peri_pkg::*;

  // scanmode_i is currently not used, but provisioned for future use
  // this assignment prevents lint warnings
  logic unused_scanmode;
  assign unused_scanmode = scanmode_i;

  tl_h2d_t tl_s1n_7_us_h2d ;
  tl_d2h_t tl_s1n_7_us_d2h ;


  tl_h2d_t tl_s1n_7_ds_h2d [6];
  tl_d2h_t tl_s1n_7_ds_d2h [6];

  // Create steering signal
  logic [2:0] dev_sel_s1n_7;



  assign tl_uart_o = tl_s1n_7_ds_h2d[0];
  assign tl_s1n_7_ds_d2h[0] = tl_uart_i;

  assign tl_gpio_o = tl_s1n_7_ds_h2d[1];
  assign tl_s1n_7_ds_d2h[1] = tl_gpio_i;

  assign tl_spi_device_o = tl_s1n_7_ds_h2d[2];
  assign tl_s1n_7_ds_d2h[2] = tl_spi_device_i;

  assign tl_rv_timer_o = tl_s1n_7_ds_h2d[3];
  assign tl_s1n_7_ds_d2h[3] = tl_rv_timer_i;

  assign tl_i2c_o = tl_s1n_7_ds_h2d[4];
  assign tl_s1n_7_ds_d2h[4] = tl_i2c_i;

  assign tl_pattgen_o = tl_s1n_7_ds_h2d[5];
  assign tl_s1n_7_ds_d2h[5] = tl_pattgen_i;

  assign tl_s1n_7_us_h2d = tl_main_i;
  assign tl_main_o = tl_s1n_7_us_d2h;

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_7 = 3'd6;
    if ((tl_s1n_7_us_h2d.a_address & ~(ADDR_MASK_UART)) == ADDR_SPACE_UART) begin
      dev_sel_s1n_7 = 3'd0;

    end else if ((tl_s1n_7_us_h2d.a_address & ~(ADDR_MASK_GPIO)) == ADDR_SPACE_GPIO) begin
      dev_sel_s1n_7 = 3'd1;

    end else if ((tl_s1n_7_us_h2d.a_address & ~(ADDR_MASK_SPI_DEVICE)) == ADDR_SPACE_SPI_DEVICE) begin
      dev_sel_s1n_7 = 3'd2;

    end else if ((tl_s1n_7_us_h2d.a_address & ~(ADDR_MASK_RV_TIMER)) == ADDR_SPACE_RV_TIMER) begin
      dev_sel_s1n_7 = 3'd3;

    end else if ((tl_s1n_7_us_h2d.a_address & ~(ADDR_MASK_I2C)) == ADDR_SPACE_I2C) begin
      dev_sel_s1n_7 = 3'd4;

    end else if ((tl_s1n_7_us_h2d.a_address & ~(ADDR_MASK_PATTGEN)) == ADDR_SPACE_PATTGEN) begin
      dev_sel_s1n_7 = 3'd5;
end
  end


  // Instantiation phase
  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth ({6{4'h0}}),
    .DRspDepth ({6{4'h0}}),
    .N         (6)
  ) u_s1n_7 (
    .clk_i        (clk_peri_i),
    .rst_ni       (rst_peri_ni),
    .tl_h_i       (tl_s1n_7_us_h2d),
    .tl_h_o       (tl_s1n_7_us_d2h),
    .tl_d_o       (tl_s1n_7_ds_h2d),
    .tl_d_i       (tl_s1n_7_ds_d2h),
    .dev_select   (dev_sel_s1n_7)
  );

endmodule
