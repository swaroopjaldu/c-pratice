#include<stdio.h>
int main()
{
	int notes,n,choice;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("enter the choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 2000:notes=n/2000;
		 printf("%d-2000rs notes\n",notes);
		 n=n%2000;
	case 500:notes=n/500;
		 printf("%d-500rs notes\n",notes);
		 n=n%500;
	case 200:notes=n/200;
		 printf("%d-200rs notes\n",notes);
		 n=n%200;
	case 100:notes=n/100;
		 printf("%d-100rs notes\n",notes);
		 n=n%100;
	case 50:notes=n/50;
		printf("%d-50rs notes\n",notes);
		n=n%50;
	case 20:notes=n/20;
		printf("%d-20rs notes\n",notes);
		n=n%20;
	case 10:notes=n/10;
		printf("%d-10rs notes\n",notes);
		n=n%10;
	case 5:notes=n/5;
		printf("%d-5rs notes\n",notes);
		n=n%5;
	case 2:notes=n/2;
		printf("%d-2rs notes\n",notes);
		n=n%2;
	case 1:notes=n/1;
		printf("%d-1rs notes\n",notes);
		n=n%1;
		break;
	default :printf("invalid denomination");
	}
	return 0;
} 
