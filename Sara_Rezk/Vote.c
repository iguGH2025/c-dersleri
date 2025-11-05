#include <stdio.h>
int main()
{
    /* 
    1.Degisken tanimlama (int, float, char)
    2.Girdi/ cikti
    3.kosul*/
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("You can vote.\n");
    }
    else
    {
        printf("You cannot vote.\n");
    }


    return 0;
}