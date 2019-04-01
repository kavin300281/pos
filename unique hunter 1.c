#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],l=0,i,j,k,n,p;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
b[l]=a[i];
l++;
p=j;
a[p]='$';
}
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
printf("%d ",b[i]);
}
if(l==0)
printf("unique");
getch();
}




