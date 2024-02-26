//enter temperature in celsius and convert into fahrenheit
//formiula for f->c   f=(9*c/5)+32 = 1.8*c+32
// c->f   c=(f-32)*5/9 =(f-32)*0.55

#include<stdio.h>
#include<conio.h>

void main()
{
int c;
float f;
clrscr();
printf("enter temp in celsius: \n");
scanf("%d",&c);

f= 9 * c/5 + 32;   //c->f

printf("f: %f",f);
getch();
}