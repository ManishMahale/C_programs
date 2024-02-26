/* Write a C program to input principle, time and rate (P, T, R) 
from user and find Simple Interest.   formula= (p * T * R)/100     */

#include<stdio.h>
int main() {
	float p, r, si, t;
	printf("enter principal amount: ");
	scanf("%f",&p);
	printf("enter year: ");
	scanf("%f",&t);
	printf("enter interest rate: ");
	scanf("%f",&r);
	
	si=(p*r*t)/100;
	printf("simple interest is %f",si);
return 0;	
}

