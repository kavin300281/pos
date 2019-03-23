#include <stdio.h>

int main()
{
    int a[100],n,c=1,i,sum,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        sum1=a[i]+sum1;
        else
        sum2=sum2+a[i];
    sum=sum1-sum2;
    }

printf("%d",sum);
    

    return 0;
}

