/*
 * ADC_reg_conf.h
 *
 * Created: 9/12/2022 9:58:33 AM
 *  Author: omart
 */ 


#ifndef ADC_REG_CONF_H_
#define ADC_REG_CONF_H_


// Defining macros for needed registers and pins
#define ADMUX		(*(volatile uint8_t *)(0x27))
#define REFS1		7
#define REFS0		6
#define ADLAR		5
#define MUX4		4
#define MUX3		3
#define MUX2		2
#define MUX1		1
#define MUX0		0


#define ADCSRA		(*(volatile uint8_t *)(0x26))
#define ADEN		7
#define ADSC		6
#define ADATE		5
#define ADIF		4
#define ADIE		3
#define ADPS2		2
#define ADPS1		1
#define ADPS0		0


#define ADCH		(*(volatile uint8_t *)(0x25))
#define ADCL		(*(volatile uint8_t *)(0x24))
#endif /* ADC_REG_CONF_H_ */