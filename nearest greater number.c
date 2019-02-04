#include <stdio.h>

int main()
{
  int a,c,i;
  scanf("%d",&a);
  c=a%10;
  c=10-c;
  a=a+c;
  printf("%d",a);
  
    return 0;
}
