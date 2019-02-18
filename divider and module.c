
#include <stdio.h>

int main()
{
    int  long i,j;
    char temp;
    scanf("%ld %c %ld",&i,&temp,&j);
    
    if(temp=='/')
    printf("%ld ",i/j);
    else
    printf("%ld",i%j);
    
    
    return 0;
}
