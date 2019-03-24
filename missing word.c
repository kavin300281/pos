#include <stdio.h>

int main()
{
    char a[100],b[100];
    int n,i,j,c=0,k,l=0,l1=0;
    scanf("%[^\n]s",a);
    scanf("\n");
    scanf("%[^\n]s",b);
    for(i=0;a[i]!='\0';i++)
    l++;
    for(i=0;b[i]!='\0';i++)
    l1++;
    if(l!=l1)
    {
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            printf("%c",a[i]);
            if(a[i+1]==' ')
            break;
            
        }
        
        
    }
    }
    if(l==l1)
    {
        for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            printf("%c %c",a[i],b[i]);
            
        }
        
    }
    }

    return 0;
}
