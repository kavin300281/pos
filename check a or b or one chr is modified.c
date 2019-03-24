#include <stdio.h>

int main()
{
char a[100];
int i,j,l=0,m;
scanf("%s",a);
m=strlen(a);
for(i=0;i<m;i++)
{
    if(a[i]=='a'||a[i]=='b')
    {
        l++;
    }
}
if(m==l||m-1==l)
{
    printf("yes");
}
else
printf("no");
    return 0;
}
