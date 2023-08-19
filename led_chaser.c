// Author : Omar A. Akl

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/delay.h>

int main() {
	
	// Defining PORTD as OUTPUT
	DDRD = 0xFF;
	PORTD = 0x00;
	
	while (1) {
		
		// turns the LED on PIN0 ON
		PORTD |= (1 << PIND0);

		// waits for 50 ms
		_delay_ms(50);
		

		// turns the LED on PIN0 OFF
		PORTD &= ~(1 << PIND0);
		_delay_ms(50);
		

		// PIN1
		PORTD |= (1 << PIND1);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND1);
		_delay_ms(50);
		
		
		// PIN2
		PORTD |= (1 << PIND2);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND2);
		_delay_ms(50);
		
		
		// PIN3
		PORTD |= (1 << PIND3);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND3);
		_delay_ms(50);
		
		
		// PIN4
		PORTD |= (1 << PIND4);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND4);
		_delay_ms(50);
		
		
		// PIN5
		PORTD |= (1 << PIND5);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND5);
		_delay_ms(50);
		
		
		// PIN6
		PORTD |= (1 << PIND6);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND6);
		_delay_ms(50);
		
		
		// PIN7
		PORTD |= (1 << PIND7);
		_delay_ms(50);
		
		PORTD &= ~(1 << PIND7);
		_delay_ms(50);
		
		
		// turns all LEDS ON
		
		PORTD |= (1 << PIND0);
		PORTD |= (1 << PIND1);
		PORTD |= (1 << PIND2);
		PORTD |= (1 << PIND3);
		PORTD |= (1 << PIND4);
		PORTD |= (1 << PIND5);
		PORTD |= (1 << PIND6);
		PORTD |= (1 << PIND7);
		
		_delay_ms(50);
		
		
		// turns all LEDS OFF
		
		PORTD &= ~(1 << PIND0);
		PORTD &= ~(1 << PIND1);
		PORTD &= ~(1 << PIND2);
		PORTD &= ~(1 << PIND3);
		PORTD &= ~(1 << PIND4);
		PORTD &= ~(1 << PIND5);
		PORTD &= ~(1 << PIND6);
		PORTD &= ~(1 << PIND7);
		
		_delay_ms(50);
		
	}
	
	
	return 0;
}