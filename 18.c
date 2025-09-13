#include<stdio.h>
int main()
{
	int i=2,num;
	printf("enter the number:");
	scanf("%d",&num);
	while(i<num)
	{
	if(num%i==0)
	{
	printf("not a prime number\n");
	return 0;
	}
		i++;
	}
	printf("prime number");
	return 0;
}
