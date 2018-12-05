//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <ansi_c.h>

int main(void)
{
	
	char L1[80]="nom: pentagone_B";
	char L2[80]="nombre points: cinq";
	char L3[80]= "Cordonnees: 10 20 30 20 30 40 43 53 35 65";
	int i;
    char nb_pts[100];
	char nom_fig[80];
	
	char x[5];
	char y[5];
	
	sscanf(L1,"%*s %s",nom_fig);
	sscanf(L2,"%*s %*s %s",nb_pts);
	sscanf(L3,"%*s %s %s %s %s %s %s %s %s %s %s",x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]);

	
	printf("la figure %s possede %s sommets",nom_fig, nb_pts);

	getchar();
 
}
