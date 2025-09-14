#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number :");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n-r+1;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
