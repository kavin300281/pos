#include <stdio.h>

int main()
{
char a[100][100];
int n,m=0,i,j,c=0,l,l1,k;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%s",&a[i]);
for(i=0;i<n;i++)
{
    l=strlen(a[i]);
    l1=strlen(a[i+1]);
    if(l==l1)
    {
        for(j=0;j<l;j++)
        {
            if(a[i][j]==a[i+1][j])
            {
                c++;
            }
        }
        if(c==l)
        m++;
        c=0;
    }
    
}

if(m==k-1)
printf("yes");
else
printf("no");

    return 0;
}
