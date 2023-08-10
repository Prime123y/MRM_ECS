#include "stm32f1xx.h"

int led_state=0;
void GPIO_Init()
{

    RCC->APB2ENR |= ((1<<4) | (1<<2)); //setting IOPC and IOPA

    GPIOC->CRH |= ((1<<24) | (1<<25)); // this is for LED
    GPIOC->CRH &= ~((1<<26) |(1<<27)); // led has been set for p14

    GPIOA->CRL |= ((1<<16) |(1<<17));
    GPIOA->CRL &= ~((1<<18) | (1<<19));




}

void delay()
{
    for (int i = 0; i < 600000; i++)
    {

    }
}

int main()
{
    GPIO_Init();

    while (1)
    {
    	led_state=(GPIOA->IDR & 0x10); // reading button state

    	if(GPIOA->IDR & 0x10)
        {
        	led_state=!led_state; // performs NOT operation on led_state 0->1 and 1->0 vice versa
        if(led_state)
        {
        GPIOC->ODR |= (1<<14);
       // delay();
        }
        else
        {
        GPIOC->ODR &= ~(1<<14);
       // delay();
        }
        while(GPIOA->IDR & 0x10){ // ensures that the led does not toggle while the button is pressed.
    }
}
}
}

