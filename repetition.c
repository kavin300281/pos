#include <stdio.h>

int main()
{
    int a[10],i,m,n,l=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<m;i++)
 {
     if(a[i]==n)
     l++;
 }
 printf("%d",l);
    
    
    return 0;
}
