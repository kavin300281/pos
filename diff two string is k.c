#include <stdio.h>

int main()
{
 int k,i,c,n=0,l=0;
 char a[10],b[10];
 scanf("%s %S %d",&a,&b,&k);
 for(i=0;a[i]!='\0';i++)
{
   l++; 
}
 for(i=0;a[i]!='\0';i++)
 {
     
     if(a[i]==b[i])
     {
         n++;
     }
 }
 if(l-1==n)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
 
     
 
return 0;
}
