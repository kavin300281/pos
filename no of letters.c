#include <stdio.h>

int main()
{

    char a[100];
    int i,n;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=124)
        n++;
        
    }
printf("%d",n);
    return 0;
}
