#include<reg51.h>

sbit pin1=P0^0;

void delay()    //delay by timer function
{
	TMOD=0x01;    //select timer 0 mode 1
	TH0=0xFC;     //load FC67 for 1000 Count
	TL0=0x67;
	TCON=0x10;    //start timer 0
	
	while(!(TCON & 0x20));
	{
		TCON &=~0x10;    //stop timer 0
		TCON &=~0x20;    //clear overflow flag
	}
}

void timer_delay(int ms)
{
	int i;
	for(i=0;i<ms;i++)
		delay();
}

void main()
{
	pin1=0;
	while(1)
	{
		pin1=1;
		timer_delay(10000);
		pin1=0;
		timer_delay(10000);
	}
}