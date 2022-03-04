#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	char name[]={'N','a','s','h','o','n'};
	
	int i;
	
	printf("the name is ; \n"); 
	
	for(i=0; i<=sizeof(name); i++){
		
		printf("%c ", name[i]);
	}
}
