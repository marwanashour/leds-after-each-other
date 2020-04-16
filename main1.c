/*
 * File:   main1.c
 * Author: MARWAN
 *
 * Created on April 17, 2020, 12:34 AM
 */


#include <avr/io.h>

#include "header.h"
#include <util/delay.h>
#include "header.h"
#include "lcd.h"
int main(void) {
    LCD_Init();
    LCD_Clear();
    char rtl []= "Right to left";
    char ltr []= "Left to right";
    setddrb(button0,IN);
    setddrb(button1,IN);
    setddrd(button2,IN);
    setddrc(led0,OUT);
    setddrc(led1,OUT);
    setddrd(led2,OUT);
    int flag0=0;
    int flag1=0;
    /* Replace with your application code */
    while (1) {
        _delay_ms(100);
        
    if (ispressedb(button0))
    {   flag0=1 ;
      LCD_String(rtl);
      while(flag0==1)
      { _delay_ms(100);  // for the button 2
      
        setportC(led0);
        _delay_ms(3000);
        resetportC(led0);
        setportC(led1);
        _delay_ms(3000);
        resetportC(led1);
        setportD(led2);
        _delay_ms(3000);
        resetportD(led2);
        
        if(ispressedd(button2)) //stop
    { flag0=0;
    LCD_Clear();
    }
      }
    }
    
    
       if (ispressedb(button1))
    {   flag1=1 ;
    LCD_String(ltr);
      while(flag1==1)
      { _delay_ms(100);  // for the button 2
      
        setportD(led2);
        _delay_ms(3000);
        resetportD(led2);
        setportC(led1);
        _delay_ms(3000);
        resetportC(led1);
        setportC(led0);
        _delay_ms(3000);
        resetportC(led0);
        
        
        
        if(ispressedd(button2)) //stop
    { flag1=0;
    LCD_Clear();
    }
      }
    }    
        
        
    }
}
