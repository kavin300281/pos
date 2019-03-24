#include <stdio.h>

int main()
{
    int a[100],i,j,n,l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        l=a[i];
        if(i+1<=n)
        m=a[i+1];
        if(m%l==0)
        {
            printf("%d ",m);
        }
    }

    return 0;
}
