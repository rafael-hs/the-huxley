#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h1,n1,h2,n2;
    int totalh1,totalh2,TOTAL;
    for(;;)
    {
    scanf("%d %d %d %d",&h1,&n1,&h2,&n2);
        
        if(h1==0 && n1==0 && h2==0 && n2==0)
            break;
        totalh1=h1*60+n1;
        totalh2=h2*60+n2;
        
        if(totalh1<totalh2)
        {
            TOTAL=totalh2 - totalh1;
            printf("%d\n",TOTAL);
        }
        else
        {
            TOTAL=1440+(totalh2-totalh1);
            printf("%d\n",TOTAL);
        }
        
        
    }
    
	return 0;
}