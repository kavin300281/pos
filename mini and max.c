#include <stdio.h>

int main()
{
    int n,c,a[10],b[10],d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
        if(c>a[i])
        c=a[i];
    }
    d=c;
    for(i=0;i<n;i++)
    {
        if(d<a[i])
        d=b[i];
    }
    printf("%d %d",c,d);

    return 0;
}
