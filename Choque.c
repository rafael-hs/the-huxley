#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int level, potencia;
    
    scanf("%d", &level);
    
        if(level >= 1 && level <= 20){
            potencia = 20+ (level*level*level);
            printf("\nPotencia de : %d W", potencia);
                                      }

        if(level >= 21 && level <= 40){
            potencia = 8000+ ((level-10)*(level-10));
            printf("\nPotencia de : %d W", potencia);
                                      }
         if(level >= 41 && level <= 60){
            potencia = 9000 + 5*level;
            printf("\nPotencia de : %d W", potencia);
                                      }
        if(level >= 61 && level <= 80){
            potencia = 9300 + 2*level;
            printf("\nPotencia de : %d W", potencia);
                                      }
        if(level >= 81 && level <= 100){
            potencia = 9500 + level;
            printf("\nPotencia de : %d W", potencia);
                                      }
                                       
         
	return 0;
}