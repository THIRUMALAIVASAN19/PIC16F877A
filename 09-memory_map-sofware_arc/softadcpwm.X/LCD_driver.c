#include <xc.h>
#define _XTAL_FREQ 6000000
void lcd_command(unsigned char i)
{
    PORTB&=~0x08;// 0000 1000 reset =1 at RC3
    PORTD=i;// data 
    PORTB|=0x02;// 0000 0001 enable = 1 at RC0    
    PORTB&=~0x02;// 0000 0001 enable = 0 at RC0
    __delay_ms(100);// delay
}
void lcd_data(unsigned char i)
{
    PORTB|=0x08;// 0000 1000 reset =1 at RC3
    PORTD=i;// data 
    PORTB|=0x02;// 0000 0001 enable = 1 at RC0    
    PORTB&=~0x02;// 0000 0001 enable = 0 at RC0    
    __delay_ms(100); // delay
}
   void LCD_INTIALIZATION()
{
    TRISB=0x00;// 0000 0000 set PORTC as output
    TRISD=0x00;// 0000 0000 set PORTD as output
    PORTD=0x00;
    PORTB=0x00;
    lcd_command(0x30);// 0011 0000 LCD INTIALIZATION
    __delay_ms(100);// delay
     lcd_command(0x30);//0011 0000 LCD INTIALIZATION
    __delay_ms(100);// delay
     lcd_command(0x30);//0011 0000 LCD INTIALIZATION
    __delay_ms(100);// delay
    lcd_command(0x38);// 0011 1000
    __delay_ms(100);// delay
    lcd_command(0x0C);//0000 1100 display on cursor off
    __delay_ms(100);//delay
     lcd_command(0x01);//0000 0001 clear display
    __delay_ms(100);// delay
}
void lcd_number_convert(unsigned int adc_calibrated_data )
{ 
    int j = 0, s;
    unsigned int m = adc_calibrated_data;
    unsigned char k[4]; 
    while (m != 0)
    {
        s = m % 10;
        k[j] = s;
        j++;
        m /= 10;
    }
    if (j == 0)
    {
        k[0] = 0;
        j = 1;
    }
    lcd_command(0x80);  // To display 
    if (j == 3)
    {
        lcd_data(0x30 + k[2]);
        lcd_data(0x30 + k[1]);
        lcd_data(0x30 + k[0]);
    }
    else if (j == 2)
    {
        lcd_data(' ');
        lcd_data(0x30 + k[1]);
        lcd_data(0x30 + k[0]);
    }
    else if (j == 1)
    {
        lcd_data(' ');
        lcd_data(' ');
        lcd_data(0x30 + k[0]);
    }
    lcd_data('v'); // Display 'v'
}
