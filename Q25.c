// Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include <stdio.h>

int main()
{
    float num1, num2;
    float result;
    char operatorSymbol;

    num1 = 0;
    num2 = 0;
    result = 0;
    operatorSymbol = ' ';

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operatorSymbol);

    printf("Enter second number: ");
    scanf("%f", &num2);


    switch (operatorSymbol)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':

            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        case '%':

            if ((int) num2 == 0)
            {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            else
            {
                result = (int) num1 % (int) num2;
                printf("Result = %.2f\n", result);
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
