#include <stdio.h>
#include <stdlib.h>

/* Kullanıcıdan alınan iki sayinin + - * / seçeneklerinden biri
seçilerek sonucu ekrana yazdıran program*/

int main()
{
	float sayi1,sayi2,sonuc;
	char islem;
	printf("Lutfen yapilacak islemi giriniz \n + - * /\n");
	scanf("%c",&islem);

	printf("Lutfen ilk sayiyi giriniz :");
	scanf("%f",&sayi1);
	printf("Lutfen ikinci sayiyi giriniz :");
	scanf("%f",&sayi2);


	switch(islem)
	{
		case '+':
			{
				sonuc=sayi1+sayi2;
				break;
			}
		case '-':
			{
				sonuc=sayi1-sayi2;
				break;
			}
		case '*':
			{
				sonuc=sayi1*sayi2;
				break;
			}
		case '/':
			{
				sonuc=sayi1/sayi2;
				break;
			}
		default:
			{
				printf("Yanlis islem girdiniz");
			}
	}
	printf("Sonuc = %f",sonuc);

}
