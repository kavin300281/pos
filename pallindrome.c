#include <stdio.h>

int main()
{
    int a,sum=0,i,rem,temp;
    scanf("%d",&a);
    temp=a;

    while(a)
    {
     rem=a%10;
     sum=(sum*10)+(rem);
     a=a/10;
     
        
    }
    
    if(temp==sum)
    printf("yes");
    else
    printf("no");



    return 0;
}
