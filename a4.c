#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i,arr1[5];
	for(i=0;i<5;i++)
	{
		arr1[i]=arr[i];
		printf("%d",arr1[i]);
	}
	printf("\n");
	return 0;
}
