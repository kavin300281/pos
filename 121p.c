#include <stdio.h>

int main()
{
    char a[100][100],b[1000],c[1000];
    int l,s,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    strcpy(b,a[0]);
    for(i=1;i<n;i++)
    {
        strcpy(c,a[i]);
        if(b[0]<c[0])
        {
            strcpy(c,b);
        }
        if(b[0]==c[0])
        {
            l=strlen(b);
            s=strlen(c);
            if(l>s)
            {
                strcpy(b,c);
            }
            
        }
    }
    
printf("%s",b);
    return 0;
}
