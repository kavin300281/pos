{
    int a,b,l,temp,t1,t2,i,j,c,sum=0,rem;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
    temp=i;
    t1=i;
    t2=i;
    l=0;
    while(t2)
    {
        l++;
        t2=t2/10;

    }
    while(temp)
    {
        
        c=1;
        rem=temp%10;
        for(j=0;j<l;j++)
        {
            c=c*rem;
        }
        sum=sum+c;
        temp=temp/10;
    }
    if(t1==sum)
        printf("%d",t1);
        sum=0;
        
        
    }

    return 0;
}
