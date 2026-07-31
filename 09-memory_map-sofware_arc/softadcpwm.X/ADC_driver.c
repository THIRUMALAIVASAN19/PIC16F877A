/*
 * File:   ADC.c
 * Author: Admin
 *
 * Created on June 10, 2025, 8:51 PM
 */


#include <xc.h>
unsigned int adc_calibrated_data;
unsigned int adc_volt,m,n;
unsigned int adc_high,adc_low;
void ADC_INTIALIZATION()
{
   
    ADCON1=0x8E;// AN0 pin,all pin are digital expect AN0,right justification
    ADCON0=0x81;// 1000 0001 ADC power on ,AN0 Analog channel selection,FOSC/32 
    __delay_ms(10);// Acqution time
}
void ADC()
{
        ADCON0 |=0x04;// bit manipulation 1000 0001 | 0000 0100 = 1000 0101
        while(ADCON0 & 0x04);// loop until  1000 0001 = 0000 0000
        adc_high= ADRESH;// MSB bit ADRESH register
        adc_low=ADRESL;// LCB bit ADRESL register
        adc_volt=(adc_high << 8)+adc_low;// raw data
        adc_calibrated_data=((double)adc_volt*338.0)/1023.0;// calibrated data
       lcd_number_convert((unsigned int)adc_calibrated_data);// data to LCD
        
}