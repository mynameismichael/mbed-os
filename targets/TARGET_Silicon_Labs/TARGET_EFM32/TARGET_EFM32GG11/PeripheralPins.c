/***************************************************************************//**
 * @file PeripheralPins.c
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2015 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#include "PeripheralPins.h"

/************ADC***************/
/* The third "function" value is used to select the correct ADC channel */
#if DEVICE_ANALOGIN
const PinMap MBED_WEAK PinMap_ADC[] = {
#if ADC0_BASE
    {PA0,  ADC_0, adcPosSelAPORT3XCH8},
    {PA1,  ADC_0, adcPosSelAPORT4XCH9},
    {PA2,  ADC_0, adcPosSelAPORT3XCH10},
    {PA3,  ADC_0, adcPosSelAPORT4XCH11},
    {PA4,  ADC_0, adcPosSelAPORT3XCH12},
    {PA5,  ADC_0, adcPosSelAPORT4XCH13},

    {PB11, ADC_0, adcPosSelAPORT4XCH27},
    {PB12, ADC_0, adcPosSelAPORT3XCH28},
    {PB14, ADC_0, adcPosSelAPORT3XCH30},
    {PB15, ADC_0, adcPosSelAPORT4XCH31},

    {PC6,  ADC_0, adcPosSelAPORT1XCH6},
    {PC7,  ADC_0, adcPosSelAPORT2XCH7},
    {PC8,  ADC_0, adcPosSelAPORT1XCH8},
    {PC9,  ADC_0, adcPosSelAPORT2XCH9},
    {PC10, ADC_0, adcPosSelAPORT1XCH10},
    {PC11, ADC_0, adcPosSelAPORT2XCH11},

    {PD9,  ADC_0, adcPosSelAPORT4XCH1},
    {PD10, ADC_0, adcPosSelAPORT3XCH2},
    {PD11, ADC_0, adcPosSelAPORT3YCH3},
    {PD12, ADC_0, adcPosSelAPORT3XCH4},
    {PD13, ADC_0, adcPosSelAPORT3YCH5},
    {PD14, ADC_0, adcPosSelAPORT3XCH6},
    {PD15, ADC_0, adcPosSelAPORT4XCH7},

    {PF0,  ADC_0, adcPosSelAPORT1XCH16},
    {PF1,  ADC_0, adcPosSelAPORT2XCH17},
    {PF2,  ADC_0, adcPosSelAPORT1XCH18},
    {PF3,  ADC_0, adcPosSelAPORT2XCH19},
    {PF4,  ADC_0, adcPosSelAPORT1XCH20},
    {PF5,  ADC_0, adcPosSelAPORT2XCH21},
    {PF6,  ADC_0, adcPosSelAPORT1XCH22},
    {PF7,  ADC_0, adcPosSelAPORT2XCH23},
#endif
    {NC ,  NC   , NC}
};
#endif

/************I2C SCL***********/
#if DEVICE_I2C
const PinMap MBED_WEAK PinMap_I2C_SCL[] = {
    /* I2C0 */
#ifdef I2C0_BASE
    {PA1,  I2C_0, 0},
    {PD7,  I2C_0, 1},
    {PC7,  I2C_0, 2},
    {PD15, I2C_0, 3},
    {PC1,  I2C_0, 4},
    {PF1,  I2C_0, 5},
    {PE13, I2C_0, 6},
    {PE5,  I2C_0, 7},
#endif
#ifdef I2C1_BASE
    {PC5,  I2C_1, 0},
    {PB12, I2C_1, 1},
    {PE1,  I2C_1, 2},
    {PD5,  I2C_1, 3},
    {PF2,  I2C_1, 4},
    {PH12, I2C_1, 5},
    {PH14, I2C_1, 6},
    {PI3,  I2C_1, 7},
#endif
#ifdef I2C2_BASE
    {PF5,  I2C_2, 0},
    {PC15, I2C_2, 1},
    {PF11, I2C_2, 2},
    {PF12, I2C_2, 3},
    {PF14, I2C_2, 4},
    {PF3,  I2C_2, 5},
    {PC13, I2C_2, 6},
    {PI5,  I2C_2, 7},
#endif
    {NC  , NC   , NC}
};

