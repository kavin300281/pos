#include <stdio.h>

int main()
{
 int i,j;
 char a[100];
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]=='X')
     {
         printf("A");
     }
     if(a[i]=='Y')
     {
         printf("B");
     }
     if(a[i]=='Z')
     {
         printf("C");
         
     }
     else
     {
         printf("%c",a[i]+3);
     }
 }
return 0;
}
