#include<stdio.h>
int main()
{
	int r,c,n,space;
	printf("enter the number :");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(space=1;space<=n-r;space++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			if(c==1||c==r||r==n)
			printf("* ");
			else
                	printf("  ");
		}
		printf("\n");
	}
	return 0;
}

