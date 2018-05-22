#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int id[100], var=0, i=0, cont=0, total;
    char co[100], cc[100], sx[100];

    scanf("%d", &id[i]);
    while(id[i] != -1){
        scanf(" %c %c %c\n", &sx[i], &cc[i], &co[i]);

        if(id[i] > var){
            var=id[i];
        }
        if(id[i]>=18 && id[i]<=35){
            if(sx[i] == 'f'){
                if(cc[i] == 'l' && co[i] == 'v'){
                    cont++;
                }
            }
        }
        i++;
        scanf("%d", &id[i]);
    }

    printf("Mais velho: %d\n", var);
    printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%\n", (cont*100.0)/i);

    return 0;
}

