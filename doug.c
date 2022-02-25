#include<stdio.h>
#include<stdbool.h>

int main(){
	int age;
	bool gender;
	
	printf("enter your age: ");
	scanf("%d",&age);
	printf("enter your gender: ");
	scanf("%lu",&gender);
	
	if(age>=18 && gender=="male"){
		printf("you are an adult male");
	}else if(age>18 && gender=="female"){
		printf("you are an adult female");
	}
}
