#include <stdio.h>

int main ()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%9==0 && num%5==0)
    {
        printf("%d, 45'e tam bolunur .\n", num);
    }
    else
    {
        printf("%d, 45'e tam bolunmez.\n", num);
    }
    return 0;
}