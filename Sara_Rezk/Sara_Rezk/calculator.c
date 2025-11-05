#include <stdio.h>
int main()
{
    double num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter an operator: ");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        printf("The result: %.2lf\n", num1 + num2);
    }
    else if (operator == '-')
    {
        printf("The result: %.2lf\n", num1 - num2);
    }
    else if (operator == '*')
    {
        printf("The result: %.2lf\n", num1 * num2);
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            printf("The result: %.2lf\n", num1 / num2);
        }
        else
        {
            printf("Error\n");
        }
    }
    else
    {
        printf("Error operator is not correct.\n");
    }
    return 0;
}