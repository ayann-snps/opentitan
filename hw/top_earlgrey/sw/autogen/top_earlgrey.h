// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_HW_TOP_EARLGREY_SW_AUTOGEN_TOP_EARLGREY_H_
#define OPENTITAN_HW_TOP_EARLGREY_SW_AUTOGEN_TOP_EARLGREY_H_

#define PINMUX_PERIPH_INSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO 32
#define NUM_DIO 15

#define PINMUX_GPIO_GPIO_0_IN 0
#define PINMUX_GPIO_GPIO_1_IN 1
#define PINMUX_GPIO_GPIO_2_IN 2
#define PINMUX_GPIO_GPIO_3_IN 3
#define PINMUX_GPIO_GPIO_4_IN 4
#define PINMUX_GPIO_GPIO_5_IN 5
#define PINMUX_GPIO_GPIO_6_IN 6
#define PINMUX_GPIO_GPIO_7_IN 7
#define PINMUX_GPIO_GPIO_8_IN 8
#define PINMUX_GPIO_GPIO_9_IN 9
#define PINMUX_GPIO_GPIO_10_IN 10
#define PINMUX_GPIO_GPIO_11_IN 11
#define PINMUX_GPIO_GPIO_12_IN 12
#define PINMUX_GPIO_GPIO_13_IN 13
#define PINMUX_GPIO_GPIO_14_IN 14
#define PINMUX_GPIO_GPIO_15_IN 15
#define PINMUX_GPIO_GPIO_16_IN 16
#define PINMUX_GPIO_GPIO_17_IN 17
#define PINMUX_GPIO_GPIO_18_IN 18
#define PINMUX_GPIO_GPIO_19_IN 19
#define PINMUX_GPIO_GPIO_20_IN 20
#define PINMUX_GPIO_GPIO_21_IN 21
#define PINMUX_GPIO_GPIO_22_IN 22
#define PINMUX_GPIO_GPIO_23_IN 23
#define PINMUX_GPIO_GPIO_24_IN 24
#define PINMUX_GPIO_GPIO_25_IN 25
#define PINMUX_GPIO_GPIO_26_IN 26
#define PINMUX_GPIO_GPIO_27_IN 27
#define PINMUX_GPIO_GPIO_28_IN 28
#define PINMUX_GPIO_GPIO_29_IN 29
#define PINMUX_GPIO_GPIO_30_IN 30
#define PINMUX_GPIO_GPIO_31_IN 31
#define PINMUX_I2C_SDA_IN 33
#define PINMUX_I2C_SCL_IN 34

#define PINMUX_PERIPH_OUTSEL_IDX_OFFSET 3

// PERIPH_OUTSEL ranges from 0 to NUM_MIO + 3 -1}
// 0, 1 and 2 are tied to value 0, 1 and high-impedance

#define PINMUX_VALUE_0_OUT 0
#define PINMUX_VALUE_1_OUT 1
#define PINMUX_VALUE_Z_OUT 2
#define PINMUX_GPIO_GPIO_0_OUT 3
#define PINMUX_GPIO_GPIO_1_OUT 4
#define PINMUX_GPIO_GPIO_2_OUT 5
#define PINMUX_GPIO_GPIO_3_OUT 6
#define PINMUX_GPIO_GPIO_4_OUT 7
#define PINMUX_GPIO_GPIO_5_OUT 8
#define PINMUX_GPIO_GPIO_6_OUT 9
#define PINMUX_GPIO_GPIO_7_OUT 10
#define PINMUX_GPIO_GPIO_8_OUT 11
#define PINMUX_GPIO_GPIO_9_OUT 12
#define PINMUX_GPIO_GPIO_10_OUT 13
#define PINMUX_GPIO_GPIO_11_OUT 14
#define PINMUX_GPIO_GPIO_12_OUT 15
#define PINMUX_GPIO_GPIO_13_OUT 16
#define PINMUX_GPIO_GPIO_14_OUT 17
#define PINMUX_GPIO_GPIO_15_OUT 18
#define PINMUX_GPIO_GPIO_16_OUT 19
#define PINMUX_GPIO_GPIO_17_OUT 20
#define PINMUX_GPIO_GPIO_18_OUT 21
#define PINMUX_GPIO_GPIO_19_OUT 22
#define PINMUX_GPIO_GPIO_20_OUT 23
#define PINMUX_GPIO_GPIO_21_OUT 24
#define PINMUX_GPIO_GPIO_22_OUT 25
#define PINMUX_GPIO_GPIO_23_OUT 26
#define PINMUX_GPIO_GPIO_24_OUT 27
#define PINMUX_GPIO_GPIO_25_OUT 28
#define PINMUX_GPIO_GPIO_26_OUT 29
#define PINMUX_GPIO_GPIO_27_OUT 30
#define PINMUX_GPIO_GPIO_28_OUT 31
#define PINMUX_GPIO_GPIO_29_OUT 32
#define PINMUX_GPIO_GPIO_30_OUT 33
#define PINMUX_GPIO_GPIO_31_OUT 34
#define PINMUX_I2C_SDA_OUT 36
#define PINMUX_I2C_SCL_OUT 37

