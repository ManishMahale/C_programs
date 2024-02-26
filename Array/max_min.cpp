// input five values in array and find max and min value from it without using sorting
#include <stdio.h>
int main()
{
	int min, max, a[5], i;
	printf("enter 5 elements of an array: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	//let's assume
	min = a[0];
	max = a[0];
	//now
	for (i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("max value is: %d\n", max);
	printf("min value is: %d", min);
}
/*i/p:	
5
6
4
8
1

o/p:
max value is: 8
min value is: 1*/