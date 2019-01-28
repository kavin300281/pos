#include <stdio.h>

int main()
{

    char a[100];
    int i,n=0,l=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        
        if(a[i]>=48&&a[i]<=57||a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
        n++;
        }
        else
    l++;
            
    }
    
printf("%d",l);
    return 0;
}
