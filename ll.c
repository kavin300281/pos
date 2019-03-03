#include <stdio.h>

int main()
{
 int n,a[100],b[100],l=0,m=0,c,i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     l=0;
     for(j=0;j<n;j++)
     {
         if(a[i]==a[j])
         {
            l++; 
         }
         
     }
     b[m]=l;
     m++;
}
c=0;
 for(i=0;i<m;i++)
 {
     if(c<b[i])
     {
         c=b[i];
     }
 }
  printf("%d",c);
    return 0;
}