/**
 * Base address for uart peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_UART_BASE_ADDR 0x40000000u

/**
 * Base address for gpio peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_GPIO_BASE_ADDR 0x40010000u

/**
 * Base address for spi_device peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SPI_DEVICE_BASE_ADDR 0x40020000u

/**
 * Base address for flash_ctrl peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_FLASH_CTRL_BASE_ADDR 0x40030000u

/**
 * Base address for rv_timer peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_TIMER_BASE_ADDR 0x40080000u

/**
 * Base address for i2c peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_I2C_BASE_ADDR 0x40050000u

/**
 * Base address for aes peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_AES_BASE_ADDR 0x40110000u

/**
 * Base address for hmac peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_HMAC_BASE_ADDR 0x40120000u

/**
 * Base address for rv_plic peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_PLIC_BASE_ADDR 0x40090000u

/**
 * Base address for pinmux_aon peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PINMUX_AON_BASE_ADDR 0x40070000u

/**
 * Base address for padctrl_aon peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PADCTRL_AON_BASE_ADDR 0x40160000u

/**
 * Base address for alert_handler peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_ALERT_HANDLER_BASE_ADDR 0x40130000u

/**
 * Base address for pwrmgr peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PWRMGR_BASE_ADDR 0x400A0000u

/**
 * Base address for rstmgr peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RSTMGR_BASE_ADDR 0x400B0000u

/**
 * Base address for clkmgr peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_CLKMGR_BASE_ADDR 0x400C0000u

/**
 * Base address for nmi_gen peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_NMI_GEN_BASE_ADDR 0x40140000u

/**
 * Base address for usbdev_aon peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_USBDEV_AON_BASE_ADDR 0x40150000u

/**
 * Base address for pattgen peripheral in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PATTGEN_BASE_ADDR 0x400E0000u


/**
 * PLIC Interrupt source peripheral enumeration.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * interrupt.
 */
typedef enum top_earlgrey_plic_peripheral {
  kTopEarlgreyPlicPeripheralUnknown = 0, /**< Unknown Peripheral */
  kTopEarlgreyPlicPeripheralGpio = 1, /**< gpio */
  kTopEarlgreyPlicPeripheralUart = 2, /**< uart */
  kTopEarlgreyPlicPeripheralSpiDevice = 3, /**< spi_device */
  kTopEarlgreyPlicPeripheralFlashCtrl = 4, /**< flash_ctrl */
  kTopEarlgreyPlicPeripheralHmac = 5, /**< hmac */
  kTopEarlgreyPlicPeripheralAlertHandler = 6, /**< alert_handler */
  kTopEarlgreyPlicPeripheralNmiGen = 7, /**< nmi_gen */
  kTopEarlgreyPlicPeripheralUsbdevAon = 8, /**< usbdev_aon */
  kTopEarlgreyPlicPeripheralPwrmgr = 9, /**< pwrmgr */
  kTopEarlgreyPlicPeripheralLast = 9, /**< \internal Final PLIC peripheral */
} top_earlgrey_plic_peripheral_t;

