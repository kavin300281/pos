#include <stdio.h>

int main()
{
 int n,l=0,x,i,j,a[100],b[100],k,temp;
 scanf("%d ",&n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
    
 }
  for(i=0;i<n;i++)
  {
      if(a[i]<n)
      {
          printf("%d ",a[i]);
      }
  }
    return 0;
}
