#include <stdio.h>

int main()
{
    char a[100],b[1];
    int i,n;
    scanf("%s %s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(b[0]==a[i])
        {
        printf("%d",i+1);
            break;
        }
        
    }

    return 0;
}
