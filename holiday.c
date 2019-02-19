#include <stdio.h>

int main()
{
    int n=0,i,j;
    char a[100];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
       n++; 
    }
    if(n==8)
    {
       if(a[0]=='s' && a[1]=='a' &&a[2]=='t' &&a[3]=='u' &&a[4]=='r' &&a[5]=='d' &&a[6]=='a' &&a[7]=='y' )
       {
           printf("yes");
       }
    }
    if(n==6)
    {
         if(a[0]=='s'&&a[1]=='u'&&a[2]=='n'&&a[3]=='d'&&a[4]=='a'&&a[5]=='y')
         {
             printf("yes");
         }
    }
    else
    {
        printf("no");
    }

    return 0;
}
