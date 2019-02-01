#include <stdio.h>

int main()
{
    int i,m,l=0,k=0;
    char a[100];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    m++;
    
    for(i=0;i<m;i++)
    {
        if(a[i]>=48&&a[i]<=57)
        l++;
        if(a[i]>=65&&a[i]<=123)
        k++;
        
    }
    
if(k>0&&l>0)
printf("yes");
else
printf("no");
    return 0;
}
