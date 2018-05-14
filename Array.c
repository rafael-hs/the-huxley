#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main() {

    char N[50];
    int i, n, l, j,c;
    int aux,tt;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &l);
        for(j=0;j<l;j++)
        {
                fflush(stdin);
                scanf("%s",N);
                for(c=0;N[c]!='\0';c++)
                {
                    aux=N[c];
                    tt+=(aux-65)+j+c;
                }
        }
            printf("%d\n",tt);
            tt=0;
    }
	return 0;
}
