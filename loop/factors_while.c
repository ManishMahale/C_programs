//find factors of number

#include<stdio.h>
int main()
{
	int n,i;
	
	printf("enret any number: ");
	scanf("%d",&n);
	i=1;

	printf("\nfactors of %d are: ",n);	
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d, ",i);
		}
		i++;
	}
	return 0;
}
