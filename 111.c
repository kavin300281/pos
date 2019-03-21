#include <stdio.h>

int main()
{
    int a[100],b[100],c[100],l=0,i,j,m,n,p,q,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(a[i]==a[j])
        {
            a[j]=0;
            
        }
    }
}
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                if(a[i]!=0)
                {
                c[l]=a[i];
                l++;
                p=i;
                q=j;
                a[i]=0;
                b[j]=0;
                }
            }
        }
    }
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<l;i++)
{
    printf("%d",c[i]);
}
    return 0;
}
