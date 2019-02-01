
#include <stdio.h>

int main()
{
    int a,m,n,l=0;
    scanf("%d",&m);
    while(m)
    {
        a=m%10;
        l++;
        m=m/10;
    }
    printf("%d",l);
    return 0;

}
