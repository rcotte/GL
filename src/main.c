// eX43 PArtie 1//
#include "my_header.h"

int main (void)
{
	int S1=0, n = 0;
	
	while (n>0)
	{
		S1= S1 + n;
		
		n = n+1;
	}
	return 0;
	
}							  

// Ex43 Partie 2 //

int main (void)
{
	int S2=0, n = 0;
	
	while (3*n<9876)
	{
		S2= S2 +n;
		
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

