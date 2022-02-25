/* Nashon Ernest
	program to output even numbers between 1-100*/
	
#include <stdio.h>

int main()
{
	//variable initialization
	int i;
	for(i=0;i<=100;i++){
		if(i%2==0){
			printf("%d\n",i);
		}	
	}	
		
	return 0;
}
