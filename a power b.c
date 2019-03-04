#include <stdio.h>

int main()
{
 int a,b,c=1,i;
 scanf("%d %d",&a,&b);
 while(b)
 {
     c=c*a;
     b--;
 }
 printf("%d",c);
 

    return 0;
}
