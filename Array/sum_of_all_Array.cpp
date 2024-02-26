#include <stdio.h>
int main()
{
	int a[5], i, j, sum = 0;
	printf(" Enter the Array Element");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}
	printf("%d", sum);
}
