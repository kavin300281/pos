#include<stdio.h>
int main()
{
    char a[100];
    int i,m=0,n=0,c;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]%2==0)
        {
            m++;
        }
        else
        {
            n++;
        }
    }
    c=m*n;
    printf("%d",c);
    return 0;
}

