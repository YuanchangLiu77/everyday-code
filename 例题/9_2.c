#include <stdint.h>
#include <stdio.h>
#include <avr/io.h> 
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void uart_setup(void);
void uart_put_byte(unsigned char byte_val);
void uart_printf(const char * fmt, ...);

void setup(void) {
    //	(a) Initialise Timer 1 in normal mode so that it overflows 
    //	with a period of approximately 1.0 seconds.
   TCCR1A=0;
    //	Hint: use the table you completed in a previous exercise.
   TCCR1B=4;
    //	(b) Enable timer overflow for Timer 1.
   TIMSK1=1;
    //	(c) Turn on interrupts.
   sei();
    //	(d) Send a debugging message to the serial port using
    //  the uart_printf function defined below. The message should consist of 
    //  your student number, "n10369236", followed immediately by a comma, 
    //  followed by the pre-scale factor that corresponds to a timer overflow 
    //  period of approximately 1.0 seconds. Terminate the 
    //  debugging message with a carriage-return-linefeed pair, "\r\n".
    uart_printf("n10369236,256\r\n");
}

//	(e) Create a volatile global variable called .
//	The variable should be a 32-bit unsigned integer of type . 
//	Initialise the variable to 0.
volatile uint32_t overflow_count=0;
// INSERT GLOBAL VARIABLE HERE

//	(f) Define an interrupt service routine to process timer overflow
//	interrupts for Timer 1. Every time the interrupt service
//	routine is called, overflow_count should increment by 1.
ISR(TIMER1_OVF_vect){
    overflow_count++;
}
// INSERT ISR HERE

//	(g) Define a function called get_current_time which has
//	no parameters, but returns a value of type double which contains
//	the total elapsed time measured up to the time at which it is called.
//	Use the method demonstrated in the Topic 9 lecture to compute the
//	elapsed time, taking into account the fact that the timer counter has 
//	16 bits rather than 8 bits.
double get_current_time(void){
    double time = ( overflow_count * 65536.0 + TCNT1 ) * 256.0  /16000000.0;
    return time;
}
// INSERT FUNCTION HERE

// -------------------------------------------------
// Helper functions.
// -------------------------------------------------

// Make sure this is not too big!
char buffer[100];

void uart_setup(void) {
#define BAUD (9600)
#define UBRR (F_CPU / 16 / BAUD - 1)
    UBRR0H = UBRR >> 8;
    UBRR0L = UBRR & 0b11111111;
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);
    UCSR0C = (3 << UCSZ00);
}

void uart_printf(const char * fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    for (int i = 0; buffer[i]; i++) {
        uart_put_byte(buffer[i]);
    }
}

#ifndef __AMS__
void uart_put_byte(unsigned char data) {
    while (!(UCSR0A & (1 << UDRE0))) { /* Wait */ }
    UDR0 = data;
}
#endif

int main() {
    uart_setup();
    setup();

    for (;;) {
        double time_now = get_current_time();
        uart_printf("Elapsed time = %d.%03d\r\n", (int)time_now, (int)((time_now - (int)time_now) * 1000));
        _delay_ms(1000);
    }

    return 0;
}
