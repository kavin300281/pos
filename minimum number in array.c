#include <stdio.h>

int main()
{
    int a[10],i,c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    c=a[0];
    for(i=1;i<n;i++)
    {
        if(c>a[i])
        c=a[i];
        
    }
    printf("%d",c);

    return 0;
}
