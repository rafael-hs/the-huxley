#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,s[35];
    int caso,i,b;

    scanf("%d", &caso);

    for(b=0; b<caso; b++)
    {
        //fflush(stdin);
        scanf("%s", s);

        a = s[0];
        printf("%c", a);
        for(i=1; s[i] != '\0'; i++)
        {
            if(s[i] != a)
            {
                printf("%c", s[i]);
                a = s[i];
            }
        }
        printf("\n");
    }
    return 0;
}
