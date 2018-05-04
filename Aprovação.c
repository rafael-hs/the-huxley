#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n1,n2,n3;
    double total;


    printf("\nInforme a primeira nota:");
    scanf("%f", &n1);

    printf("\nInforme a segunda nota:");
    scanf("%f", &n2);

    printf("\nInforme a terceira nota:");
    scanf("%f", &n3);

    total=(n1+n2+n3)/3.0;


    if(total >=7)
        printf("\nAprovado com media %.1f",total);

    else if(total >=5 && total <7)
        printf("\nRecuperacao com media %.15f",total);


    if(total < 5)
        printf("\nReprovado com media %.1f",total);

	return 0;
}
