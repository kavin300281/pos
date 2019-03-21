#include <stdio.h>

int main()
{
   long long int a,b,c,s,k=1,i;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(i=0;i<b;i++)
    {
        k=k*a;
    }
printf("%lld",k%c);
    

    return 0;
}
