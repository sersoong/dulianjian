/*
 */

#include <mcs51/8051.h>

typedef unsigned int u16;

void delay(u16 i)
{
	while(i--);
}


void keypros()
{
	if(P1_0==0)
	{
		delay(1000);
		if(P1_0==0)
		{
			P0_0=0;
		}else{
            P0_0=1;
		}
		//while(!P1_0);
	} else {
        P0_0=1;
	}
}

void main(void)
{

    // Insert code
    P0_0=1;
	while(1)
	{
		keypros();
	}

}
