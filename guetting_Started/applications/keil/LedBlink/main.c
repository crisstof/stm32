#include "stm32l4xx.h"
int main(void)
{
 volatile unsigned int i =0;
 RCC -> AHB2ENR|= 1<<0;			//[datasheet]  [1]
 GPIOA->MODER &= 0xFFFFF7FF; 	 //[reference_manual]  [2]	
   while(1)
   {	for (i= 0; i < 50000; i++)
					GPIOA -> ODR= (1<<5); //on affecte 1 au bit du rang 5	[reference_manual]  [3]
																//GPIOA -> BSRR= (1<<5);
			for (i = 0; i < 50000; i++)
					GPIOA -> ODR= (0<<5); //PA5 à 0  ////GPIOA -> BSRR= (1<<21);}	[reference_manual]  [3]
   } 
}