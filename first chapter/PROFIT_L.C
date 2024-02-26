/*input from user cost price(cp) and selling price(sp)
then check profit or loss*/

#include<stdio.h>
#include<conio.h>

int main()
{
int cp, sp, p,l;  //profit=p, loss=l
clrscr();

printf ("enter cp=\t");
scanf ("%d",&cp);
printf ("enter sp=\t");
scanf ("%d",&sp);

p=sp-cp;
l= cp-sp;

p==l ? printf ("\n no profit no loss"):
p<l ? printf("\n loss of rs %d",l):
printf("\n profit of rs %d",p);

getch();
}