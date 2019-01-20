#include <stdio.h>

int main()
{
    int a,i,rem,temp,f=0;
    scanf("%d",&a);
    temp=a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        f++;
    }
    if(f==2)
    printf("yes");
    else
    printf("no");
    

    



    return 0;
}
