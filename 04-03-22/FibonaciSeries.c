/*
	
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n1=0, n2=1;
	int n3, element, counter;
	
	printf("enter number of elements you want: ");
	scanf("%d",&element);
	
	printf("\n%d %d",n1,n2);
	
	for(counter =2; counter<element; counter++){
		n3= n1+n2;
		
		printf("%d",n3);
		
		n1=n2;
		n2=n3;
		
	}
	return 0;
}