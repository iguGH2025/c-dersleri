#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number %2 ==0)
    {
        printf("Girdiginiz sayi cift.\n");
    }
    else
    {
        printf("Girdiginiz sayi tek.\n");
    }   
    return 0;
}   