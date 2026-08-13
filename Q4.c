//Write a program to calculate the area and circumference of a circle given its radius
#include <stdio.h>
int main(){
    float r,a,cir;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = 3.14159 * r * r;
    cir = 2 * 3.14 * r;
    printf("Area of the circle: %f\n", a);
    printf("Circumference of the circle: %f\n", cir);
    return 0;
}
