// print all number 1 to n

#include <stdio.h>

int main()
{
	int i, n;
	printf("enter number: ");
	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		printf("%d\t", i);
		i++;
	}
	return 0;
}
