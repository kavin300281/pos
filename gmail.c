#include <stdio.h>

int main()
{
    char a[100];
    int n,i,m,l1=0,l2=0,sum=0,len=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
        
        
    }
    for(i=0;i<len;i++)
    {
        if(a[i]=='@')
        {
            n=i;
            l1++;
        
        }
        if(a[i]=='.')
        {
            m=i;
            l2++;
            
        }
        
        
    }
    
    if(l2==1&&l1==1&&n<m&&n>=3&&m-n>=5&&a[len-4]=='.'&&a[len-3]=='c'&&a[len-2]=='o'&&a[len-1]=='m')
    printf("yes");
    else
    printf("no");
    return 0;
}
