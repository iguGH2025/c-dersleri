#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,girilen,kactab;
	printf("kactan baslamasini istersiniz :");
	scanf("%d",&kactab);
	printf("kacta bitmesini istersiniz :");
	scanf("%d",&girilen);

	if (kactab<girilen){
	for(i=kactab;i<=girilen;i++)
	{
		printf("%d \n",i);
	}
	}
	else if (kactab>girilen){
        for (i=kactab;i>=girilen;i--){
            printf("%d \n",i);
        }
        }
    else{
        printf("girdiginiz iki sayi birbirine esit");
    }
}



