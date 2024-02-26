// fond factorial of number

#include<stdio.h>
int main()
{
	long int n, m=1, i;
	printf("enter number: ");
	scanf("%ld",&n);
	
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("factorial of %ld is %ld",n,m);
	return 0;
}
