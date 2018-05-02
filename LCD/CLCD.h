/*
 * CLCD.h
 *
 * Created: 2018-02-28 오후 2:23:51
 *  Author: 6층교수실PC
 */ 

#ifndef CLCD_H_
#define CLCD_H_

#define PORT_DATA		PORTC
#define PORT_CONTROL	PORTB
#define DDR_DATA		DDRC
#define DDR_CONTROL		DDRB

#define RS_PIN	5
#define RW_PIN	6
#define E_PIN	7

#define COMMAND_CLEAR_DISPLAY	0x01
#define COMMAND_RETURN_HOME		0x02
#define COMMAND_SHIFT_LEFT		0x18
#define COMMAND_SHIFT_RIGHT		0x1C

#define COMMAND_8_BIT_MODE		0x38
#define COMMAND_4_BIT_MODE		0x28

#define COMMAND_DISPLAY_ON_OFF_BIT	2
#define COMMAND_CURSOR_ON_OFF_BIT	1
#define COMMAND_BLINK_ON_OFF_BIT	0

void LCD_pulse_enable(void);
void LCD_write_data(uint8_t data);
void LCD_write_command(uint8_t command);
void LCD_clear(void);
void LCD_init(void);
void LCD_write_string(char *string);
void LCD_goto_XY(uint8_t row, uint8_t col);

#endif /* CLCD_H_ */