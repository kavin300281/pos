#include<stdio.h>

#include<conio.h>
void main()
{
    int n=0,i;
    char a[50],b[50];
    
    scanf("%s %s",&a,b);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            n++;
        }
    }
    if(n>0)
    {
        printf("yes");
    }
    if(n==0)
    {
        printf("no");
    }
}
