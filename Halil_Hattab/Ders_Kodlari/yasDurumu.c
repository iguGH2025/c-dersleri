#include <stdio.h>

int main(){
	int yas;

	printf("yas gir: "); scanf("%d",&yas);

	if(yas>=0 && yas<=2){
		printf("bebek");
	} else if(yas>2 && yas<=12){
		printf("cocuk");
	} else if(yas>13 && yas<=25){
		printf("genc");
	} else if(yas>25 && yas<=40){
		printf("orta yasli");
	} else if(yas>40 && yas<=70){
		printf("yasli");
	} else if(yas>70){
		printf("ol ya");
	}
}