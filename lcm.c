#include <stdio.h>

int main()
{
    int a,b,gcd,lcm,rem,den,num;
    scanf("%d%d",&a,&b);
    if(a>b){
        num=a;
        den=b;
        
    }
    else
    {
        num=b;
        den=a;
    }
    rem=num%den;
    while(rem)
    {
        num=den;
        den=rem;
        rem=num%den;
        
    }
    gcd=den;
    lcm=a*b/gcd;
    printf("%d",lcm);
    return 0;
}
