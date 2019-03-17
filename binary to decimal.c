#include <stdio.h>

int main()
{
int a,sum=0,rem,base=1;
scanf("%d",&a);
while(a)
{
    rem=a%10;
    sum=rem*base+sum;
    a=a/10;
    base=base*2;
    
}
printf("%d",sum);
    return 0;
}
