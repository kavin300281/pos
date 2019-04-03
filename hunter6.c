#include <stdio.h>

int main()
{
int a[100],b[100],i,j,n,l=0,c,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            b[l]=j;
            l++;
        }
    }
}
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
}
c=b[0];
printf("%d",a[c]);
    return 0;
}
