// eX43 PArtie 1//
#include "my_header.h"

int main (void)
{
	int S1=3, n = 0;
	
	while (n<146)
	{
		S1= 3+3*n;
		
		n = n+1;
	}
	return 0;
	
}							  

// Ex43 Partie 2 //

int main (void)
{
	int S2=3, n = 0;
	
	while (3*n<9876)
	{
		S2= 3+3*n;
		
		n = n+1;
	}
	return 0;
	
}				

// Ex43 Partie 3 //

#include <stdlib.h>

int main (void)

{
	 int S3=0, n=0;
			   
	 while (n<12)
	 {
		 S3= S3+ rand()%10;
	 	 n=n+1;
	 }
	 

    return 0;
}


// Ex43 PArtie 4 //
int main (void)
{
	int S4=0, n=0,a=0;
	
	while (a<50&& n<=20)
	{
		if(a%3==0 || a%7==0)
		{
			S4= S4+a;
			n=n+1 ;
		}
		a++;
	}
	
	return 0;
}


