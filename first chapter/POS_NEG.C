//find number is positive or ndgative

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();

printf("enter any positiv or negative number: ");
scanf("%d",&n);

n==0 ? printf("number %d is nutral",n)
:n<0 ? printf("number %d is negative",n)
:printf("number %d is positive",n);

getch();
}