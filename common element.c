#include <stdio.h>

int main()
{
 int n,k,x,i,j,a[100],b[100],p;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
    scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
       if(a[i]==b[j])
       {
           printf("%d ",a[i]);
           p=j;
       }
       a[p]=0;
   }
 }
    return 0;
}
