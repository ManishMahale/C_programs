/*  Write a C program to input week number(1-7) and print day of week name
using switch case. */

#include<stdio.h>

int main() 
{
	int no;
	printf("Enter Any Number Between 1 to 7:  ");
	scanf("%d",&no);
	
	
	switch(no) 
	{
		case 1:
			printf("monday");
			break;
		
		case 2:
			printf("tuesday");
			break;
			
		case 3:
			printf("wednesday");
			break;
			
		case 4:
			printf("thursday");
			break;
		
		case 5:
			printf("friday");
			break;
			
		case 6:
			printf("saturday");
			break;
		
		case 7:
			printf("sunday");
			break;
			
			
		default:
			printf("wrong choice");
			
	}
	return 0;
		
}
