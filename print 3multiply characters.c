#include <stdio.h>

int main()
{
char a[100];
int i,n,sum=0;
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
    if(i%3==0)
    {
        printf("%c",a[i]);
    }
    
}
    return 0;
}
