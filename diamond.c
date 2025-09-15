#include<stdio.h>
int main()
{
	int r,c,space,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(space=1;space<=n-r;space++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(r=1;r<=n;r++)
	{
		for(space=1;space<=r;space++)
		{
			printf(" ");
		}
		for(c=1;c<=n-r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
