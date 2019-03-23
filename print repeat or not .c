#include <stdio.h>

int main()
{
    int a[100],n,k,l=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            l++;
        }
    }
if(l>0)
printf("yes %d",l);
if(l==0)
printf("no");
    return 0;
}
