#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float a;
    int ax;
    int i;
    for(i=0;i<5;i++){
        printf("Digite um valor:\n");
        scanf("%f",&a);
        if(a<0){
            ax++;
        }
    }
        printf("Foram digitados %d numeros negativos", ax);
	return 0;
}