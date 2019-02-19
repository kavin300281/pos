#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    int a[100],b[100];
    scanf("%d%d",&n,&k);
    
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j+1]=a[j];
        }
        b[0]=a[n-1];
        b[n]='\0';
        for(l=0;l<n;l++)
        {
            a[l]=b[l];
        }
    }
    
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}
