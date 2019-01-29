#include <stdio.h>

int main()
{
    int n,c,a[10],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        
    }
    c=sum/n;
printf("%d",c);
    return 0;
}
