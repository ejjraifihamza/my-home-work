#include <stdio.h>
 int main(){
 	int module;
 	int a, b;
 	float result;
 	char operation;
 	printf("choose operation :");
 	scanf("%c", &operation);
 	
 	printf("please enter value a :");
 	scanf("%f", &a);
 	
 	printf("please enter value b :");
 	scanf("%f", &b);
 	 
    switch (operation){
 	case '+':
	 result = a + b;
	 printf("result is : %.4f", result);
	 break;
	 case '-':
	 result = a - b;
	 printf("result is : %.4f", result);
	 break;
	 case '*':
	 result = a * b;
	 printf("result is : %.4f", result);
	 break;
	 case'/':
	 result = a / b;
	 printf("result is : %.4f", result);
	 break;
	 case'm':
	 	module = a % b;
	 	printf("result is %d", module);
	 	
	  default :
	  	printf("please enter the right operation !!!");
    }
 	return 0;
 	
 	
 	
 }
