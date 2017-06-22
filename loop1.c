#include <stdio.h>
int main(void)
 {
	int n,i=1,s=0,n1;
	printf("Enter the number");
	scanf("%d",&n);
        for(i=0;i<4;i++)
        {
	    s=s+n;
	    n=(n*10)+9;
         }

	printf("result:%d",s);
	return 0;

}
</stdio.h>