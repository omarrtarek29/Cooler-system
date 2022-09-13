/*
 * ADC.h
 *
 * Created: 9/12/2022 9:50:18 AM
 *  Author: omart
 */ 


#ifndef ADC_H_
#define ADC_H_


#include "../../std_macros.h"
#include "ADC_reg_conf.h"


typedef enum{
	VREF,
	VCC,
	RESERVED,
	INTERNAL_VREF
} VREF_selection_t;


typedef enum{
	ADC0_t,
	ADC1_t,
	ADC2_t,
	ADC3_t,
	ADC4_t,
	ADC5_t,
	ADC6_t,
	ADC7_t
} ADC_channel_t;


void ADC_init(ADC_channel_t channel, VREF_selection_t select);
uint16_t ADC_read(ADC_channel_t channel);

#endif /* ADC_H_ */