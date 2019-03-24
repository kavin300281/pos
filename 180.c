#include <stdio.h>

int main()
{
int a,b=1,c,rem,s=0,l=0,m=1,r;
scanf("%d",&a);

while(a)
{
   rem=a%10;
   s=s+rem*b;
   b=b*2;
   
   
   a=a/10;
   
   
   
}

while(s>m)
{
    m=m*2;
}
   printf("%d",m); 

    return 0;
}
