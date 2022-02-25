
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//function declaration
void a();
void b();
void c();
void d();
void e();

int main(){
	while (1){
		int opt;
		printf("enter option to calculate;\n\n 1.cos(x)\n 2.inverse of sin(x)\n 3.tanh(x)\n 4.log10(x)\n 5.Exit\n");
		scanf("%d", &opt);
		//switch function call
		switch(opt)
		{
			case 1:
				a();
				break;
			case 2:
				b();
				break;
			case 3:
				c();
				break;
			case 4:
				d();
				break;
			case 5:
				exit (0);
				break;
			default:
				printf("invalid option");
			
		}
	}
	//traditional function call
//	a();
//	b();
//	c();
//	d();
//	e();
	return 0;
}



//function definition
void a ()
{
	double x,answer,radian;
	printf("enter value x to calculate cos(x): ");
	scanf("%d",&x);
	
	radian = (M_PI)/180;
	answer = radian * cos(x);
	printf("the cos of x = %d",answer);
}

void b ()
{
	double x,answer;
	printf("enter value x to calculate inverse of sin(x): ");
	scanf("%d",&x);
	
	answer = acos(x)*180/M_PI;
	printf("the inverse of sin(x) = %d",answer);
}

void c ()
{
	double x;
	printf("enter value x to calculate inverse of tanh(x): ");
	scanf("%d",&x);
	
	printf("the sinh(x)= %lf\n", tanh(x));
}

void d()
{
	double x;
	printf("enter value x to calculate inverse of log10(x): ");
	scanf("%d",&x);
	
	printf("the log10(x)= %lf\n", log10(x));
	
}
void e()
{
	
}

