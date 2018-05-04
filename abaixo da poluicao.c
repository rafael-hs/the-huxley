#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int nVeiculo=0;
    float valorm;
    int cont=0;
    float multa=12.89;
    int veiculodescontado;
    for(;;)
    {
        scanf("%d",&nVeiculo);
        if(nVeiculo==999)
        break;
        if(nVeiculo>2)
        {

        veiculodescontado=nVeiculo-2;
        valorm=valorm+(veiculodescontado*multa);
        cont++;
        }
    }
    printf("%.2f\n",valorm);
    printf("%d\n",cont);
	return 0;
}
