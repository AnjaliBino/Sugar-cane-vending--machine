#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Configure pins for LEDs as outputs
    DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2);  // LEDs connected to PB0, PB1, PB2 (Pins 8, 9, 10)

    // Configure pins for switches as inputs with internal pull-up resistors
    DDRD &= ~((1 << PD7) | (1 << PD6) | (1 << PD5)); // Switches connected to PD7, PD6, PD5 (Pins 7, 6, 5)
    PORTD |= (1 << PD7) | (1 << PD6) | (1 << PD5);  // Enable pull-up resistors for PD7, PD6, PD5

    while (1)
    {
        // Check Switch 1 (connected to PD7)
        if (!(PIND & (1 << PD7))) // Switch 1 pressed (logic LOW)
        {
            // Blink LED 1 (connected to PB0)
            PORTB |= (1 << PB0); // Turn on LED
            _delay_ms(500);      // Wait for 500ms
            PORTB &= ~(1 << PB0); // Turn off LED
            _delay_ms(500);      // Wait for 500ms
        }
        else
        {
            PORTB &= ~(1 << PB0); // Turn off LED 1 when the switch is not pressed
        }

        // Check Switch 2 (connected to PD6)
        if (!(PIND & (1 << PD6))) // Switch 2 pressed (logic LOW)
        {
            // Blink LED 2 (connected to PB1)
            PORTB |= (1 << PB1); // Turn on LED
            _delay_ms(500);      // Wait for 500ms
            PORTB &= ~(1 << PB1); // Turn off LED
            _delay_ms(500);      // Wait for 500ms
        }
        else
        {
            PORTB &= ~(1 << PB1); // Turn off LED 2 when the switch is not pressed
        }

        // Check Switch 3 (connected to PD5)
        if (!(PIND & (1 << PD5))) // Switch 3 pressed (logic LOW)
        {
            // Blink LED 3 (connected to PB2)
            PORTB |= (1 << PB2); // Turn on LED
            _delay_ms(500);      // Wait for 500ms
            PORTB &= ~(1 << PB2); // Turn off LED
            _delay_ms(500);      // Wait for 500ms
        }
        else
        {
            PORTB &= ~(1 << PB2); // Turn off LED 3 when the switch is not pressed
        }
    }

    return 0;
}
