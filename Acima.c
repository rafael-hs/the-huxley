#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a,b,c, media;
    int total;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    media=(a+b+c)/3;
    
    if(a>media)
    {
        total++;
    }
    if(b>media)
    {
        total++;
    }
    if(c>media)
    {
        total++;
    }
    
    printf("%d", total);
	return 0;
}