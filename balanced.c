#include <stdio.h>

int main()
{
    char b[100];
    int n,i,j,k=0,x=0,y;
    scanf("%s",&b);
    for(i=0;b[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            k++;
        }
        if(a[i]==')')
        {
            x++;
        }
    }
    if(x==k)
    printf("yes");
    else
    printf("no");

    
    

    return 0;
}

