#include <stdio.h>

//function to calculate base raised to the power of exponent
double exponentiation(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int main(){
    double base;
    int exponent;
//user input for base and exponent
printf("Enter base: ");
scanf("%lf", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);

//calculate and display result
double result = exponentiation(base, exponent);
printf("%.2lf raised to the power of %d = .%2lf\n", base, exponent, result);
return 0;
}