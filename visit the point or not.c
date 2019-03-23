#include<stdio.h>
int main()
{
    int a[100][2],i,m,n,j,l=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==n){
            l++;
        
        }
        
        }
        
    }
    if(l>0)
    printf("yes");
    else
    printf("no");
    return 0;
}

