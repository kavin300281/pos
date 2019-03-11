#include <stdio.h>

int main()
{ 
    int n,b=1,i=0,j=2,sum=0;
    scanf("%d",&n);
    while(b)
    {
        sum=b*12;
        if(sum>=n)
        {
            printf("%d",j-1);
            break;
        }
        b=b+j*j;
        j++;
        
    }
    
    
    
    return 0;
}
