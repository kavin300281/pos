#include <stdio.h>

int main()
{
    int i,j,k=0,n=0,l=0,p,c=0,m=0;
    char a[100],b[100],d[10];
    scanf("%[^\n]s",a);
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        
        if(a[i]==b[i])
        {
            
            k++;
        }
        
        if(k==l)
        printf("1");
    }

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
        d[c]=a[i];
        c++;
        }
        if(a[i]==' ')
        {
            n++;
          for(j=0;j<c;j++)
          {
              if(d[j]==b[j])
              {
                  m++;
              }
          }
          if(m==l)
          printf("%d",n);
          c=0;
          m=0;
          
        }
        
    }
    
    return 0;
}
