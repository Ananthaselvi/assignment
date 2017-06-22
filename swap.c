#include <stdio.h>

int main(void) {
   int a,b,temp=0;
   printf("Enter the number1");
   scanf("%d",&a);
   printf("Enter the number2");
   scanf("%d",&b);
   temp=a;
   a=b;
   b=temp;
   printf("a=%d",a);
   printf("b=%d",b);
   
	return 0;
}
