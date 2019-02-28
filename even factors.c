#include <stdio.h>

int main()
{

int i,j,l=0,a[100][2],n;

scanf("%d",&n);
for(i=2;i<=n;i++)
{
    if(n%i==0&&i%2==0)
    {
        printf("%d ",i);
    }
}
    
