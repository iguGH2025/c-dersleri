// if-else-else if statement
#include <stdio.h>
int main()
{

    int score;
    printf("Enter your score:");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("Your grade is A");
    }
    else if (score >= 80)
    {
        printf("Your grade is B");
    }
    else if (score >= 70)
    {
        printf("Your grade is C");
    }
    else if (score >= 60)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your grade is F");
    }
    return 0;
}