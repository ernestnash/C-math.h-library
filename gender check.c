#include<stdio.h>

int main(){
	char gender;
//	int age;
	
	printf("enter your gender, M=male, F=female, L=lgbtq,: ");
	scanf("%c",&gender);
	
//	if(gender == 'M'){
//		prinf("you are a male");
//	}
//	else if(gender=='F'){
//		printf("you are a female");
//	}
//	else if(gender=='L'){
//		printf("you are an lgbtq");
//	}
//	else
//	printf("invalid choice.");
	
	
	switch(gender){
		case 'M':
			printf("you are an male");
		break;
		case 'F':
			printf("you are a female");
		break;
		case 'L':
			printf("you're an lgbtq");
		break;
		default:
			printf("invalid choice");
	}
	
	return 0;
}
