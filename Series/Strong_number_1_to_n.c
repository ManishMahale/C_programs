/*Write a C program to print all Strong numbers between 1 to n.
➡️Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number, check if it is a Strong Number or not.
Examples:
Input  : n = 145
Output : Yes
Sum of digit factorials = 1! + 4! + 5!
						= 1 + 24 + 120
						= 145               */
#include <stdio.h>
int main()
{
	int i, j, n, rem, fac, sum, temp;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		temp = i;
		while (i != 0)
		{
			rem = i % 10;
			fac = 1;
			for (j = 1; j <= rem; j++)
			{	
				fac = fac * j;
			}
			sum = sum + fac;
			i = i / 10;
		}
		i = temp;
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}