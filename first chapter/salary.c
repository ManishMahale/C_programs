/*
Write a C program to input basic salary of an employee and calculate gross salary according to
given conditions:
Basic Salary <= 10000: HRA 20%, DA - 80% =
Basic Salary is between 10001 to 20000: HRA 25%, DA 90%
Basic Salary >= 20001: HRA 30%, DA= 95%
*/

#include <stdio.h>
int main()
{
	int basic;
	float salary;
	printf("enter basic salary\n");
	scanf("%d", &basic);

	if (basic <= 10000)
	{
		salary = basic * 0.20f * 0.80f;
		printf("salary is %.2f", salary);
	}
	else if (basic > 10000 && basic <= 20000)
	{
		salary = basic * 0.25f * 0.90f;
		printf("salary is %.2f", salary);
	}
	else if (basic > 20000)
	{
		salary = basic * 0.030f * 0.95f;
		printf("salaryis %.2f", salary);
	}

	return 0;
}