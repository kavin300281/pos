#include <stdio.h>

int main()
{
int i,j,a[10][10],l=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<=n+1;i++)
{
    a[0][i]=0;
    a[n+1][i]=0;
}
for(j=0;j<=n+1;j++)
{
    a[j][0]=0;
    a[j][n+1]=0;
}
for(i=0;i<=n+1;i++)
{
    for(j=0;j<=n+1;j++)
    {
        if(a[i][j]==1&&a[i-1][j]==0&&a[i][j-1]==0&&a[i+1][j]==0&&a[i][j+1]==0)
        {
            l++;
        }
    }    
}
printf("%d",l);
    return 0;
}
