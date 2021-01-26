/**
  ******************************************************************************
 * @file main.c
 * @brief main file, Blink led  for stm32f407vg using register access
 *
 * @author Mouadh Dahech
 * @date January , 2021
 *
  ******************************************************************************
*/ 
#include "main.h"

void GPIO_config(void);

void delay_ms(int ms);


int main(void){
	
  SystemClock();
  GPIO_config();	
  Tim6Config();
  

  while(1){
    GPIOD->ODR = 0XF000;
    msdelay(1000);
    GPIOD->ODR = 0X0000;
    msdelay(1000);
  }
}

