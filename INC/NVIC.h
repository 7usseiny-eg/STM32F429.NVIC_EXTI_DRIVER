/***********************************************
*
*	AUTHOR: Omar El Hussein
*
*	DATE: 16/7/2021
*
* FILE: NVIC.h
*
* LAYER: MCAL
*
*************************************************/
#ifndef NVIC_H_
#define NVIC_H_

#include "STD_TYPES.h"
#include "NVIC_Private.h"
#include "NVIC_CNFG.h"

void vNVIC_SetEnable(uint8 IRQ);

void vNVIC_ClearEnable(uint8 IRQ);

void vNVIC_SetPending(uint8 IRQ);

void vNVIC_ClearPending(uint8 IRQ);

uint8 u8NVIC_GetActiveFlag(uint8 IRQ);

void vNVIC_SetPriority(uint8 IRQ, uint8 GRPPR, uint8 SUBPR, uint8 GROUPPRICFG);

#endif
