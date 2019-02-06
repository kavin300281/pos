#include <stdio.h>

int main()
{
    char a[100],b[10];
    int n,i,m,l=0,j;
    scanf("%[^\n]s",&a);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {
            
        b[l]=a[i];
        l++;
        }
    }
    
    for(i=0;i<l;i++)
    {
        printf("%c",b[i]);
    }
    
    return 0;
}
