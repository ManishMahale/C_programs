/*  print following type of pattern.
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *		*/
	
#include<stdio.h>
int main()
{
	int i,j;
	printf("\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}	
