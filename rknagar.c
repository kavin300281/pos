#include <stdio.h>

int main()
{
   char a[100],b[100];
   int n,m,i,j,p;
   scanf("%s%s",a,b);
   for(i=0;a[i]!='\0';i++)
   n++;
   for(j=0;b[j]!='\0';j++)
   m++;
   if(m<n)
   p=m;
   else
   p=n;
   for(i=0;i<p;i++)
   {
       printf("%c",a[i]);
   }for(i=0;i<p;i++)
   {
       printf("%c",b[i]);
   }
    

    return 0;
}
