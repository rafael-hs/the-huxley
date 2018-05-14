#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ent1, ent2, i, j, rec1, rec2, total, x1=0;
    
            for(;;)
            {
                scanf("%d", &ent1);
                scanf("%d", &ent2);
                
                if(ent1 == 0 && ent2 == 0)
                    break;
                rec1=ent1+1;
                rec2=ent2+1;
                total=ent1+ent2+1;
                
                int a[rec1], b[rec2], c[total];
                
                for(i=0; i<rec1; i++)
                {
                    scanf("%d", &a[i]);
                }    
                for(i=0; i<rec2 ;i++)
                {
                    scanf("%d", &b[i]);
                }    
                for(i=0; i<total; i++)
                {
                    c[i]=0;
                }    
                for(i=0;i<rec1; i++)
                {
                    for(j=0; j<rec2; j++)
                    {
                        c[j+i]+=(a[i]*b[j]);
                    }    
                }
                    
                printf("Caso #%d:", x1+1);
                for(i=0; i<total; i++)
                {
                    printf(" %d",c[i]);
                    ent1=0;
                    ent2=0;
                } 
                printf("\n");
                x1++;       
            }    
    return 0;
}
