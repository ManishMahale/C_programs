/*write a menu driven program to take a input from user and solve following operations
1. reverse  number
2. palimdrome number
3. armstrong number
4. square roon of number
5. power of number      */

#include <stdio.h>
#include <math.h>
int main()
{
	int n, choice, rev = 0, rem, temp, sum = 0, count = 0;
	float s;
	int p, index;
	printf("\nenter number: \n");
	scanf("%d", &n);

	printf("\nreverse number press= 1\npalimdrome press= 2\narmstrong press= 3\nsquare root press= 4\npower press= 5\n");
	printf("\nenter your choice: \n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1: //reverse
		while (n != 0)
		{
			rem = n % 10;
			rev = rev * 10 + rem;
			n = n / 10;
		}
		printf("reverse number is: %d", rev);
		break;

	case 2: //palimdrome
		temp = n;
		while (n != 0)
		{
			rem = n % 10;
			rev = rev * 10 + rem;
			n = n / 10;
		}
		if (temp == rev)
		{
			printf("palimdrome number");
		}
		else
		{
			printf("number is not palimdrome");
		}
		break;

	case 3: //armstrong
		temp = n;
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
		n = temp;
		while (n != 0)
		{
			rem = n % 10;
			int p = pow(rem, count);
			sum = sum + p;
			n = n / 10;
		}
		if (temp == sum)
		{
			printf("armstrong number");
		}
		else
		{
			printf("number is not armstrong");
		}
		break;

	case 4: //square roon
		s = sqrt(n);
		printf("square is %.2f", s);
		break;

	case 5: //power
		printf("enter index: ");
		scanf("%d", &index);
		p = pow(n, index);
		printf("power is %d", p);
		break;

	default:
		printf("invalid input");
		break;
	}
	return 0;
}