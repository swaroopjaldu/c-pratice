#include<stdio.h>
int main()
{
	int i,num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		printf("%d*%d",i,num);
	i=num*i;

	return 0;
}
