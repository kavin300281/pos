#include <stdio.h>

int main()
{
int a[100],n,c=0,j,i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=2;;i++)
{
    c=0;
    for(j=0;j<n;j++)
    {
        if(i%a[j]==0)
        c++;
    }

    if(c==n)
    {
        printf("%d",i);
        break;
    }
}

    return 0;
}
