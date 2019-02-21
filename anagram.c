#include <stdio.h>
int main ()
{
  char str[100];
  int i, j,count = 0,N;
  printf("Please enter N : ");
  scanf("%d",&N);
  for (j = 0; j < N; j++)
  {
     scanf ("%s", &str);
	   for(i=0;i<strlen(str);i++)
	   {
	   if(str[i]=='k' || str[i]=='a' || str[i]=='b' || str[i]=='l' || str[i]=='i')
	   {
	   continue;
	   }
	   else
	   break;
	   }
	   if(strlen(str)==i)
	   {
	   count++;
	   }
}
	   printf("\nTotal anagram of kabali is = %d",count);
		 return 0;
    }
