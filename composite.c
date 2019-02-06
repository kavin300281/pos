#include <stdio.h>

int main()
{
    char a[10];
    int b,l=0,i;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    if(l>1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
