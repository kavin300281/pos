#include <stdio.h>

int main()
{
    int a,c=1;
    scanf("%d",&a);
    while(a)
    {
        c=c*a;
        a--;
        
    }
    printf("%d ",c);

    return 0;
}
