#include <stdio.h>
 
 
int main(void) {
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	if(a==0)
	  printf("%d is Zero",a);
	else if(a>0)
	  printf("%d is positive",a);
	else
	  printf("%d is negative",a);
	return 0;
}