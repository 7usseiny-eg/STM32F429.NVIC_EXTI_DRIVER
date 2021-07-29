/***********************************************
*
*	AUTHOR: Omar El Hussein
*
*	DATE: 16/7/2021
*
* FILE: EXTI_Private.h
*
* LAYER: MCAL
*
*************************************************/

#ifndef EXTI_Private_H_
#define EXTI_Private_H_

#include "STD_TYPES.h"

#define EXTI_BASE_ADDRESS 		0x40013C00
#define SYSCFG_BASE_ADDRESS 	0x40013800

typedef struct{
	volatile uint32 MEMRMP;
	volatile uint32 PMC;
	volatile uint32 EXTICR1;
	volatile uint32 EXTICR2;
	volatile uint32 EXTICR3;
	volatile uint32 EXTICR4;
	volatile uint32 CMPCR;
} SYSCFG_Type;

typedef struct{
	volatile uint32 IMR;
	volatile uint32 EMR;
	volatile uint32 RTSR;
	volatile uint32 FTSR;
	volatile uint32 SWIER;
	volatile uint32 PR;
}	EXTI_Type;

#define EXTI								((EXTI_Type *)(EXTI_BASE_ADDRESS))
#define SYSCFG 							((SYSCFG_Type *)(EXTI_BASE_ADDRESS))

#endif
