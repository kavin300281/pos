#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c,i,j,n,temp;
 int sum=0,l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==i)
{
b[l]=a[i];
l++;
}

}
   for(i=0;i<l;i++)
   {
   for(j=i+1;j<l;j++)
   {
   if(b[i]>b[j])
   {
   temp=b[i];
   b[i]=b[j];
   b[j]=temp;
   }
   }
   }
   for(i=0;i<l;i++)
   {
   printf("%d\n",b[i]);
   }
   getch();
   }
