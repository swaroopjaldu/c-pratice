#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number a,b,c=");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
		printf("%d is max",a);
	else if((b>a)&&(b>c))
		printf("%d is max",b);
	else
		printf("%d is max",c);
	return 0;
}
		
