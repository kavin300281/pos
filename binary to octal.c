#include <stdio.h>

int main()
{
 long int n,sum=0,rem,base=1;
scanf("%ld",&n);
while(n)
{
    rem=n%10;
    sum=sum+rem*base;
    base=base*2;
    n=n/10;
    
    
}

printf("%lo",sum);




    return 0;
}
