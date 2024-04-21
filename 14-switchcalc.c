#include<stdio.h>

int main(){
    
  char op;
  int first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter first operands: ");
  scanf("%d", &first);
  printf("Enter Second operands: ");
  scanf("%d", &second);

  switch (op) {
    case '+':
      printf("The Additiion is: %d", first + second);
      break;
    case '-':
      printf("The Subtraction is: %d", first-second);
      break;
    case '*':
      printf("The Multiplication is: %d", first*second);
      break;
    case '/':
      printf("The Division is: %d", first/second);
      break;
    default:
      printf("Error! operator is not correct");
  }
    return 0;
}