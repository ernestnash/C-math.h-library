/*
 * Quadratic equations solutions in c programming.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double a, b, c, discriminant, root1, root2, imgroot, realroot;
	
	printf("enter coefficients of quadratic equations: ");
	scanf("lf% lf% lf%",&a,&b,&c);// getting up the values of the constatnts.
	
	discriminant = b * b - 4 * a * c;//getting up the discriminant in preparation for the real solutions.
	
	//conditions for real roots 
	if(discriminant>0){
		root1 = -b + sqrt(discriminant)/(2 * a);
		root2 = -b - sqrt(discriminant)/(2 * a);
		printf("resuls in two roots that are:\n");
		printf("root 1 = %lf",root1);
		printf("root 2 = %lf",root2);

	}else if(discriminant == 0){
		root1 = root2 = -b/(2 * a);
		
		printf("root 1 = root 2 = %lf",root1);

	}else {
		realroot = -b/(2 * a);
		imgroot = -b - sqrt(discriminant) / (2 * a);
		printf("root1 = %lf and root 2 = %lf", realroot, imgroot);
	}
	return 0;
}