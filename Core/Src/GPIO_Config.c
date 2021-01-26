
/**
 * @file <GPIO_Config.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Mouadh Dahech>
 * @date <January 26, 2021>
 *
 */
#include "GPIO_Config.h"

/***********steps to config GPIO PD12 |PD13 |PD14 |PD15 AS OUTPUT******
1.Enable the clock
2.config the pin as output
3.config the output mode 
***********************************************************************/

void GPIO_config(void){
//1.Enable the clock	
RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	
//2.config the pin as output	

GPIOD->MODER = 0X55000000;  	
 
//3.config the output mode 
GPIOD->OTYPER = 0;
GPIOD->OSPEEDR = 0; 	
}