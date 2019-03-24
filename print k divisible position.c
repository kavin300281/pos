#include <stdio.h>

int main()
{
char a[100];
int i,j,l=0,m,k,n;
scanf("%s ",&a);
scanf("%d",&k);
for(i=0;a[i]!='\0';i++)
{
    l++;
}

for(i=1;i<=l;i++)
{
    
    if(i%k==0)
    {
        printf("%c ",a[i-1]);
    }
}
    

    return 0;
}
