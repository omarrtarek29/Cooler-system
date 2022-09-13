/*
 * APP.h
 *
 * Created: 8/31/2022 7:22:38 PM
 *  Author: omart
 */ 


#ifndef APP_H_
#define APP_H_


#include "../ECUAL/LCD/LCD.h"
#include "../ECUAL/SEVEN_SEG/SEVEN_SEG.h"
#include "../ECUAL/LM35/LM35.h"
#include "../ECUAL/LED/LED.h"
#include "../ECUAL/BUZZER/BUZZER.h"
#include "../SERVICES/PWM/PWM.h"


void APP_init(void);
void APP_loop(void);


#endif /* APP_H_ */