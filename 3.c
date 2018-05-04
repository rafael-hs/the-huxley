#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a,b,c;
     
     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     
     if(a<=b && b<=c)
        printf("%d\n%d\n%d", a,b,c);
     
     else if(a<=c && c<=b)
        printf("%d\n%d\n%d", a,c,b);
     
     else if(b<=a && a<=c)
        printf("%d\n%d\n%d", b,a,c);
     
     else if(b<=c && c<=a)
        printf("%d\n%d\n%d", b,c,a);
     
     else if(c<=a && a<=b)
        printf("%d\n%d\n%d", c,a,b);
     
     else if(c<=b && b<=a)
        printf("%d\n%d\n%d", c,b,a);    
     
    
	return 0;
}