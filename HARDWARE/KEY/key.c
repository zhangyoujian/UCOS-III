#include "key.h"
#include "delay.h"

void Key_Init(void)
{
	 GPIO_InitTypeDef GPIO_InitStruct;
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE); //����GPIOA��ʱ��
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE,ENABLE); //����GPIOE��ʱ��
	//����PA0��Ϊ��������ģʽ
	 GPIO_InitStruct.GPIO_Pin=GPIO_Pin_0;
	 GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IPD;
	 GPIO_Init(GPIOA,&GPIO_InitStruct);
	
	//����PE4��Ϊ��������ģʽ
	 GPIO_InitStruct.GPIO_Pin=GPIO_Pin_4;
	 GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IPU;
	 GPIO_Init(GPIOE,&GPIO_InitStruct);
	
}

u8 Key_Scan(u8 mode)
{
	static u8 key_up=1;
	if(mode)
	key_up=1;
	
	if(key_up&&(KEY2==1||KEY3==0))
	{
		key_up=0;
		delay_ms(10);
		if(KEY2==1)
			return key2;
		if(KEY3==0)
			return key3;
		
	}
	else if(KEY2==0&&KEY3==1)
		key_up=1;
	
	return 0;
}
