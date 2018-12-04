//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
     char prenom[100];
	 char nom[100];
	 char age[100];
	 
    
	printf("veuillez taper le prenom : ");
	scanf ("%s",prenom);
	printf("veuillez taper le nom : ");
	scanf("%s",nom);
	printf("veuillez taper l'age : ");
	scanf("%s",age);
	
	printf("je m'appelle %s %s et j'ai %s ans",prenom, nom, age) ;
	getchar();
	
	

}
