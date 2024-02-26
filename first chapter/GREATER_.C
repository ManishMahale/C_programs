#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter Three Numbers:\t"); // \tab (space)
 scanf("%d%d%d",&a,&b,&c);
  clrscr();
  (a==b==c) ? printf("All numbers are equal"):
  (a>b&&a>c)?printf("A is Greater:%d",a):
  (b>a&&b>c)?printf("B is Greater:%d",b):
  printf("C is Greater:%d",c);

getch();
}
