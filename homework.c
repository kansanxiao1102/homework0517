#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
   int IntegerOne; 
   int IntegerTwo; 
   int IntegerSum;	
   
   printf("Enter first integer\n");
   scanf("%d",&IntegerOne);
  
   printf("Enter second integer\n"); 
   scanf("%d",&IntegerTwo);
   
   IntegerSum= IntegerOne - IntegerTwo;
   
   printf("IntegerSum is %d\n",IntegerSum);  
	return 0;
}
