#include <stdio.h>

int main()
{
    int n,rem,sum=0,c;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        c=rem*rem;
        sum=sum+c;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
