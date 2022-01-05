/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "MFRG"
#define USE_TARGET_CONFIG
#define BRUSHED_MOTORS

#define LED0_PIN                PA13
#define LED1_PIN                PC14

#define USE_GYRO
#define USE_GYRO_MPU6050
#define GYRO_1_ALIGN            CW0_DEG

#define USE_ACC
#define USE_ACC_MPU6050
#define ACC_1_ALIGN             CW0_DEG

#define USE_VCP
#define USE_UART1
#define USE_UART2

#define SERIAL_PORT_COUNT       2

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_PIN  PA15

#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define UART2_TX_PIN            PA14 
#define UART2_RX_PIN            PA15

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C_DEVICE              (I2CDEV_2)


#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM
#define DEFAULT_FEATURES        (FEATURE_TELEMETRY)

// IO - stm32f303cc in 48pin package
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))

#define USABLE_TIMER_CHANNEL_COUNT 8
#define USED_TIMERS             (TIM_N(1) | TIM_N(2) | TIM_N(4) | TIM_N(8) | TIM_N(15))
