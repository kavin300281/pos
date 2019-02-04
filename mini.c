#include <stdio.h>

int main()
{
  int a[10],c,i;
  for(i=0;i<10;i++)
  {
      scanf("%d",&a[i]);
      
  }
  c=a[0];
  for(i=0;i<10;i++)
  {
      if(c>a[i])
      c=a[i];
  }
  printf("%d",c);
    return 0;
}
