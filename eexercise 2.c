//single line comment
/*nashon ernest 
	BMCS/353J/2020
		scientific computing.
			multiple line comment*/

			//topic=variable
			//a variable is a container that holds a value.
			/*rules.
				1. a variable name cannot start with a number.
				2. a variable name dosen't have white spaces.
				3. a variable name must start with an alphabet or an underscore.
				4. a variable name cannot be keywords e.g int,main,include,if,for etc.
				5. variables with two names and above should use either camel convention 'camelCase' or an underscore*/
#include<stdio.h>

int main(){
	
//	int 2things=30;  ERROR-- variable names cannot start with numbers. 
// 	int student name;  ERROR-- variablie names do not have white space.
	int _2things=30; //no error, begins with aan underscore.
	int salary=5000; //no error, begins with an alphabet.
//	float #include=30.4;	ERROR-- variable names cannot be keywords.'#include' is a keyword.
	int studentNumber=300; //no error, use of camel case.
	int student_number=300;	//no error, use of an underscore.
	return 0;
}
