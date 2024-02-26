/*	5	10	15	20	25

	4	8	12	16	20

	3	6	9	12	15

	2	4	6	8	10

	1	2	3	4	5    	*/

#include <stdio.h>
int main()
{
	int i, j;
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}