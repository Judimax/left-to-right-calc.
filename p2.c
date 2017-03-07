/*

Name: Michael Odumosu
Unix login id: mo422733
Lab Instructor Name: Julia Turner
Lab Day: Friday
Lab Time: 1:40pm

Project Description : this programs takes a mathematical expression as input from the user of the program and evalulates it strictly from left to right ignoring the PEMDAS rule. Finally the program outputs the value after it has finished evaluating the mathematical expression
*/

#include <stdio.h> //calling libraries
#include <string.h>
#include <stdlib.h>
 
/* 
SYSTEM BUGS
char does not properly output stirngs
scanf does not work propery with %s
*/

	
// the executable function
int main(void) { 
  char expression [100]; // input expression is placed here for evaluation
  char process [30];  // array that will evaluate the expression
  int a = 2; //index for expression array, starts at two because looping through array does not allow for indexes bigger that array, so basically [x] [opr.] [x-2] to avoid problems when getting to the end of the loop
  int b = 0; //first number  in operation
  int c = 0; // second number in operation
  int d = 0; // operation results, also final answer
	

  printf("Please enter a mathematical expression \n");
  fflush(stdout);	
  scanf(" %s ",expression);  
	if (strlen(expression) == 1)  {  //if one one number is given, opernation is 
		 printf("the answwer is \n %s \n",expression); //not needed
		 fflush(stdout);
		 return 0;
	}
	b = expression[a-2] - '0';       //first value left out to start operation 
	do {                                  //loop that evaluates the expression
		c = expression[a] - '0';
		switch (expression[a-1]) {        //switch statment that performs operation
			case('+'):                    //from given operand symbol      
			d = b+c;
			break;
			case('-'):
			d = b-c;
			break;
			case('/'):
			d = b/c;
			break;
			case('*'):
			d = b*c;
			break;
			
	 	}
	b = d;	                       //here the result is replaced in b to avoid 
	a += 2;                        // recursion, which would be confusing
	} while (a !=  strlen(expression)+1);
	
printf(" the answer is %d\n" , d);
fflush(stdout);	
return 0;
}
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   		