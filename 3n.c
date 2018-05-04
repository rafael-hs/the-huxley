#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2;
    int i,j;
    int valor=0;
    int cont,aux;
    
    for(;;)
    {
        scanf("%d %d",&n1,&n2);
        if(n1==0 && n2==0)
            break;
            
        if(n1>n2)
        {
            i=n2;
            j=n1;
        }else
        {
            i=n1;
            j=n2;
        }
        
        while(i<=j)
        {
            cont=1;
            aux=i;
            while(aux>1)
            {
                if(aux %2 == 0)
                {
                    aux=aux/2;
                }
                else
                {
                    aux=3*aux+1;
                }
                
            cont++;
            }
            if(cont>valor)
            {
                valor=cont;
            }
            i++;
        }
        printf("%d %d %d\n",n1,n2,valor);
        n1=0;
        n2=0;
        valor=0;
    }
    
	return 0;
}