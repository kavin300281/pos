#include <stdio.h>

int main()
{
    char a[100];
    int n,i,j,l=0,b[100],m=0,c;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l=0;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                l++;
            }
        }
        b[m]=l;
        m++;
        
        
    }
    c=0;
    for(i=0;i<m;i++)
    {
        if(c<b[i])
        {
            c=b[i];
        }
    }
for(i=0;a[i]!='\0';i++)
{
    l=0;
    for(j=i+1;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        {
            l++;
        }
    }
    if(l==c)
    printf("%c",a[i]);
}
    return 0;
}