/************I2C SDA***********/
const PinMap MBED_WEAK PinMap_I2C_SDA[] = {
    /* I2C0 */
#ifdef I2C0_BASE
    {PA0,  I2C_0, 0},
    {PD6,  I2C_0, 1},
    {PC6,  I2C_0, 2},
    {PD14, I2C_0, 3},
    {PC0,  I2C_0, 4},
    {PF0,  I2C_0, 5},
    {PE12, I2C_0, 6},
    {PE4,  I2C_0, 7},
#endif
#ifdef I2C1_BASE
    {PC4,  I2C_1, 0},
    {PB11, I2C_1, 1},
    {PE0,  I2C_1, 2},
    {PD4,  I2C_1, 3},
    {PC11, I2C_1, 4},
    {PH11, I2C_1, 5},
    {PH13, I2C_1, 6},
    {PI2,  I2C_1, 7},
#endif
#ifdef I2C2_BASE
    {PE8,  I2C_2, 0},
    {PC14, I2C_2, 1},
    {PF10, I2C_2, 2},
    {PF4,  I2C_2, 3},
    {PF13, I2C_2, 4},
    {PF15, I2C_2, 5},
    {PC12, I2C_2, 6},
    {PI4,  I2C_2, 7},
#endif
    /* Not connected */

    {NC  , NC   , NC}
};
#endif

/************PWM***************/
#if DEVICE_PWMOUT
const PinMap MBED_WEAK PinMap_PWM[] = {
    {PC13, PWM_CH0, 0},
    {PE10, PWM_CH0, 1},
    {PB0,  PWM_CH0, 2},
    {PB7,  PWM_CH0, 3},
    {PD6,  PWM_CH0, 4},
    {PF2,  PWM_CH0, 5},
    {PF13, PWM_CH0, 6},
    {PI6,  PWM_CH0, 7},

    {PC14, PWM_CH1, 0},
    {PE11, PWM_CH1, 1},
    {PB1,  PWM_CH1, 2},
    {PB8,  PWM_CH1, 3},
    {PD7,  PWM_CH1, 4},
    {PF3,  PWM_CH1, 5},
    {PF14, PWM_CH1, 6},
    {PI7,  PWM_CH1, 7},

    {PC15, PWM_CH2, 0},
    {PE12, PWM_CH2, 1},
    {PB2,  PWM_CH2, 2},
    {PB11, PWM_CH2, 3},
    {PC13, PWM_CH2, 4},
    {PF4,  PWM_CH2, 5},
    {PF15, PWM_CH2, 6},
    {PI8,  PWM_CH2, 7},

    {PC12, PWM_CH3, 0},
    {PE13, PWM_CH3, 1},
    {PB3,  PWM_CH3, 2},
    {PB12, PWM_CH3, 3},
    {PC14, PWM_CH3, 4},
    {PF12, PWM_CH3, 5},
    {PF5,  PWM_CH3, 6},
    {PI9,  PWM_CH3, 7},

    {NC  , NC     , NC}
};
#endif

/*************SPI**************/
#if DEVICE_SPI
const PinMap MBED_WEAK PinMap_SPI_MOSI[] = {
#ifdef USART0_BASE
    {PE10, SPI_0, 0},
    {PE7,  SPI_0, 1},
    {PC11, SPI_0, 2},
    {PE13, SPI_0, 3},
    {PB7,  SPI_0, 4},
    {PC0,  SPI_0, 5},
    {PG12, SPI_0, 6},
#endif
#ifdef USART1_BASE
    /* USART1 */
    {PC0,  SPI_1, 0},
    {PD0,  SPI_1, 1},
    {PD7,  SPI_1, 2},
    {PF6,  SPI_1, 3},
    {PC1,  SPI_1, 4},
    {PF2,  SPI_1, 5},
    {PA14, SPI_1, 6},
#endif
#ifdef USART2_BASE
    /* USART2 */
    {PC2,  SPI_2, 0},
    {PB3,  SPI_2, 1},
    {PA7,  SPI_2, 2},
    {PA13, SPI_2, 3},
    {PF6,  SPI_2, 4},
    {PF0,  SPI_2, 5},
#endif
#ifdef USART3_BASE
    /* USART3 */
    {PA0,  SPI_3, 0},
    {PE6,  SPI_3, 1},
    {PB3,  SPI_3, 2},
    {PG6,  SPI_3, 3},
    {PG0,  SPI_3, 4},
    {PI12, SPI_3, 5},
#endif
#ifdef USART4_BASE
    /* USART4 */
    {PB7,  SPI_4, 0},
    {PD9,  SPI_4, 1},
    {PI0,  SPI_4, 2},
    {PI6,  SPI_4, 3},
    {PH4,  SPI_4, 4},
#endif
#ifdef USART5_BASE
    /* USART5 */
    {PE8,  SPI_5, 0},
    {PA6,  SPI_5, 1},
    {PF15, SPI_5, 2},
    {PH10, SPI_5, 3},
#endif
    {NC  , NC   , NC}
};

