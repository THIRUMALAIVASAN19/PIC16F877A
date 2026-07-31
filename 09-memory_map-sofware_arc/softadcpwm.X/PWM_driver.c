#include <xc.h>
unsigned int adc_calibrated_data;
void PWM_INTIALIZATION()
{
    TRISC=0xFB;// setting RC2 pin as outpur mode for ccp1 configuration
    CCP1CON=0x0C; // 0000 1100 PWM mode
    CCPR1L=0x2E;// 0010 1110
    PR2=0x5E;//0101 1110 PWM period
    T2CON=0x06;//0000 0110 timer prescale value and timer enable
}
void PWM_configuration()
{
     CCPR1L =(adc_calibrated_data >> 2);
     CCP1CON =((0xCF & CCP1CON) |((adc_calibrated_data & 0x03)<< 4));     
}