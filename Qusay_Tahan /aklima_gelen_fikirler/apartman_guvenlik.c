#include <stdio.h>
#include <string.h>
// ev ve otopark kapilari icin duzenlenmis program
int main() {
    int rightpassword = 1234;
    int sec;
    int password;
    int deneme = 3;
    char isim[50];
    char araba[50];
    printf("Siteye hosgeldiniz\n");
    printf("_____________________\n");
    printf("1. eve giris islemi\n");
    printf("2. otopark giris islemi\n");
    printf("secim yapiniz: ");
    scanf("%d", &sec);

    switch(sec)
    {
        case 1:
            printf("Lutfen adinizi giriniz*^____^*\n");
            scanf("%s", isim);

            if (strcmp(isim, "ahmet") == 0) {
                printf("Adiniz dogru\n");
            } else {
                printf("Adiniz kayitli degil.\n");
                return 0;
            }

            while (deneme > 0) {
                printf("Lutfen sifrenizi giriniz: ");
                scanf("%d", &password);

                if (password == rightpassword) {
                    printf("Sifre dogru, ev kapisi acildi.\n");
                    break;
                } else {
                    deneme--;
                    printf("Sifre yanlis. Kalan hakkiniz: %d\n", deneme);

                    if (deneme == 0) {
                        printf("Hakkiniz kalmadi, giris engellendi.\n");
                    }
                }
            }
            break;

        case 2:
        	printf("araba sec (bmw/mercedes)");
        	scanf("%s",araba );
        	if (strcmp(araba, "bmw") == 0)
        	{
        		printf("arabaniz hazir\n");
			}
			else
			{
				printf("arabaniz arzali\n");
			}
			    
            printf("Lutfen adinizi giriniz*^____^*\n");
            scanf("%s", isim);

            if (strcmp(isim, "ahmet") == 0)
			{
                printf("Adiniz dogru\n");
            } else {
                printf("Adiniz kayitli degil.\n");
                return 0;
            }

            deneme = 3;  
            while (deneme > 0) {
                printf("Lutfen sifrenizi giriniz: ");
                scanf("%d", &password);

                if (password == rightpassword) {
                    printf("Sifre dogru, otopark kapisi acildi.\n");
                    break;
                } else {
                    deneme--;
                    printf("Sifre yanlis. Kalan hakkiniz: %d\n", deneme);

                    if (deneme == 0) {
                        printf("Hakkiniz kalmadi, giris engellendi.\n");
                    }
                }
            }
            break;

        default:
            printf("Gecersiz secim\n");
            break;
    }

    return 0;
}
