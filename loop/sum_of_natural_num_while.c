// sum of all natural numbers

#include <stdio.h>
int main()
{
	int i = 1, n, sum = 0;
	printf("enter number: ");
	scanf("%d", &n);
	while (i <= n)
	{
		sum = sum + i;
		//	printf("%d  ",sum);
		i++;
	}
	printf("%d ", sum);
	return 0;
}
