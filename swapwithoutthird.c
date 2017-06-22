#include <stdio.h>

int main(void) {
   int a,b,temp=0;
   printf("Enter the number1\n");
   scanf("%d",&a);
   printf("Enter the number2\n");
   scanf("%d",&b);
   printf("a=%d\n",a);
   printf("b=%d\n",b);
   a=a*b;
   b=a/b;
   a=a/b;
   printf("After swaping\n");
   printf("a=%d\n",a);
   printf("b=%d\n",b);
   
	return 0;
}
