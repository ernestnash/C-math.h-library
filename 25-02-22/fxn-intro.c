/*
Functions
1. declaration
2. definition
3. call

syntax
return datatype FunctionName (Parameters)
{
	statements
}

*/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*function declaration
syntax
	returnDataType Fxn (parameters);
 */

int sum (int a, int b);

int main(){
	
	/*function call
	syntax
		function is called by its name and passing values. eg sum(3,2)
	*/
	
	
	
	printf("%d",sum(3,2));
	return 0;
}



/*function definition
syntax
	returnDataType Fxn (parameters)
		{
			statements;
		}
	
*/

int sum (int a, int b){
	int sum;
	sum = a + b;
	return sum;
}








