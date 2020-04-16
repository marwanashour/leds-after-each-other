/*
 * File:   Functions.c
 * Author: MARWAN
 *
 * Created on April 10, 2020, 9:57 PM
 */


#include <xc.h>
#include "header.h"
// set specific pin in specific port 
void setportA(int pin)
{
    PORTA |= (1<<pin);
}
void setportB(int pin)
{
    PORTB |= (1<<pin);
}
void setportC(int pin)
{
    PORTC |= (1<<pin);
}
void setportD(int pin)
{
    PORTD |= (1<<pin);
}


// reset specific pin in specific port 
void resetportA(int pin)
{
    PORTA &= ~(1<<pin);
}
void resetportB(int pin)
{
    PORTB &= ~(1<<pin);
}
void resetportC(int pin)
{
    PORTC &= ~(1<<pin);
}
void resetportD(int pin)
{
    PORTD &= ~(1<<pin);
}

//set ddr pins in or out
void setddra(int pin , int dir)
{ if (dir == IN )
    DDRA &= ~(1<< pin);
else if (dir == OUT )
    DDRA |= (1<< pin);
}

void setddrb(int pin , int dir)
{ if (dir == IN )
    DDRB &= ~(1<< pin);
  if (dir == OUT )
    DDRB |= (1<< pin);
}

void setddrc(int pin , int dir)
{ if (dir == IN )
    DDRC &= ~(1<< pin);
  if (dir == OUT )
    DDRC |= (1<< pin);
}

void setddrd(int pin , int dir)
{ if (dir == IN )
    DDRD &= ~(1<< pin);
  if (dir == OUT )
    DDRD |= (1<< pin);
}






// pin check condition

int ispresseda(int b) {
    if (PINA & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}

int ispressedb(int b) {
    if (PINB & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}


int ispressedc(int b) {
    if (PINC & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}

int ispressedd(int b) {
    if (PIND & (1 << b)) {
        return 1;
    } 
    else {
        return 0;
    }

}