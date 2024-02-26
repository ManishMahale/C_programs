#include <stdio.h>
int main()
{
	int a[10], i, max, count = 0, search;
	printf("\n Enter Elements in array\n");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter the value for search \n");
	scanf("%d", &search);
	for (i = 0; i <= 9; i++)
	{
		if (a[i] == search)
		{
			count = 1;
		}
	}
	if (count)
	{
		printf(" Element is Searched %d", search);
	}
	else
	{
		printf(" Element is not Searched ");
	}
}
