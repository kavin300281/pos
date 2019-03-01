#include <stdio.h>

int main()
{
  int a,i,j,f=0;
  scanf("%d",&a);
  for(i=2;i<a;i++)
  {
      if(a%i==0)
      {
          f++;
      }
  }
  if(f>0)
  printf("yes");
  else
  printf("no");
  
    
    return 0;
}

