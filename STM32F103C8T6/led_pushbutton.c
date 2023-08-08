#include "stm32f1xx.h"

void GPIO_Init()
{

    RCC->APB2ENR |= ((1<<4) | (1<<2)); //setting IOPC and IOPA

    GPIOC->CRH |= ((1<<24) | (1<<25)); // LED pin has been sit to P14
    GPIOC->CRH &= ~((1<<26) |(1<<27)); // 

    GPIOA->CRL |= ((1<<16) |(1<<17)); // pushbutton input has been set to pinA4
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
        if(GPIOA->IDR & 0x10)
        {
        GPIOC->ODR |= (1<<14);
        delay();
        }
        else
        {
        GPIOC->ODR &= ~(1<<14);
        delay();
        }
    }
}
