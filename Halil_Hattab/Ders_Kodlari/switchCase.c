#include <stdio.h>

int main()
{
	
	// kullanicidan alinan 1-7 arasindan sayi alinarak karsi gelen gunu gostermek.

	int gun;

	printf("lutfen haftanin kacinci gun oldugunu girinizi: "); scanf("%d",&gun);

	switch(gun){
		case 1:{
			printf("pazartesi\n");
			break;
		}
		case 2:{
			printf("sali\n");
			break;
		}
		case 3:{
			printf("carcamba\n");
			break;
		}
		case 4:{
			printf("persembe\n");
			break;
		}
		case 5:{
			printf("cuma\n");
			break;
		}
		case 6:{
			printf("cumartesi\n");
			break;
		}
		case 7:{
			printf("pazar\n");
			break;
		}
	default:{
		printf("1-7 arasi gir");
	}
	}

	return 0;
}