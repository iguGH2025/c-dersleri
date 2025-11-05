// Grade System with switch-case statement
#include <stdio.h>
int main()
{

    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    switch (score)
    {
    case 9:
        printf("Your grade is : A\n");
        break;
    case 8:
        printf("Your grade is : B\n");
        break;
    case 7:
        printf("Your grade is : C\n");
        break;
    case 6:
        printf("Your grade is : D\n");
        break;
    case 5:
        printf("Your grade is : E\n");
        break;
    case 4:
        printf("Your grade is : F\n");

        break;

    default:
        break;
    }
    return 0;
}