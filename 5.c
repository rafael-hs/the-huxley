#include <stdio.h>
#include <stdlib.h>

int main()
{ int b,d,n,a,i,j,cont=0;
    scanf("%d%d",&n,&d);
    int m[n];
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a==d || a%10==d){
        m[cont]=a;
        cont++;
        }
    }
    if(cont==4){
    m[4]=-1;
    cont=5;
    }
    if(cont==3){
    m[4]=-1;
    m[3]=-1;
    cont=5;
    }
    if(cont==2){
    m[4]=-1;
    m[3]=-1;
    m[2]=-1;
    cont=5;
    }
    if(cont==1){
    m[4]=-1;
    m[3]=-1;
    m[2]=-1;
    m[1]=-1;
    cont=5;
    }
    if(cont==0){
    m[4]=-1;
    m[3]=-1;
    m[2]=-1;
    m[1]=-1;
    m[0]=-1;
    cont=5;
    }


for (i=0;i<cont;i++){
    for(j=i+1;j<cont;j++){
        if (m[i]>=m[j]){
            b=m[i];
            m[i]=m[j];
            m[j]=b;
        }
    }
}

for(i=cont-5;i<cont;i++){
printf("%d\n",m[i]);
}
    return 0;
}
