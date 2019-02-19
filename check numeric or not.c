#include <stdio.h>

int main()
{
 int n=0,i,c=0;
 char a[100];
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
 {
     c++;
     
 }
 for(i=0;i<c;i++)
 {
     if(a[i]>=48 && a[i]<=57)
     {
         n++;
     }
 }
 if(n==c)
 printf("yes");
 else
 {
     printf("no");
 }
 
return 0;
}
