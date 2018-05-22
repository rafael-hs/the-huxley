#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,h,l,aux;

    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d",&h,&l);

    if(a>b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    if(b>c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    if((b<=h) && (a<=l) || ((b<=l) && (a<=h)))
    {
        printf("S\n");
    }
    else
    {
        printf("N");
    }
}
