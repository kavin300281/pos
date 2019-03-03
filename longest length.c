#include <stdio.h>

int main()
{
 int n,a[100],b[100],l=0,m=0,c,i,j,k;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 
 for(i=0;i<n-k;i++)
 {
     printf("%d ",a[i]);
 }
  
    return 0;
}



