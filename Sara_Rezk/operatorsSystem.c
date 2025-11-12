#include <stdio.h>
#include <stdlib.h>

/* Kullanıcıdan alınan iki sayinin toplama 1 çıkarma 2 çarpma 3
Bolme 4 seçeneklerinden biri seçilerek sonucu ekrana yazdıran program*/

int main() 
{
	float sayi1,sayi2,sonuc;
	int islem;
	
	printf("Lutfen ilk sayiyi giriniz :");
	scanf("%f",&sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz :");
	scanf("%f",&sayi2);
	
	printf("Lutfen yapilacak islemi giriniz \n");
	printf("Toplama icin 1\n");
	printf("Cikarma icin 2\n");
	printf("Carpma icin 3\n");
	printf("Bolme icin 4\n");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
			{
				sonuc=sayi1+sayi2;
				break;
			}
		case 2:
			{
				sonuc=sayi1-sayi2;
				break;
			}
		case 3:
			{
				sonuc=sayi1*sayi2;
				break;
			}
		case 4:
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
	
	
	
	
	
	return 0;
}