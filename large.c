#include <stdio.h>
int main()
{
   int n1,n2,n3;
   printf("Enter the number1");
   scanf("%d",&n1);
    printf("Enter the number2");
   scanf("%d",&n2);
    printf("Enter the number3");
   scanf("%d",&n3);
  if(n1>n2 && n1>n3)
   printf("The greatest number is %d",n1);
  else if(n2>n1 && n2>n3)
   printf("The greatest number is %d",n2);
  else
   printf("The gretaest number is %d",n3);
}
