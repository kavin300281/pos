#include <stdio.h>

int main()
{
   int n,m=0,i,j,p,a[100],b[100],c[100],k=0,temp,l;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   
  for(i=0;i<n;i++)
   {
       l=0;
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
           l++;
           p=j;
           a[p]='$';
           }           
       }
    
 
       if(l>0)
       {
           c[k]=a[i];
           k++;
       }
       else
       {
           b[m]=a[i];
           m++;
       }
  
      
       
   }

   
   for(i=0;i<k;i++)
   {
       for(j=i+1;j<k;j++)
       {
           if(c[i]<c[j])
           {
               temp=c[i];
               c[i]=c[j];
               c[j]=temp;
           }
       }
   }
       
       
       for(i=0;i<k;i++)
       {
           if(c[i]!='$')
           printf("%d ",c[i]); 
       }
       for(i=0;i<m;i++)
       {
           if(b[i]!='$')
       printf("%d",b[i]);
       }
   

    return 0;
}
