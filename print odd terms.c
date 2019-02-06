#include <stdio.h>

int main()
{
    
    int a,b,l,L[10],i,m=0;
    scanf("%d",&b);
    
    while(b)
    {
        l=b%10;
        if(l%2!=0)
        {
            L[m]=l;
            m++;
            
        }
        b=b/10;
    }
for(i=m-1;i>=0;i--)
{
    printf("%d ",L[i]);
}

    return 0;
}
