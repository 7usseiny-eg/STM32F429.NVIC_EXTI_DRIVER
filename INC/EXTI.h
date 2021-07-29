/***********************************************
*
*	AUTHOR: Omar El Hussein
*
*	DATE: 16/7/2021
*
* FILE: EXTI.h
*
* LAYER: MCAL
*
*************************************************/
#ifndef EXTI_H_
#define EXTI_H_
#include "EXTI_Private.h"
#include "EXTI_CNFG.h"

void vEXTI_UnMask(uint8 u8Line);
void vEXTI_Mask(uint8 u8Line);
void vEXTI_EventUnMask(uint8 u8Line);
void vEXTI_EventMask(uint8 u8Line);
void vEXTI_EventType(uint8 u8Line, EventType type);
void vEXTI_SWTInterrupt(uint8 u8Line); //Software Trigger Interrupt
void vEXTI_SetPort(uint8 u8LineNumber, EXTI_Port Port);
#endif
