/* input 5 values in array and input extra value and search value in array
and delete from array and shift index at lower hand side		*/
#include <stdio.h>
int main()
{
	int s, i, a[5], k;
	printf("enter array: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter search value: ");
	scanf("%d", &s);
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if (s == a[i])
		{
			k = i;
			printf("value found: %d", s);
			break;
			
		}
	}
	printf("\n");
	if (i == k)
	{

		for (i = k; i < 5; i++)
		{
			a[i] = a[i + 1];
		}
		for (i = 0; i < 4; i++)
		{
			printf("\ni= %d\tarr= %d\n", i, a[i]);
		}
	}
	else
	{
		printf("value not found");
	}
	return 0;
}
/*i/p:
enter array: 2
5
63
4
5
enter search value: 63

o/p:
i= 0    arr= 2

i= 1    arr= 5

i= 2    arr= 4

i= 3    arr= 5*/

/* logic-2

#include <stdio.h>
int main()
{
	int a[5], skey, flag = 0, i;
	printf("\nEnter five values in array\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter search key for delete");
	scanf("%d", &skey);
	for (i = 0; i < 5; i++)
	{
		if (a[i] == skey)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		for (int j = i; j < 5; j++)
		{
			a[j] = a[j + 1];
		}
	}
	else
	{
		printf("Value not found ");
	}
	printf("Array After deletion \n");
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]---->%d\n", i, a[i]);
	}
	return 0;
}
*/