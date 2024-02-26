//input number  and search specific digit from number by using while loop

#include<stdio.h>
int main()

{
	int n, flag=0, rem, s;  //s=search digit or number
	
	printf("enter a number: \n");
	scanf("%d",&n);
	
	printf("\nenter search number: \n");
	scanf("%d",&s);
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		
		if(s==rem)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("\nsearch digit is: %d",s);
	}
	else
	{
		printf("digit not found");
	}
	return 0;
 }
