#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c,i,j,n,l=1,temp,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
   for(i=0;i<n;i++)
   {
   sum=sum+a[i]*l;
   l=l*10 ;
   }
   printf("%d",sum);
   getch();
   }
