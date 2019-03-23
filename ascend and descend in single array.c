#include <stdio.h>

int main(void) {
	
    int a[100],n,i,j,b,temp,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=n-1;
    if(b%2==0)
    {
        c=(b-1)/2;
    }
    else
    {
        c=b/2;
    }
for(i=0;i<=c;i++)
{
    for(j=i+1;j<=c;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=c+1;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
	return 0;
}
