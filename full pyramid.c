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
}
