/* WAP to display the n terms of a harmonic series and their sum
1 + 1/2 + 1/3 + 1/4 + 1/5……1/n terms
Test Data:
Input Number of terms: 5
Expected Output:
1 + 1/2 + 1/3 + 1/4 + 1/5……
Sum of series up to 5 terms: 2.283334       */
#include <stdio.h>
int main()
{
	float i, sum = 0, no;
	printf("\nenter number\n");
	scanf("%f", &no);
	printf("\n");
	i = 1;
	while (i <= no)
	{
		sum = sum + (1 / i);
		printf("1/%.0f = %.2f\n", i, sum);
		i++;
	}
	printf("%\n");
	printf("Sum is %f\n", sum);
	return 0;
}
/*O/P:

enter number
5

1/1 = 1.00
1/2 = 1.50
1/3 = 1.83
1/4 = 2.08
1/5 = 2.28

Sum is 2.283334
*/