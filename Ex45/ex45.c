//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"
#include <stdio.h>

int main(void)
{
	short int n=0, points=0 ;
	n= LancerDe();
	
	
	if(n==1)
	{
		printf("fin du tour");
	}
	
	else
	{
	    
		while(n!=1)
	{
		
		if(n==6||n==4||n==2)
		{
			points = points + n;
			
		}
		else if(n==3)
		{
			points = points * 2;
		}
		
		else if(n==5 && point>=2)
		{
			point = points - 2;
			
		}
		else if(n == 5 && points <2)
		{
			points =0;
		}
		n = LancerDe();
	}
	
	return 0;
	}
}
© 2018 GitHub, Inc.
