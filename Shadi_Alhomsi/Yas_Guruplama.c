#include <stdio.h>
#include <stdlib.h>

/* Yas gruplaması */

int main()
{
	int yas;
	printf("Lutfen Yasinizi girin : ");
	scanf("%d",&yas);

	if(yas>=0 && yas<=2)
	{
		printf("Bebek");
	}
	else if(yas>2 && yas<=12)
	{
		printf("Cocuk");
	}
	else if(yas>12 && yas<=25)
	{
		printf("Genc");
	}
	else if(yas>25 && yas<=40)
	{
		printf("Orta Yasli");
	}
	else if(yas>40 && yas<=70)
	{
		printf("Yasli");
	}
	else if(yas>70)
	{
		printf("Olmeyi bilememis");
	}
	else
	{
		printf("Hatali Giris");
	}

}


