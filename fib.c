#include <stdio.h>

int main()
{
    int n,first=0,sec=1,next,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=1)
        next=i;
        else
        {
            next=first+sec;
            first=sec;
            sec=next;
        }
        printf("%d ",next);
    }
    
    return 0;
}

