/*
	ARRAYS
		a data structure consisting of a collection of elements of the same data type.
	Fibonacci series
		a series where the next number is the sum of the previus two numbers.
		e.g. (0,1,1,2,3,5,8...)
	
	 * syntax of an array
		data_type arrayName [size of array];
	 *initializizng an array
		arrayName = {value1,value2....};
*/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int salary [5]= {100000,200000,300000,400000,500000};
	int i;
	//salary []= {100000,200000,300000,400000,500000};//expeceted token before '{'
	printf("the values of the array are; \n"); 
	
	for(i=0; i<5; i++){
		printf("%d\n", salary[i]);
	}
	
	//printf("the values of array number 4 is %d", salary[3]);//printing a single value of an array
	
	return 0;
}
