#include <stdio.h>
#include <stdlib.h>

/* 0 dan girilen sayiya kadar (girilen dahil) olan sayilari alt alta yazdıran programı yazınız*/

int main() 
{
	int i,girilen;
	
	printf("lutfen bir sayi giriniz: ");
	scanf("%d",&girilen);
	
	for (i=0;i<=girilen;i++)
	{
	    printf("%d\n",i);
	}
	
	return 0;
}