/*Nashon Ernest 
	BMCS/353J/2020
		scientific computing.*/

//Data types.
/* o
sizeof() in C  is a built in fuction thta is used to calculate the size(in bytes) thta a data type occupies in a computer memory
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
	
	int a;
	char b;
	bool c;
	float d;
	
	printf("int holds %lu bytes\n",sizeof(a));
	printf("char holds %lu bytes\n",sizeof(b));
	printf("float holds %lu bytes\n",sizeof(d));
	printf("bool holds %lu bytes\n",sizeof(c));
	
	
	
	
	
	
	
	
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(double));
//	printf("%d\n",sizeof());
	
	return 0;
}
