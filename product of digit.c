#include<stdio.h>
void main()
{
    int a,i,j=1;
    scanf("%d",&a);
    while(a)
    {
        i=a%10;
        j=j*i;
        a=a/10;
    }
    
            printf("%d",j);
            
    
}
