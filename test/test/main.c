#define F_CPU 9600000UL // 9.6Mhz
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB = (1<<DDB3);//Set Pin As Output
	while (1)
	{
		PORTB = PORTB ^ 0x08;//Toggle Pin3
		_delay_ms(1000);
	}
}