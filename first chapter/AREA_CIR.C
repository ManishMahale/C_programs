//enter redius and find area of circle
//formula area= 3.14*r*r

#include<stdio.h>
#include<conio.h>
void main()
{
float r, area;
clrscr();
printf ("enter redius of circle; ");
scanf("%f",&r);

area= 3.14*r*r; //area of circle formula

printf("area of circle is: %f \n",area);
getch();
}