#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
   char a[10],b[10];
   int n=0,i,j=0;
   scanf("%s%s",&a,&b);
   for(i=0;a[i]!='\0';i++)
   {
     n++;  
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==b[i])
      {
          j++;
      }
   }
   
   if(n-1==j)
   printf("yes");
   else
   printf("no");
   return 0;
}

