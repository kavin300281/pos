#include <stdio.h>

int main()
{
    int l,i,N,L,R;
    scanf("%d",&N);
    scanf("%d%d",&L,&R);
    
    if(N>L&&N<R)
    printf("yes");
    else
    printf("no");

    return 0;
}
