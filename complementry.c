#include <stdio.h>

int main()
{
    char a[100],b[100],c[100]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,j,k=0,l,c1=0,m=0,n=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    m++;
    for(j=0;b[j]!='\0';j++)
    n++;
    for(i=m;i<m+n;i++)
    {
        a[i]=b[k];
        k++;
    }
    for(i=0;i<m+n;i++)
    {
        for(j=0;c[j]!='\0';j++)
        {
            if(a[i]==c[j])
            {
                c1++;
                c[j]='$';
                
            }
        }
    }

if(c1==26)
printf("complementry");
else
printf("non complementry");
    return 0;
}
