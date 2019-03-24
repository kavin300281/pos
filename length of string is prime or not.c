#include <stdio.h>

int main()
{
    char a[100];
    int n,i,j,c=0,f=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        c++;
    }
for(i=1;i<=c;i++)
{
    if(c%i==0)
    f++;
}
if(f==2)
printf("yes");
else
printf("no");
    return 0;
}
