#include "EXTI.h"

void vEXTI_UnMask(uint8 u8Line){
	SET_BIT(EXTI->IMR, u8Line);
}
void vEXTI_Mask(uint8 u8Line){
	CLEAR_BIT(EXTI->IMR, u8Line);
}

void vEXTI_EventUnMask(uint8 u8Line){
	SET_BIT(EXTI->EMR, u8Line);
}

void vEXTI_EventMask(uint8 u8Line){
	CLEAR_BIT(EXTI->EMR, u8Line);
}

void vEXTI_EventType(uint8 u8Line, EventType type){
		switch(type){
			case Rising:
				SET_BIT(EXTI->RTSR, u8Line);
				CLEAR_BIT(EXTI->FTSR, u8Line);
				break;
			case Falling:
				SET_BIT(EXTI->FTSR, u8Line);
				CLEAR_BIT(EXTI->RTSR, u8Line);
				break;
		}
}

void vEXTI_SWTInterrupt(uint8 u8Line){
		SET_BIT(EXTI->SWIER, u8Line);
}
void vEXTI_SetPort(uint8 u8LineNumber, EXTI_Port Port){
	if(u8LineNumber <= 3){
		CLEAR_BITS(SYSCFG->EXTICR1, 15, (u8LineNumber % 4) * 4);
		SET_BITS(SYSCFG->EXTICR1, Port, (u8LineNumber % 4) * 4);
	}
	else if(u8LineNumber <= 7){
		CLEAR_BITS(SYSCFG->EXTICR2, 15, (u8LineNumber % 4) * 4);
		SET_BITS(SYSCFG->EXTICR1, Port, (u8LineNumber % 4) * 4);
	}
	else if(u8LineNumber <= 11){
		CLEAR_BITS(SYSCFG->EXTICR3, 15, (u8LineNumber % 4) * 4);
		SET_BITS(SYSCFG->EXTICR1, Port, (u8LineNumber % 4) * 4);
	}
	else if(u8LineNumber <= 15){
		CLEAR_BITS(SYSCFG->EXTICR4, 15, (u8LineNumber % 4) * 4);
		SET_BITS(SYSCFG->EXTICR1, Port, (u8LineNumber % 4) * 4);
	}
}
