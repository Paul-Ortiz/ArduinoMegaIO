/*
 * File:   main.c
 * Author: paul
 *
 * Created on October 22, 2025, 8:08 PM
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>


int main(void) {
    /* Replace with your application code */
    DDRB = (1<<PB4);
    PORTB = (1<<PB6)|(1<<PB5);
    _delay_ms(1);
    while (1) {
        bool A = false;
        bool B = false;
        bool F = false;
        
        
        A = PINB & (1 << PB6); // Leer entrada bit 6 
        B = PINB & (1 << PB5); // Leer entrada bit 5
        F = (A | B);           // Funcion logica OR
        PORTB = (F<<PB4);
        _delay_ms(500);
        
        //PORTB = (0<<PB7);
        //_delay_ms(1000);
    }
}
