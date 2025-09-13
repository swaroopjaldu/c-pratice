#include<stdio.h>
int main()
{
	int a,b;
	int choice;
	printf("enter the values:");
	scanf("%d %d",&a,&b);
	choice=(b>a);
	switch(choice)
	{
	case 0:printf("maximum number is %d",a);
        break;
	case 1:printf("maximum number is %d",b);
	break;
	} 
	return 0;
}
