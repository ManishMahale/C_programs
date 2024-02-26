#include<stdio.h>
#include<conio.h>
main()
{
float s1,s2,s3,s4,s5,avg;
clrscr();
printf("\n Enter Marks of five sub");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
avg=(s1+s2+s3+s4+s5)/5;
printf("\n avg of five sub is %.2f",avg);
getch();
}