#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0)
		printf("positive");
	else if(n==0)
		printf("equal");
	else
		printf("negative");
	return 0;
}
