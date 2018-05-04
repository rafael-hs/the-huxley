#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    int y, x;
    
    scanf("%d", &n);
    while(n!=0)
    {
    y=n/2;
    x=y++;
    printf("%d - %d\n", y*y, x*x);
    scanf("%d", &n);
    }
    
	return 0;
}