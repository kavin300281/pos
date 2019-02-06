#include <stdio.h>

int main()
{
    
    int a,b,l,i;
    scanf("%d%d",&b,&a);
    l=a*b;
    i=sqrt(l);
    if(l==i*i)
            printf("yes");
    else
    printf("no");


    return 0;
}
