#include<stdio.h>
int main()
{
	int num,digit,final=0;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		final=(final*10)+digit;
		num=num/10;
	}
		printf("%d",final);
	return 0;
}

