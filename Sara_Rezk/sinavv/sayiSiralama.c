#include <stdio.h>

int main()
{
    int a=16, b=4, c;
    int x=42 , y=65, z;
    int k=13, l= 7, m;

    c= a++ - --b;
    printf("A=%d\n B=%d\n C=%d\n",a,b,c);
    z= --x * y++;
    printf("X=%d\n Y=%d\n Z=%d\n ",x,y,z);
    m= ++k / l--;
    printf("K=%d\n L=%d\n M=%d\n",k,l,m);

    return 0;
}