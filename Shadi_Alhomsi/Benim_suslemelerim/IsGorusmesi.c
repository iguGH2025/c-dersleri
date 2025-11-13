#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // is icin katilma kurallari
    int yas, uni_ort;
    char tecrube[5], diploma[5];

    printf("Sirketimize hosgeldin\n");
    printf("Yasiniz kac: ");

    while(1){ //Döngü
    if (scanf("%d", &yas) != 1 ){
        printf("Lutfen bir sayi giriniz \n");
        while (getchar() != '\n'); // yanlış girişi temizlemek için yoksa sonsuz döngüye girer
        continue; //soruyu bir daha sormak için
    }
    else if (yas < 18 || yas > 30) { // "||" VEYA anlamına gelir
        printf("Maalesef yasiniz standartlara uymuyor\n");
        return 0;  //programı bitir
        }
     else{
        break;
    }
}
    // TECRÜBE SORUSU TEKRAR EDİLİYOR
    while (1) {
        printf("Tecrubeniz var mi (evet/hayir): ");
        scanf("%s", tecrube);

        if (strcmp(tecrube, "hayir") == 0) {
            printf("Tecrubeli bir elemana ihtiyacimiz var\n");
            return 0;
        }
        else if (strcmp(tecrube, "evet") == 0) {
            break; // doğru cevap verildi döngüden çık
        }
        else {
            printf("Lutfen 'evet' veya 'hayir' ile cevap verin.\n");
        }
    }

    // DİPLOMA SORUSU
    while (1){
    printf("Diplomaniz var mi (evet/hayir): ");
    scanf("%s", diploma);

    if (strcmp(diploma, "hayir") == 0) {
        printf("En az universite diplomasi lazim\n");
        return 0;
    }
    else if (strcmp(diploma,"evet") == 0){
        break;
    }
    else {
        printf("Lutfen 'evet' veya 'hayir' ile cevap verin.\n");
    }
    }
    // ORTALAMA SORUSU
    while(1){
    printf("Universite ortalamaniz kac: ");

    if (scanf("%d", &uni_ort) != 1){
    printf("lutfen bir sayi giriniz.\n");
    while (getchar() != '\n'); // yanlış girişi temizle
            continue; // yeniden sor
    }

    else if (uni_ort > 0 && uni_ort < 100) {
        printf("Tesekkurler, is gorusmesi icin hazirsiniz.\n");
        break;
        }
       else {
            printf("Lutfen pozitif bir sayi giriniz.\n");
        }
    }

    return 0;
}
