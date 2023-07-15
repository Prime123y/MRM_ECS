#include "stm32f1xx.h"

void GPIO_Init()
{

    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;

    GPIOC->CRH &= ~(GPIO_CRH_MODE13 | GPIO_CRH_CNF13);
    GPIOC->CRH |= (GPIO_CRH_MODE13_0 | GPIO_CRH_MODE13_1);
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

        GPIOC->ODR |= GPIO_ODR_ODR13;
        delay();


        GPIOC->ODR &= ~GPIO_ODR_ODR13;
        delay();
    }
}
