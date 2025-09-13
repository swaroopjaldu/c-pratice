#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("a is maximum");
	else
		printf("b is minimum");
	return 0;
}
