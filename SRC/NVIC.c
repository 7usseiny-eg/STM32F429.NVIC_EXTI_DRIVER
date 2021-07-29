#include "NVIC.h"

void vNVIC_SetEnable(uint8 IRQ){
	if(IRQ < 32)
		
		NVIC_ISER(0) = (1U << IRQ);
	
	else if(IRQ >= 32 && IRQ < 64) // ISER1
		
		NVIC_ISER(1) = (1U << (IRQ % 32));
	
	else if(IRQ >= 64 && IRQ < 96) // ISER2
		
		NVIC_ISER(2) = (1U << (IRQ % 32));
	
	else if(IRQ >= 96 && IRQ < 128) // ISER3
		
		NVIC_ISER(3) = (1U << (IRQ % 32));
	
	else if(IRQ >= 128 && IRQ < 160) // ISER4
		
		NVIC_ISER(4) = (1U << (IRQ % 32));
	
	else if(IRQ >= 160 && IRQ < 192) // ISER5
		
		NVIC_ISER(5) = (1U << (IRQ % 32));
	
	else if(IRQ >= 192 && IRQ < 224) // ISER6
		
		NVIC_ISER(6) = (1U << (IRQ % 32));
	
	else if(IRQ >= 224 && IRQ < 240) //ISER7
		
		NVIC_ISER(7) = (1U << (IRQ % 32));
	
	else
		return;
	
}
void vNVIC_ClearEnable(uint8 IRQ){
	if(IRQ < 32)
		
		NVIC_ICER(0) = (1U << IRQ);
		
	else if(IRQ >= 32 && IRQ < 64)
		
		NVIC_ICER(1) = (1U << (IRQ % 32));
	
	else if(IRQ >= 64 && IRQ < 96)
		
		NVIC_ICER(2) = (1U << (IRQ % 32));
	
	else if(IRQ >= 96 && IRQ < 128)
		
		NVIC_ICER(3) = (1U << (IRQ % 32));
	
	else if(IRQ >= 128 && IRQ < 160)
		
		NVIC_ICER(4) = (1U << (IRQ % 32));
	
	else if(IRQ >= 160 && IRQ < 192)
		
		NVIC_ICER(5) = (1U << (IRQ % 32));
	
	else if(IRQ >= 192 && IRQ < 224)
		
		NVIC_ICER(6) = (1U << (IRQ % 32));
	
	else if(IRQ >= 224 && IRQ < 240)
		
		NVIC_ICER(7) = (1U << (IRQ % 32));
	
	else
		return;
}
void vNVIC_SetPending(uint8 IRQ){
	
	if(IRQ < 32)
		
		NVIC_ISPR(0) = (1U << IRQ);
	
	else if(IRQ >= 32 && IRQ < 64)
		
		NVIC_ISPR(1) = (1U << (IRQ % 32));
	
	else if(IRQ >= 64 && IRQ < 96)
		
		NVIC_ISPR(2) = (1U << (IRQ % 32));
	
	else if(IRQ >= 96 && IRQ < 128)
		
		NVIC_ISPR(3) = (1U << (IRQ % 32));
	
	else if(IRQ >= 128 && IRQ < 160)
		
		NVIC_ISPR(4) = (1U << (IRQ % 32));
	
	else if(IRQ >= 160 && IRQ < 192)
		
		NVIC_ISPR(5) = (1U << (IRQ % 32));
	
	else if(IRQ >= 192 && IRQ < 224)
		
		NVIC_ISPR(6) = (1U << (IRQ % 32));
	
	else if(IRQ >= 224 && IRQ < 240)
		
		NVIC_ISPR(7) = (1U << (IRQ % 32));
	
	else
		return;
	
}
void vNVIC_ClearPending(uint8 IRQ){
	
	if(IRQ < 32)
		
		NVIC_ICPR(0) = (1U << IRQ);
	
	else if(IRQ >= 32 && IRQ < 64)
		
		NVIC_ICPR(1) = (1U << (IRQ % 32));
	
	else if(IRQ >= 64 && IRQ < 96)
		
		NVIC_ICPR(2) = (1U << (IRQ % 32));
	
	else if(IRQ >= 96 && IRQ < 128)
		
		NVIC_ICPR(3) = (1U << (IRQ % 32));
	
	else if(IRQ >= 128 && IRQ < 160)
		
		NVIC_ICPR(4) = (1U << (IRQ % 32));
	
	else if(IRQ >= 160 && IRQ < 192)
		
		NVIC_ICPR(5) = (1U << (IRQ % 32));
	
	else if(IRQ >= 192 && IRQ < 224)
		
		NVIC_ICPR(6) = (1U << (IRQ % 32));
	
	else if(IRQ >= 224 && IRQ < 240)
		
		NVIC_ICPR(7) = (1U << (IRQ % 32));
	
	else
		return;
	
}

uint8 u8NVIC_GetActiveFlag(uint8 IRQ){
	if(IRQ < 32)
		
		return (uint8)(NVIC_IABR(0) & (1U << IRQ));
	
	else if(IRQ >= 32 && IRQ < 64)
		
		return (uint8)(NVIC_IABR(1) & (1U << (IRQ % 32)));
	
	
	else if(IRQ >= 64 && IRQ < 96)
		
		return (uint8)(NVIC_IABR(2) & (1U << (IRQ % 32)));
	
	else if(IRQ >= 96 && IRQ < 128)
		
		return (uint8)(NVIC_IABR(3) & (1U << (IRQ % 32)));
	
	else if(IRQ >= 128 && IRQ < 160)
		
		return (uint8)(NVIC_IABR(4) & (1U << (IRQ % 32)));
	
	else if(IRQ >= 160 && IRQ < 192)
		
		return (uint8)(NVIC_IABR(5) & (1U << (IRQ % 32)));
	
	else if(IRQ >= 192 && IRQ < 224)
		
		return (uint8)(NVIC_IABR(6) & (1U << (IRQ % 32)));
	
	else if(IRQ >= 224 && IRQ < 240)
		
		return (uint8)(NVIC_IABR(7) & (1U << (IRQ % 32)));
	
	else
		return 0;
}
void vNVIC_SetPriority(uint8 IRQ, uint8 GRPPR, uint8 SUBPR, uint8 GROUPPRICFG){
	switch(GROUPPRICFG){
		case GROUP_PRI_CFG0:
			SCB_AIRCR = 0x05FA0300;
			NVIC_IPR[IRQ] = (GRPPR << 4U);
			break;
		case GROUP_PRI_CFG1:
			SCB_AIRCR = 0x05FA0400;
			NVIC_IPR[IRQ] = ((GRPPR << 5U) | (SUBPR << 4U));
			break;
		case GROUP_PRI_CFG2:
			SCB_AIRCR = 0x05FA0500;
			NVIC_IPR[IRQ] = ((GRPPR << 6U) | (SUBPR << 4U));
			break;
		case GROUP_PRI_CFG3:
			SCB_AIRCR = 0x05FA0600;
			NVIC_IPR[IRQ] = ((GRPPR << 7U) | (SUBPR << 4U));
			break;
		case GROUP_PRI_CFG4:
			SCB_AIRCR = 0x05FA0700;
			NVIC_IPR[IRQ] = (SUBPR << 4U);
			break;
		default:
			break;
	}
	
}
