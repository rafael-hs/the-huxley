#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float avela,caramelo,passas;
    float qavela,qcaramelo,qpassas;
    float valor;
    
    scanf("%f", &avela);
    scanf("%f", &caramelo);
    scanf("%f", &passas);
    
    scanf("%f", &qavela);
    scanf("%f", &qcaramelo);
    scanf("%f", &qpassas);
    
    valor=(avela*qavela)+(caramelo*qcaramelo)+(passas*qpassas);
    
    printf("Valor: R$%.2f",valor);
    
    
	return 0;
}