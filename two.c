#include <stdio.h>

int main()
{
    int a,b,temp,i,l=0,c=1;
    
    
    scanf("%d%d",&a,&b);
    temp=a;
    while(temp)
    {
        l++;
        temp=temp/10;
    }
    for(i=1;i<=l;i++)
    {
        c=c*10;
    }
    printf("%d",a*c+b);
    
    return 0;
}

