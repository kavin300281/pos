#include <stdio.h>

int main()
{
 int n,l=0,x,i,j,a[100],b[100],k,temp;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
    if(k>a[i])
    {
        b[l]=a[i];
        l++;
    }
 }
 for(i=0;i<l;i++)
 {
     for(j=0;j<l;j++)
     {
         if(b[i]<b[j])
         {
             temp=b[i];
             b[i]=b[j];
             b[j]=temp;
         }
     }
 }
 for(i=0;i<l;i++)
{
    printf("%d ",b[i]);
}
    return 0;
}
