#include <stdio.h>
int main()
{
	int a[5], i, min;
	printf("\n Enter Elements in array\n");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Elements in array\n");
	min = a[0];
	for (i = 0; i <= 4; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("The max value is %d", min);
	return 0;
}
