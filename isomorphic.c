#include <stdio.h>
int main()
{
    int i,a[10],b[10],c=0,d=0,f=0;
    char str1[100000],str2[100000];
    
    printf("Enter two String\n");
    scanf("%s %s",&str1,&str2);
    
    for(i=0;i<strlen(str1);i++)
    {

        if(str1[i]==str1[i+1])
        {
            a[c]=i;
            c++;
        }
    }
    for(i=0;i<strlen(str2);i++)
    {
        if(str2[i]==str2[i+1])
        {
            b[d]=i;
            d++;
        }
    }
    for(i=0;i<c;i++)
    {
        if(a[i]==b[i])
        {
            f++;
        }
    }
    
    if( strlen(str1) == strlen(str2) && f==c )
    {
        printf("\nyes");
        
    }
    else
    printf("\nno");
return 0;
}
