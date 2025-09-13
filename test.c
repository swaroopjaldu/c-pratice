#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	c=a>b;
	switch(c)
	{	
		case 0:printf("%d is maximum",a);
	break;
		case 1:printf("%d is maximum",b);
	break;
	}
	return 0;
}
