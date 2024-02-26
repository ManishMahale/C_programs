
/*Consider the below series :
0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8
This series is a mixture of 2 series all the odd terms in this series form even numbers in ascending order
and every even terms is derived from the previous term using the formula (x/2)
Write a program to find the nth term in this series.
The value n in a positive integer that should be read from STDIN the nth term that is calculated by the
program should be written to STDOUT. Other than the value of the nth term no other characters /strings
or message should be written to STDOUT.
For example if n=10,the 10 th term in the series is to be derived from the 9th term in the series. The 9th
term is 8 so the 10th term is (8/2)=4. Only the value 4 should be printed to STDOUT.
You can assume that the n will not exceed 20,000.

solution of series:
0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8
odd term  = multiple of 2
even term = (previous number)/2 
o  e  o   e   o   e   o   e    o   e    o    e     o    e    // o ==odd term ,e == even term
0, 0, 2, 2/2, 4, 4/2, 6, 6/2,  8, 8/2, 10, 10/2,  12, 12/2.....
0, 0, 2,   1,  4,  2, 6,   3,  8,   4, 10,    5,  12,    6..... */
#include<stdio.h>
int main()
{
	int i, n, o=0, e=0;

	printf("enter number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if( i % 2 != 0)
		{
			o = o + 2;
			printf("%d  ",o-2);
		}
		else
		{
			e = e + 2;
			printf("%d  ",(e-2)/2);
		} 
	}
	printf("\n");
	if(n % 2 != 0)
	{
		printf("%dth term is %d",n,o-2);
	}
	else
	{
		printf("%dth term is %d",n,(e-2)/2);
	}

 return 0;
}