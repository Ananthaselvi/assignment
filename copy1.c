#include<stdio.h>
int main()
{
	 char a[100];
	 char b[100];
	 int  i=0;
	 scanf("%s",a);
	
	 while(a[i]!='\0')
	 {
	 	b[i]=a[i];
	 	i++;
	 }
	 b[i]='\0';
	 printf("%s",b);
	 return 0;
}