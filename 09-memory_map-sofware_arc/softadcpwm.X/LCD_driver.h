#ifndef __LCD_DRIVER_H
#define __LCD_DRIVER_H
#define _XTAL_FREQ 6000000
void LCD_INTIALIZATION();
void lcd_number_convert(unsigned int adc_calibrated_data );
void lcd_command(unsigned char i);
void lcd_data(unsigned char i);
#endif

