#include <stdio.h>

int main()
{
    int a[10],n,i,j,c,k,p,b;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    b=n+1-k;
    for(i=0;i<b;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(c<a[j])
            {
                c=a[j];
                p=j;
            }
        
        }
        a[p]=0;
        
    }
    printf("%d",c);
    return 0;
}

