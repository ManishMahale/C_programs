// enter rediu of circle and find diameter, circumference and area
//formulas d=2*r, c=2*3.31*r, area=3.14*r*r.

#include<stdio.h>
#include<conio.h>
void main()
{
float r, d,c,a;
clrscr();
printf("enter redius of the circle: \n");
scanf("%f",&r);
d=2*r;
c=2*3.14*r;
a=3.14*r*r;

printf("r= %.2f\nd= %.2f\nc= %.2f\narea= %.2f",r,d,c,a);
getch();
}