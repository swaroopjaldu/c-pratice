#include<stdio.h>
int main()
{
	int a=50,b=100,c=80,max;
	printf("%d %d %d\n",a,b,c);
	max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("%d",max);
}
