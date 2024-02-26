/*  input 10 values in array and input one extra value and search in array 
if present then show message value not otherwise show message value not found     */
#include<stdio.h>
int main()
{
	int i, a[10], s, k=0;
	printf("enter array values: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search value: ");
	scanf("%d",&s);
	
	for(i=0;i<10;i++)
	{
		if(s==a[i])
		{
			k=1;
			break;
		}
	}
	if(k==1)
	{
		printf("value found");
	}
	else
	{
		printf("value not found");
	}
	return 0;
	
}
