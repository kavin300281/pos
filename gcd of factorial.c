#include <stdio.h>

int main()
{
    
    int i=1,j,c=0,l=0,n,k,a=1,b=1,num,den,rem,gcd;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    
    for(i=1;i<=k;i++)
    {
        b=b*i;
    }
    if(a<b)
    {
        num=b;
        den=a;
        
    }
    else
    {
        num=a;
        den=b;
    }
rem=num%den;
while(rem!=0)
{
    num=den;
    den=rem;
    rem=num%den;
}
gcd=den;
printf("%d",gcd);
    return 0;
}
