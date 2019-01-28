#include <stdio.h>

int main()
{

    char a[100];
    int i,n=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
        n++;
        }
        
    }
printf("%d",n);
    return 0;
}
