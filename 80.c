#include <stdio.h>

int main()
{
    int n,m,a[100],b[100],i,temp,j,l=0;
    scanf("%d%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            b[l]=a[j]-a[i];
            l++;
            
            
            
            
        }
    }
    int c=b[0];
     for(i=0;i<l;i++)
    {
        if(c>b[i])
        {
            if(b[i]!=0)
            c=b[i];
        }
    
    }
    printf("%d",c);

    return 0;
}
