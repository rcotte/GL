//  Copyright (c) 2018 Antoine Tran Tan
//


#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
  
    {
	 unsigned char joeur [6];
	 unsigned char gagnante[6]={tirerNumero,tirerNumero,tirerNumero,tirerNumero,tirerNumero,tirerNumero};
	 unsigned char bon_numero=0;
	 int i,m;
	
	 
	 
	 for (i=0;i<6;i++)
	 {
		 for(m=0;m<6;m++)
		 {
			 if(joeur[i]==gagnante[m])
				 bon_numero++;
		 }
	 }
	 
	 return 0;
	 

	
	}
