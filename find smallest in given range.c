#include <stdio.h>

int main()
{
    int n,a[100],i,j,l,r,m,k,c;
    scanf("%d%d%d",&n,&l,&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==l)
        {
            m=i;
        }
        if(a[i]==l)
        {
            k=i;
        }
    }
    c=a[m];
    for(i=m;i<=k;i++)
    {
        if(c>a[i])
        {
            c=a[i];
        }
    }
    printf("%d",c);

    return 0;
}
