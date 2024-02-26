#include <stdio.h>
int main()
{
	int a[5], i, max;
	printf("\n Enter Elements in array\n");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 0; i <= 4; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("The max value is %d", max);
	return 0;
}
