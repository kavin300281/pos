#include <stdio.h>

int main()
{
  char a[100];
  int l=0,i;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      l++;
  }
  printf("%d",l);
    return 0;
}
