/*Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …
This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the
even terms form yet another geometric series. Write a program to find the Nth term in the series.
The value N in a positive integer that should be read from STDIN. The Nth term that is calculated by the
program should be written to STDOUT. Other than value of n th term,no other character / string or
message should be written to STDOUT. For example , if N=16, the 16th term in the series is 2187, so only
value 2187 should be printed to STDOUT.
You can assume that N will not exceed 30.
						  0  1  2  3  4
Explanation:  odd term-  2  2  2  2  2  == 1 2 4 8 16

						  0  1  2  3  4
			 even term-  3  3  3  3  3  ==  1 3 9 27 81*/

#include <stdio.h>
int main()

{
	int i, n, a = 1, b = 1;

	printf("enter nth term : ");

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{

		if (i % 2 != 0)
		{
			a = a * 2;
			printf("%d  ", a / 2);
		}
		else
		{
			b = b * 3;
			printf("%d  ", b / 3);
		}
	} // for loop close

	if (n % 2 != 0)
	{
		printf("\n%d term of series is %d\t", n, a / 2);
	}
	else
	{
		printf("\n%d term of series is %d\t", n, b / 3);
	}

	return 0;
}