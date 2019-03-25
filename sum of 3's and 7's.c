#include <stdio.h>

int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    if(n%3==0)
     c=1;
    if(n%7==0)
    c=1;
    if(c==1)
    printf("yes");
    if(c==0)
    printf("no");
    

    return 0;
}
