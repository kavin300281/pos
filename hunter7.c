#include <stdio.h>

int main()
{
    int a[100],i,j,c=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
for(i=0;i<n;i++)
{
    if(i%2==0&&a[i]%2!=0)
    printf("%d ",a[i]);
    if(i%2!=0&&a[i]%2==0)
    printf("%d ",a[i]);

}
    return 0;
}
