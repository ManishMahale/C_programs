/*WAP TO INPUT SALARY OF AN EMPLOYEE AND CALCULATE THE TOTAL SALARY
USING FOLLOWING TERMS DA=30%, HRA=30% */
#include<stdio.h>
#include<conio.h>

void main()
{
int da, hra, bs, total;
clrscr();
printf("enter salary of an employee\t");
scanf("%d",&bs);
printf("\nbasic salary is%d\n",bs);
da=bs*30/100;
hra=bs*30/100;
total=da+bs+hra;
printf("\ntotal salary is%d",total);
getch();
}