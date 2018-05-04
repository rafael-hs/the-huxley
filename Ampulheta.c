#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,i,j,nv,k,n,f;
    scanf("%d",&n);// numero de casos
    int vetl[n];
    int vetnv[n];
    
    for(i=0;i<n;i++){ //loop preencher vetor
    scanf("%d",&vetl[i]);// linhas da ampulheta
    scanf("%d",&vetnv[i]);// nivel  da ampulheta
    }
    
    for(f=0;f<n;f++){
        l=vetl[f];// linhas da ampulheta
        nv=vetnv[f];// nivel  da ampulheta
        k=(l-2)-nv;// constante entre o nivel e o maximo
        printf("Caso %d:\n",f+1);// titulo 
        printf("**");
        for (i=0;i<l-2;i++){//loop primeira linha  
        printf(" *");
        }
        printf(" **");
        printf("\n");
        
    for (i=1;i<l;i++){ //loop parte cima interior
        for (j=0;j<=l*2;j++){
            if(j==0)// condi??o dos asteriscos
            printf("*");
            else if(j==l*2)
            printf("*");
            else if(j==i+1)
            printf("*");
            else if(j==(l*2-1)-i)
            printf("*");// condi??o dos asteriscos fim
            else{
            if((i>=l-k-1)&&(j>i+1)&&(j<(l*2-1)-i))//condi??o nivel cima-- pontos
            printf(".");
            else
            printf(" ");// condi??o dos espa?os
            }
        }
        printf("\n");// condi??o final de linha
    }
    
       for (i=1;i<l;i++){//loop parte baixo interior
        for (j=0;j<=l*2;j++){
            if(j==0)// condi??o dos asteriscos
            printf("*");
            else if(j==l*2)
            printf("*");
            else if(j==l-i+1)
            printf("*");
            else if(j==l+i-1)
            printf("*");// condi??o dos asteriscos fim
            else{
            if((i>k+1)&&(j>l-i+1)&&(j<l+i-1))//condi??o nivel baixo-- pontos
            printf(".");
            else
            printf(" ");// condi??o dos espa?os
            }
        }
        printf("\n");// condi??o final de linha
    }
    
    printf("**");
        for (i=0;i<l-2;i++){//loop ultima linha  
        printf(" *");
        }
        printf(" **");
        printf("\n");
    }    
    
	return 0;
}

