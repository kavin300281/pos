#include <stdio.h>

int main()
{
    int a,l=0;
    scanf("%d",&a);
    while(a)
    {
        l++;
        a=a/10;
        
    }
    printf("%d",l);
    return 0;
}
