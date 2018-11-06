//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <math.h>
#define ECART 1.0e-10

int main(void)
{


	double a, b, c;
	double determinant;                 
	unsigned char nb_solutions = 0;
	
	determinant = b *b-4.0*a*c;
	
	if ( (determinant > -ECART) && ( determinant < ECART ))
			nb_solutions=1;
			
	else if (determinant > ECART)
		nb_solutions= 0;
	else
		nb_solutions= 0;
		
	return 0;
	
		}
		
  
}
