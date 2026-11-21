#define F_CPU 160000000UL
#include<avr/io.h>
#include <Util/delay.h>
int main(void)
{
DDRD|=(1<<PB5); 
while(1)
{
  PORTB |=(1<<PB5);
  _delay_ms(1000);
  PORTB &=~(1<<PB5);
  _delay_ms(1000);

}
  return 0;
}