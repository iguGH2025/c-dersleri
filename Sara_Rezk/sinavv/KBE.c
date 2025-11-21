#include <stdio.h>

int main() {
    float boy, kilo, kbe; 
    printf("Kilonuzu kg cinsinden girin:");
    scanf("%f", &kilo);
    
    printf("Boyunuzu metre cinsinden girin:");
    scanf("%f", &boy);

    kbe = kilo/(boy*boy); 

    if(kbe>0 && kbe<18.5)
    {
        printf("Biraz zayifsiniz.\n");
    }
    else if(kbe >=18.5 && kbe<24.9)
    {
        printf("Kilonuz normal aralikta.\n");
    }
    else if (kbe>=25 && kbe<29.9)
    {
        printf("Kilolusunuz.\n");       
    }
    else if (kbe>=29.9 && kbe<39.9)
    {
        printf("Obezsiniz .\n");       
    }
    else if (kbe>=39.9 && kbe<70)
    {
        printf("Asiri obezsiniz.\n");       
    }
    else
    {
        printf("Lutfen dogru deger girin\n");
    }

    return 0;
}