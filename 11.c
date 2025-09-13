#include<stdio.h>
int main()
{
	int day;
printf("enter the number");
scanf("%d",&day);
if(day==0)
printf("sunday\n"); 
else if(day==1)
printf("monday\n");
else if(day==2)
printf("tueday\n");
else if(day==3)
printf("wednsday\n");
else if(day==4)
printf("thursday\n");
else if(day==5)
printf("friday\n");
else if(day==6)
printf("saturday\n");
else
printf("error");
return 0;
}

