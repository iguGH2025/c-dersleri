#include <stdio.h>
int main()
{
    float vize, quiz, final, ort;
    printf("Vize notunuzu giriniz: ");
    scanf("%f", &vize);

    printf("Quiz notunuzu giriniz: ");
    scanf("%f", &quiz);

    printf("Final notunuzu giriniz: ");
    scanf("%f", &final);

    ort = (vize + quiz + final) / 3;

    if (ort <= 100 && ort >= 90)
    {
        printf("A aldiniz.\n");
    }
    else if (ort < 90 && ort >= 80)
    {
        printf("B aldiniz.\n");
    }
    else if (ort < 80 && ort >= 70)
    {
        printf("C aldiniz.\n");
    }
    else if (ort < 70 && ort >= 50)
    {
        printf("D aldiniz.\n");
    }
    else if (ort < 50 && ort >= 0)
    {
        printf("F aldiniz.\n");
    }
    else
    {
        printf("Gecersiz not girdiniz.\n");
    }
    return 0;
}

