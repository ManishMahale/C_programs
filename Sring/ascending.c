/*WAP to input string and arrange in ascending order?
Input: adcba
Output: aabcd	*/
#include <stdio.h>
#include <string.h>
int main()
{
	char a[90];
	int l, i, j, temp;
	printf("enter the string is :\n");
	scanf("%s", &a);
	l = strlen(a);
	for (i = 0; i < l; i++)
	{
		for (j = i + 1; j < l; j++)
		{
			if (a[i] > a[j])
			{

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n%s", a);
}
