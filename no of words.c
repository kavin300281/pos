#include <stdio.h>

int main()
{

    char a[100];
    int i,n=1;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
        n++;
        }
        
    }
printf("%d",n);
    return 0;
}
