#include<stdio.h>
int main()
{
	int n,i,first=0,second=1,next;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	printf("%d",first);
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
}
