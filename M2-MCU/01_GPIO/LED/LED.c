#include "stm32f4xx.h"
void delayMs(int n);
int main(void) {
RCC->AHB1ENR |= 2; /* enable GPIOB clock */ RCC->AHB1ENR |= 4; /*
enable GPIOC clock */
GPIOC->MODER &= ~0x0000FFFF; /* clear pin mode */ GPIOC->MODER |=
0x00005555; /* set pins to output mode */ GPIOB->MODER &=
~0x0000000F; /* clear pin mode */ GPIOB->MODER |= 0x00000005; /* set
pins to output mode */for(;;) {
GPIOC->ODR = 0x0007; /* display tens digit */ GPIOB->BSRR =
0x00010000; /* deselect ones digit */ GPIOB->BSRR = 0x00000002; /*
select tens digit */ delayMs(8);
GPIOC->ODR = 0x006D; /* display ones digit */ GPIOB->BSRR =
0x00020000; /* deselect tens digit */ GPIOB->BSRR = 0x00000001; /*
select ones digit */ delayMs(8);
}
}
/* 16 MHz SYSCLK */
void delayMs(int n) {
int i;
for (; n > 0; n--)
for (i = 0; i < 3195; i++) ; }
