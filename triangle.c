#include<stdio.h>
int main()
{
	int n,rows,cols,spaces,r,s,c,a;
	printf("enter the number: ");
	scanf("%d %d",&n,&a);
	for(rows=1;rows<=n;rows++)
	{
		for(spaces=1;spaces<=n-rows;spaces++)
		{
			printf(" ");
		}
		for(cols=1;cols<=rows;cols++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(r=1;r<=n;r++)
	{
		for(s=1;s<=a-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(rows=1;rows<=n;rows++)
	{
		for(spaces=1;spaces<=n-rows;spaces++)
		{
			printf(" ");
		}
		for(cols=1;cols<=rows;cols++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(r=1;r<=n;r++)
	{
		for(s=1;s<=a-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
}
}
