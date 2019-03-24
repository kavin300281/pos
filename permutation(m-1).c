#include <stdio.h>

int main()
{
    int a[100],i,j,n,l=1,m=1,p,l1=1,m1=1,p1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n!=2)
    {
    for(i=0;i<n;i++)
    {
        l=l*a[i];
    }
    for(i=0;i<n-1;i++)
    {
        m=m*a[i];
    }
    p=l/m;
    for(i=1;i<=n;i++)
    {
        l1=l1*i;
    }

    for(i=1;i<=n-1;i++)
    {
        m1=m1*i;
    }
    p1=l1/m1;
    if(p1==p)
    printf("yes");
    else
    printf("no");
}
if(n==2)
{
    if(a[0]==1&&a[1]==2)
    printf("yes");
    else
    printf("no");
}

    return 0;
}
