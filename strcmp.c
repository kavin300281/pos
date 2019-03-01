#include <stdio.h>

int main()
{
  char a[100],b[100];
  int l=0,i,m=0,n=0;
  scanf("%s%s",a,b);
  for(i=0;a[i]!='\0';i++)
  {
      l++;
  }
  for(i=0;b[i]!='\0';i++)
  {
      m++;
  }
  if(l==m)
  {
      for(i=0;b[i]!='\0';i++)
  {
      if(a[i]==b[i])
      {
          n++;
      }
  }
  if(l==n)
  printf("yes");
  else
  printf("no");
  }
  else
  printf("no");
  
  
    return 0;
}

