/*
a
Ab
aBc
AbCd
aBcDe
*/
#include <stdio.h>
int main()
{
	int i, j;
	char ch;
	for (i = 1; i <= 5; i++)
	{
		ch = 'a';
		for (j = 1; i >= j; j++)
		{

			if ((i + j) % 2 == 0)
			{
				printf("%c", ch);
				ch++;
			}
			else
			{
				printf("%c", ch - 32);
				ch++;
			}
		}
		printf("\n");
	}
	return 0;
}