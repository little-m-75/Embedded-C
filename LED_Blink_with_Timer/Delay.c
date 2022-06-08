#include "common.h"
#include "delay.h"

void delay(void){
	TMOD = 0x01;
	TL0 = 0xFE;
	TH0 = 0x4B;
	TR0 = 1; //start the timer
	while (TF0 == 0);
	TR0 = 0; //stop the timer
	TF0 = 0; //reset for another round
}