const PinMap MBED_WEAK PinMap_SPI_MISO[] = {
#ifdef USART0_BASE
    {PE11, SPI_0,  0},
    {PE6,  SPI_0,  1},
    {PC10, SPI_0,  2},
    {PE12, SPI_0,  3},
    {PB8,  SPI_0,  4},
    {PC1,  SPI_0,  5},
    {PG13, SPI_0,  6},
#endif
#ifdef USART1_BASE
    /* USART1 */
    {PC1,  SPI_1,  0},
    {PD1,  SPI_1,  1},
    {PD6,  SPI_1,  2},
    {PF7,  SPI_1,  3},
    {PC2,  SPI_1,  4},
    {PA0,  SPI_1,  5},
    {PA2,  SPI_1,  6},
#endif
#ifdef USART2_BASE
    /* USART2 */
    {PC3,  SPI_2, 0},
    {PB4,  SPI_2, 1},
    {PA8,  SPI_2, 2},
    {PA14, SPI_2, 3},
    {PF7,  SPI_2, 4},
    {PF1,  SPI_2, 5},
#endif
#ifdef USART3_BASE
    /* USART3 */
    {PA1,  SPI_3, 0},
    {PE7,  SPI_3, 1},
    {PB7,  SPI_3, 2},
    {PG7,  SPI_3, 3},
    {PG1,  SPI_3, 4},
    {PI13, SPI_3, 5},
#endif
#ifdef USART4_BASE
    /* USART4 */
    {PB8,  SPI_4, 0},
    {PD10, SPI_4, 1},
    {PI1,  SPI_4, 2},
    {PI7,  SPI_4, 3},
    {PH5,  SPI_4, 4},
#endif
#ifdef USART5_BASE
    /* USART5 */
    {PE9,  SPI_5, 0},
    {PA7,  SPI_5, 1},
    {PB1,  SPI_5, 2},
    {PH11, SPI_5, 3},
#endif
    {NC  , NC   , NC}
};

const PinMap MBED_WEAK PinMap_SPI_CLK[] = {
#ifdef USART0_BASE
    /* USART0 */
    {PE12, SPI_0,  0},
    {PE5,  SPI_0,  1},
    {PC9,  SPI_0,  2},
    {PC15, SPI_0,  3},
    {PB13, SPI_0,  4},
    {PA12, SPI_0,  5},
    {PG14, SPI_0,  6},
#endif
#ifdef USART1_BASE
    /* USART1 */
    {PB7,  SPI_1, 0},
    {PD2,  SPI_1, 1},
    {PF0,  SPI_1, 2},
    {PC15, SPI_1, 3},
    {PC3,  SPI_1, 4},
    {PB11, SPI_1, 5},
    {PE5,  SPI_1, 6},
#endif
#ifdef USART2_BASE
    /* USART2 */
    {PC4,  SPI_2, 0},
    {PB5,  SPI_2, 1},
    {PA9,  SPI_2, 2},
    {PA15, SPI_2, 3},
    {PF8,  SPI_2, 4},
    {PF2,  SPI_2, 5},
#endif
#ifdef USART3_BASE
    /* USART3 */
    {PA2,  SPI_3, 0},
    {PD7,  SPI_3, 1},
    {PD4,  SPI_3, 2},
    {PG8,  SPI_3, 3},
    {PG2,  SPI_3, 4},
    {PI14, SPI_3, 5},
#endif
#ifdef USART4_BASE
    /* USART4 */
    {PC4,  SPI_4, 0},
    {PD11, SPI_4, 1},
    {PI2,  SPI_4, 2},
    {PI8,  SPI_4, 3},
    {PH6,  SPI_4, 4},
#endif
#ifdef USART5_BASE
    /* USART5 */
    {PB11,  SPI_5, 0},
    {PD13,  SPI_5, 1},
    {PF13,  SPI_5, 2},
    {PH12,  SPI_5, 3},
#endif
    {NC  , NC   , NC}
};

