#include <stdio.h>

int main(){
	int s;
	printf("sayi gir: "); scanf("%d", &s);

	if (s%2==0){
		printf("sayi cift: %d", s);
	} else {
		printf("sayi tek: %d", s);
	}
	return 0;
}