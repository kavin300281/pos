#include <stdio.h>

int main()
{
    
    int i,j,c=0,l=0,n,k,a[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        c++;
    }
    
if(c>0)
printf("yes");
else
printf("no");
    return 0;
}
