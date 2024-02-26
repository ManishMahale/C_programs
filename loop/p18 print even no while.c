//print all odd number 1 to n

#include<stdio.h>
int main()
{
	int i=1, n;
	
	printf("enter number: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}

		i++;
	}
	return 0;
}

