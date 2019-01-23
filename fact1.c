#include <stdio.h>

int main()
{
int n,c=1;
scanf("%d",&n);
while(n)
{
    c=c*n;
    n--;
}
printf("%d ",c);
    return 0;
}
