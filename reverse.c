#include <stdio.h>

int main()
{
    int y,x,z,sum=0,i;
    
    scanf("%d",&x);
    
    while(x)
    {
        y=x%10;
        sum=(sum*10)+y;
        x=x/10;
    }
    
    
    printf("%d",sum);

    return 0;
}
