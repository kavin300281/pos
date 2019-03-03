#include <stdio.h>

int main()
{
    char a[100],b[1];
    int i,n=0;
    scanf("%s %s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(b[0]==a[i])
        n++;
    }
printf("%d",n);
    return 0;
}
