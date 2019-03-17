#include <stdio.h>

int main()
{
int a,sum=0,rem,base=1;
scanf("%d",&a);
while(a)
{
    rem=a%2;
    sum=rem*base+sum;
    a=a/2;
    base=base*10;
    
}
printf("%d",sum);
    return 0;
}
