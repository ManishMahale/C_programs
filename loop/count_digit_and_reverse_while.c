// input number count digit and reverse the number

#include<stdio.h>
int main()
{
	int rem, rev=0, count=0, n, temp;
	
	printf("enter number: ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>=1)  // or while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\nnumber of digits are: %d\n",count);
	
	n=temp;
	
	while(n>=1) // or while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	printf("\nreverse number of %d : %d \n",temp,rev);
	return 0;
}
