#include <stdio.h>

int main()
{
	
	// 1-4 arasi matematik hesaplama islemleri

	char secim;
	float s1,s2;

	printf("\n1:+ \n2:- \n3:* \n4:/ \nsecimi giriniz: "); scanf("%c",&secim);

	switch(secim){
		case '+':{
			printf("s1 gir: "); scanf("%f",&s1);
			printf("s2 gir: "); scanf("%f",&s2);
			printf("toplam: %f", s1+s2);
			break;
		}
		case '-':{
			printf("s1 gir: "); scanf("%f",&s1);
			printf("s2 gir: "); scanf("%f",&s2);
			printf("cikarma: %f", s1-s2);
			break;
		}
		case '*':{
			printf("s1 gir: "); scanf("%f",&s1);
			printf("s2 gir: "); scanf("%f",&s2);
			printf("carpma: %f", s1*s2);
			break;
		}
		case '/':{
			printf("s1 gir: "); scanf("%f",&s1);
			printf("s2 gir: "); scanf("%f",&s2);
			if(s2==0){
				printf("0'a bolme hatasi");
				break;
			}
			printf("bolme: %f", s1/s2);
			break;
		}
		default:{
			printf("\n\t1-4 arasi gir\n");
		}
	}

	return 0;
}