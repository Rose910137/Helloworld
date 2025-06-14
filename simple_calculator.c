#include <stdio.h>
#include <stdlib.h>

void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);
void showMenu();

int main(){
int choice;
double num1, num2;

while (1) {
    showMenu();
    printf("Enter your choice: (1-4, 8 to exit)");
    if(scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number between 1 and 8.\n");
        while(getchar() != '\n'); // clear the input buffer
        continue;
    }
    if (choice == 8) {
        printf("Exiting the calculator.Adios!\n");
        break; // exit the loop
    }
    //For choices 1 to 4 (basic operations)
    if (choice >= 1&&  choice <= 4) {
        printf("Enter two numbers: ");
        if(scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Invalid input. Please enter two numbers.\n");
            while(getchar() != '\n'); // clear the input buffer
            continue;
        }
    }
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
            
    
}
}
return 0;
}
void showMenu() {
    printf("\nSimple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("8. Exit\n");
}
void add(double a, double b) {
    printf("Result: %.2f\n", a + b);
}
void subtract(double a, double b) {
    printf("Result: %.2f\n", a - b);
}
void multiply(double a, double b) {
    printf("Result: %.2f\n", a * b);
}
void divide(double a, double b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
    