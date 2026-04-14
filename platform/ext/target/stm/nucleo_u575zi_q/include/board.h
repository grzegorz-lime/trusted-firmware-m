/**
  ******************************************************************************
  * @file    board.h
  * @author  MCD Application Team
  * @brief   board header file for nucleo_u575zi_q.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
#ifndef __BOARD_H__
#define __BOARD_H__
/* config for usart - Nucleo U575ZI-Q VCP via ST-Link on USART1 PA9/PA10 */
#define COM_INSTANCE                           USART1
#define COM_CLK_ENABLE()                       __HAL_RCC_USART1_CLK_ENABLE()
#define COM_CLK_DISABLE()                      __HAL_RCC_USART1_CLK_DISABLE()
#define COM_TX_GPIO_PORT                       GPIOA
#define COM_TX_GPIO_CLK_ENABLE()               __HAL_RCC_GPIOA_CLK_ENABLE()
#define COM_TX_PIN                             GPIO_PIN_9
#define COM_TX_AF                              GPIO_AF7_USART1

#define COM_RX_GPIO_PORT                       GPIOA
#define COM_RX_GPIO_CLK_ENABLE()               __HAL_RCC_GPIOA_CLK_ENABLE()
#define COM_RX_PIN                             GPIO_PIN_10
#define COM_RX_AF                              GPIO_AF7_USART1

/* config for flash driver */
#define FLASH0_SECTOR_SIZE	0x2000
#define FLASH0_PAGE_SIZE 0x2000
#define FLASH0_PROG_UNIT 0x10
#define FLASH0_ERASED_VAL 0xff
#endif /* __BOARD_H__ */
