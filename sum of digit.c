
#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d",sum);

    return 0;
}
