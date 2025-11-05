#include <stdio.h>

int main()
{
	float ksinav, /*sinav,*/ vize, final, sonuc;

	printf("kisa sinav not gir: "); scanf("%f",&ksinav);
	printf("vize not gir: "); scanf("%f",&vize);
	printf("final not gir: "); scanf("%f",&final);

	sonuc=(ksinav+vize+final)/3;

	if(sonuc<= 100 && sonuc>90){
		printf("A");
	} else if(sonuc<=90 && sonuc>80){
		printf("B");
	} else if(sonuc<=80 && sonuc>70){
		printf("C");
	} else if(sonuc<=70 && sonuc>60){
		printf("D");
	} else if(sonuc<=60 && sonuc>50){
		printf("E");
	} else if(sonuc<=50 && sonuc>40){
		printf("F");
	} else if(sonuc<=49 && sonuc>0){
		printf("FF");
	} else {
		printf("uygunsuz veya islemlerde hata!");
	}

	return 0;
}