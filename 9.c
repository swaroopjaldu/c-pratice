#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
		printf("alpabets");
	else
		printf("not alphabets");
	return 0;
}
