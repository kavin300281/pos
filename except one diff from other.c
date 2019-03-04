#include <stdio.h>

int main()
{
 int a[100],i,l=0,j,n,m=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
      
 
     if(a[i]%2==0)
     {
         l++;
     }
     else
     {
      m++;   
     }
 
 }
 if(l>m)
 {
    for(i=0;i<n;i++)
 {
     if(a[i]%2!=0)
     {
         printf("%d",a[i]);
     }
 }
 
 }
  if(l>m)
 {
    for(i=0;i<n;i++)
 {
     if(a[i]%2!=0)
     {
         printf("%d",a[i]);
     }
 }
 
 }
  if(l<m)
 {
    for(i=0;i<n;i++)
 {
     if(a[i]%2==0)
     {
         printf("%d",a[i]);
     }
 }
 
 }
 
 return 0;
}
