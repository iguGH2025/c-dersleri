#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d > %d\n", num1, num2);
    }
    else if(num1 < num2)
    {
        printf("%d < %d\n", num1, num2);
    }
    else
    {
        printf("%d = %d\n", num1, num2);
    }
    return 0;
}
