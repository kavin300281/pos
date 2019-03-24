#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,k,c=0,l=0,m=0,n=0,temp,x;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    m++;
    for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c>1)
         printf("%c",a[i]-32);
         if(c==1)
         printf("%c",a[i]);
    }
    

    

    return 0;
}
