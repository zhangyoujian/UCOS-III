#include "stm32f10x.h"
#include"led.h"

void Led_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE ,ENABLE);//启动GPIOE的时钟
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;//设置推挽输出
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_5|GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOE, &GPIO_InitStruct);
	GPIO_SetBits(GPIOE, GPIO_Pin_5|GPIO_Pin_6);
	
	
}

