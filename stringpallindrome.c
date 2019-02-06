#include <stdio.h>

int main()
{
    int l=0,n=0,i,m=0;
    char a[10],b[10];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        b[n]=a[i];
        n++;
    }
    
    for(i=0;i<l;i++)
    {
       if(a[i]==b[i])
       {
           m++;
           
       }
    }
    if(l==m)
    printf("yes");
    else
    printf("no");

    return 0;
}
