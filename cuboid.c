#include <stdio.h>

int main()
{
    int x,y,z,v,s;
    scanf("%d %d %d",&x,&y,&z);
    s=2*x*y+(2*y*z)+(2*x*z);
    v=x*y*z;
    printf("%d %d",s,v);

    return 0;
}
