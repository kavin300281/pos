#include <stdio.h>

int main()
{
int a[100],n,m,c=0,j,k,i,l=0,b[100];
scanf("%d %d",&m,&n);
for(i=0;i<m+n;i++)
{
    scanf("%d",&a[i]);
    if(i>=m)
    {
        k=i;
        for(j=0;j<=k;j++)
        {
            if(c<a[i])
            {
                c=a[i];
            }
        }
    
          b[l]=c;
          l++;
    }
    
}
for(i=0;i<l;i++)
{
 printf("%d ",b[i]);   
}

    
    

    return 0;
}
