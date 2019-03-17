#include <stdio.h>

int main()
{
    char a[100];
    int p,k,i;
    scanf("%s %d %d",&a,&p,&k);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==p)
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}
