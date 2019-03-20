#include <stdio.h>

int main()
{
    int a[100],b[100],n,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    sum=sum+a[i];
   
    b[i]=sum;
    
}
for(i=n-1;i>=0;i--)
{
     printf("%d ",b[i]);
}
    return 0;
}
