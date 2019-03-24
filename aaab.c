#include <stdio.h>

int main()
{
    char a[100];
    int i,j,k,l=0;
    
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    
    for(i=0;i<l;i++)
    {
        if(a[i+1]>=47&&a[i+1]<=56)
        {
            k=a[i+1]-48;
            for(j=0;j<k;j++)
            {
                printf("%c",a[i]);
            }
        }
    }
    

    return 0;
}
