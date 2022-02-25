/* Nashon Ernest
	Scientific computing
		CONTROL STRUCTURES
			control statements--> 1. if statement*/

#include <stdio.h>
#include <stdbool.h>

int main(){
	int age;
	char gender;
	printf("enter your age: ");
	scanf("%d",&age);
	printf("enter your gender(only the first letter): ");
	scanf("%d",gender);
	
	if(age>=18,gender==F){
		printf("you are a female adult");
	}else if(age>=18,gender=M){
		printf("you are a male adult");
	}else if(age<18,gender=F){
		printf("you are a minor female");
	}
	else if(age<18,gender=M){
		printf("you are a minor male");
	}
	return 0;
}
