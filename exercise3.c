/*Nashon Ernest 
	BMCS/353J/2020
		scientific computing.*/
		/* constants.
			declared using keyword "const" before datatype and/or variable name.
		
		*/
#include <stdio.h>

const float pie=3.142;
int main(){
	//	const dataType variableName=value;
//	const a=5;
//	printf("%d",a);
	int radius;
	printf("enter radius:");
	scanf("%f",&radius);
	double area = 3.142*(radius*radius);
	printf("area = %f",area);
	
	return 0;
}
