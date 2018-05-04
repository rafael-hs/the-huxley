#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double total;
    int dias,km;
    
    scanf("%d",&dias);
    scanf("%d",&km);
    
    total=(dias*30)+(km*0.01);
    total=total - (total*0.1);
    
    printf("%.2f",total);
	return 0;
}