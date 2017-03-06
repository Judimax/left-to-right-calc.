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

//int power(int , int); //function prototype	
// the executable function
int main(void) { 
  char expression [100]; // input expression is placed here for evaluation
  char process [30];  // array that will evaluate the expression
  int a = 2; //index for expression array, starts at two because looping through array does not allow for indexes bigger that array, so basically [x] [opr.] [x-2] to avoid problems when getting to the end of the loop
  int b = 0; //first number to in operation
  int c = 0; // second number in operation
  int d = 0; // operation results, also final answer
	
  //printf("Greetings user how is your day? \n");
  //printf("This program should run smoothly \n");
  /*int power(int number, int exponent) {
	int x = 0;
	int answer = number;
	for(x = 0; x != exponent; x++) {
		answer *= number;	
	}
	return number;
  }	*/  
  printf("Please enter a mathematical expression \n");
  scanf(" %s ",expression);  
	if (strlen(expression) == 1)  {
		 printf("this is your answwer \n %s \n",expression);
		 return 0;
	}
	b = expression[a-2] - '0';
	do {                                  //loop that evaluates the expression
		c = expression[a] - '0';
		//printf("this is a : %d \n",a);
		//printf("this is b : %d \n",b);
		//printf("this is c : %d \n",c);
		switch (expression[a-1]) {
			case('+'):
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
	b = d;	
	a += 2;	
	} while (a !=  strlen(expression)+1);
	
printf(" the answer is %d\n" , d);
return 0;
}
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   		