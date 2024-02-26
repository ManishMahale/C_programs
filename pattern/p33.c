/*			i*j=6*6
A     
AB
ABC
ABCD
ABCDE
ABCDEF		*/
#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 6; i++)
	{	char ch='A';
		for (j = 1; j <= 6; j++)
		{
			if (j <= i)
			{
				printf("%c",ch);
			}
			else
			{
				printf(" ");
			}
			ch++;
		}
		printf("\n");
	}
	return 0;
}