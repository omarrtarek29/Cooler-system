/*
 * BUZZER.h
 *
 * Created: 9/13/2022 2:47:07 PM
 *  Author: omart
 */ 


#ifndef BUZZER_H_
#define BUZZER_H_


#include "../../MCAL/DIO/DIO.h"


void BUZZER_init(REG_name_t port, PIN_num_t pin);
void BUZZER_on(REG_name_t port, PIN_num_t pin);
void BUZZER_off(REG_name_t port, PIN_num_t pin);


#endif /* BUZZER_H_ */