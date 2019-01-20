#include <stdio.h>

int main()
{
    int a,l,temp,t1,i,c,sum=0,rem;
    scanf("%d",&a);
    temp=a;
    t1=a;
    while(a)
    {
        l++;
        a=a/10;

    }
    while(temp)
    {
        
        c=1;
        rem=temp%10;
        for(i=0;i<l;i++)
        {
            c=c*rem;
        }
        sum=sum+c;
        temp=temp/10;
    }
    if(t1==sum)
        printf("yes");
        else
        printf("no");
    

    return 0;
}
