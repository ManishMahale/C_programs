//swap number without using third veriable.

#include<stdio.h>
#include<conio.h>

void main()
{
int a, b;
clrscr();
printf ("enter two numbers\t");
scanf("%d%d",&a, &b);
printf ("\n number before swaping");
printf("\n a=%d\t b=%d\n",a,b);
	//input a=10, b=20
a=a+b;  //a= a + b= 10 + 20= 30
b=a-b;  //b= a - b= 30 - 20= 10   b=10
a=a-b;  //a= a - b= 30 - 10= 20   a=20

printf ("\n number after swaping");
printf("\n a=%d\t b=%d\n",a,b);
getch();
}