#include <REGX51.H>
#define segment P2

void delay(unsigned int dly);
	
void main (void){
													/*0		  1			2			3			4			5			6			7			8			9*/
	unsigned int nums[10] = {0x3f, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
	unsigned int loop = 0;
	while(1){/*infinite loop*/
		for(loop = 0; loop < 10; loop++){
			segment = nums[loop];
			delay(50);
		}
	}
}

void delay(unsigned int dly){
	unsigned int loop = 0;
	unsigned int delay_gen = 0;
	for(loop = 0; loop < dly; loop++){
		for (delay_gen = 0; delay_gen < 1000; delay_gen++); /*delay*/
	}
}