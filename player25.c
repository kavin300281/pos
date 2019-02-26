#include <stdio.h>

int main()
{
    char a[10][100],b[100];
    int n,i,j;
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s",a[i]);
    
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    if(strlen(a[i])<strlen(a[j]))
    
        {
            strcpy(b,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],b);
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%s ",a[i]);
}

    
    

    return 0;
}
