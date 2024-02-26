// all natural numbers in reverse (from n to 1). - using while loop

#include <stdio.h>

int main()
{
	int i;
	printf("enter number: ");
	scanf("%d", &i);
	while (i >= 1)
	{
		printf("%d  ", i);
		i--;
	}
}
