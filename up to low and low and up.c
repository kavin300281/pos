#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
 int i,n=0;
 
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
{
    n++;
}
 for(i=0;i<n;i++)
 {
     
     if((a[i]>='a')&&(a[i]<='z'))
     {
         a[i]=a[i]-32;
     }
    
     

      
     else
     {
     
         a[i]=a[i]+32;
     }
 }
 for(i=0;i<n;i++)
{
    printf("%c",a[i]);
}
return 0;
}
