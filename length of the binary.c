#include <stdio.h>

int main()
{
    int n,sum=0,rem,base=1,l=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        sum=sum+rem*base;
        base=base*10;
        n=n/2;
        
    }
    while(sum)
    {
        l++;
        sum=sum/10;
    }
printf("%d",l);
    return 0;
}
