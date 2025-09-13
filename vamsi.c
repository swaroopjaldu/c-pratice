#include<stdio.h>
int main()
{
 char str[100];
 char result[100];
 int i,j=0;
 printf("enter the string");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
	 if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
	 {
		 result[j]=str[i];
		 j++;
	 }
 }
 result[j]='\0';
 printf("alphabets in the string is %s",result);
}
