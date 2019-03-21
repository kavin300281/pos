
#include <stdio.h>

int main()
{
int a[10],n,i,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
    s=s+i;
}
printf("%d",s);
    return 0;
}
