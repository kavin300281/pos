#include <stdio.h>

int main()
{
    int a[100],i,j,n,l,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        max=max|a[i];
    }
        
printf("%d",max);
    return 0;
}
