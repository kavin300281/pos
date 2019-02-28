#include <stdio.h>

int main()
{

int i,a[100],b[100],j,n,temp,l=0;

scanf("%d ",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    b[i]=a[i];
    
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
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
    if(b[i]==a[i])
    {
        l++;
    }
}

if(l==n)
{
    printf("yes");
}
else
printf("no");

    return 0;
}
