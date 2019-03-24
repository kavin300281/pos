#include <stdio.h>

int main()
{
char a[100][100];
int n,m,i,j,c=0,l,l1;
scanf("%d",&n);
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
    }
    
}
if(c>0)
printf("yes");
if(c==0)
printf("no");

    return 0;
}
