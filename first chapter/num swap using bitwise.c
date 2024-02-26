//C program to swap two munrs using bitwise operator

#include<stdio.h>
int main()
{
	int a, b;
	printf("enter two numbers\n\n");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping\n\n");
	printf("\nA=%d\tB=%d\n",a,b);
	
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("\nafter swapping\n\n");
	printf("\nA=%d\tB=%d",a,b);
	return 0;
}
