//enter 2 angle of tringle and find third angle of the tringle
// formula a+b+c=180 degree

#include<stdio.h>
#include<conio.h>
void main()
{
int ang1,ang2,ang3;
clrscr();
printf("enter two angle of the tringle: \n");
scanf("%d%d",&ang1,&ang2);
ang3= 180 - ang1 - ang2;
printf("third side is ang3: %d",ang3);
getch();
}