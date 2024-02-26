//print all natural numbers (from 1 to n). - using while loop

#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d  ",i);
		i++;
	}
	
	return 0;
}
