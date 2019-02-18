
#include <stdio.h>

int main()
{
    int i,j;
    char temp;
    scanf("%d %c %d",&i,&temp,&j);
    
    if(temp=='/')
    printf("%d ",i/j);
    else
    printf("%d",i%j);
    
    
    return 0;
}
