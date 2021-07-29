/***********************************************
*
*	AUTHOR: Omar El Hussein
*
*	DATE: 16/7/2021
*
* FILE: EXTI_CNFG.h
*
* LAYER: MCAL
*
*************************************************/
#ifndef EXTI_CNFG_H_
#define EXTI_CNFG_H_

typedef enum{
	Rising = 1,
	Falling = 0
} EventType;
typedef enum{
	PortA = 0,
	PortB,
	PortC,
	PortD,
	PortE,
	PortF,
	PortG,
	PortH,
	PortI,
	PortJ,
	PortK
} EXTI_Port;
#endif
