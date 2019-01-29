#include <stdio.h>

int main()
{
    char a[10],b[10];
    int i,n,ele;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
        ele=i;
        }
    }
    for(i=ele+1;i<=n;i++)
    {
        a[i-1]=a[i];
    }
    
    for(i=0;i<=n;i++)
    {
        printf("%c",a[i]);
    }
    

    return 0;
}
