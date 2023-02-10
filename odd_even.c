#include <stdio.h>
int main()
{
	int n,arr[n],i,ec=0,oc=0;
	printf("\nEnter the no. of elements:");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEven elements in the arrray are:");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			ec=ec+1;
			printf("%d ",arr[i]);
		}
	}
	printf("\nTotal even count=%d",ec);
	printf("\nOdd elements in the array are:");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
			oc=oc+1;
			printf("%d ",arr[i]);
		}
	}
	printf("\nTotal odd count=%d",oc);
	return 0;
}
