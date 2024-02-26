//C program to check even or odd using bitwise operator

#include<stdio.h>
#include<conio.h>

void main()
{
int num;
clrscr();
printf("enter any num: \n");
scanf("%d",&num);

num&1==1 ?printf("%d is odd",num) : printf("%d is even",num);
getch();
}