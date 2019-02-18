#include <stdio.h>

int main()
{
    int a[10],b,temp,i,l,c=1;
    
    
    scanf("%d%d",&b,&l);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("%d",a[l]);
    
    return 0;
}
