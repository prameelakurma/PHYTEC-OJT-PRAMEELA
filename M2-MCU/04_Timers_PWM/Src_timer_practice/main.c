#include"stm32f4xx.h"
#define TIM2EN		(1U<<0)
#define CR1_CEN		(1U<<0)
#define GPIOAEN (1U<<0)
#define PIN5 (1U<<5)
#define  LED PIN5
#ifndef INC_TIM_H
#define INC_TIM_H
#define SR_UIF (1U<<0)

void tim2_1hz_init(void);
void tim_delay(void);
#endif

int main(void)
{
	RCC->AHB1ENR |= GPIOAEN;
	GPIOA->MODER &= ~0X00000C00;
	GPIOA->MODER |= 0X00000400;
	tim2_1hz_init();
	while(1)
	{
		tim_delay();
		GPIOA->ODR ^= LED;
	}
}



void tim2_1hz_init(void)
{
	/*Enable clock access to tim2*/
	RCC->APB1ENR |= TIM2EN;

	/*Set prescaler value*/
	TIM2->PSC = 16001 - 1;

	/*Set auto-reload value*/
	TIM2->ARR = 10001 - 1;
	/*Clear counter*/
	TIM2->CNT =0;
	/*Enable timer*/
	TIM2->CR1 = CR1_CEN;

}

void tim_delay(void)
{

       /*Wait for UIF */
	while(!(TIM2->SR & SR_UIF)){}

	/*Clear UIF*/
	TIM2->SR &= ~SR_UIF;

}