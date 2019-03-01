#include <stdio.h>

int main()
{
    char a[100];
    int n,i,j,m=0;
    scanf("%s",a);
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++)
    {
     m++;   
    }
    
    for(i=n;i<m;i++)
    {
        
        printf("%c",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<m)
        printf("%c",a[i]);
        
    }

    return 0;
}
