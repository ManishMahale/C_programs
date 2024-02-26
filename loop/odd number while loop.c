// print 1 to n odd numbers using while loop
#include<Stdio.h>
int main()
{
	int n, i=1;
	printf("enter number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d  ",i);
		}
		
	i++;
	}
	return 0;
}
