#include <stdio.h>

int main()
{
    
    char a[10],b[10],c[10];
    int i,l=0,m=0,n=0,j;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        
     for(j=i+1;j<l;j++)
     {
        if(a[i]==a[j])
        {
            m++;
        }
     }
    }
     if(m>0)
     {
         printf("no");
     }
     else
     {
     printf("yes");
     }
    return 0;
}
