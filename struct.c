#include <stdio.h>
struct college
{
	char name[100];
	char place[100];
	int  pincode;
	long int phone;
};

int main() {
struct college c;
scanf("%s",&c.name);
scanf("%s",&c.place);
scanf("%d",&c.pincode);
scanf("%ld",&c.phone);


printf("%s\n",c.name);
printf("%s\n",c.place);
printf("%d\n",c.pincode);
printf("%ld\n",c.phone);
 return 0;
}
