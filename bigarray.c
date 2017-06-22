#include <stdio.h>
 int maxi(int a[],int n);
int main(void) {
	int a[50],b;
	int n,i;
   
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    b=maxi(a,n);
    printf("The biggest element %d",b);
    return 0;
}
int maxi(int a[],int n)
{
int b,i;
  b=a[0];
    for(i=1;i<n;i++)
    {
      if(a[i]>b)
      {
        b=a[i];
      }
    }
   return b;
}

