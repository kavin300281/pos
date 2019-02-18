#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
   int a,b,i,f=0,sum=0,j;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       f=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           f++;
       }
       
       if(f<=2)
       {
           sum++;
           printf("%d\n",i);
       }
       
       
       
   }
   printf("%d",sum);
    return 0;
}

