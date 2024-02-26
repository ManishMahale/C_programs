#include <stdio.h>
#include <string.h>
void checkanagram(char c1, char c2)
{
	int l1 = strlen(c1);
	int l2 = strlen(c2);

	if (l1 != l2)
	{
		printf("\n Not anagram");
		return 0;
	}

	// now sort the both strings

	int i, j;
	char temp;
	for (i = 0; i < l1; i++)
	{
		for (j = i + 1; j < l1; j++)
		{
			if (c1[i] > c1[j])
			{
				temp = c1[i];
				c1[i] = c1[j];
				c1[j] = temp;
			}-
			if (c2[i] > c2[j])
			{
				temp = c2[i];
				c2[i] = c2[j];
				c2[j] = temp;
			}
		}
	}
	for (i = 0; i < l1; i++)
	{
		if (c1[i] != c2[i])
		{
			printf("\n strings not anagram");
			return 0;
		}
	}
	printf("\n strings are anaram");
}

int main()
{

	char c1[90];
	char c2[50];

	printf("Enter first string->");
	scanf("%s", &c1);

	printf("\n Enter second array->");
	scanf("%s", &c2);
	int r = checkanagram(c1, c2);
	printf("\n %d", r);
}
