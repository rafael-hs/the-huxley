#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    double desconto, total, salario;
    
    printf("Informe o salario do colaborador:");
    scanf("%lf", &salario);
    printf("\nSalario antes do reajuste: %.1lf", salario);
    
    if(salario <= 280){
        desconto=salario*0.20;
        printf("\nPercentual de aumento aplicado: 20%%");
        printf("\nValor do aumento: %.14lf", desconto);
        total=salario+desconto;
        printf("\nSalario com reajuste: %.2f", total);
    }
    
        if(salario > 280 && salario < 700){
        desconto=salario*0.15;
        printf("\nPercentual de aumento aplicado: 15%%");
        printf("\nValor do aumento: %.14lf", desconto);
        total=salario+desconto;
        printf("\nSalario com reajuste: %.2lf", total);
    }
    
        if(salario >= 700 && salario < 1500 ){
        desconto=salario*0.10;
        printf("\nPercentual de aumento aplicado: 10%%");
        printf("\nValor do aumento: %.14lf", desconto);
        total=salario+desconto;
        printf("\nSalario com reajuste: %.2lf", total);
    }
    
        if(salario >= 1500 ){
        desconto=salario*0.05;
        printf("\nPercentual de aumento aplicado: 5%%");
        printf("\nValor do aumento: %.14lf", desconto);
        total=salario+desconto;
        printf("\nSalario com reajuste: %.2lf", total);
    }
    
    
	return 0;
}