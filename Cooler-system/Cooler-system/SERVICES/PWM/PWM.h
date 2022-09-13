/*
 * PWM.h
 *
 * Created: 9/12/2022 7:19:26 PM
 *  Author: omart
 */ 


#ifndef PWM_H_
#define PWM_H_


#include "../../MCAL/TIMER/TIMER0.h"
#include "../../MCAL/DIO/DIO.h"


typedef enum{
	NON_INVERTING,
	INVERTING
}PWM_mode_t;

void PWM_TIMER0_init(PWM_mode_t mode);
void PWM_TIMER0_setDutyCycle(uint8_t dc);

#endif /* PWM_H_ */