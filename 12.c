#include<stdio.h>
int main()
{
	char i;
	printf("enter the character:");
	scanf("%c",&i);
	if(i>='A' && i<='Z')
	printf("upper charcter");
	else
	printf("lower character");
	return 0;
}


