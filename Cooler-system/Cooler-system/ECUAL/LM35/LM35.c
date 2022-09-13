/*
 * LM35.c
 *
 * Created: 9/12/2022 11:23:40 AM
 *  Author: omart
 */ 


#include "LM35.h"


/*****************************************************************************
* Function Name: LM35_init
* Purpose      : Initialize LM35
* Parameters   : Channel and Vref_selection (enums)
* Return value : Void
*****************************************************************************/
void LM35_init(ADC_channel_t channel, VREF_selection_t select){
	ADC_init(channel, select);
}


/*****************************************************************************
* Function Name: LM35_read
* Purpose      : Read ADC digital value
* Parameters   : Channel
* Return value : Void
*****************************************************************************/
uint16_t LM35_read(ADC_channel_t channel){
	uint16_t digitalRead = ADC_read(channel);
	/*
	*	150 ------> 308
	*	 x  <------ digitalRead
	*/
	uint16_t analogeRead = digitalRead * 150 / 308.0;
	
	return analogeRead;
}