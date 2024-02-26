//enter lenght,width of rectangle and find area of rectangle

#include<stdio.h>
#include<conio.h>
void main()
{
float l,w,area;
clrscr();
printf ("enter length and width \n");
scanf("%f%f",&l,&w);

area=l*w; //formula area of rectangle

printf("area of ractanglr is: %.2f\n",area); // %.2f means 2 digit after (.) like 12.23
getch();
}