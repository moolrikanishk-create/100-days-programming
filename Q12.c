//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(){
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    if (number == 0)
    {
        printf("%d is Zero\n", number);
    }
    else
    {
        if (number > 0)
        {
            printf("%d is Positive\n", number);
        }
        else
        {
            printf("%d is Negative\n", number);
        }
    }

    return 0;
}

