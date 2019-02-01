#include <stdio.h>

int main()
{
    int n,rem,l=0,a[100],i;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        a[l]=rem;
        l++;
        n=n/10;
    }
    for(i=l-1;i>=0;i--)
    {
       printf("%d ",a[i]); 
    }
    return 0;
}
