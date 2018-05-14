#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main() {
    int par[5];
    int impar[5];
    int num,i,p=0,im=0;
    int j;
    
    for(i=0;i<15;i++)
    {
        scanf("%d",&num);
            if(num % 2==0)
            {
                    par[p]=num;
                    p++;
                    if(p>=5)
                    {
                        for(j=0;j<5;j++)
                        {
                        printf("par[%d] = %d\n",j,par[j]);
                        }
                        p=0;
                    }
            }
            else
            {
                impar[im]=num;
                im++;
                if(im>=5)
                {
                    for(j=0;j<5;j++)
                    {
                        printf("impar[%d] = %d\n",j,impar[j]);
                    }
                    im=0;
                }
                
            }
    }
	for(j=0;j<im;j++)
        printf("impar[%d] = %d\n",j,impar[j]);
	for(j=0;j<p;j++)
        printf("par[%d] = %d\n",j,par[j]);
        
	return 0;
}