const PinMap MBED_WEAK PinMap_SPI_CS[] = {
#ifdef USART0_BASE
    /* USART0 */
    {PE13, SPI_0,  0},
    {PE4,  SPI_0,  1},
    {PC8,  SPI_0,  2},
    {PC14, SPI_0,  3},
    {PB14, SPI_0,  4},
    {PA13, SPI_0,  5},
    {PG15, SPI_0,  6},
#endif
#ifdef USART1_BASE
    /* USART1 */
    {PB8,  SPI_1, 0},
    {PD3,  SPI_1, 1},
    {PF1,  SPI_1, 2},
    {PC14, SPI_1, 3},
    {PC0,  SPI_1, 4},
    {PE4,  SPI_1, 5},
    {PB2,  SPI_1, 6},
#endif
#ifdef USART2_BASE
    /* USART2 */
    {PC5,  SPI_2, 0},
    {PB6,  SPI_2, 1},
    {PA10, SPI_2, 2},
    {PB11, SPI_2, 3},
    {PF9,  SPI_2, 4},
    {PF5,  SPI_2, 5},
#endif
#ifdef USART3_BASE
    /* USART3 */
    {PA3,  SPI_3, 0},
    {PE4,  SPI_3, 1},
    {PC14, SPI_3, 2},
    {PC0,  SPI_3, 3},
    {PG3,  SPI_3, 4},
    {PI15, SPI_3, 5},
#endif
#ifdef USART4_BASE
    /* USART4 */
    {PC5,  SPI_4, 0},
    {PD12, SPI_4, 1},
    {PI3,  SPI_4, 2},
    {PI9,  SPI_4, 3},
    {PH7,  SPI_4, 4},
#endif
#ifdef USART5_BASE
    /* USART5 */
    {PB13,  SPI_5, 0},
    {PD14,  SPI_5, 1},
    {PF12,  SPI_5, 2},
    {PH13,  SPI_5, 3},
#endif
    {NC  , NC   , NC}
};

/************UART**************/
const PinMap MBED_WEAK PinMap_UART_TX[] = {
#ifdef USART0_BASE
    {PE10, USART_0, 0},
    {PE7,  USART_0, 1},
    {PC11, USART_0, 2},
    {PE13, USART_0, 3},
    {PB7,  USART_0, 4},
    {PC0,  USART_0, 5},
    {PG12, USART_0, 6},
#endif
#ifdef USART1_BASE
    /* USART1 */
    {PC0,  USART_1, 0},
    {PD0,  USART_1, 1},
    {PD7,  USART_1, 2},
    {PF6,  USART_1, 3},
    {PC1,  USART_1, 4},
    {PF2,  USART_1, 5},
    {PA14, USART_1, 6},
#endif
#ifdef USART2_BASE
    /* USART2 */
    {PC2,  USART_2, 0},
    {PB3,  USART_2, 1},
    {PA7,  USART_2, 2},
    {PA13, USART_2, 3},
    {PF6,  USART_2, 4},
    {PF0,  USART_2, 5},
#endif
#ifdef USART3_BASE
    /* USART3 */
    {PA0,  USART_3, 0},
    {PE6,  USART_3, 1},
    {PB3,  USART_3, 2},
    {PG6,  USART_3, 3},
    {PG0,  USART_3, 4},
    {PI12, USART_3, 5},
#endif
#ifdef USART4_BASE
    /* USART4 */
    {PB7, USART_4, 0},
    {PD9, USART_4, 1},
    {PI0, USART_4, 2},
    {PI6, USART_4, 3},
    {PH4, USART_4, 4},
#endif
#ifdef USART5_BASE
    /* USART5 */
    {PE8,  USART_5, 0},
    {PA6,  USART_5, 1},
    {PF15, USART_5, 2},
    {PH10, USART_5, 3},
#endif
    {NC  , NC   , NC}
};
#endif

