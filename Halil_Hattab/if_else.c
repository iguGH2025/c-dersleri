#include <stdio.h>

int main(){

	float sinav1=42.13, sinav2=90, sinav3=50, sinav4=62, sonuc;

	printf("Sinif gecme programina hos geldiniz!\n");
	printf("bu programla, daha onceden degiskenlerle degerleri atanmis sinav sonuclarini hesaplayarak sinifi gecip gecmedigini kullaniciya bildirecek.");

	sonuc=(sinav1+sinav2+sinav3+sinav4)/4;

	if (sonuc>=50)
	{
		printf("sinifi %f puan ortalamasiyla gecti =)\n", sonuc);
	} else if (sonuc<=49){
		printf("sinifi %f puan ortalamasiyla kaldi =(\n");
	} else {
		printf("program if-else kod blogunda hata verdi.");
	}

	return 0;
}