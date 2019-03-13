#include <stdio.h>

int main()
{
    int n,l=0,a[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            printf("%d ",a[i+1]);
        }
        if(a[i]>a[i+1])
        {
            printf("%d ",a[i]);
        }
        if(a[i]==a[i+1])
        {
            printf("%d ",a[i]);
            
        }
    }

    return 0;
}