#if DEVICE_SERIAL
const PinMap MBED_WEAK PinMap_UART_RX[] = {
#ifdef USART0_BASE
    {PE11, USART_0,  0},
    {PE6,  USART_0,  1},
    {PC10, USART_0,  2},
    {PE12, USART_0,  3},
    {PB8,  USART_0,  4},
    {PC1,  USART_0,  5},
    {PG13, USART_0,  6},
#endif
#ifdef USART1_BASE
    /* USART1 */
    {PC1, USART_1,  0},
    {PD1, USART_1,  1},
    {PD6, USART_1,  2},
    {PF7, USART_1,  3},
    {PC2, USART_1,  4},
    {PA0, USART_1,  5},
    {PA2, USART_1,  6},
#endif
#ifdef USART2_BASE
    /* USART2 */
    {PC3,  USART_2, 0},
    {PB4,  USART_2, 1},
    {PA8,  USART_2, 2},
    {PA14, USART_2, 3},
    {PF7,  USART_2, 4},
    {PF1 , USART_2, 5},
#endif
#ifdef USART3_BASE
    /* USART3 */
    {PA1,  USART_3, 0},
    {PE7,  USART_3, 1},
    {PB7,  USART_3, 2},
    {PG7,  USART_3, 3},
    {PG1,  USART_3, 4},
    {PI13, USART_3, 5},
#endif
#ifdef USART4_BASE
    /* USART4 */
    {PB8,  USART_4, 0},
    {PD10, USART_4, 1},
    {PI1,  USART_4, 2},
    {PI7,  USART_4, 3},
    {PH5,  USART_4, 4},
#endif
#ifdef USART5_BASE
    /* USART5 */
    {PE9,  USART_5, 0},
    {PA7,  USART_5, 1},
    {PB1,  USART_5, 2},
    {PH11, USART_5, 3},
#endif
    {NC  , NC   , NC}
};
#endif

#if DEVICE_CAN
const PinMap MBED_WEAK PinMap_CAN_TX[] = {
#ifdef CAN0_BASE
    {PC1,  CAN_0, 0},
    {PF2,  CAN_0, 1},
    {PD1,  CAN_0, 2},
    {PB10, CAN_0, 3},
    {PG9,  CAN_0, 4},
    {PD15, CAN_0, 5},
    {PE1,  CAN_0, 6},
    {PI13, CAN_0, 7},
#endif
#ifdef CAN1_BASE
    {PC3,  CAN_1, 0},
    {PF3,  CAN_1, 1},
    {PD4,  CAN_1, 2},
    {PC10, CAN_1, 3},
    {PC11, CAN_1, 4},
    {PA13, CAN_1, 5},
    {PG11, CAN_1, 6},
    {PI15, CAN_1, 7},
#endif
};

const PinMap MBED_WEAK PinMap_CAN_RX[] = {
#ifdef CAN0_BASE
    {PC0,  CAN_0, 0},
    {PF0,  CAN_0, 1},
    {PD0,  CAN_0, 2},
    {PB9,  CAN_0, 3},
    {PG8,  CAN_0, 4},
    {PD14, CAN_0, 5},
    {PE0,  CAN_0, 6},
    {PI12, CAN_0, 7},
#endif
#ifdef CAN1_BASE
    {PC2,  CAN_1, 0},
    {PF1,  CAN_1, 1},
    {PD3,  CAN_1, 2},
    {PC9,  CAN_1, 3},
    {PC12, CAN_1, 4},
    {PA12, CAN_1, 5},
    {PG10, CAN_1, 6},
    {PI14, CAN_1, 7},
#endif
};
#endif
