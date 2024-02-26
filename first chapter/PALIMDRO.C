// enter three digit number and find number is palimdrome or not
//example  121=121, mense number is equal with reverse

#include<conio.h>
#include<stdio.h>
void main()
{
int rev=0,no,rem,temp;
clrscr();
printf("enter three digit num");
scanf("%d",&no);

temp=no;

rem=no%10;
rev=rev*10+rem;
no=no/10;

rem=no%10;
rev=rev*10+rem;
no=no/10;

rem=no%10;
rev=rev*10+rem;
no=no/10;

printf("rev is: %d\n",rev);
temp==rev ? printf("Palimdrome"):printf("Not Palimdrome");
getch();
}
