#include <stdio.h>

int main()
{
int a[100],n,i,j,temp,l=0,m=0,k=0,rem;
scanf("%d",&n);
while(n)
{
    rem=n%10;
    a[l]=rem;
    l++;
    n=n/10;
}
for(i=0;i<l;i++)
{
    m=0;
for(j=i+1;j<l;j++)
{
    if(a[i]==a[j])
    {
        m++;
    }
}
if(m>0)
k++;
    
}
if(k>0)
printf("yes");
if(k==0)
printf("no");
    return 0;
}
