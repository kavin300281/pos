#include <stdio.h>

int main()
{
int n,k,a[100],l=0,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(k==a[i])
    {
        l++;
    }
}
if(l>0)
printf("yes");
else
printf("no");
    return 0;
}
