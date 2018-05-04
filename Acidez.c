#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float acidez;
    scanf("%f",&acidez);
    
    if(acidez<7.0)
        {
        printf("Acida");
        }
    else if(acidez==7.0)
        {
        printf("Neutra");
        }
    else
        {
        printf("Basica");
        }
	return 0;
}