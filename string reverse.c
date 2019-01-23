#include <stdio.h>

int main()
{
char a[100],l=0,i;
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
    l++;
}
for(i=l-1;i>=0;i--)
{
    printf("%c",a[i]);
}


    return 0;
}
