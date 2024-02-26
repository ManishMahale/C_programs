/* input meter reading and per unt rate 
if bill amount is less then  or equal to 1000 and greater then 0 then give discound of 20%
if bill amount is greater then 1000 and less then 5000 then give discound of 10%
if bill amount is greater then 5000 and less then ot equal to 10000 then give discound of 5%
other wise no discount */  

#include<stdio.h>
int main() {

	int read, disc;
	float rate, bill;
	printf("enter merer reading\t");
	scanf("%d",&read);
	
	printf("enter per unit rate\t",rate);
	scanf("%f",&rate);
	bill= read*rate;
	printf("bill before discount  %.2f\n",bill);
	
	if(bill<=1000 && bill>=1) {
		disc=bill*20/100;
		bill=bill-disc;
		printf("bill with 20 percent discount  %.2f\n",bill);
	}
	
	else if(bill>1000 && bill<=5000) {
		disc=bill*10/100;
		bill=bill-disc;
		printf("bill with 10 percent discount  %.2f\n",bill);
	}
	
	else if(bill>5000 && bill<=10000)  {
		disc=bill*5/100;
		bill=bill-disc;
		printf("bill wit 5 percent discont  %.2f",bill);
	}
	
	else{
		printf("bill is %.2f",bill);
	}
	
	return 0;
}

