/*
 * SEVEN_SEG.c
 *
 * Created: 8/17/2022 5:52:59 PM
 *  Author: omart
 */ 

#include "SEVEN_SEG.h"


/*****************************************************************************
* Function Name: SEVEN_SEG_init
* Purpose      : Initialize seven segment
* Parameters   : Void
* Return value : Void
*****************************************************************************/
void SEVEN_SEG_init(void){
	// Setting PORTC pins 0-5 as output
	// 0-3 for the number, 4-5 enable pins for the two seven segments
	DIO_init_pin(PORTC_t, PIN0_t, OUTPUT);
	DIO_init_pin(PORTC_t, PIN1_t, OUTPUT);
	DIO_init_pin(PORTC_t, PIN2_t, OUTPUT);
	DIO_init_pin(PORTC_t, PIN3_t, OUTPUT);
	DIO_init_pin(PORTC_t, PIN4_t, OUTPUT);
	DIO_init_pin(PORTC_t, PIN5_t, OUTPUT);
}


/*****************************************************************************
* Function Name: SEVEN_SEG_write
* Purpose      : Write number on two seven segments
* Parameters   : Number
* Return value : Void
*****************************************************************************/
void SEVEN_SEG_write(uint8_t number){
	uint8_t digit = number % 10;
	EN1(0); EN2(1);
	D(READBIT(digit,3)); C(READBIT(digit,2)); B(READBIT(digit,1)); A(READBIT(digit,0));
	delay_ms(50);
	
	digit = number / 10;
	EN1(1); EN2(0);
	D(READBIT(digit,3)); C(READBIT(digit,2)); B(READBIT(digit,1)); A(READBIT(digit,0));
	delay_ms(50);
}