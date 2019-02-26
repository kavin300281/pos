#include <stdio.h>

int main()
{
    char a[100]="kabali",b[100];
    int n,i,j,l=0,m=0,c,k,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=0;
        l=0;
      scanf("%s",b);
      
      
      for(j=0;j<5;j++)
      {
          for(k=0;k<5;k++)
          {
              if(a[j]==b[k])
              {
                  l++;
                  break;
                  
              }
          }
      }
      
      if(l==5)
      {
          m++;
      }
    }
    printf("%d",m);

    return 0;
}
