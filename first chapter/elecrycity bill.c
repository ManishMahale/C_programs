/* c program to input electricity unit charges
first 50 units =rs 0.50/unit
next 100 units= rs 0.75/unit
next 100
*/
#include<stdio.h>

int main()
{ 
	int unit;
	float  amt;//  ,total amt, sur charge;
	
	printf("enter per unit charge");
	scanf("%f",&unit);
	
	unit<=50;
	amt=unit*0.50;
	
	unit<=100;
	amt=50*0.50+(unit-50)*0.75;
	
	printf("bill: %f",amt);
	return 0;
	
	
}
