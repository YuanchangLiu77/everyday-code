#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#define SET_BIT(reg, pin)			(reg) |= (1 << (pin))
#define CLEAR_BIT(reg, pin)			(reg) &= ~(1 << (pin))
#define WRITE_BIT(reg, pin, value)	(reg) = (((reg) & ~(1 << (pin))) | ((value) << (pin)))
#define BIT_VALUE(reg, pin)			(((reg) >> (pin)) & 1)
#define BIT_IS_SET(reg, pin)		(BIT_VALUE((reg),(pin))==1)

//  Define a parameterless function called led_init which returns nothing.
//
//  The function must enable digital output to a LED connected to the I/O pin 
//  labelled "3" on an Arduino Uno board.
//
//  The function must update only those bits required to enable digital output 
//  to that LED. The function must achieve the required side effect regardless 
//  of the prior state of all registers. In particular, **do not assume** that 
//  memory has previously been initialised with some value, zero or otherwise. 

// INSERT CODE HERE.
void led_init(void){
    SET_BIT(DDRD, PD3);
    //DDRD|=(1<<PD3);
}

//  Define a parameterless function called turn_led_on which returns nothing.
//
//  The function must turn on a LED connected to the I/O pin labelled "3" 
//  on an Arduino Uno board.
//
//  The function must update only those bits required to turn on the LED. The 
//  function must achieve the required side effect regardless of the prior 
//  state of all registers. 

// INSERT CODE HERE.
void turn_led_on(void){
    SET_BIT(PORTD, PD3);
    //PORTD|=(1<<3);
}

//  Define a parameterless function called turn_led_off which returns nothing.
//
//  The function must turn off a LED connected to the I/O pin labelled "3" 
//  on an Arduino Uno board.
//
//  The function must update only those bits required to turn off the LED. The 
//  function must achieve the required side effect regardless of the prior 
//  state of all registers. 

void turn_led_off(void){
    CLEAR_BIT(PORTD, PD3)	
    //PORTD&=~(1<<3);
}


void simulate_other_setup();

int main(void) {
    simulate_other_setup();
    led_init();

    while(1) {
        turn_led_on();
        _delay_ms(500);

        turn_led_off();
        _delay_ms(500);
    } 
}

void simulate_other_setup(void) {
    //  Simulate situation where other important setup actions have been 
    //  performed prior to calling our functions.
    srand(17405);
     DDRB = rand() & 255;
     PINB = rand() & 255;
    PORTB = rand() & 255;
     DDRC = rand() & 255;
     PINC = rand() & 255;
    PORTC = rand() & 255;
     DDRD = rand() & 255;
     PIND = rand() & 255;
    PORTD = rand() & 255;
}