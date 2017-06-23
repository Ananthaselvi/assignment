#include <stdio.h>
int main()
{
   int i,s=0,n;
   printf("size of natural numbers");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	s=s+i;
   }
   printf("Sum of natural numbers %d",s);
}