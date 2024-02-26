/*Find the 15th term of the series.
0,0,7,6,14,12,21,18, 28
Explanation : odd term is increment of 7 {0, 7, 14, 21, 28, 35 – – – – – – }
             even term is increment of 6 {0, 6, 12, 18, 24, 30 – – – – – – }		*/
#include <stdio.h>
int main()
{
	int i, n, a=0, b=0;
	printf("enter nth term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i % 2!=0) //odd conditon
		{
			a=a+7;
			printf("%d  ",a-7);
		}
		else   //even conditon
		{
			b=b+6;
			printf("%d  ",b-6);
		}
	}
	printf("\n");
	if(n%2!=0)
	{
		printf("%d ",a-7);
	}
	else
	{
		printf("%d ",b-6);
	}

	return 0;
}