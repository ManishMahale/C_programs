//input amount and findhow many notes rs 100,50,10
#include<stdio.h>
int main()
{
int amo, hund, fifty, ten; //note of rupee 100,50,10

printf ("enter any amount\t");
scanf("%d",&amo);

hund=amo/100;  //give input=1570, for 100rs note=  1570/100=15.6=15
amo=amo-100*hund; //input amout 1570 =1570 - (15*100)=70
fifty=amo/50;   // for 500rs notes = 70/50=1.4=1
amo=amo-50*fifty; // 70-(50*50)=20
ten=amo/10;   // 20/10=2
			//output = 15 , 1, 2

printf("\n100 rs notes are:%d",hund);
printf("\n50 rs notes are:%d",fifty);
printf("\n10 rs notes are:%d",ten);
return 0;
}