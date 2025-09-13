#include<stdio.h>
int main()
{
	char ch;
	int lower_case,upper_case;
	printf("enter the character:");
	scanf("%c",&ch);
	lower_case=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	upper_case=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(lower_case || upper_case)
		printf("vowels");
	else
		printf("constant");
	return 0;
}
