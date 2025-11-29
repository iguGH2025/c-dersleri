#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu,cek,yat,tutar,sec;

    tutar = 0;
    while (1){

    printf("***Lutfen yapmak istediginiz islemi seciniz***\n");
    printf("1-Para yatirma\n");
    printf("2-Para cekme\n");
    printf("3-Bakiye sorgulama\n");
    printf("4-cikis :");

    if (scanf("%d", &menu) != 1) {
            printf("Lutfen sadece sayi giriniz!\n");
            while (getchar() != '\n');
            continue;
        }

    switch (menu){
    case 1:
        system("cls || clear");
        printf("**PARA YATIRMA**\n");
        printf("lutfen yatirmak istediginiz tutar yazin :");

        while (scanf("%d", &yat) != 1){
            printf("Lutfen sadece sayi giriniz :");
            while (getchar() != '\n');  // yanlış girişleri temizler
        }
        tutar = tutar + yat;
        system("cls || clear");
        break;


        case 2:
            system("cls || clear");
            printf("**PARA CEKME**\n");
            printf("lutfen cekmek istediginiz tutari sec :");

            while (scanf("%d", &cek) != 1) {
                printf("Lutfen sadece sayi giriniz :");
                while (getchar() != '\n');
            }

            if (tutar < cek) {
                printf("Malesef yetersiz bakiye\n");
                printf("menuye donmek icin 1 basin: ");

                while (1) {

                    if (scanf("%d", &sec) != 1) {
                        printf("Lutfen sadece sayi giriniz: ");
                        while (getchar() != '\n');
                        continue;
                    }

                    if (sec == 1){
                        break;
                        }
                    else {
                    printf("Yanlis secim. Sadece 1'e basin: ");
                    }
                }

                system("cls || clear");
            }
            else {
                tutar = tutar - cek;
                system("cls || clear");
            }
            break;
    case 3:
    system("cls || clear");
    printf("**BAKIYE SORGULAMA**\n");
    printf("Bakiyeniz : %d \n", tutar);
    printf("menuye donmek icin 1 basin: ");

    while (1) {

        if (scanf("%d", &sec) != 1) {
            printf("Lutfen sadece sayi giriniz: ");
            while (getchar() != '\n');
            continue;
        }

        if (sec == 1)
            break;

        printf("Yanlis secim. Sadece 1'e basin: ");
    }

    system("cls || clear");
    break;
    case 4:
        return 0;

    default :
    system("cls || clear");
    printf("***lutfen gecerli bir islem secin***\n");
    while (getchar() != '\n'); // yanlış girişi temizle
    }
}

    return 0;
}
