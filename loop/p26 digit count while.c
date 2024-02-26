//count digit 

#include<stdio.h>
int main()
{
	int count=0, n;
	printf("enter number: ");
	scanf("%d",&n);
	
	while(n>=1) //number should not be zero
	{
		n=n/10;
		
		count++;
	}
	printf("number of digits are: %d",count);
	
	return 0;
}
