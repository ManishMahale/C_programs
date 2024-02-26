// find frequency of ech digit in integer
#include <stdio.h>
int main()
{
	int rem, n, n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
	printf("enter a number: \n");
	scanf("%d", &n);
	while (n != 0)
	{
		rem = n % 10;
		switch (rem)
		{
		case 0:
			n0++;
			break;

		case 1:
			n1++;
			break;

		case 2:
			n2++;
			break;

		case 3:
			n3++;
			break;

		case 4:
			n4++;
			break;

		case 5:
			n5++;
			break;

		case 6:
			n6++;
			break;

		case 7:
			n7++;
			break;

		case 8:
			n8++;
			break;

		case 9:
			n9++;
			break;
		}
		n = n / 10;
	}
	if (n0 > 0)
	{
		printf("0 is %d times\n", n0);
	}
	else if (n1 > 0)
	{
		printf("1 is %d times\n", n1);
	}
	else if (n2 > 0)
	{
		printf("2 i %d times\n", n2);
	}

	else if (n3 > 0)
	{
		printf("3 is %d times\n", n3);
	}

	else if (n4 > 0)
	{
		printf("4 is %d times\n", n4);
	}

	else if (n5 > 0)
	{
		printf("5 is %d times\n", n5);
	}

	else if (n6 > 0)
	{
		printf("6 is %d times\n", n6);
	}
	else if (n7 > 0)
	{
		printf("7 is %d times\n", n7);
	}

	else if (n8 > 0)
	{
		printf("8 is %d times\n", n8);
	}

	else (n9 > 0)
	{
		printf("9 is %d times\n", n9);
	}

	return 0;
}
