#include <stdio.h>

int swap(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	printf("X=%d\tY=%d\n", x, y);
	//return x, y;  ////no need to return ,, becauce o/p ih in this function
}
int main()
{
	int a, b;
	printf("Call By Value\n\n");
	printf("enter two number:\n");
	scanf("%d%d", &a, &b);

	swap(a, b); // call by value
	printf("\nA=%d\tB=%d\n", a, b);
	return 0;
}
