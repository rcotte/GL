//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

#define SEUIL  50
#define SEUILB -100
#define SEUILH 200

int main(void)

{
	unsigned char bin[10]= {25, 120, 65, 85,12,89,200,6,245,180}; 
	int sat[10]; 
	int i;
	
	for (i =0; i<10; i=i+1)
		
	{
		if(bin[i] < SEUIL)
		{
			bin[i] = 0;
		}
		
		else
			bin[i]=1;
		
	}
	
	
		
	for (i =0; i<10; i=i+1)
	{
		if(sat[i]<SEUILB)
			sat[i] = SEUILB;
		
		else if (sat[i]>SEUILH)
				sat[i] = SEUILH;
		
		else 
			sat[i] = sat[i];
		
		
		
	 return 0;
	}
	
	

	
	
	
   
}
