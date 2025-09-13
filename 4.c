#include<stdio.h>
int main()
{
	int i;
	printf("enter the year:");
	scanf("%d",&i);
	if(i%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	return 0;
}
