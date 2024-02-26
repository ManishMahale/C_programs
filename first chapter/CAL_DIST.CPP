//enter distance in cm and calcula tetotal distance in km,m,cm

#include<stdio.h>
#include<conio.h>

void main()
{
long int cm,m;
int km;
clrscr();
printf("enter distance in cm: \n");
scanf("%ld",&cm);

km=cm/100000;
cm=cm-(km*100000);
m=cm/1000;
cm=cm-(m*1000);
printf(" distance\n");
printf(" km : %d\n ",km);
printf(" m  : %ld\n ",m);
printf(" cm : %ld\n ",cm);

getch();
}