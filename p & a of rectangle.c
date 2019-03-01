#include <stdio.h>

int main()
{
    int p,a,i,j,perimeter,area,d=0;
    scanf("%d%d",&p,&a);
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=p;j++)
        {
            perimeter=2*(i+j);
            area=i*j;
            if(perimeter==p&&area==a)
            {
                d=1;
            }
            
            
        }
    }
if(d==1)
{
    printf("yes");
    
}
if(d==0)
{
    printf("no");
}
    return 0;
}

