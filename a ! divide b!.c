#include <stdio.h>

int main()
{
    int a,b,i,j,n,l=1,m=1,p;
    scanf("%d%d",&a,&b);
    
    for(i=1;i<=a;i++)
    {
        l=l*i;
    }
    for(i=1;i<=b;i++)
    {
        m=m*i;
    }
    p=l/m;
    printf("%d",p);
    
    return 0;
}
