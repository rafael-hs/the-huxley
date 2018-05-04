#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int cont=0;
    int i;
    int vet[1000];
    int parar=0;

    for(i=0;i<=999;i++)
        {
        scanf("%d", &vet[i]);
        }
    scanf("%d", &n);
    for(i=0;i<=999;i++)
        {
        if(n==vet[i])
            cont++;
        }
    printf("%d appeared %d times\n",n,cont);

    cont=0;
    while(parar==0)
    {
        for(i=0;i<=999;i++)
        {
        scanf("%d", &vet[i]);
        if(vet[0]==-1)
            return 0;

        }
        scanf("%d", &n);
        for(i=0;i<=999;i++)
        {
            if(vet[i]==n)
            cont++;
        }
        printf("%d appeared %d times\n",n,cont);
        cont=0;
    }

	return 0;
}