// print Fibonacci series using a for loop
// fibonacci series meane = 0+1=1 1+1=2 1+2=3 2+3=5 3+5=8 5+8=13 ......
//  series 0 1 1 2 3 5 8 13
#include <stdio.h>
int main()
{
	int f0 = 0, f1 = 1, i, fib, n;
	printf("enter range for serise: ");
	scanf("%d", &n);
	printf("%d %d", f0, f1);

	for (i = 3; i <= n; i++)
	{
		fib = f0 + f1;
		f0 = f1;
		f1 = fib;
		printf(" %d", fib);
	}
	return 0;
}