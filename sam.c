#include<stdio.h>
int main()
{
	int i,a,b,result=0;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		result=result+a;
	}
	printf("%d",result);
	return 0;
}
