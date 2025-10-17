#include<stdio.h>
int main()
{
	int arr[5]={1,2,2,3,4};
	int a=0,i;
	for(i=0;i<5;i++)
	{
		a+=arr[i];
	}
		printf("%d",a);
}
