/*			i*j=5*6
A     
AB
ABC
ABCDE
ABCDEF		*/
#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{	char ch='A';
		for (j = 1; j <= 6; j++)
		{
			if (j <= i && i<=3 || i>3 && j<=i+1)
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