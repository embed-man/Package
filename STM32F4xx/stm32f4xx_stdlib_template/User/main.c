/****************************************************************************
* Copyright (C), 201X-201X,杰普特光电股份有限公司
* 文件名: main.c
* 内容简述：
*
* 文件历史：
* 版本号 日期 作者 说明
* 01a 2018-07-10 XXX创建该文件
*/

#include "stm32f4xx.h"
#include "bsp_led.h"

/******************************************************************************
* 函数名：ledGPIO_Init
* 功 能：LED GPIO初始化
* 输 入： 无
* 输 出：无
* 返 回：无
*/
int main(void)
{
	/* 程序来到main函数之前，启动文件：statup_stm32f429xx.s已经调用
	* SystemInit()函数把系统时钟初始化成180MHZ
	* SystemInit()在system_stm32f4xx.c中定义
	* 如果用户想修改系统时钟，可自行编写程序修改
	*/
  ledGPIO_Init();
  while (1)
  {
      LED1(1);
      LED2(1);
	  LED3(0);
	  LED4(0);	  
  }

}