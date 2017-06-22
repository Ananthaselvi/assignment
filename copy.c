#include <stdio.h>

int main(void) {
    int i;
    char a[100],b[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
    	b[i]=a[i];
    }
    printf("%s",b);
	return 0;
}
