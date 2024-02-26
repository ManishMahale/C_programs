//reverse the three digit number

#include<conio.h>
#include<stdio.h>
void main()
{
int rev=0,no,rem,temp;
clrscr();
printf("enter three digit num");
scanf("%d",&no);

//temp=no; //for pelimdrome

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
//temp==rev ? printf("Palindrom"):printf("Not");   //for pelimdrome
getch();
}
