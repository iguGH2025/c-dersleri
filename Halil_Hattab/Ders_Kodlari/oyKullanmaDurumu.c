#include <stdio.h>

int main(){
	int yas, num;
	printf("yas gir: "); scanf("%d", &yas);

	if (yas>=18){
		printf("oy kullanabir, yas: %d\n", yas);
	} else if (yas<=17){
		printf("oy kullanamazsin\n");
	} else if (yas<=0) {
		printf("sadece sayisal degerler girin!\n");
	} else {
		printf("0 ve ustu gercekci bir yas giriniz.\n");
	}

	return 0;
}