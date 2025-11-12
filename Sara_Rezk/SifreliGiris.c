#include <stdio.h>

int main()
{
    int rightpassword = 1234;
    int password;
    int try = 3;

    while (try > 0)
    {
        printf("Lutfen sifrenizi giriniz: ");
        scanf("%d", &password);

        if (password == rightpassword)
        {
            printf("Sifre dogru, giris yapildi.\n");
            break;
        }
        else
        {
            try--;
            printf("Sifre yanlis. Kalan hakkiniz: %d\n", try);

            if (try == 0)
            {
                printf("Hakkiniz kalmadi, giris engellendi.\n");
            }
        }
    }
    return 0;
}