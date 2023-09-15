//Implement Simple calculator using functions.
//HINT : Take two operands and one operator as a parameter to the function

#include <stdio.h>
int calculator(double a,double b,char op){
    switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf \n ", a, b, a + b);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf \n", a, b, a - b);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf \n", a, b, a * b);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf \n", a, b, a / b);
      break;
    default:
      printf("Error! operator is not correct");
  }
}
int main() {

  char op;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter Value of A : ");
  scanf("%lf", &a);
  printf("Enter Value of B : ");
  scanf("%lf", &b);
  calculator(a,b,op);
  }

