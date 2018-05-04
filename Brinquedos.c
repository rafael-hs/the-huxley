#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int id, alt, cont=0;
    
    scanf("%d %d", &alt, &id);
    
    if(alt>=150 && id>=12)
    cont++;
    if(alt>=140 && id>=14)
    cont++;
    if(alt>=170 || id>=16)
    cont++;
    
    printf("%d\n", cont);
    
	return 0;
}