#include <stdio.h>

int main() {
double a,b;
char op;

printf("Enter expression: ");
if(scanf("%1f %c %1f", &a, &op, &b) !=3 || (op == '/' && b ==0)) {
printf("Invalid input or division by zero.\n");
return 1;
}

switch (op) {
case '+':printf("%.2f\n", a + b); break;
case '-':printf("%.2f\n", a - b); break;
case '*':printf("%.2f\n", a * b); break;
case '/':printf("%.2f\n", a / b); break;
default: printf("Invalid operator.\n");
return 1;

}
return 0;
}
