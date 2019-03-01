#include <stdio.h>

int main()
{
  int a[10],i,j,f,n,c,p;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-2+1;i++)
  {
      c=0;
      for(j=0;j<n;j++)
      {
          if(c<a[j])
          {
              c=a[j];
              p=j;
          }
          
      }
      a[p]=0;
  }
  
    printf("%d",c);
    return 0;
}

