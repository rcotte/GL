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
	int dist[10]= {1,5,7,15,22,45,50,69,80};
	int A[6]= {1,13,3,8,5,11};
	int B[6]= { 1,2,3,4,5,6};
	int mirroir[4]={6,3,0,0};
	int i, i2,i3,i4,i5,n;
	
	// Partie 1
	
	for (i =0; i<10; i++)
		
	{
		if(bin[i] < SEUIL)
		{
			bin[i] = 0;
		}
		
		else
			bin[i]=1;
		
	}
	// Partie 2 
	
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
	// Partie 3 
	
	for(i3=0;i3<10;i3++)
	{
		if(i3>0)
		{
			n=i3-1;
			while(n>=0)
			{
				dist[i3]=dist[i3]-dist[n];
				n-- ;
			}
		}
	}
	
	// Partie 4
	
	
	for(i4=0;i4<6;i4++)
	{
		B[i4]=A[5-i4];
	}
	
	//Partie 5
	
	for(i5=0;i5<2;i5++)
	{
		mirroir[i5+2]=mirroir[1-i5];
	}
	
		return 0; 
}
	
