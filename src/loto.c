//  Copyright (c) 2018 Antoine Tran Tan
//


#include "my_header.h"
#include "TP_lib_suite.h"



	 unsigned char joeur [6];
	 unsigned char gagnante[6]={tirerNumero,tirerNumero,tirerNumero,tirerNumero,tirerNumero,tirerNumero};
	 unsigned char bon_numero=0;
	 int i,i1,m;
	
	 unsigned char bon_num(){
		 
	 
	 for (i=0;i<6;i++)
	 {
		 for(m=0;m<6;m++)
		 {
			 if(joeur[i]==gagnante[m])
				 bon_numero++;
		 }
	 }
	 
	 return bon_numero;
	 }



int tirage()
{
	initialiser();
	
	for(i1=0;i1<100;i1++)
		gagnante[i1]=tirerNumero();
return 0;
}


	
