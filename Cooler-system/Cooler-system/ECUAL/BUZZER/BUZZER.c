/*
 * BUZZER.c
 *
 * Created: 9/13/2022 2:47:18 PM
 *  Author: omart
 */ 


#include "BUZZER.h"


/*****************************************************************************
* Function Name: BUZZER_init
* Purpose      : Initialize buzzer
* Parameters   : Register name and pin number
* Return value : Void
*****************************************************************************/
void BUZZER_init(REG_name_t port, PIN_num_t pin){
	DIO_init_pin(port, pin, OUTPUT);
}


/*****************************************************************************
* Function Name: BUZZER_on
* Purpose      : Turn buzzer on
* Parameters   : Register name and pin number
* Return value : Void
*****************************************************************************/
void BUZZER_on(REG_name_t port, PIN_num_t pin){
	DIO_write(port, pin, HIGH);
}


/*****************************************************************************
* Function Name: BUZZER_off
* Purpose      : Turn buzzer off
* Parameters   : Register name and pin number
* Return value : Void
*****************************************************************************/
void BUZZER_off(REG_name_t port, PIN_num_t pin){
	DIO_write(port, pin, LOW);
}
