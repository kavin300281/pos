#include <stdio.h>

int main()
{
    char a[100];
    int i,j,n=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    
    for(i=n-1;i>=1;i--)
    {
        printf("%c-",a[i]);
        
    }
    printf("%c",a[0]);

    return 0;
}
