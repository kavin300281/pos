#include <stdio.h>

int main()
{
    int N,a,d,i,sum=0;
    scanf("%d",&N);
    scanf("%d",&a);
    scanf("%d",&d);
    for(i=0;i<N;i++)
    {
        sum=sum+(a+i*d);
        
    }
    printf("%d",sum);
    
    
    

    return 0;
}
