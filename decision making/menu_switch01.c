/*write menu drivenprogram to take a input from user and solve following operations
1. find area of circle
2. find area of rectangle
3. find area of tringle
4. find area of circumference
5. find area of equilateral tringle*/

#include <stdio.h>
#include <math.h>
int main()
{
	float z, x, y;
	int choice;
	printf("\narea of circle press-1\narea of rectangle press-2\narea of tringle press-3\narea of circumference of circle press -4\narea of equilateral tringle press-5\n");
	printf("\nenter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("enter redious to find are of circle: ");
		scanf("%f", &x);
		z = 3.14f * pow(x, 2); // x=redious
		printf("area of circle: %.2f", z);
		break;

	case 2:
		printf("enter length and width to find are of rectangle: ");
		scanf("%f%f", &y, &x); // y=lenght	x=width
			z = x * y;
		printf("area of rectangle: %.2f", z);
		break;

	case 3:
		printf("enter base and height of tringle: ");
		scanf("%f%f", &x, &y);
		z = x * y / 2;
		printf("area of tringle: %.2f",z);
		break;

	case 4:
		printf("enter radious to find circumference: ");
		scanf("%f", &x);
		z = 2 * 3.14f * x;
		printf("area of circumference: %.2f", z);
		break;

	case 5:
		printf("enter side to find are of equilateral tringle: ");
		scanf("%f", &x);
		z = sqrt(3) * pow(x, 2) * 1 / 4;
		printf("are of equilateral tringle: %.2f", z);
		break;

	default:
		printf("invalid input");
		break;
	}
	return 0;
}