/*check whether traingle is equllateral,isosceles or scelene */

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three values\t");
scanf("%d%d%d",&a,&b,&c);
a==b && b==c && c==a ? printf("\n tringle is equllateral"):
a==b ||b==c || c==a ? printf("\n tringle is isosceles"):
printf("\n tringle is scelene");
getch();
}