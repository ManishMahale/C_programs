// sum of first and last digits

#include <stdio.h>
int main()
{
	int n, ld, fd, sum;

	printf("enter number: ");
	scanf("%d", &n); // input 123
	ld = n % 10;	 // 123 % 10 = 3

	while (n >= 10) // 123 >= 10  true	//12>= 10  true		// 1 >= 10 flase
	{
		n = n / 10;
		// 123 / 10 = 12.3 = 12
		// 12 / 10 = 1.2 = 1
		// first digit is 1
		// why n>=10 cond. ex 12 enter loop  n=n/10=1	print 1
	}

	fd = n;
	sum = ld + fd;
	printf("first digit: %d\n",fd);
	printf("last digit: %d\n",ld);
	printf("sum of first and last digit: %d", sum);

	return 0;
}
