#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a,b,c;
    double area,areac,areat,areaq,arear;
    double pi=3.14159;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("TRIANGULO: %.3f\n", area=(a*c)/2.0);
    printf("CIRCULO: %.3f\n", areac=pi*(c*c));
    printf("TRAPEZIO: %.3f\n", areat=((a+b)*c)/2.0);
    printf("QUADRADO: %.3f\n", areaq=b*b);
    printf("RETANGULO: %.3f", arear=a*b);
    
	return 0;
}