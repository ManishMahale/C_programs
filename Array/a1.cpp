//Enter array and display it
#include<stdio.h>
int main()
{
	int a[5], i;
	printf("enter array values: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Show Array:\n");
	
	for(i=0;i<5;i++)
	{
	printf("%d\n",a[i]);
	}
}
/*
I/P:
enter array values: 
1
2
3
4
5

O/P:
1
2
3
4
5
*/