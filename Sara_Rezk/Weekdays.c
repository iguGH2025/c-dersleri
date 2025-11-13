/* kullanicidan alinan 1 ile 7 arasindaki tam 
sayilarin hangi gune denk geldigini yaz*/
#include <stdio.h>

int main()
{
    // degiskenler
    int gun;

    // girdi cikti
    printf("Haftanin Kacinci Gun Oldugunu Yaz: ");
    scanf("%d", &gun);

    // kosul
    switch (gun)
    {
    case 1:
    {
        printf("Pazartesi\n");
        break;
    }
    case 2:
    {
        printf("Sali\n");
        break;
    }
    case 3:
    {
        printf("Carsamba\n");
        break;
    }
    case 4:
    {
        printf("Persembe\n");
        break;
    }
    case 5:
    {
        printf("Cuma\n");
        break;
    }
    case 6:
    {
        printf("Cumartesi\n");
        break;
    }
    case 7:
    {
        printf("Pazar\n");
        break;
    }
    default:
    {
        printf("Lutfen bir gun yazin: ");
    }
    }

    return 0;
}