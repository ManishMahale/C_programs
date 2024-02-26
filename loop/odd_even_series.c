#include<stdio.h>
int main()
{
	int j, i, n;
	printf("enter number: ");
	scanf("%d",&n);
	i=1;
	printf("even numbers: ");
	while(i<=n)
	{
		if(i % 2 ==0)
		{
			printf("%d ",i);
		}
		i++;
	}	
	printf("\n");
    j=1;
	printf("odd numbers: ");
	while(j<=n)
	{	
		if(j % 2!=0)
		{
			printf("%d ",j);
		}	
		j++;
	}
}
/* O/P:
enter number: 10
even numbers: 2 4 6 8 10 
odd numbers: 1 3 5 7 9 			*/