/**
 * PLIC Interrupt Ids Enumeration
 *
 * Enumeration of all PLIC interrupt source IDs. The IRQ IDs belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_earlgrey_plic_irq_id {
  kTopEarlgreyPlicIrqIdNone = 0, /**< No Interrupt */
  kTopEarlgreyPlicIrqIdGpioGpio0 = 1, /**< gpio_gpio 0 */
  kTopEarlgreyPlicIrqIdGpioGpio1 = 2, /**< gpio_gpio 1 */
  kTopEarlgreyPlicIrqIdGpioGpio2 = 3, /**< gpio_gpio 2 */
  kTopEarlgreyPlicIrqIdGpioGpio3 = 4, /**< gpio_gpio 3 */
  kTopEarlgreyPlicIrqIdGpioGpio4 = 5, /**< gpio_gpio 4 */
  kTopEarlgreyPlicIrqIdGpioGpio5 = 6, /**< gpio_gpio 5 */
  kTopEarlgreyPlicIrqIdGpioGpio6 = 7, /**< gpio_gpio 6 */
  kTopEarlgreyPlicIrqIdGpioGpio7 = 8, /**< gpio_gpio 7 */
  kTopEarlgreyPlicIrqIdGpioGpio8 = 9, /**< gpio_gpio 8 */
  kTopEarlgreyPlicIrqIdGpioGpio9 = 10, /**< gpio_gpio 9 */
  kTopEarlgreyPlicIrqIdGpioGpio10 = 11, /**< gpio_gpio 10 */
  kTopEarlgreyPlicIrqIdGpioGpio11 = 12, /**< gpio_gpio 11 */
  kTopEarlgreyPlicIrqIdGpioGpio12 = 13, /**< gpio_gpio 12 */
  kTopEarlgreyPlicIrqIdGpioGpio13 = 14, /**< gpio_gpio 13 */
  kTopEarlgreyPlicIrqIdGpioGpio14 = 15, /**< gpio_gpio 14 */
  kTopEarlgreyPlicIrqIdGpioGpio15 = 16, /**< gpio_gpio 15 */
  kTopEarlgreyPlicIrqIdGpioGpio16 = 17, /**< gpio_gpio 16 */
  kTopEarlgreyPlicIrqIdGpioGpio17 = 18, /**< gpio_gpio 17 */
  kTopEarlgreyPlicIrqIdGpioGpio18 = 19, /**< gpio_gpio 18 */
  kTopEarlgreyPlicIrqIdGpioGpio19 = 20, /**< gpio_gpio 19 */
  kTopEarlgreyPlicIrqIdGpioGpio20 = 21, /**< gpio_gpio 20 */
  kTopEarlgreyPlicIrqIdGpioGpio21 = 22, /**< gpio_gpio 21 */
  kTopEarlgreyPlicIrqIdGpioGpio22 = 23, /**< gpio_gpio 22 */
  kTopEarlgreyPlicIrqIdGpioGpio23 = 24, /**< gpio_gpio 23 */
  kTopEarlgreyPlicIrqIdGpioGpio24 = 25, /**< gpio_gpio 24 */
  kTopEarlgreyPlicIrqIdGpioGpio25 = 26, /**< gpio_gpio 25 */
  kTopEarlgreyPlicIrqIdGpioGpio26 = 27, /**< gpio_gpio 26 */
  kTopEarlgreyPlicIrqIdGpioGpio27 = 28, /**< gpio_gpio 27 */
  kTopEarlgreyPlicIrqIdGpioGpio28 = 29, /**< gpio_gpio 28 */
  kTopEarlgreyPlicIrqIdGpioGpio29 = 30, /**< gpio_gpio 29 */
  kTopEarlgreyPlicIrqIdGpioGpio30 = 31, /**< gpio_gpio 30 */
  kTopEarlgreyPlicIrqIdGpioGpio31 = 32, /**< gpio_gpio 31 */
  kTopEarlgreyPlicIrqIdUartTxWatermark = 33, /**< uart_tx_watermark */
  kTopEarlgreyPlicIrqIdUartRxWatermark = 34, /**< uart_rx_watermark */
  kTopEarlgreyPlicIrqIdUartTxEmpty = 35, /**< uart_tx_empty */
  kTopEarlgreyPlicIrqIdUartRxOverflow = 36, /**< uart_rx_overflow */
  kTopEarlgreyPlicIrqIdUartRxFrameErr = 37, /**< uart_rx_frame_err */
  kTopEarlgreyPlicIrqIdUartRxBreakErr = 38, /**< uart_rx_break_err */
  kTopEarlgreyPlicIrqIdUartRxTimeout = 39, /**< uart_rx_timeout */
  kTopEarlgreyPlicIrqIdUartRxParityErr = 40, /**< uart_rx_parity_err */
  kTopEarlgreyPlicIrqIdSpiDeviceRxf = 41, /**< spi_device_rxf */
  kTopEarlgreyPlicIrqIdSpiDeviceRxlvl = 42, /**< spi_device_rxlvl */
  kTopEarlgreyPlicIrqIdSpiDeviceTxlvl = 43, /**< spi_device_txlvl */
  kTopEarlgreyPlicIrqIdSpiDeviceRxerr = 44, /**< spi_device_rxerr */
  kTopEarlgreyPlicIrqIdSpiDeviceRxoverflow = 45, /**< spi_device_rxoverflow */
  kTopEarlgreyPlicIrqIdSpiDeviceTxunderflow = 46, /**< spi_device_txunderflow */
  kTopEarlgreyPlicIrqIdFlashCtrlProgEmpty = 47, /**< flash_ctrl_prog_empty */
  kTopEarlgreyPlicIrqIdFlashCtrlProgLvl = 48, /**< flash_ctrl_prog_lvl */
  kTopEarlgreyPlicIrqIdFlashCtrlRdFull = 49, /**< flash_ctrl_rd_full */
  kTopEarlgreyPlicIrqIdFlashCtrlRdLvl = 50, /**< flash_ctrl_rd_lvl */
  kTopEarlgreyPlicIrqIdFlashCtrlOpDone = 51, /**< flash_ctrl_op_done */
  kTopEarlgreyPlicIrqIdFlashCtrlOpError = 52, /**< flash_ctrl_op_error */
  kTopEarlgreyPlicIrqIdHmacHmacDone = 53, /**< hmac_hmac_done */
  kTopEarlgreyPlicIrqIdHmacFifoEmpty = 54, /**< hmac_fifo_empty */
  kTopEarlgreyPlicIrqIdHmacHmacErr = 55, /**< hmac_hmac_err */
  kTopEarlgreyPlicIrqIdAlertHandlerClassa = 56, /**< alert_handler_classa */
  kTopEarlgreyPlicIrqIdAlertHandlerClassb = 57, /**< alert_handler_classb */
  kTopEarlgreyPlicIrqIdAlertHandlerClassc = 58, /**< alert_handler_classc */
  kTopEarlgreyPlicIrqIdAlertHandlerClassd = 59, /**< alert_handler_classd */
  kTopEarlgreyPlicIrqIdNmiGenEsc0 = 60, /**< nmi_gen_esc0 */
  kTopEarlgreyPlicIrqIdNmiGenEsc1 = 61, /**< nmi_gen_esc1 */
  kTopEarlgreyPlicIrqIdNmiGenEsc2 = 62, /**< nmi_gen_esc2 */
  kTopEarlgreyPlicIrqIdNmiGenEsc3 = 63, /**< nmi_gen_esc3 */
  kTopEarlgreyPlicIrqIdUsbdevAonPktReceived = 64, /**< usbdev_aon_pkt_received */
  kTopEarlgreyPlicIrqIdUsbdevAonPktSent = 65, /**< usbdev_aon_pkt_sent */
  kTopEarlgreyPlicIrqIdUsbdevAonDisconnected = 66, /**< usbdev_aon_disconnected */
  kTopEarlgreyPlicIrqIdUsbdevAonHostLost = 67, /**< usbdev_aon_host_lost */
  kTopEarlgreyPlicIrqIdUsbdevAonLinkReset = 68, /**< usbdev_aon_link_reset */
  kTopEarlgreyPlicIrqIdUsbdevAonLinkSuspend = 69, /**< usbdev_aon_link_suspend */
  kTopEarlgreyPlicIrqIdUsbdevAonLinkResume = 70, /**< usbdev_aon_link_resume */
  kTopEarlgreyPlicIrqIdUsbdevAonAvEmpty = 71, /**< usbdev_aon_av_empty */
  kTopEarlgreyPlicIrqIdUsbdevAonRxFull = 72, /**< usbdev_aon_rx_full */
  kTopEarlgreyPlicIrqIdUsbdevAonAvOverflow = 73, /**< usbdev_aon_av_overflow */
  kTopEarlgreyPlicIrqIdUsbdevAonLinkInErr = 74, /**< usbdev_aon_link_in_err */
  kTopEarlgreyPlicIrqIdUsbdevAonRxCrcErr = 75, /**< usbdev_aon_rx_crc_err */
  kTopEarlgreyPlicIrqIdUsbdevAonRxPidErr = 76, /**< usbdev_aon_rx_pid_err */
  kTopEarlgreyPlicIrqIdUsbdevAonRxBitstuffErr = 77, /**< usbdev_aon_rx_bitstuff_err */
  kTopEarlgreyPlicIrqIdUsbdevAonFrame = 78, /**< usbdev_aon_frame */
  kTopEarlgreyPlicIrqIdUsbdevAonConnected = 79, /**< usbdev_aon_connected */
  kTopEarlgreyPlicIrqIdPwrmgrWakeup = 80, /**< pwrmgr_wakeup */
  kTopEarlgreyPlicIrqIdLast = 80, /**< \internal The Last Valid Interrupt ID. */
} top_earlgrey_plic_irq_id_t;

/**
 * PLIC Interrupt Id to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_plic_irq_id_t` to
 * `top_earlgrey_plic_peripheral_t`.
 */
extern const top_earlgrey_plic_peripheral_t
    top_earlgrey_plic_interrupt_for_peripheral[81];

/**
 * PLIC external interrupt target.
 *
 * Enumeration used to determine which set of IE, CC, threshold registers to
 * access dependent on the target.
 */
typedef enum top_earlgrey_plic_target {
  kTopEarlgreyPlicTargetIbex0 = 0, /**< Ibex Core 0 */
  kTopEarlgreyPlicTargetLast = 0, /**< \internal Final PLIC target */
} top_earlgrey_plic_target_t;

#endif  // OPENTITAN_HW_TOP_EARLGREY_SW_AUTOGEN_TOP_EARLGREY_H_
