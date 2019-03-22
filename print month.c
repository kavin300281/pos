#include <stdio.h>

int main()
{
    char a[100];
    int i,n;
    
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='-')
        {
            if(a[i+1]=='0'&&a[i+2]=='1')
            printf("january");
             if(a[i+1]=='0'&&a[i+2]=='2')
            printf("febuary");
             if(a[i+1]=='0'&&a[i+2]=='3')
            printf("march");
             if(a[i+1]=='0'&&a[i+2]=='4')
            printf("april");
             if(a[i+1]=='0'&&a[i+2]=='5')
            printf("may");
             if(a[i+1]=='0'&&a[i+2]=='6')
            printf("june");
             if(a[i+1]=='0'&&a[i+2]=='7')
            printf("july");
             if(a[i+1]=='0'&&a[i+2]=='8')
            printf("august");
             if(a[i+1]=='0'&&a[i+2]=='9')
            printf("september");
             if(a[i+1]=='1'&&a[i+2]=='0')
            printf("octember");
             if(a[i+1]=='1'&&a[i+2]=='1')
            printf("november");
             if(a[i+1]=='0'&&a[i+2]=='2')
            printf("december");
            
        }
    }

    return 0;
}
