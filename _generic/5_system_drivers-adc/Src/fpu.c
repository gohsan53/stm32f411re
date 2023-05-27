/*
 * fpu.c
 *
 *  Created on: Mar 13, 2023
 *      Author: ktgh
 */

#include "stm32f4xx.h"


void fpu_enable(void)
{
  /* Enable CP10 and CP11 full access */
  SCB->CPACR |= (1<<20);
  SCB->CPACR |= (1<<21);
  SCB->CPACR |= (1<<22);
  SCB->CPACR |= (1<<23); // 0B 0000 0000 1000 0000 0000 00000 00000 00000

}