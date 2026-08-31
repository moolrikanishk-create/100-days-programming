//Write a program to input an integer and check whether it is even or odd using if–else
#include <stdio.h>
int main(){
    int number;
    int remainder;
    printf("enter any number odd or even:");
    scanf("%d",&number);

    remainder = number % 2;
    if (remainder == 0)
    {
        printf("%d is Even\n", number);
    }
    else
    {
        printf("%d is Odd\n", number);
    }

    return 0;
}
