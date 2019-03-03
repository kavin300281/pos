#include <stdio.h>

int main()
{
    char a[100],b[10],c[10];
    int i,l=0,m=0,n=0,k=0,j;
    scanf("%[^\n]s",&a);
    scanf("\n");
    scanf("%s",&b);
    for(i=0;b[i]!='\0';i++)
    {
        m++;
    }
    
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
                    n++;
                    
                }
            }
            if(n==m)
            {
                k++;
                
            }
           l=0;
            n=0;
        }
         
    }
printf("%d",k);
    return 0;
}
