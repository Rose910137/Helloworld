#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void add(double num1, double num2){
    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
}
void subtract(double num1, double num2){
    printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
}
void multiply(double num1, double num2){
    printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
}
void divide(double num1, double num2){
    if (num2 != 0) {
        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
void exponentiation(double base, int exponent){
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result = base;
    }
    printf("Result: %.2lf ^ %d = %.2lf\n", base, exponent, result);
}
int is_valid_input(char*input){
    //check if the input is a number
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != '-') {
            return 0; // invalid input
        }
    }
    return 1; // valid input
}
int main(){
    double num1, num2;
    char operation;
    char input[100];

printf("Enter first number:");
fgets(input, sizeof(input), stdin);
while(!is_valid_input(input)) {
    printf("Invalid input. Please enter a valid number:\n");
    fgets(input, sizeof(input), stdin);
}
num1 = atof(input);
printf("Enter second number:");
fgets(input, sizeof(input), stdin);
while(!is_valid_input(input)) {
    printf("Invalid input. Please enter a valid number:\n");
    fgets(input, sizeof(input), stdin);
}
num2 = atof(input);
printf("Enter operation (+, -, *, /, ^):");
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
        exponentiation(num1, (int)num2);
        break;
    default:
        printf("Invalid operation. Please enter a valid operation.\n");
        break;
}
return 0;
}