//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#define SEUIL  50
#define SEUILB -100
#define SEUILH 200


int main(void)

{
	unsigned char bin[10]= {25, 120, 65, 85,12,89,200,6,245,180};
	int sat[10]= {152, 25,-65,-125,241, 121,-250,-123, 15,99};
	int i, i2,i3;
	
	for (i =0; i<10; i=i+1)
		
	{
		if(bin[i] < SEUIL)
		{
			bin[i] = 0;
		}
		
		else
			bin[i]=1;
		
	}
	
	for(i2=0; i2<10; i2++)
		
	{
		if(sat[i2]>SEUILH)
		
		{
			sat[i2]=SEUILH;
		}
		
		
		else if(sat[i2]<SEUILB)
		{
			sat[i2]=SEUILB;
		}
	}
	
	return 0;
}
	
