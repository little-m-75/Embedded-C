#include "common.h"
#include "delay.h"

void delay(void){ //1ms delay
	TMOD = 0x01;
	TH0 = 0xFC;
	TL0 = 0x67;
	TR0 = 1;
	while (TF0 == 0);
	TR0 = 0;
	TF0 = 0;
}