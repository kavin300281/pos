#include <stdio.h>

int main()
{
    int a[10],max=0,t,l,i,n;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        //printf("%d",max);
    }
    
    printf("%d",max);
    
    return 0;
}

