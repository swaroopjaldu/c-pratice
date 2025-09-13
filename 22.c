#include<stdio.h>
int main()
{
	int n,m,largest;
	printf("enter the number arrays:");
	scanf("%d",&n);
	int  arr[n];
	printf("%d elements is:\n",n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&arr[m]);
	}
	largest=arr[0];
	for(m=1;m<n;m++)
	{
		if(arr[m]>largest)
		{
			largest=arr[m];
		}
	}
	printf("largest array is:%d\n",largest);
	return 0;
}
