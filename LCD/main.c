/*
 * LCD.c
 *
 * Created: 2018-05-02 오후 2:20:36
 * Author : stc_164
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>

#include <util/delay.h>

#include <avr/interrupt.h>

#include "CLCD.h"


int main(void)
{
	 PORTC = 0xff;
	 DDRC = 0xff;
	LCD_init();
    /* Replace with your application code */
    while (1) 
    {
		LCD_goto_XY(1,1);
		LCD_write_string("HELLOW");
		_delay_ms(500);
		LCD_goto_XY(2,1);

		LCD_write_string("WORLD3");
		_delay_ms(200);

		LCD_write_string("WORLD4");
		_delay_ms(500);
				LCD_goto_XY(2,1);
				LCD_write_string("HELLOW");
				_delay_ms(500);
				LCD_goto_XY(1,1);
				LCD_write_string("WORLD4");
				_delay_ms(500);

    }
}

