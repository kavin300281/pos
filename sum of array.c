#include <stdio.h>

int main()
{
    int x[10],y,z=0,i;
    
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        scanf("%d",&x[i]);
        z=z+x[i];
    }
    
    printf("%d",z);

    return 0;
}
