/*
*********
 *******
  *****
   ***
    *           */
//logic -1
// #include <stdio.h>
// int main()
// {
// 	int i, j;
// 	for (i = 5; i >= 1; i--)
// 	{
// 		for (j = 1; j <= 9; j++)
// 		{
// 			if (j <= 4 + i && j >= 6 - i)
// 			{
// 				printf("*");
// 			}
// 			else
// 			{
// 				printf(" ");
// 			}
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
//logic-2
#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j>=i  && j <= 10-i)
			{
				printf("*");
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