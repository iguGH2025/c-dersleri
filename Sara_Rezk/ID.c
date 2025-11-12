#include <stdio.h>

int main()
{
    int id, sifre;

    printf("Enter Your ID: ");
    scanf("%d", &id);

    printf("Enter Your Password: ");
    scanf("%d", &sifre);

    if(id==1023 && sifre==12007)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Login Failed");
    }
    return 0;
}