#include <stdio.h>

int main()
{
 int a,i,j,k,f;
 scanf("%d",&a);
 for(i=2;i<=a;i++)
 {
     f=0;
     if(a%i==0)
     {
         for(j=1;j<=i;j++)
         {
             if(i%j==0)
             {
                 f++;
             }
         }
          if(f==2)
         {
             printf("%d ",i);
         }
     
         
     }
    
 }
return 0;
}
