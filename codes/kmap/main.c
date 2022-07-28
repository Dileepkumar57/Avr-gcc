#include <avr/io.h>

#include <util/delay.h>

#include <stdbool.h>




int main (void)
{
bool A,B,C,D;

bool w,x,y,z;


 DDRD = 0b00111100;

 DDRB = 0b00100000;
 
 while(1){




  PORTB = ((1 <<  PB5));

  A=((!w&&!z)||(!y&&!x&&!w));

  B=((!z&&!x&&w)||(!z&&x&&!w));

  C=((!x&&!z&&y)||(!w&&!z&&y));

  D=((z&&!y&&!x&&!w)||(!z&&y&&x&&w));

                PORTD |= (D << 5);

                PORTD |= (C << 4);

                PORTD |= (B << 3);

                PORTD |= (A << 2);

                z = (PIND & (1 << PIND6)) == (1 << PIND6);

                y = (PIND & (1 << PIND7)) == (1 << PIND7);

                x = (PINB & (1 << PINB0)) == (1 << PINB0);

                w = (PINB & (1 << PINB1)) == (1 << PINB1);

  PORTB = ((0 <<  PB5));
}
  return 0;
}
