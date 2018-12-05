//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <ansi_c.h>
#include <userint.h>

int main(void)
{
	
	char L1[80]="nom: pentagone_B";
	char L2[80]="nombre points: 5";
	char L3[80]= "Cordonnees: 10 20 30 20 30 40 43 53 35 65";
	int i,a,b,c;
    int nb_pts;
	char nom_fig[80];
	char call[80], A[80]="figure";
	char error404[80];
	char error[80]="Mauvaise coordonnee.";
	char x[5];
	char y[5];
	

	sscanf(L1,"%*s %s",nom_fig);
	sscanf(L2,"%*s %*s %d",&nb_pts);
	sscanf(L3,"%*s %d %d %d %d %d %d %d %d %d %d",&x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]);

	
	for(i=0;i<nb_pts;i++)
	{
		if(x[i]<=-1)
		{
			sprintf(error404,"x[%d]",i);
			a=MessagePopup(error404,error);
		}
	}
	
	for(i=0;i<nb_pts;i++)
	{
		if(y[i]<=-1)
		{
			sprintf(error404,"y[%d]",i);
			b=MessagePopup(error404,error);
		}
	
	}
	
	sprintf(call, "la figure %s possede %d sommets",nom_fig, nb_pts);
	c = MessagePopup(A,call);
	
	getchar();

	// meme code quand la figure est un triangle
 
}
