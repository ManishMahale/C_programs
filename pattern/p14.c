/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
	*/

// logic-1		//scroll down for logic-2
#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", i);
			if (j < i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for (i = 4; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", i);
			if (j < i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}

// logic-2
/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			{
				printf("%d",i);
				if(j<i)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}

	for(i=4;i>=1;i--)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			{
				printf("%d",i);
				if(j<i)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}  */