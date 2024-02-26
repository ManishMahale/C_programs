//print uppercase and lower case a to z 

#include <stdio.h>
int main()
{
	char sa = 'a', lc = 'A';

	while (sa <= 'z')
	{
		printf("%c  ", sa);
		sa++;
	}
	printf("\n");

	while (lc <= 'Z')
	{
		printf("%c  ", lc);
		lc++;
	}
    return 0;
}