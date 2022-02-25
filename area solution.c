//write a program to prompt a user to enter any radius to calculate the area of a circle
#include<stdio.h>
const float pie = 3.14;
int main(){
	float area, radius;
	printf("enter radius to calculate area,\n ");
	scanf("%f",&radius);
	area = pie * (radius * radius);
	printf("area is %f",area);
	return 0;
}
