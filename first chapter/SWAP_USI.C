//swap number using third veriable.

#include<stdio.h>
#include<conio.h>

void main()
{
int a, b, temp;
clrscr();
printf ("enter any two numbers\t");
scanf("%d%d",&a, &b);
printf ("\n number before swaping");
printf("\n a=%d\t b=%d\n",a,b);

temp=a;
a=b;
b=temp;

printf ("\n number after swaping");
printf("\n a=%d\t b=%d\n",a,b);
getch();
}