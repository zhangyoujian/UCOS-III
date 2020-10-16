#ifndef __KEY_H
#define __KEY_H

#include "sys.h"
#include "stm32f10x.h"


//位操作法控制按键

#define KEY2 PAin(0)   //KEY2也是WAKE_UP键
#define KEY3 PEin(4)



#define key2 2
#define key3 3
/*
#define KEY_2 GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0); //KEY2也是WAKE_UP键
#define KEY_3 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4);*/

void Key_Init(void); //初始化按键IO口
u8 Key_Scan(u8 mode); //mode=1支持连按,mode=0不支持连按

#endif
