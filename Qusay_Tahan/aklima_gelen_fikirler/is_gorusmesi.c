#include <stdio.h>
#include <stdlib.h>


int main() {
	// is icin katilma kurallari
	int yas,uni_ort;
	char tecrube[5],diploma[5];
	printf("sirketimize hosgeldin\n");
	printf("yasiniz kac\n");
	scanf("%d",&yas);
	if(yas>30)
	{
		printf("maalasef yasiniz standartlara uymiyor\n");
		return 0;
	}
	printf("tecrubeniz var mi (evet/hayir)");
	scanf("%s",&tecrube);
	if(strcmp(tecrube,"hayir")==0)
	{
		printf("tecrubeli bir elemeana ihtiyacimiz var\n" );
		return 0;
	}
	printf("diplomaniz varmi (evet/hayir)");
	scanf("%s",&diploma);
	if(strcmp(diploma,"hayir")==0)
	{
		printf("en az universite diplomasi lazim\n");
		return 0;
	}
	
    else 
    {
    	printf("universite ortalmaniz kac\n");
    	scanf("%d",&uni_ort);
	}
	printf("tesekurler is gorusmesi icin hazirsiniz\n");
	
	
	
	
	return 0;
}
