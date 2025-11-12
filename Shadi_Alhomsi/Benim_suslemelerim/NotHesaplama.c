#include <stdio.h>
#include <stdlib.h>

int main()
{
  int quiz,vize,finel;
  float ort,quiz1,vize1,finel1;

  printf("Quiz notunu gir : ");
  scanf("%d",& quiz);
  quiz1 = quiz *0.2;

  printf("vize notunu gir : ");
  scanf("%d",&vize);
  vize1 = vize* 0.3;

  printf("final notunu gir : ");
  scanf("%d",&finel);
  finel1 = finel* 0.5;

  ort = vize1+quiz1+finel1 ;
  printf("ortalamaniz = %f \n",ort);


  if (ort<=100 && ort>=90){
    printf("Tebrikler A ile gectiniz \n");
  }

  else if(ort<90 && ort>=80)
  {
      printf("B ile gectiniz \n");
  }

  else if(ort<80 && ort>=70)
  {
      printf("C ile gectiniz \n");
  }

    else if(ort<70 && ort>=60)
  {
      printf("D ile gectiniz \n");
  }

  else if(ort<60 && ort>=50)
  {
      printf("f ile kaldiniz \n");
  }

  else if(ort<50 && ort>=0)
  {
      printf("Maalesef kaldiniz \n");
  }

  else{
    printf("lutfen 0ile100 arasi sayi giriniz");
  }
}

