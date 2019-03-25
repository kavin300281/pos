#include <stdio.h>

int main()
{
    int n,i,j,c=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c++;
        if(a[i]!=0)
        printf("%d",a[i]);
        
    
}
for(i=0;i<c;i++)
printf("0");
    return 0;
}
    
