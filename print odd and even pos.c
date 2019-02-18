#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
   char a[10];
   int n,i,k,temp;
   scanf("%[^\n]s",&a);
   for(i=0;a[i]!='\0';i++)
   {
     temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;
     i=i+1;
       
   }
   for(i=0;a[i]!='\0';i++)
   {
       printf("%c",a[i]);
   }
    return 0;
