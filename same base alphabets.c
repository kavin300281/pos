#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,k,c=0,l=0,m=0,n=0;
    scanf("%s%s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    m++;
    for(i=0;b[i]!='\0';i++)
    n++;
    
    
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    c++;
                    b[j]='$';
                }
            }
        }
    
    if(c==m||c==n)
    printf("yes");
    if(c!=m&&c!=n)
    printf("no");
    

    return 0;
}
