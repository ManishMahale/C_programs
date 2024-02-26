//tables of any one num using for loop	
#include<stdio.h>
int main()
{
	int i, j,n;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		printf("%d X %d = %d\n",n,i,i*n);
	}
	return 0;
}
