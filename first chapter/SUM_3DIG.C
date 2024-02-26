//enter three digit number and calculate its sum
//example 123= 1+2+3= 6

#include<stdio.h>
#include<conio.h>

void main()
{
int num,sum,a,b,c;
clrscr();
printf ("enter three digits\n");
scanf("%d",&num);

a=num/100;
b=(num%100)/10;
c=num%10;
sum=a+b+c;

printf("sum %d",sum);
getch();
}