/*
 * APP.c
 *
 * Created: 8/31/2022 7:22:31 PM
 *  Author: omart
 */ 

#include "APP.h"


/*****************************************************************************
* Function Name: APP_init
* Purpose      : Initialize app
* Parameters   : Void
* Return value : Void
*****************************************************************************/
void APP_init(void){
	LCD_init();
	SEVEN_SEG_init();
	LM35_init(ADC0_t, VCC);
	LED_init(PORTB_t, PIN0_t);
	BUZZER_init(PORTB_t, PIN1_t);
	PWM_TIMER0_init(NON_INVERTING);
}


/*****************************************************************************
* Function Name: APP_loop
* Purpose      : Keep app running continuously
* Parameters   : Void
* Return value : Void
*****************************************************************************/
void APP_loop(void){
	uint16_t temp;
	uint8_t motor_dc = 0;
	while (1)
	{
		temp = LM35_read(ADC0_t);
		// Write temperature on the first line
		LCD_write_command(0x80);
		LCD_write_string((uint8_t *)"Temp: ");
		LCD_write_number(temp);
		// Write cooler speed on the second line
		LCD_write_command(0xC0);
		LCD_write_string((uint8_t *)"Speed: ");
		LCD_write_number(motor_dc);
		LCD_write_data('%');
		
		// Seven segment can write to 99 only, so if we exceeded 99, just make it still
		if (temp <= 99)
		{
			SEVEN_SEG_write(temp);
		}
		else
		{
			SEVEN_SEG_write(99);
		}
		
		/*
		*	50 > temp >= 35 ----> DC = 50%
		*	temp >= 50 ----> DC = 100%
		*	We can map DC to 35 --> 50% when temp is lower than 40
		*	And map DC to 50 --> 100% when temp is higher than 40 
		*/
		if (temp < 35)
		{
			motor_dc = 0;
			LED_off(PORTB_t, PIN0_t);
			BUZZER_off(PORTB_t, PIN1_t);
		}
		else if (temp >= 35 && temp <= 40)
		{
			/*
			*	35 ----> 50%
			*	temp --> x%
			*	x = temp * 50/35
			*/
			motor_dc = temp * 50/35.0;
			LED_on(PORTB_t, PIN0_t);
			BUZZER_on(PORTB_t, PIN1_t);
		}
		else if (temp > 40 && temp < 50)
		{
			/*
			*	50 ----> 100%
			*	temp --> x%
			*	x = temp * 100/50
			*/
			motor_dc = temp * 100/50.0;
			LED_on(PORTB_t, PIN0_t);
			BUZZER_on(PORTB_t, PIN1_t);
		}
		// If temp >= 50, DC will stay 100
		else
		{
			motor_dc = 100;
			LED_on(PORTB_t, PIN0_t);
			BUZZER_on(PORTB_t, PIN1_t);
		}
		PWM_TIMER0_setDutyCycle(motor_dc);
	}
}
