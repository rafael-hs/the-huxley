#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char op;
    float resp=0, N;
    int cont;
    
    scanf("%f", &N);
    resp=N;
    
    while (op != '&')
    {
        cont=0;
        scanf("%f", &N);
        scanf(" %c", &op);
        
        if(op=='+')
            resp+=N;
        if(op=='-')
            resp-=N;
        if(op=='*')
            resp*=N;
        if(op=='/')
        {
            if(N==0)
            {
                printf("operacao nao pode ser realizada\n");
                cont++;
            }else
            {
                resp/=N;
            }
        }
        if(op=='&')
            break;
        if(cont==0)
            printf("%.3f\n", resp);
        
    
    }
    
	return 0;
}