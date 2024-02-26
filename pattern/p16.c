
/*
					a
				  a b
				a b c
			  a b c d
			a b c d e


*/
#include <stdio.h>
int main()
{
	int i, j, ch;

	for (i = 1; i <= 5; i++)
	{
		ch = 'a';
		for (j = 1; j <= 5; j++)
		{
			if (j >= 6 - i)
			{
				printf("%c", ch);
				ch++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
