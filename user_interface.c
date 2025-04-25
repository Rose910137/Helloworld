#include <stdio.h>
#include <stdlib.h>

void add(double num1, double num2){

printf("\n ==========================\n");

printf("Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
printf("\n ==========================\n");
}
void subtract(double num1, double num2){
printf("\n ==========================\n");
printf("Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
printf("\n ==========================\n");
}
void multiply(double num1, double num2){
printf("\n ==========================\n");
printf("Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
printf("\n ==========================\n");
}
void divide(double num1, double num2){
if (num2 != 0) {
    printf("\n ==========================\n");
    printf("Division: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    printf("\n ==========================\n");
} else {
    printf("Error: Division by zero is not allowed.\n");
}
}
void exponentiation(double base, int exponent){
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    printf("\n ==========================\n");
    printf("Exponentiation: %.2lf ^ %d = %.2lf\n", base, exponent, result);
    printf("\n ==========================\n");
}
int main(){
    double num1, num2;
    char operation;

    printf("\n=====Welcome to the Simple Calculator=====\n");
    printf("please follow the instructions below to use the calculator\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operation (+, -, *, /, ^): ");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        case '^':
            printf("Enter the exponent: ");
            int exponent;
            scanf("%d", &exponent);
            exponentiation(num1, exponent);
            break;
        default:
            printf("Invalid operation. Please use +, -, *, /, or ^.\n");
            break;
    }
 printf("Thank you for using the calculator!\n");
    printf("Goodbye!\n");
    return 0;
}