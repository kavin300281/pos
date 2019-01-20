#include <stdio.h>

int main()
{
char a;
scanf("%c",&a);
if(a>=65&&a<=123)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("vowels");
    else
    printf("consonant");
}
else
printf("invalid");


    return 0;
}
