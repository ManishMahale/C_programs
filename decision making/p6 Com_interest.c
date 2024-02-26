/*  c program to calculate compound interest by inputing principle amount, time, interest rate (P,T,R) */

#include<stdio.h>
#include<math.h> // to applay power ex. a^2     pow(a,2)

int main() {
	float ci, p, r, t;
	
	printf("enter principle amount: ");
	scanf("%f",&p);
	
	printf("enter year: ");
	scanf("%f",&t);
	
	printf("enter rate: ");
	scanf("%f",&r);
	
	ci = p*(pow((1+r/100),t)); //formula  ,, to use pow function  import math.h  file
		
	printf("compound interest is: %f",ci);
	return 0;	
}

/*  input:		r 1200
				t 2
				r 5.4
			
	output:		1333.09		*/			
