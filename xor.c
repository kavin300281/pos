#include <stdio.h>

int main()
{
    int a[100],i,j,n,l,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=1;i<n;i++)
    {
        
            l=l^a[i];
        
    }
    
        
printf("%d",l);
    return 0;
}
