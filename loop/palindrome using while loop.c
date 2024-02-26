// check number is pelimbrome or not by using while loop
// pelimdrome mense number = reverse   eg. reserse of 121 is 121  
#include<stdio.h>

int main()
{
	int n, temp, rem, rev=0;
	
	printf("enter number: ");
	scanf("%d",&n);
	temp=n;

	while(n>=1)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	n=temp;
	
	 if(temp==rev)
	{
		printf("\nnumber is palimdrome: %d",rev);
	}
	else
	{
		printf("\nnumber is not palimdrome");
	} 

	return 0;
}
