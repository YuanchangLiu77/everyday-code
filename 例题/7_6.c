#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

//  Define a parameterless function called setup_io which returns nothing.
//
//  The function must enable digital input from two pull-down switches, as 
//  follows:
//  *   Connect Button 1 to I/O pin labelled "A0".
//  *   Connect Button 2 to I/O pin labelled "A3".
//
//  In addition to this, enable digital output to a collection of LEDs, as 
//  follows:
//  *   Connect LED 0 to I/O pin labelled "A5".
//  *   Connect LED 1 to I/O pin labelled "1".
//  *   Connect LED 2 to I/O pin labelled "2".
//  *   Connect LED 3 to I/O pin labelled "4".
//  *   Connect LED 4 to I/O pin labelled "7".
//  *   Connect LED 5 to I/O pin labelled "8".
//  *   Connect LED 6 to I/O pin labelled "11".
//  *   Connect LED 7 to I/O pin labelled "12".
//
//  The function must update only those bits required to enable digital I/O 
//  using the designated pins. The function must achieve the required side 
//  effect regardless of the prior state of all registers. In particular, 
//  **do not assume** that memory has previously been initialised with some 
//  value, zero or otherwise. 

void setup_io(void){
    DDRC&=~((1<<0)|(1<<3));
    DDRC|=(1<<5);
    DDRD|=(1<<1)|(1<<2)|(1<<4)|(1<<7);
    DDRB|=(1<<0)|(1<<3)|(1<<4);
}


//  Define a parameterless function called button_1_click which returns an 
//  int which indicates that a falling edge has been detected in the signal 
//  coming from I/O pin labelled "A0" on an Arduino Uno 
//  board. This corresponds to a release event on Button 1.
//
//  The function returns 1 if a falling edge is detected in the signal from the 
//  switch, and 0 otherwise.
//
//  You may use a static local variable to monitor the on-going state of the 
//  pin, or you may use a global variable. Either choice is acceptable.

int button_1_click(){
    static unsigned char old_state=0;
    unsigned char curr_state=PINC & (1<<0);
    int result=(old_state!=0)&&(curr_state==0);
    old_state=curr_state;
    return result;
}



//  Define a parameterless function called button_2_click which returns an 
//  int which indicates that a falling edge has been detected in the signal 
//  coming from I/O pin labelled "A3" on an Arduino Uno 
//  board. This corresponds to a release event on Button 2.
//
//  The function returns 1 if a falling edge is detected in the signal from the 
//  switch, and 0 otherwise.
//
//  You may use a static local variable to monitor the on-going state of the 
//  pin, or you may use a global variable. Either choice is acceptable.

int button_2_click(){
    static unsigned char old_state=0;
    unsigned char curr_state=PINC & (1<<3);
    int result=(old_state!=0)&&(curr_state==0);
    old_state=curr_state;
    return result;
}



//  Define a function called show_counter which returns nothing, but expects 
//  a single argument named x which contains an unsigned 8-bit integer. 
//
//  The function must use 8 LEDs, which are connected to I/O pins as indicated
//  in the setup_io function, to display the binary value of the argument.
//  
//  To do this, each of the 8 LEDs must be turned on or off as follows:
//  *  LED 0 must be turned on if and only if bit 0 is set in x.
//  *  LED 1 must be turned on if and only if bit 1 is set in x.
//  *  LED 2 must be turned on if and only if bit 2 is set in x.
//  *  LED 3 must be turned on if and only if bit 3 is set in x.
//  *  LED 4 must be turned on if and only if bit 4 is set in x.
//  *  LED 5 must be turned on if and only if bit 5 is set in x.
//  *  LED 6 must be turned on if and only if bit 6 is set in x.
//  *  LED 7 must be turned on if and only if bit 7 is set in x.
//
//  Other than the digitial I/O pins assigned to the LEDs, no registers or bits 
//  may be altered by this function. 
void show_counter(unsigned char x){
PORTC=(PORTC&~(1<<5))|(((x&(1<<0))>>0)*(1<<5));
PORTD=(PORTD&~(1<<1))|(((x&(1<<1))>>1)*(1<<1));
PORTD=(PORTD&~(1<<2))|(((x&(1<<2))>>2)*(1<<2));
PORTD=(PORTD&~(1<<4))|(((x&(1<<3))>>3)*(1<<4));
PORTD=(PORTD&~(1<<7))|(((x&(1<<4))>>4)*(1<<7));
PORTB=(PORTB&~(1<<0))|(((x&(1<<5))>>5)*(1<<0));
PORTB=(PORTB&~(1<<3))|(((x&(1<<6))>>6)*(1<<3));
PORTB=(PORTB&~(1<<4))|(((x&(1<<7))>>7)*(1<<4));
}

void setup_builtin_led(void);
void toggle_builtin_led(void);
void simulate_other_setup();

int main(void) {
    simulate_other_setup();
    
    setup_io();

    unsigned char x = 0;

    while(1) {
        if (button_1_click() ) {
            x++;
        }
        
        if (button_2_click() ) {
            x--;
        }
        
        show_counter(x);
    } 
}

void setup_builtin_led(void) {
    DDRB |= (1<<5);
}

void toggle_builtin_led(void) {
    PORTB ^= (1<<5);
}

void simulate_other_setup(void) {
    //  Simulate situation where other important setup actions have been 
    //  performed prior to calling our functions.
    srand(864);
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
