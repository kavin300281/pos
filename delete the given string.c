#include <stdio.h>

int main()
{
    char a[100],b[100],c[100];
    int n,l=0,i,j,m=0;
    scanf("%[^\n]s",&a);
    scanf("%s",b);
    n=strlen(b);
     printf("n%d\n",n);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            c[l]=a[i];
            l++;
        }
        
        if(a[i]==' ')
        {
            for(j=0;j<l;j++)
            {
                if(c[j]==b[j])
                {
                    m++;
                }
                 
            }
            printf("m%d\n",m);
            if(m!=n)
            {
                for(j=0;j<l;j++)
            {
                printf("%c",c[j]);
                
            }
            }
            m=0;
            l=0;
        }
    }
    
    

    return 0;
}
