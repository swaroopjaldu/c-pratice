#include<stdio.h>
int main()
{
     char ch;
     scanf("%c",&ch);
     if(ch>=65 && ch<=90)
     {
	    printf("upper case alphabets");
     }
     if(ch>=97 && ch<=122)
     {
	     printf("lower case alphabets");
     }
	     if(ch>=48 && ch<=57)
	     {
		     printf("numbers");
	     }
	   else
	   {
		   printf("special characters");
	   }
	      	   return 0;

}
