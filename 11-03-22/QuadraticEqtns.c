/*
 * Quadratic equations solutions in c programming.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float a, b, c, discriminant, root1, root2, imgroot, realroot;
	
	printf("enter coefficients of quadratic equations: ");
	scanf("%f %f %f",&a,&b,&c);// getting up the values of the constatnts.
	
	discriminant = b * b - 4 * a * c;//getting up the discriminant in preparation for the real solutions.
	
	//conditions for real roots but different roots
	if(discriminant>0){
		root1 = -b + sqrt(discriminant)/(2 * a);
		root2 = -b - sqrt(discriminant)/(2 * a);
		printf("resuls in two roots that are:\n");
		printf("root 1 = %f",root1);
		printf("root 2 = %f",root2);
	}//conditions for real and equal roots	
	else if(discriminant == 0){
		root1 = root2 = -b/(2 * a);
		
		printf("root 1 = root 2 = %f",root1);
	}//if roots are not real
	else if(discriminant<0){
		realroot = -b/(2 * a);
		imgroot = -b - sqrt(discriminant) / (2 * a);
		printf("root1 = %f and root 2 = %f", realroot, imgroot);
	}
	return 0;
}
