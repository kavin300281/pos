#include <stdio.h>

int main()
{
    int a,b,c,d,i=1,rem,s=0,ba=1,r;
    scanf("%d%d",&a,&b);
    c=a*b;
    while(c)
    {
        rem=c%2;
        s=s+(rem*ba);
        ba=ba*10;
        c=c/2;
        
        
        
    }
while(i)
{
    s=s/10;
    r=s%10;
    i*=2;
    if(r==1)
    {
        printf("%d",i);
        break;
    }
    
}
    return 0;
}
