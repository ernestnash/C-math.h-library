#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int counter,element,n3,n1=0,n2=1;
	
	printf("enter number of elements: ");
	scanf("%d",&element);
	
	int Fibonacci[]={n1,n2,n3};
	
	
	
	printf("\n%d,%d,",n1,n2);
	
	for(counter=2; counter<element; counter++){
		n3=n1+n2;
		printf(",%d",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
