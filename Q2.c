//Write a program to input two numbers and display their sum, difference, product, and quotient
#include <stdio.h>
int main(){
    int a, b;
    float sum, diff, product, quotient;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", diff);
    printf("Product: %f\n", product);
    printf("Quotient: %f\n", quotient);

    return 0;
}
