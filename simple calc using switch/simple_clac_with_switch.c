#include<stdio.h>
int main(){
	char operator;
	printf("Choose an operator ['+', '-', '*', '/']: ");
	scanf("%c", &operator);
	double num1, num2;
	printf("enter first number");
	scanf("%lf",&num1);
 
 printf("enter second number");
 scanf("%lf", &num2);
 double result;
 switch(operator){
  case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    case '*':
      result = num1 * num2;
      break;

    default:
      printf("Invalid Operator");
 	
 }
 printf("%lf", result);
}