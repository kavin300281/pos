#include <stdio.h>

int main()
{
    char a[100];
  int i,j,k,c=0,l=0,n=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
         if(a[i]==a[j])
         c++;
        }
        if(a[i]!=a[i-1])
        printf("%c%d",a[i],c);
    }

    return 0;
}
