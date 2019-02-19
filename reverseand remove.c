#include <stdio.h>

int main()
{
    char a[100];
    int n,rem,sum,c,i;
    scanf("%d",&sum);
    for(i=0;i<sum;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=sum;i>=0;i--)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='o'&&a[i]!='i'&&a[i]!='u')
        {
            printf("%c",a[i]);
        }
    }
    
    return 0;
}
