#include <stdio.h>

int main(){
	int s1, s2;
	printf("s1 gir: "); scanf("%d", &s1);
	printf("s2 gir: "); scanf("%d", &s2);

	if(s1>s2){
		printf("s1 > s2 : %d > %d\n", s1,s2);
	} else if(s1<s2){
		printf("s1 < s2 : %d < %d\n", s1,s2);
	} else if(s1==s2){
		printf("s1 = s2 : %d = %d\n", s1,s2);
	} else {
		printf("if-else kod blogunda hata cikti.");
	}

	return 0;
}