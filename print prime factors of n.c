#include <stdio.h>

int main()
{
    int n,i,j,k,f=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        f=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    f++;
                }
            }
            if(f==2)
            printf("%d",i);
        }
    }
    

    return 0;
}
