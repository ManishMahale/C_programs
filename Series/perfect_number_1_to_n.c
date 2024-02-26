// Write a C program to print all Perfect numbers between 1 to n.
/* perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
For example, 6 is a positive number that is completely divisible by 1, 2, and 3. now,  1 + 2 + 3 = 6
so, 6 is perfect number */
#include <stdio.h>
int main()
{
	int n, i, j, sum;
	printf("enter number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}