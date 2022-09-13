/*
 * ADC.c
 *
 * Created: 9/12/2022 9:50:10 AM
 *  Author: omart
 */ 


#include "ADC.h"


/*****************************************************************************
* Function Name: ADC_init
* Purpose      : Initialize ADC
* Parameters   : Channel and Vref_selection (enums)
* Return value : Void
*****************************************************************************/
void ADC_init(ADC_channel_t channel, VREF_selection_t select){	
	switch (channel)
	{
		case ADC0_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		CLRBIT(ADMUX,MUX0);
		CLRBIT(ADMUX,MUX1);
		CLRBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC1_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		SETBIT(ADMUX,MUX0);
		CLRBIT(ADMUX,MUX1);
		CLRBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC2_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		CLRBIT(ADMUX,MUX0);
		SETBIT(ADMUX,MUX1);
		CLRBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC3_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		SETBIT(ADMUX,MUX0);
		SETBIT(ADMUX,MUX1);
		CLRBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC4_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		CLRBIT(ADMUX,MUX0);
		CLRBIT(ADMUX,MUX1);
		SETBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC5_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		SETBIT(ADMUX,MUX0);
		CLRBIT(ADMUX,MUX1);
		SETBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC6_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		CLRBIT(ADMUX,MUX0);
		SETBIT(ADMUX,MUX1);
		SETBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
		
		case ADC7_t:
		switch (select)
		{
			case VREF:
			CLRBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case VCC:
			SETBIT(ADMUX,REFS0);
			CLRBIT(ADMUX,REFS1);
			break;
			
			case RESERVED:
			CLRBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
			
			case INTERNAL_VREF:
			SETBIT(ADMUX,REFS0);
			SETBIT(ADMUX,REFS1);
			break;
		}
		
		SETBIT(ADMUX,MUX0);
		SETBIT(ADMUX,MUX1);
		SETBIT(ADMUX,MUX2);
		CLRBIT(ADMUX,MUX3);
		CLRBIT(ADMUX,MUX4);
		break;
	}
	
	// Setting prescaler to 128
	SETBIT(ADCSRA,ADPS0);
	SETBIT(ADCSRA,ADPS1);
	SETBIT(ADCSRA,ADPS2);
	
	// After preparing registers, enable ADC
	SETBIT(ADCSRA,ADEN);	
}


/*****************************************************************************
* Function Name: ADC_read
* Purpose      : Read ADC digital value
* Parameters   : Channel
* Return value : Void
*****************************************************************************/
uint16_t ADC_read(ADC_channel_t channel){
	uint16_t value = 0;
	// Start conversion
	SETBIT(ADCSRA,ADSC);
	// Wait until conversion finish
	while (READBIT(ADCSRA,ADSC) == 1) {}
	
	/*
	* ADCH  x  x  x  x  x  x  b9 b8
	* ADCL  b7 b6 b5 b4 b3 b2 b1 b0
	* ADCL || (ADCH << 8 ) == x  x  x  x  x  x  b9 b8 b7 b6 b5 b4 b3 b2 b1 b0
	*/
	value = ADCL;
	value |= (ADCH << 8);
	return value;
}