#include <stdio.h>

int main()
{
    int i=1,n;
    scanf("%d",&n);
    while(i<n)
    {
        i=i*2;
        if(i>n)
        {
            printf("no");
        }
    }
    if(i==n)
    printf("yes");

    return 0;
}
