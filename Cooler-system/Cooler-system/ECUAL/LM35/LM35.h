/*
 * LM35.h
 *
 * Created: 9/12/2022 11:23:27 AM
 *  Author: omart
 */ 


#ifndef LM35_H_
#define LM35_H_


#include "../../MCAL/ADC/ADC.h"


void LM35_init(ADC_channel_t channel, VREF_selection_t select);
uint16_t LM35_read(ADC_channel_t channel);


#endif /* LM35_H_ */