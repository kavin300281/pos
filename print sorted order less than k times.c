#include <stdio.h>

int main()
{
    int a[100],n,k,l=0,i,j,b[100],m=0,temp;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                l++;
            }
        }
        if(l<k)
        {
            b[m]=a[i];
            m++;
        }
    }
for(i=0;i<m;i++)
{
    for(j=i+1;j<m;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
for(i=0;i<m;i++)
{
    printf("%d ",b[i]);
}
    return 0;
}
