#include <stdio.h>

int main()
{
int a[100],n,i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-2;i++)
{
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    i++;
    
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}
