/* C program to find total number of days in a month
using switch...case. */

#include<stdio.h>

int main()
{
	int no;
	
	printf("enter one number between 1 to 12 : ");
	scanf("%d",&no);
	printf("month: ");
	switch(no)
	{
		case 1:
			printf("january \tdays: 31");
			break;
			
		case 2:
			printf("fabruary \tdays: 28 or 29 ");
			break;
			
		case 3:
			printf("march \tdays: 31 ");
			break;
		
		case 4:
			printf("april \tdays: 30 ");
			break;
			
		case 5:
			printf("may \tdays: 31 ");
			break;
			
		case 6:
			printf("jun \tdays: 30");
			break;
			
		case 7:
			printf("july \tdays: 31");
			break;
		
		case 8:
			printf("august \tdays: 31");
			break;
			
		case 9:
			printf("september \tdays: 30");
			break;
		
		case 10:
			printf("october \tdays: 31");
			break;
				
		case 11:
			printf("novenber \tdays: 30");
			break;
			
		case 12:
			printf("december \tdays: 31");
			break;	
			
			
		default:
			printf("wrong choice");
	}
	return 0;
}

