#include <stdio.h>

int main()
{

int i=1,a,j,n;

scanf("%d %d",&a,&n);
while(i<a)
{
    i=i*n;
    if(i>a)
    printf("no");
}
if(i==a)
printf("yes");

    
    

    return 0;
}
