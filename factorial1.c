#include <stdio.h>

int main()
{
 int n,l=1;
 scanf("%d",&n);
 while(n)
 {
     l=l*n;
     n--;
     
 }
  printf("%d",l);
    return 0;
}
