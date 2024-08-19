/*
 * button.h
 *
 *  Created on: Aug 19, 2024
 *      Author: Ferhat ATASOY
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "stm32f7xx_hal.h"

#define BUTTON1_Port 		GPIOB
#define BUTTON2_Port 		GPIOB
#define BUTTON3_Port 		GPIOB
#define BUTTON4_Port 		GPIOB

#define BUTTON1_Pin 		GPIO_PIN_1
#define BUTTON2_Pin 		GPIO_PIN_2
#define BUTTON3_Pin 		GPIO_PIN_3
#define BUTTON4_Pin 		GPIO_PIN_4

#define BUTTON_PRESSED		GPIO_PIN_RESET
#define BUTTON_RELEASED		GPIO_PIN_SET

#define BUTTON1_READ		HAL_GPIO_ReadPin(BUTTON1_Port, BUTTON1_Pin)
#define BUTTON2_READ		HAL_GPIO_ReadPin(BUTTON2_Port, BUTTON2_Pin)
#define BUTTON3_READ		HAL_GPIO_ReadPin(BUTTON3_Port, BUTTON3_Pin)
#define BUTTON4_READ		HAL_GPIO_ReadPin(BUTTON4_Port, BUTTON4_Pin)

void button_Init(void);

#endif /* INC_BUTTON_H_ */
