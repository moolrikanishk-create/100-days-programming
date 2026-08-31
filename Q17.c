//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }


    if (a == 0) {
        if (b != 0) {
            printf("Linear equation detected (a = 0). Single root: %.2lf\n", -c / b);
        } else {
            printf("Invalid equation: both a and b are 0.\n");
        }
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);


    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root Category: Real and Distinct\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {

        root1 = -b / (2 * a);
        printf("Root Category: Real and Equal\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else {

        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root Category: Complex / Imaginary\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, fabs(imagPart));
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, fabs(imagPart));
    }

    return 0;
}
