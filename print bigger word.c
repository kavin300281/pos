#include <stdio.h>

int main()
{
    int a,l=0,f,g=0,i;
    char b[100],c[20],d[20];
    scanf("%[^\n]s",b);
    
     
     for(i=0;b[i]!='\0';i++)
     {
         l++;
         
     }
     for(i=0;b[i]!=' ';i++)
     
    {
        g++;
    }
     f=l-(g+1);
     if(g>f||g==f)
     {
         for(i=0;i<g;i++)
         printf("%c",b[i]);
     }
     if(f>g)
     {
         for(i=g+1;i<l;i++)
         printf("%c",b[i]);
     }
     
     
    return 0;
}
