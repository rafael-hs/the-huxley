#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int anoI, anoF;
    
    scanf("%d %d",&anoI,&anoF);
    int cont=0;
    
    while(anoI<=anoF)
    {
    if (anoI % 4 == 0 && (anoI % 400 == 0 || anoI % 100 != 0)) 
    {
    printf("%d\n",anoI);
    anoI++;
    cont++;
  
    }else
         {
         anoI++;
         }
    }
    if(cont==0)
    {
        printf("-1");
    }
	return 0;
}