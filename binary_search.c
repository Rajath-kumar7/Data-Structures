#include <stdio.h>
int binarySearch(int array[],int x,int low,int high) 
{
	while(low<=high) 
	{
		int mid=low+(high-low)/2;
		if(array[mid]==x)
		return mid;
		if(array[mid]<x)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}
int main(void) 
{
	int array[]={3, 4, 5, 6, 7, 8, 9};
	int n=sizeof(array)/sizeof(array[0]);
	int x=4;
	int result=binarySearch(array,x,0,n-1);
	if(result==-1)
    printf("Not found");
	else
    printf("Element is found at index %d",result);
	return 0;
}
