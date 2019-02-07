#include <stdio.h>

int main()
{
    int y,a[10],x,i;
    
    scanf("%d %d",&y,&x);
    for(i=0;i<y;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    
    printf("%d",a[x-1]);

    return 0;
}
