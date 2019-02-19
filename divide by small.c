#include <stdio.h>

int main()
{
 int a,b,den,num,rem,c;
 scanf("%d%d",&a,&b);
 if(a>b)
 {
     num=a;
     den=b;
 }
 else
 {
     num=b;
     den=a;
 }
 rem=num%den;
 while(rem)
 {
     num=den;
     den=rem;
     rem=num%den;
 }
 c=(a*b)/den;
printf("%d",c);
return 0;
}
