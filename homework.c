#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int IntegerOne; // firse number to be entered by user
   int IntegerTwo;  // second number to be entered by user
   int IntegerSum;	// variable in which sum will be stored
   
   printf("Enter first integer\n");  // prompt
   scanf("%d",&IntegerOne);// read an integer
  
   printf("Enter second integer\n");  // prompt
   scanf("%d",&IntegerTwo);// read an integer
   
   IntegerSum= IntegerOne - IntegerTwo;// assign total to IntegerSum
   
   printf("IntegerSum is %d\n",IntegerSum);  // print IntegerSum
	return 0;
}// end function main
