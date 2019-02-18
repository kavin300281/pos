#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
   char a[10];
   int n,i,k,temp;
   scanf("%[^\n]s",&a);
    if(a[0]>='a' && a[0]<='z')
           {
               a[0]=a[0]-32;
           }
   
   for(i=1;a[i]!='\0';i++)
   {
       
     if(a[i]!=' ')
     {
         if(a[i]>='A'&&a[i]<='Z')
         {
             a[i]=a[i]+32;
         }
     }
     if(a[i]==' ')
     {
         
         if(a[i+1]>='a'&&a[i+1]<='b')
         {
             a[i+1]=a[i+1]-32;
         }
     }
       
   }
   for(i=0;a[i]!='\0';i++)
   {
       printf("%c",a[i]);
   }
    return 0;
}

