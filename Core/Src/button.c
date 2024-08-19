/*
 * button.c
 *
 *  Created on: Aug 19, 2024
 *      Author: Ferhat ATASOY
 */

#include "button.h"

void button_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  __HAL_RCC_GPIOB_CLK_ENABLE();

  GPIO_InitStruct.Pin = BUTTON1_Pin | BUTTON2_Pin | BUTTON3_Pin | BUTTON4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

