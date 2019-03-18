#include <stdio.h>

int main()
{
 long int n,a,b,c=1,temp,sum;
 scanf("%ld",&n);
 temp=n;
 printf("%d",temp);
 a=n%10;
  while(n)
 {
     c=c*10;
     n=n/10;
 }
 c=c/10;
 b=temp/c;
 sum=a+b;
 printf("%d",sum);
    return 0;
}
