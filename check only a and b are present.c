#include <stdio.h>

int main()
{
    char a[100];
    int l=0,n,i;
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        l++;
    }
    if(l==n)
    printf("yes");
    else
    printf("no");


    return 0;
}
