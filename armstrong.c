#include<stdio.h>
int main()
{
	int n,num,cube,d,sum;
	for(num=100;num<=999;num++)
	{ 
		n=num;
		sum=0;
		while(n>0)
		{
			d=n%10;
			cube=d*d*d;
			sum=sum+cube;
			n=n/10;
		}
	if(sum==num)
		{
		printf("%dis an armstrong number\n",num);
		}
	}
	return 0;
}
