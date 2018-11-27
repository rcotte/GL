//  Copyright (c) 2018 Antoine Tran Tan
//


#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
  
    {
	 int joeur [6]={tirernumero(),tirernumero(),tirernumero(),tirernumero(),tirernumero(),tirernumero()};
	 initialiserTirage();
	 int gagnante[6] ={tirernumero(),tirernumero(),tirernumero(),tirernumero(),tirernumero(),tirernumero()};
	 int bon_numero=0;
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
