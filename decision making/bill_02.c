/* nput elecricity unit charge and calculate total bill according to given condition
for first 50 units rs. 0.50/unit	
for next 100 units rs. 0.75/unit	
for next 100 units rs. 1.20/unit
for until above 250 rs. 1.50/unit an additional surcharge of 20% is added to yhe bill */

#include<stdio.h>

int main()  {

float bill, read, sur;

printf("total units consumed: ",read);

scanf("%f",&read);

if(read<=50 ) {
 bill=read*0.50; //50 * 0.50 = 25
}	

else if(read<=150){
	bill=25 + ((read-50)*0.75);   // 50 *0.50=25      150 - 50 = 100 * 0.75 = 75 
}

else if (read<=250){
	bill= 100 + ((read-150)* 1.20); // 100 * 0.75 = 75 + 25 = 100
}

else{
	bill= 220 + ((read-250)*1.50); // 100 * 1.20 =120 +100 =220
	
	sur=bill*20/100;
	bill= bill+sur;
	printf("bill with 20 per surge  %.2f",bill);
}

printf("total bill is   %.2f",bill);

return 0;

}