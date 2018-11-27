//  Copyright (c) 2018 Antoine Tran Tan
//


#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)
  
    {
	 unsigned char score[100];	
	 unsigned char joueur [6]={12,2,35,9,20,12};
	 initialiserTirage();
	 unsigned char gagnante[6]={15,4,1,2,3,5};  
	 unsigned char bon_numero=0,score_max=0;
	 int i,m,i1,s,j;
	
	 for(s=0;s<100;s++)
	 {
		 
	 for(i1=0;i1<6;i1++)
		
		gagnante[i1]=tirerNumero();
	  
	 for (i=0;i<6;i++)
	 {
		 for(m=0;m<6;m++)
		 {
			 if(joueur[i]==gagnante[m])
				 bon_numero++;
		 }
		 
		 score[s]=bon_numero;
	 }
	 }
	 
	 for(j=0;j<99;j++)
	 {
		 if (score[j]>>score[j+1])
			
			 score_max=score[j];
	 else
		 score_max=score[j+1];
	 }
			 
	 
	 
	
        return 0;
}
	 