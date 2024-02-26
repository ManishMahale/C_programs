//enter length and breath of rectangle and finf its perimeter
// formula p=2(l+w)

#include<stdio.h>
#include<conio.h>
void main()
{
int l,w,p;
clrscr();
printf("enter length of rectangle; \n");
scanf("%d",&l);
printf("enter breath of rectangle; \n");
scanf("%d",&w);
p=2*(l+w);
printf("perimeter of rectangle is: %d\n",p);
getch();
}