#ifndef __KEY_H
#define __KEY_H

#include "sys.h"
#include "stm32f10x.h"


//λ���������ư���

#define KEY2 PAin(0)   //KEY2Ҳ��WAKE_UP��
#define KEY3 PEin(4)



#define key2 2
#define key3 3
/*
#define KEY_2 GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0); //KEY2Ҳ��WAKE_UP��
#define KEY_3 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4);*/

void Key_Init(void); //��ʼ������IO��
u8 Key_Scan(u8 mode); //mode=1֧������,mode=0��֧������

#endif
