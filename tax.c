#include<stdio.h>
int main()
{
	int sal;
	float tax;
	printf("enter the salary");
	scanf("%d",& sal);
	if(sal<=10000)
	{
		printf("no tax");
	}
	else if(sal>10000 && sal<20000){
		tax=(0.10*sal);
		printf("tax%f",tax);
	}
	else if(sal>20000 && sal<30000){
		tax=(0.20*sal);
		printf("tax%f",tax);
	}
	else if(sal>30000 && sal<40000){
		tax=(0.30*sal);
		printf("tax%f",tax);
	}
	else {
		tax=(0.35*sal);
		printf("tax%f",tax);
	
	}	return 0;
	}
