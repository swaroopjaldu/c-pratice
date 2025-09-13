#include<stdio.h>
int main()
{
	long long num1,num2,product;
	printf("enter the num1\n");
	scanf("%lld",&num1);
	printf("enter the num2\n");
	scanf("%lld",&num2);
	product=num1*num2;
	printf("%lld*%lld=%lld\n",num1,num2,product);
	return 0;
}
