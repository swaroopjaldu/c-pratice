#include<stdio.h>
int main()
{
	int digit,num,reverse=0;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
		printf("%d",reverse);
	return 0;
}
