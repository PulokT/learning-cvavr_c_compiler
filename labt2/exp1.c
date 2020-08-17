/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 10/1/2018
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 16.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>

// Alphanumeric LCD functions
#include <alcd.h>
#include <stdlib.h>
#include <delay.h>
#include <string.h>
// Declare your global variables here

void main(void)
{
char i,j, disp1[16], disp2[16];
DDRA=0xFF;
lcd_init(16);

while (1)
      {
      j=1;
      i=2*++j;
      i|=3;
      i&=5;
      i^=3;
      lcd_clear();
      lcd_gotoxy(0,0);
      itoa(i,disp2);
      strcpy(disp1,"i=");
      strcat(disp1,disp2);
      lcd_puts(disp1);
      delay_ms(10);
      // Place your code here

      }
}
