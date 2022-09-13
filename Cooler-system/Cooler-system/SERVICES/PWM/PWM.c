/*
 * PWM.c
 *
 * Created: 9/12/2022 7:19:34 PM
 *  Author: omart
 */ 

#include "PWM.h"


/*****************************************************************************
* Function Name: PWM_TIMER0_init
* Purpose      : Initialize Timer0 to work on PWM mode
* Parameters   : Mode
* Return value : Void
*****************************************************************************/
void PWM_TIMER0_init(PWM_mode_t mode){
	// Set OCR0 pin as output
	DIO_init_pin(PORTB_t, PIN3_t, OUTPUT);
	
	// FOC0 when PWN is on
	CLRBIT(TCCR0,FOC0);
	// FAST PWM
	SETBIT(TCCR0,WGM00);
	SETBIT(TCCR0,WGM01);
	
	switch (mode)
	{
		case NON_INVERTING:
		CLRBIT(TCCR0,COM00);
		SETBIT(TCCR0,COM01);
		break;
		case INVERTING:
		SETBIT(TCCR0,COM00);
		SETBIT(TCCR0,COM01);
		break;
	}
	
	// No prescaler
	SETBIT(TCCR0,CS00);
	CLRBIT(TCCR0,CS01);
	CLRBIT(TCCR0,CS02);
}


/*****************************************************************************
* Function Name: PWM_TIMER0_setDutyCycle
* Purpose      : Setting PWM duty cycle
* Parameters   : Duty cycle (uint8)
* Return value : Void
*****************************************************************************/
void PWM_TIMER0_setDutyCycle(uint8_t dc){
	/*
	*							OC					MAX						  OC
	*--------------------------						--------------------------
	*
	*						   ---------------------						  ---------------------
	*
	*	Duty cycle = OC / MAX ----> OC = duty cycle * MAX
	*/
	
	OCR0 = (uint8_t)(dc * 2.55);
}