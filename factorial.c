#include <stdio.h>
int main()
{
	int i,n,fact=1;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of a given no.is=%d",fact);
	return 0;
}
