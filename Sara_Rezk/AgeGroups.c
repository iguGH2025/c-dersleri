#include   <stdio.h>
int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);  

    if(age>=0 && age<=2)
    {
        printf("Baby.\n");
    }
    else if(age>2 && age<=12)
    {
        printf("Child.\n");
    }
    else if(age>12 && age<=25)
    {
        printf("Teenager.\n");
    }
    else if(age>25 && age<=40)
    {
        printf("Adult.\n");
    }
    else if(age>40 && age<=70)
    {
        printf("Yasli.\n");
    }
    else if(age>70)
    {
        printf("Bir ayagi mezarda.\n");
    }
    else
    {
        printf("Eror.\n");
    }
    return 0;
}
