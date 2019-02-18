#include <stdio.h>

int main()
{
    int i,j,n;
    char a[100];
    
    scanf("%[^\n]s",&a);
    if(a[0]>='a'&& a[0]<='z')
    a[0]=a[0]-32;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]>='a'&&a[i+1]<='z')
            a[i+1]=a[i+1]-32;
        }
    }
    
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}

