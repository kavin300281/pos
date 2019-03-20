#include <stdio.h>

int main()
{
    int a[100],i,j,k,n,l=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        l=0;
        if(a[i]!=0)
        {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                l++;
                if(l==1)
                 {
                printf("%d ",a[i]);
                 }
                 if(l>1)
                 {
                     a[j]=0;
                 }
                 
                
                
            }
        }
        }
        
    }

    return 0;
}
