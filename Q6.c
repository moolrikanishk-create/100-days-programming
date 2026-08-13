//Write a program to swap two numbers using a third variable
#include <stdio.h>
int main(){
    int a, b, t;  

    printf("Enter value of a: ");
    scanf("%d", &a);      

    printf("Enter value of b: ");
    scanf("%d", &b);      

    t = a;   
    a = b;      
    b = t;   

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
