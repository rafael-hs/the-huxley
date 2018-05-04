#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        
        int a,i;
        float recebe,b,c;
        
        scanf("%d", &a);
        
        for(i=1; i<=a;i++){
            
                recebe = i*3;
                b=i/recebe;
                c=c+b;

            if(i<a){
                    printf("%d/%.f + ",i,recebe);
                    }    


            if(i==a){
                    printf("%d/%.f",i,recebe);
                
                    }
                           }
        if(a % 3 !=0 && c !=0){
                printf("\n%.2f",c);
                              }         
                              
        else if(a%3 == 0 || c==0){
            printf("\n%.1f",c);
                                  }                      
    
	return 0;
}