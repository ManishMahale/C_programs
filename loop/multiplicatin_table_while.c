//multiplicatin table

#include<stdio.h>
int main()
{
	int n, tab, i=1;
	printf("enter number: ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		tab=n*i;
		printf("%d * %d = %d\n",n,i,tab);
		i++;
	}

	return 0;
}