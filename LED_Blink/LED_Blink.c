#include <REGX51.H>
sbit led = P2^0; /*syntax for single bit out pin*/

void main (void) {
	
	unsigned int delay = 0;
	while (1){  //infinite loop alternative-- for(;;)
		led = 1; //led on
		for (delay = 0; delay < 10000; delay++); //generates the delay
		led = 0; //led off
		for (delay = 0; delay < 10000; delay++); //generates the delay
	}
	
}