/*
 * SEVEN_SEG.h
 *
 * Created: 8/17/2022 5:53:05 PM
 *  Author: omart
 */ 


#ifndef SEVEN_SEG_H_
#define SEVEN_SEG_H_


#include "../../MCAL/DIO/DIO.h"
#include "../../SERVICES/DELAY/DELAY_MS.h"


#define A(x)		if (x == 1) DIO_write(PORTC_t, PIN0_t, HIGH); else DIO_write(PORTC_t, PIN0_t, LOW);
#define B(x)		if (x == 1) DIO_write(PORTC_t, PIN1_t, HIGH); else DIO_write(PORTC_t, PIN1_t, LOW);
#define C(x)		if (x == 1) DIO_write(PORTC_t, PIN2_t, HIGH); else DIO_write(PORTC_t, PIN2_t, LOW);
#define D(x)		if (x == 1) DIO_write(PORTC_t, PIN3_t, HIGH); else DIO_write(PORTC_t, PIN3_t, LOW);
#define EN1(x)		if (x == 1) DIO_write(PORTC_t, PIN4_t, HIGH); else DIO_write(PORTC_t, PIN4_t, LOW);
#define EN2(x)		if (x == 1) DIO_write(PORTC_t, PIN5_t, HIGH); else DIO_write(PORTC_t, PIN5_t, LOW);

void SEVEN_SEG_init(void);
void SEVEN_SEG_write(uint8_t number);


#endif /* SEVEN_SEG_H_ */