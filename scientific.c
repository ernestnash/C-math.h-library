//Scientific Computing.
//library functions---> "math.h"


#include<stdio.h>
#include<math.h>

#define PIE 3.142


int main(){
	double x = 20.5;
	double z, y=5.0, b=0.22;
	
//	converting to radian
	z = (x*PIE)/180;
	
	printf("the cos(20.5)= %lf\n", cos(z));
	printf("the log10(20.5)= %lf\n", log10(x));
	printf("the sin(20.5)= %lf\n", sin(z));
	
	printf("the sqrt(20.5)= %lf\n", sqrt(x));
	printf("the pow(20.5)= %lf\n", pow(x,y));
		
	printf("the sinh(20.5)= %lf\n", sinh(x));
	printf("the log(20.5)= %lf\n", log(x));
	
	printf("the exp(20.5)= %lf\n", exp(z));
	
	
	y= acos(b)*180/PIE;
	
//	k = (y*180)/PIE;
	
	printf("the inverse of cos(0.22)= %lf\n", y);
	
	printf("the exp(20.5)= %lf\n", exp(z));
	
	
	return 0;
}
