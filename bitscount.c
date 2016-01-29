// counting bits
#include <stdio.h>
int main()
{
  int n,bit=0;
  printf("enter the binary no.");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/2;
		bit++;
	}
	printf("so total bits needed.. %d",bit);
return 0;
}
