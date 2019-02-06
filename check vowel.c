#include <stdio.h>

int main()
{
    int l=0,i,m=0;
    char a[10],b[10];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            l++;
        }
    }
    if(l>0)
    printf("yes");
    else
    printf("no");

    return 0;
}
