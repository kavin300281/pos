#include <stdio.h>

int main()
{

int i,j,temp,l=0,m=0,n=0;
char a[100],b[100];
scanf("%s",&a);

scanf("%s",&b);
for(i=0;a[i]!='\0';i++)
{
    m++;
}
for(i=0;b[i]!='\0';i++)
{
    n++;
    
}
for(i=m-n+1;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]==b[j])
        {
           l++; 
        }
    }
}

if(l==n)
printf("yes");
else
printf("no");


    return 0;
}
