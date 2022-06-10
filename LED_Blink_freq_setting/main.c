#include "common.h"
#include "delay.h"

sbit LED = P2^0;
void main(void){
	LED = 0;
	while (1){
		LED = ~LED;
		delay();
	}
}