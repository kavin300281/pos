int main()
{
    int i,j=0,n;
    char temp[100];
    scanf("%[^\n]s",&temp);
    scanf("%d",&n);
    
for(i=0;temp[i]!='\0';i++)
{
    j++;
    
}

for(i=j-n;i<j;i++)
{
    printf("%c",temp[i]);
}
    
    
    return 0;
}
