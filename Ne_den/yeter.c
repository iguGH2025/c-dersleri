#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str[100];
    printf("Bir metin girin: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Yeni satır karakterini kaldır

    int length = strlen(str);
    if (length >= 5) {
        printf("Girilen metin yeterli uzunlukta.\n");
    } else {
        printf("Girilen metin yeterli uzunlukta değil.\n");
    }

    return 0;
}
