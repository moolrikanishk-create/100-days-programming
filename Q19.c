//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    double a, b, c;

    // Prompt user for the side lengths
    printf("Enter the lengths of the three sides: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
    }

    // 1. Validate if the sides can form a triangle
    // All sides must be positive and satisfy the Triangle Inequality Theorem
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Invalid sides: These lengths cannot form a valid triangle.\n");
        return 0;
    }

    // 2. Classify the triangle based on side equality
    if (a == b && b == c) {
        printf("Triangle Type: Equilateral (all three sides are equal)\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangle Type: Isosceles (two sides are equal)\n");
    } else {
        printf("Triangle Type: Scalene (all three sides are different)\n");
    }

    return 0;
}
