#include <stdio.h>

int main()
{
    char a[10];
    int b,l=0,i;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    if(l%2==0)
        {
            a[l/2]='*';
            a[l/2-1]='*';
        }
        else
        a[l/2]='*';
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    
    

    return 0;
}
