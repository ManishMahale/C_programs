//enter base and height then find the area of tringle
//formula area =(h*b)/2

#include<stdio.h>
#include<conio.h>
void main()
{
int base,hgt;
float area;
clrscr();
printf("enter base of the tringle: ");
scanf("%d",&base);
printf("enter height of the tringle: ");
scanf("%d",&hgt);

area=(base*hgt)/2;

printf("area of tringle is: %.2f\n",area);
getch();
}