#include <stdio.h>

int main()
{
 int n=0,i,c=0;
 char a[100],b[100];
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]==' '&&a[i+1]==' ')
     {
         
     }
     else
     {
         b[c]=a[i];
         c++;
     }
 }
 for(i=0;i<c;i++)
 {
     printf("%c",b[i]);
 }
return 0;
}
