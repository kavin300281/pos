#include <stdio.h>

int main()
{
    int y,x,z,sum=0,i;
    
    scanf("%d %d %d",&x,&y,&z);
    
    for(i=0;i<z;i++)
    {
        sum=sum+(x+(y*i));
    }
    
    
    printf("%d",sum);

    return 0;
}
