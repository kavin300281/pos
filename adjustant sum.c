#include <stdio.h>

int main()
{
int a[10],n,i,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(i>0)
    sum=sum+a[i];
}
printf("%d",sum);
    return 0;
}
