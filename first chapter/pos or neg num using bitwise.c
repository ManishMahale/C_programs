//C program to check positive or negative using bitwise oprtator.

#include<stdio.h>
int main()
{
	int num;
	printf("enter any number\n");
	scanf("%d",&num);
	(1 & (num>0)) ? printf("num is posotive %d",num) : printf("num is negative %d",num);
 } 
