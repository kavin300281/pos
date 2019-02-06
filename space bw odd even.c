#include <stdio.h>

int main()
{
    
    char a[10],b[10],c[10];
    int i,l=0,m=0,n=0;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(i%2==0)
        {
            c[m]=a[i];
            m++;
        }
        
    }
    for(i=0;i<l;i++)
    {

        if(i%2!=0)
        {
            b[n]=a[i];
            n++;
        }
    }
    for(i=0;i<m;i++)
    {
    printf("%c",c[i]);
    }
    printf(" ");
    for(i=0;i<n;i++)
    {
        
    printf("%c",b[i]);
}
    return 0;
}
