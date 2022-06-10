#include <REGX51.H>
#define segment P2
sbit dis1_cc = P3^0; 
sbit dis2_cc = P3^1; 

void delay(unsigned int dly);

void main(void) {
	
	unsigned int nums[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};/*display 0~9*/
	unsigned int loop = 0, loop2;
	
	while(1){/*infinite loop*/
		for(loop = 0; loop < 100; loop++){
			loop2 = loop % 10;	//value of ones digit
			
			dis1_cc = 1;	//tens digit off
			dis2_cc = 0;	//ones digit on
			segment = nums[loop2];
			delay(20);
			
			loop2 = loop / 10;	//value of tens digit
			dis1_cc = 0;	//tens digit on
			dis2_cc = 1;	//ones digit off
			segment = nums[loop2];
			delay(20);
		}
	}
}
	
void delay(unsigned int dly){
	unsigned int loop = 0;
	unsigned int delay_gen = 0;
	for(loop = 0; loop < dly; loop++){
		for (delay_gen = 0; delay_gen < 1000; delay_gen++);
	}
}